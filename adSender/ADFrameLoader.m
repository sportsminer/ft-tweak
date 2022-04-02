//
//  ADFrameLoader.m
//  adSender
//
//  Created by BlueBryan on 2019/6/20.
//

#import <endian.h>
#import <CoreImage/CoreImage.h>
#import <AudioToolbox/AudioToolbox.h>
#import "ADFrameLoader.h"
#import "iOSREMadridMessenger.h"

#define adSampleImageDir @"/var/mobile/Media/Downloads/adsender/frames/"
//#define adSampleSaveDir @"/var/mobile/Media/Downloads/adsender-save/"
#define adSampleAudioDir @"/var/mobile/Media/Downloads/adsender-audio/"
#define MaxSendFrames 2637
#define clamp(a) (a>255?255:(a<0?0:a));

typedef struct{
    AURenderCallbackStruct *aucs;
    AudioUnit unit;
} SaveContext;

static AudioUnit inputAudioUnit;
static OSStatus myRenderCallback(void *inRefCon,
                                  AudioUnitRenderActionFlags *ioActionFlags,
                                  const AudioTimeStamp *inTimeStamp,
                                  UInt32 inBusNumber,
                                  UInt32 inNumberFrames,
                                  AudioBufferList *ioData) {
    
    uint32_t realBytes;
    ADFrameLoader *loader = [ADFrameLoader sharedInstance];
    OSStatus err = noErr;

    SaveContext* cxt = (SaveContext*)inRefCon;
    AURenderCallbackStruct* cbStruct = cxt->aucs;
    AudioUnit unit = cxt->unit;

    if (loader.isConnected) {
        AudioComponentDescription desc = {0};
        AudioComponent comp = AudioComponentInstanceGetComponent(unit);
        AudioComponentGetDescription(comp, &desc);
        
        AudioStreamBasicDescription requestedDesc = {0};
        UInt32 size = sizeof(requestedDesc);
        err = AudioUnitGetProperty(unit, kAudioUnitProperty_StreamFormat, kAudioUnitScope_Input, 0, &requestedDesc, &size);
        NSLog(@"tweak-from-Bryan:audiounit streamformat %u - %u - %u - %u - %u - %u - %u - %f",
              (unsigned int)requestedDesc.mBitsPerChannel, (unsigned int)requestedDesc.mBytesPerFrame, (unsigned int)requestedDesc.mBytesPerPacket, (unsigned int)requestedDesc.mChannelsPerFrame,(unsigned int)requestedDesc.mFormatFlags, (unsigned int)requestedDesc.mFormatID, (unsigned int)requestedDesc.mFramesPerPacket, requestedDesc.mSampleRate
              );
        AudioBufferList *bufferList;
//        bufferList->mNumberBuffers = 1;
//        bufferList->mBuffers[0].mData = nil;
        err = AudioUnitRender( unit, ioActionFlags, inTimeStamp, inBusNumber, inNumberFrames, bufferList);
        if (err != noErr) {
            NSLog(@"tweak-from-Bryan:AudioUnitRender error %d",(int)err);
        }else{
            ioData = bufferList;
//            NSLog(@"tweak-from-Bryan:after render iodata %u - %u - %u - %p",
//                    (unsigned int)ioData->mNumberBuffers,(unsigned int)ioData->mBuffers[0].mNumberChannels,
//                    (unsigned int)ioData->mBuffers[0].mDataByteSize,ioData->mBuffers[0].mData);
        }

        if (ioData != nil && desc.componentType == 'auou' && desc.componentSubType == 'vpio') {
            for (int i=0; i < ioData->mNumberBuffers; i++) {
                realBytes = ioData->mBuffers[i].mDataByteSize;
                void* mixBuf = [loader getRawPCMData:realBytes isInit:false];
//                NSLog(@"tweak-from-Bryan:change ioData %p",ioData);
                if (mixBuf != nil) {
                    memcpy(ioData->mBuffers[i].mData, mixBuf, realBytes);
                    free(mixBuf);
                }
            }
        }
    }
    err = (*(cbStruct->inputProc))(cbStruct->inputProcRefCon,ioActionFlags,inTimeStamp,inBusNumber,inNumberFrames,ioData);

    return err;
}

@interface ADFrameLoader ()
@property(nonatomic, retain) NSMutableArray *_adCMSendBufferList;
@property(nonatomic, retain) CIContext *renderContext;
@property(nonatomic, retain) NSData *pcmData;
@property(nonatomic, assign) AdSenderStats *adSenderStats;
@property(nonatomic, assign) unsigned long numVideoFrames;
@end

@implementation ADFrameLoader

@synthesize  _index = index;
@synthesize _offset = offset;
@synthesize pcmData = pcmData;
@synthesize _isConnected = isConnected;
@synthesize adSenderStats = adSenderStats;
@synthesize numVideoFrames = numVideoFrames;

+ (instancetype)sharedInstance {
    static ADFrameLoader *instance = nil;

    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
        instance._isConnected = false;
        instance._adCMSendBufferList = [NSMutableArray arrayWithCapacity:0];
        instance.pcmData = nil;
        instance._index = 0;
        instance._offset = 0;
        instance._noPrefetch = true;
        instance.numVideoFrames = 600;
        instance.renderContext = [CIContext contextWithOptions:nil];
        instance.adSenderStats = malloc(sizeof(AdSenderStats));
        memset(instance.adSenderStats, 0, sizeof(AdSenderStats));
        instance.adSenderStats->onceTimeEnd = instance.adSenderStats->onceTimeBegin = [[NSDate date] timeIntervalSince1970];
        [instance countVideoFrames];
//        NSLog(@"tweak-from-Bryan: initialized sender %@", instance);
    });

    return instance;
}

- (BOOL)isConnected{
    return isConnected;
}
- (void)connected{
    index = 0;
    offset=0;
    isConnected = true;
    adSenderStats->onceTimeBegin = [[NSDate date] timeIntervalSince1970];
    adSenderStats->totalCalls++;
    adSenderStats->todayCalls++;
}
- (void)disConnected{
    isConnected = false;
    adSenderStats->onceTimeEnd = [[NSDate date] timeIntervalSince1970];
    adSenderStats->totalCalled++;
    adSenderStats->todayCalled++;
    adSenderStats->totalPlayAds++;
    adSenderStats->oncePlaySeconds = adSenderStats->onceTimeEnd - adSenderStats->onceTimeBegin;
    adSenderStats->totalPlaySeconds += adSenderStats->oncePlaySeconds;
}
- (const char*)getStatsWithJsonstr{
    NSString *stats = [NSString stringWithFormat:@"%u,%u,%u,%u,%u,%u,%u,%u\n",
                       adSenderStats->onceTimeBegin,adSenderStats->oncePlaySeconds,
                       adSenderStats->todayCalled,adSenderStats->todayCalls,
                       adSenderStats->totalCalls,adSenderStats->totalCalled,
                       adSenderStats->totalPlayAds,adSenderStats->totalPlaySeconds];
    return [stats cStringUsingEncoding:kCFStringEncodingUTF8];
}
- (void)reset{
    [self countVideoFrames];
    isConnected = false;
    offset = 0;
    index = 0;
    pcmData = nil;
    if (!self._noPrefetch) {
        [self._adCMSendBufferList removeAllObjects];
    }
}
- (void)countVideoFrames{
    NSArray* flist = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:adSampleImageDir error:nil];
    numVideoFrames = [flist count];
    NSLog(@"tweak-from-Bryan: frames %lu", numVideoFrames);
}
- (CIImage*)getSendVideoBuffer{
    CIImage* output;
    if (self._noPrefetch || [self._adCMSendBufferList count] <= index ) {
        NSString *pname = [NSString stringWithFormat:@"frame%04ld.jpg",index+1];
        NSURL *datFilePath = [NSURL URLWithString:[NSString stringWithFormat:@"file://%@%@",adSampleImageDir,pname]];
        output = [[CIImage imageWithContentsOfURL:datFilePath] imageByApplyingOrientation:8];
        if (!self._noPrefetch) {
            [self._adCMSendBufferList addObject:output];
        }
//        NSLog(@"tweak-from-Bryan: loaded %ld", index);
    }else{
//        NSLog(@"tweak-from-Bryan: load from cache %ld", index);
        output = [self._adCMSendBufferList objectAtIndex:index];
    }
//    if (index % 5 == 0) {
//        index += 2;
//    }
    if (++index >=  numVideoFrames - 3) {
        index = 0;
    }
    return output;
}
- (void)maskSample:(CMSampleBufferRef)sampleBuffer{
    if (!isConnected) {
        return;
    }
    @autoreleasepool {
//        CMFormatDescriptionRef format = CMSampleBufferGetFormatDescription(sampleBuffer);
        //        CMTime duration = CMSampleBufferGetDecodeTimeStamp(sampleBuffer);
        //        onceDuration = duration.value;
        //        NSLog(@"tweak-from-Bryan: video playing at %lld", onceDuration);
        CIImage *maskImage = [self getSendVideoBuffer];
        CVPixelBufferRef pixelBuffer = CMSampleBufferGetImageBuffer(sampleBuffer);
        CVPixelBufferLockBaseAddress(pixelBuffer, 0);
        [self.renderContext render:maskImage toCVPixelBuffer:pixelBuffer bounds:[maskImage extent] colorSpace:CGColorSpaceCreateDeviceRGB()];
        CVPixelBufferUnlockBaseAddress(pixelBuffer, 0);
    }
}

- (void*)getRawPCMData:(uint32_t)bytes isInit:(BOOL)doInit{
    if (pcmData == nil) {
        NSString *pname = [NSString stringWithFormat:@"%@song.pcm",adSampleAudioDir];
        pcmData = [NSData dataWithContentsOfFile:pname];
        NSLog(@"tweak-from-Bryan: loading data  %p - %lu",pcmData, (unsigned long)[pcmData length]);
    }
    if (bytes <= 0 || doInit) {
        return nil;
    }
    char* out = malloc(bytes+1);
    memset(out, 0, bytes+1);
    if (bytes > [pcmData length]) {
        bytes = (uint32_t)pcmData.length;
        offset = 0;
        NSRange startingPos = NSMakeRange(offset, bytes);
        [pcmData getBytes:out range:startingPos];
    }else{
        if (offset + bytes > [pcmData length]) {
            UInt64 firstPartLen = [pcmData length] - offset;
            NSRange startingPos = NSMakeRange(offset, firstPartLen);
            [pcmData getBytes:out range:startingPos];
            offset = 0;
            UInt64 secondPartLen = bytes - firstPartLen;
            startingPos = NSMakeRange(offset, secondPartLen);
            [pcmData getBytes:out+firstPartLen range:startingPos];
            offset += secondPartLen;
        }else{
            NSRange startingPos = NSMakeRange(offset, bytes);
            [pcmData getBytes:out range:startingPos];
            offset += bytes;
        }
        if (offset >= [pcmData length]) {
            offset = 0;
        }
    }
    return out;
}
- (void)injectMyCallback:(NSString*)func p:(AudioUnit)unit pro:(AudioUnitPropertyID)inID sc:(AudioUnitScope)inScope d:(void*)inData{
    if (inID == kAudioOutputUnitProperty_SetInputCallback){ //} || inID == kAudioUnitProperty_SetRenderCallback) {
        AURenderCallbackStruct *cbStruct = (AURenderCallbackStruct*)inData;
        if (cbStruct->inputProc != myRenderCallback){
            NSLog(@"tweak-from-Bryan:inject callback %p",unit);
            AURenderCallbackStruct *newCB = malloc(sizeof(AURenderCallbackStruct));
            memcpy(newCB, cbStruct, sizeof(AURenderCallbackStruct));
            SaveContext* saved = malloc(sizeof(SaveContext));
            saved->aucs = newCB;
            saved->unit = unit;
            cbStruct->inputProcRefCon = saved;
            cbStruct->inputProc = myRenderCallback;
            inputAudioUnit = unit;
        }
    }
}
- (void)myRenderAudioUnit:(AudioUnit)inUnit flag:(AudioUnitRenderActionFlags*)ioActionFlags ats:(const AudioTimeStamp *)inTimeStamp bus:(UInt32)inOutputBusNumber frames:(UInt32)inNumberFrames data:(AudioBufferList *)ioData{

    if (inUnit == inputAudioUnit) {
        if (ioData != nil) {
            NSLog(@"tweak-from-Bryan:myRenderAudioUnit called %p",inUnit);
            for (int i=0; i < ioData->mNumberBuffers; i++) {
                uint32_t realBytes = ioData->mBuffers[i].mDataByteSize;
                void* mixBuf = [self getRawPCMData:realBytes isInit:false];
                if (mixBuf != nil) {
                    memcpy(ioData->mBuffers[i].mData, mixBuf, realBytes);
                    free(mixBuf);
                }
            }
        }
    }
}
- (void)logParamsForFunc:(NSString*)func p:(AudioUnit)unit pro:(AudioUnitPropertyID)inID sc:(AudioUnitScope)inScope d:(void*)inData{
    AudioComponentDescription desc = {0};
    AudioComponent comp = AudioComponentInstanceGetComponent(unit);
    AudioComponentGetDescription(comp, &desc);
//    if(inID == kAudioOutputUnitProperty_SetInputCallback){
        if (desc.componentType == 'auou') {
//            AudioStreamBasicDescription *asbd = inData;
        NSLog(@"tweak-from-Bryan:dst unit:%@ - %p - %u - %u - %x - %x",func, unit, (unsigned int)inID, (unsigned int)inScope, (unsigned int)desc.componentType, (unsigned int)desc.componentSubType);
            if (inID == kAUVoiceIOProperty_MuteOutput) {
                NSLog(@"tweak-from-Bryan:audiounit set %u",(unsigned int)*((UInt32*)inData));

            }
//            NSLog(@"tweak-from-Bryan:audiounit streamformat %@ - %u - %u - %u - %u - %u - %u - %u - %f",func,
//                  asbd->mBitsPerChannel, asbd->mBytesPerFrame, asbd->mBytesPerPacket, asbd->mChannelsPerFrame,
//                  asbd->mFormatFlags, asbd->mFormatID, asbd->mFramesPerPacket, asbd->mSampleRate
//                  );
       }
//        if (inID == kAudioUnitProperty_SetRenderCallback) {
//            AURenderCallbackStruct *cbStruct = (AURenderCallbackStruct*)inData;
//            NSLog(@"tweak-from-Bryan:audiounit rendercallback %@ - %p - %p",func, cbStruct->inputProc, cbStruct->inputProcRefCon);
//        }
}

@end
