//
//  ADFrameLoader.h
//  adSender
//
//  Created by 石勇 on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGGeometry.h>
#import <CoreVideo/CVPixelBuffer.h>
#import <UIKit/UIImage.h>
#import <CoreMedia/CMSampleBuffer.h>

typedef struct {
    uint32_t totalCalled;
    uint32_t totalCalls;
    uint32_t totalPlaySeconds;
    uint32_t totalPlayAds;
    uint32_t todayCalled;
    uint32_t todayCalls;
    uint32_t onceTimeBegin;
    uint32_t onceTimeEnd;
    uint32_t oncePlaySeconds;
} AdSenderStats;

NS_ASSUME_NONNULL_BEGIN
@interface ADFrameLoader : NSObject

@property(nonatomic, assign) BOOL _isConnected;
@property(nonatomic, assign) BOOL _noPrefetch;
@property(nonatomic, assign) long _index;
@property(nonatomic, assign) long _offset;

+ (instancetype)sharedInstance;

- (void)maskSample:(CMSampleBufferRef)sampleBuffer;
- (void)injectMyCallback:(NSString*)func p:(AudioUnit)unit pro:(AudioUnitPropertyID)inID sc:(AudioUnitScope)inScope d:(void*)inData;
- (void)logParamsForFunc:(NSString*)func p:(AudioUnit)unit pro:(AudioUnitPropertyID)inID sc:(AudioUnitScope)inScope d:(void*)inData;
- (void*)getRawPCMData:(uint32_t)bytes isInit:(BOOL)doInit;
- (void)myRenderAudioUnit:(AudioUnit)inUnit flag:(AudioUnitRenderActionFlags*)ioActionFlags ats:(const AudioTimeStamp *)inTimeStamp bus:(UInt32)inOutputBusNumber frames:(UInt32)inNumberFrames data:(AudioBufferList *)ioData;
- (void)reset;
- (BOOL)isConnected;
- (void)connected;
- (void)disConnected;
- (const char*)getStatsWithJsonstr;

@end

NS_ASSUME_NONNULL_END
