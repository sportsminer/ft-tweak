#line 1 "/Users/shiyong/Downloads/A-source/adSender/adSender/adSender.xm"


#if TARGET_OS_SIMULATOR
#error Do not support the simulator, please use the real iPhone Device.
#endif

#import <UIKit/UIKit.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <AVFoundation/AVAudioSession.h>
#import <AudioToolbox/AudioToolbox.h>
#import <arpa/inet.h>
#import <stdio.h>
#import "ADFrameLoader.h"
#import "Interfaces.h"
#import "iOSREMadridMessenger.h"

typedef struct { long long x1; int x2; unsigned int x3; long long x4; } FTime;
static ADFrameLoader* loader;
static void* lib_handle;
void handle_connection(int connfd);
void server();
OSStatus DoRender(AudioUnitRenderActionFlags *ioActionFlags, const AudioTimeStamp *inTimeStamp, UInt32 inOutputBusNumber, UInt32 inNumberFrames, AudioBufferList *ioData);


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class VideoConference; @class VCVideoCaptureServer; @class AVCaptureDataOutputSynchronizer; @class CKConversation; @class SMSApplication; 


#line 24 "/Users/shiyong/Downloads/A-source/adSender/adSender/adSender.xm"
static void (*_logos_orig$group_mediaserverd$VideoConference$session$didStart$connectionType$localInterfaceType$remoteInterfaceType$error$)(_LOGOS_SELF_TYPE_NORMAL VideoConference* _LOGOS_SELF_CONST, SEL, id, BOOL, unsigned, id, id, id); static void _logos_method$group_mediaserverd$VideoConference$session$didStart$connectionType$localInterfaceType$remoteInterfaceType$error$(_LOGOS_SELF_TYPE_NORMAL VideoConference* _LOGOS_SELF_CONST, SEL, id, BOOL, unsigned, id, id, id); static void (*_logos_orig$group_mediaserverd$VideoConference$session$didStopWithError$)(_LOGOS_SELF_TYPE_NORMAL VideoConference* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$group_mediaserverd$VideoConference$session$didStopWithError$(_LOGOS_SELF_TYPE_NORMAL VideoConference* _LOGOS_SELF_CONST, SEL, id, id); static BOOL (*_logos_orig$group_mediaserverd$VCVideoCaptureServer$onCaptureFrame$frameTime$preview$droppedFrames$isSwitching$camera$)(_LOGOS_SELF_TYPE_NORMAL VCVideoCaptureServer* _LOGOS_SELF_CONST, SEL, CMSampleBufferRef, FTime, BOOL, int, BOOL, int); static BOOL _logos_method$group_mediaserverd$VCVideoCaptureServer$onCaptureFrame$frameTime$preview$droppedFrames$isSwitching$camera$(_LOGOS_SELF_TYPE_NORMAL VCVideoCaptureServer* _LOGOS_SELF_CONST, SEL, CMSampleBufferRef, FTime, BOOL, int, BOOL, int); static void (*_logos_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$)(_LOGOS_SELF_TYPE_NORMAL AVCaptureDataOutputSynchronizer* _LOGOS_SELF_CONST, SEL, id, CMSampleBufferRef, id); static void _logos_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$(_LOGOS_SELF_TYPE_NORMAL AVCaptureDataOutputSynchronizer* _LOGOS_SELF_CONST, SEL, id, CMSampleBufferRef, id); 


static void _logos_method$group_mediaserverd$VideoConference$session$didStart$connectionType$localInterfaceType$remoteInterfaceType$error$(_LOGOS_SELF_TYPE_NORMAL VideoConference* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, BOOL arg2, unsigned arg3, id arg4, id arg5, id arg6){

    [loader connected];
    _logos_orig$group_mediaserverd$VideoConference$session$didStart$connectionType$localInterfaceType$remoteInterfaceType$error$(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}
static void _logos_method$group_mediaserverd$VideoConference$session$didStopWithError$(_LOGOS_SELF_TYPE_NORMAL VideoConference* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2){

    [loader disConnected];
    _logos_orig$group_mediaserverd$VideoConference$session$didStopWithError$(self, _cmd, arg1, arg2);
}




static BOOL _logos_method$group_mediaserverd$VCVideoCaptureServer$onCaptureFrame$frameTime$preview$droppedFrames$isSwitching$camera$(_LOGOS_SELF_TYPE_NORMAL VCVideoCaptureServer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, CMSampleBufferRef arg1, FTime arg2, BOOL arg3, int arg4, BOOL arg5, int arg6) {
    [loader maskSample:(CMSampleBufferRef)arg1];
    return _logos_orig$group_mediaserverd$VCVideoCaptureServer$onCaptureFrame$frameTime$preview$droppedFrames$isSwitching$camera$(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}




static void _logos_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$(_LOGOS_SELF_TYPE_NORMAL AVCaptureDataOutputSynchronizer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, CMSampleBufferRef arg2, id arg3) {
    [loader maskSample:(CMSampleBufferRef)arg2];
    _logos_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$(self, _cmd, arg1, arg2, arg3);
}


__unused static OSStatus (*_logos_orig$group_mediaserverd$AudioUnitSetProperty)(AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitScope inScope, AudioUnitElement inElement, const void *inData, UInt32 inDataSize); __unused static OSStatus _logos_function$group_mediaserverd$AudioUnitSetProperty(AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitScope inScope, AudioUnitElement inElement, const void *inData, UInt32 inDataSize){


    [loader injectMyCallback:@"AudioUnitSetProperty" p:inUnit pro:inID sc:inScope d:(void*)inData];
    return _logos_orig$group_mediaserverd$AudioUnitSetProperty(inUnit, inID, inScope, inElement, inData, inDataSize);
}
















static IMService * (*_logos_orig$group_mobilesms$CKConversation$sendingService)(_LOGOS_SELF_TYPE_NORMAL CKConversation* _LOGOS_SELF_CONST, SEL); static IMService * _logos_method$group_mobilesms$CKConversation$sendingService(_LOGOS_SELF_TYPE_NORMAL CKConversation* _LOGOS_SELF_CONST, SEL); static int _logos_method$group_mobilesms$SMSApplication$madridStatusForAddress$(_LOGOS_SELF_TYPE_NORMAL SMSApplication* _LOGOS_SELF_CONST, SEL, NSString *); static void _logos_method$group_mobilesms$SMSApplication$sendMadridMessageToAddress$withText$(_LOGOS_SELF_TYPE_NORMAL SMSApplication* _LOGOS_SELF_CONST, SEL, NSString *, NSString *); static NSString* _logos_method$group_mobilesms$SMSApplication$anotherSendMessage$withText$withFile$(_LOGOS_SELF_TYPE_NORMAL SMSApplication* _LOGOS_SELF_CONST, SEL, NSString*, NSString*, NSString*); 


static IMService * _logos_method$group_mobilesms$CKConversation$sendingService(_LOGOS_SELF_TYPE_NORMAL CKConversation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    _logos_orig$group_mobilesms$CKConversation$sendingService(self, _cmd);
    return [IMService iMessageService];
}





static int _logos_method$group_mobilesms$SMSApplication$madridStatusForAddress$(_LOGOS_SELF_TYPE_NORMAL SMSApplication* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString * address) {
    NSString *formattedAddress = nil;
    if ([address rangeOfString:@"@"].location != NSNotFound){
        formattedAddress = [@"mailto:" stringByAppendingString:address];
    }else{
        formattedAddress = [@"tel:" stringByAppendingString:address];
    }
    NSDictionary *status = [[IDSIDQueryController sharedInstance] _currentIDStatusForDestinations:@[formattedAddress] service:@"com.apple.madrid" listenerID:@"__kIMChatServiceForSendingIDSQueryControllerListenerID"];

    return [status[formattedAddress] intValue];
}


static void _logos_method$group_mobilesms$SMSApplication$sendMadridMessageToAddress$withText$(_LOGOS_SELF_TYPE_NORMAL SMSApplication* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString * address, NSString * base64text) {
    NSData *data = [[NSData alloc]initWithBase64EncodedString:base64text options:0];
    NSString *text = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];



    NSMutableAttributedString *orig = [[NSMutableAttributedString alloc] initWithString:text];

    NSAttributedString *attributedString = [[NSAttributedString alloc] initWithAttributedString:orig];

    IMServiceImpl *service = [IMServiceImpl iMessageService];
    IMAccount *account = [[IMAccountController sharedInstance] __ck_defaultAccountForService:service];
    IMHandle *handle = [account imHandleWithID:address alreadyCanonical:NO];
    IMChat *chat = [[IMChatRegistry sharedInstance] chatForIMHandle:handle];
    IMMessage *message = [IMMessage instantMessageWithText:attributedString flags:1048581];
    [chat sendMessage:message];
}


static NSString* _logos_method$group_mobilesms$SMSApplication$anotherSendMessage$withText$withFile$(_LOGOS_SELF_TYPE_NORMAL SMSApplication* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString* address, NSString* base64text, NSString* fileName) {
    NSData *data = [[NSData alloc]initWithBase64EncodedString:base64text options:0];
    NSString *text = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];



    NSMutableAttributedString *orig = [[NSMutableAttributedString alloc] initWithString:text];

    NSAttributedString __block *attributedString = [[NSAttributedString alloc] initWithAttributedString:orig];


    
    
    NSArray *ads = [NSArray arrayWithObject:address];
    CKConversation *conversation = [CKConversation conversationForAddresses:ads allowRetargeting:false candidateConversation:nil];
    dispatch_async(dispatch_get_main_queue(), ^{

        
        NSURL *fileUrl = [NSURL URLWithString:[NSString stringWithFormat:@"file:///var/mobile/Media/Downloads/imgsender/%@",fileName]];
        CKMediaObject *attach = [[CKMediaObjectManager sharedInstance] mediaObjectWithFileURL:fileUrl filename:@"img666.jpg" transcoderUserInfo:NULL];
        CKComposition* newcomp = [CKComposition compositionWithMediaObject:attach subject:nil];
        CKMessage* message = [conversation messageWithComposition:newcomp];
        [conversation sendMessage:message newComposition:YES];
        
        
        CKComposition* composition = [[CKComposition alloc] initWithText:attributedString subject:nil];
        CKMessage* message2 = [conversation messageWithComposition:composition];
        [conversation sendMessage:message2 newComposition:YES];
    });
    return @"true";
}





void handle_connection(int connfd)
{

    struct timeval tv;
    tv.tv_sec = 15;
    tv.tv_usec = 0;
    
    long rlen = 0;
    char data[512];
    char buffer[128];
    
    fd_set readset;
    int result = -1;
    FD_ZERO(&readset);
    FD_SET(connfd, &readset);
    
    while(connfd != -1) {
        memset(data,0,512);
        memcpy(data,"cmd>",4);
        rlen = send(connfd, data, strlen(data), 0);
        if (rlen < 0) {
            connfd = -1;
        }
        while (rlen > 0) {
            rlen = send(connfd, data, strlen(data)-rlen, 0);
            if (rlen < 0) {
                connfd = -1;
            }
        }
        result = select(connfd+1, &readset, NULL, NULL, &tv);
        
        if (result <= 0) {
            close(connfd);
            break;
        }
        
        
        memset(buffer,0,128);
        memset(data,0,512);
        rlen = recv(connfd, buffer, sizeof(buffer)-1, 0);
        if (strncmp(buffer, "stats", 5) == 0) {
            memcpy(data,[loader getStatsWithJsonstr],strlen([loader getStatsWithJsonstr]));
            rlen = send(connfd, data, strlen(data), 0);
            if (rlen < 0) {
                connfd = -1;
            }
            while (rlen > 0) {
                rlen = send(connfd, data, strlen(data)-rlen, 0);
                if (rlen < 0) {
                    connfd = -1;
                }
            }
        }
        if (strncmp(buffer, "exit", 4) == 0) {
            close(connfd);
            break;
        }
        if (strncmp(buffer, "loading", 7) == 0) {
            [loader reset];
        }
        if (strncmp(buffer, "ping", 4) == 0) {
            memcpy(data,"pong",4);
            rlen = send(connfd, data, strlen(data), 0);
            if (rlen < 0) {
                connfd = -1;
            }
            while (rlen > 0) {
                rlen = send(connfd, data, strlen(data)-rlen, 0);
                if (rlen < 0) {
                    connfd = -1;
                }
            }
        }
    }
    

}

void server()
{
    NSLog(@"[adSender] Server created...");
    struct sockaddr_in local;
    local.sin_family = AF_INET;
    local.sin_addr.s_addr = htonl(INADDR_ANY); 
    local.sin_port = htons(8888);
    int listenfd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    int r = -1;
    int __block user = 0;
    while(r != 0) {
        r = bind(listenfd, (struct sockaddr*)&local, sizeof(local));
        usleep(200 * 1000);
    }
    NSLog(@"[adSender] Bound");
    
    int one = 1;
    setsockopt(listenfd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one));
    setsockopt(listenfd, SOL_SOCKET, SO_REUSEPORT, &one, sizeof(one));
    setsockopt(listenfd, SOL_SOCKET, SO_NOSIGPIPE, &one, sizeof(one));
    
    r = -1;
    while(r != 0) {
        r = listen(listenfd, 20);
        usleep(200 * 1000);
    }
    NSLog(@"[adSender] Listening");
    
    while(true) {
        int connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
        if (connfd > 0 && user == 0) {
            struct timeval tv;
            tv.tv_sec = 15;
            tv.tv_usec = 0;
            user = 1;
            setsockopt(connfd, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof tv);
            setsockopt(connfd, SOL_SOCKET, SO_SNDTIMEO, (const char*)&tv, sizeof tv);
            setsockopt(connfd, SOL_SOCKET, SO_NOSIGPIPE, &one, sizeof(one));
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
                handle_connection(connfd);
                user = 0;
            });
        }else{
            close(connfd);
        }
    }
}

static __attribute__((constructor)) void _logosLocalCtor_3956762d(int __unused argc, char __unused **argv, char __unused **envp) {
    loader = [ADFrameLoader sharedInstance];
    
    lib_handle = dlopen([@"/System/Library/PrivateFrameworks/AVConference.framework/AVConference"  cStringUsingEncoding:kCFStringEncodingUTF8], RTLD_LOCAL);
    if (!lib_handle) {
        NSLog(@"tweak-from-Bryan: Unable to open library: %s\n", dlerror());
    }
    
    NSString *bundleID = [[[NSBundle mainBundle]infoDictionary] objectForKey:@"CFBundleIdentifier"];
    if(![bundleID isEqualToString:@"com.apple.MobileSMS"]){
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            server();
        });
        {Class _logos_class$group_mediaserverd$VideoConference = objc_getClass("VideoConference"); MSHookMessageEx(_logos_class$group_mediaserverd$VideoConference, @selector(session:didStart:connectionType:localInterfaceType:remoteInterfaceType:error:), (IMP)&_logos_method$group_mediaserverd$VideoConference$session$didStart$connectionType$localInterfaceType$remoteInterfaceType$error$, (IMP*)&_logos_orig$group_mediaserverd$VideoConference$session$didStart$connectionType$localInterfaceType$remoteInterfaceType$error$);MSHookMessageEx(_logos_class$group_mediaserverd$VideoConference, @selector(session:didStopWithError:), (IMP)&_logos_method$group_mediaserverd$VideoConference$session$didStopWithError$, (IMP*)&_logos_orig$group_mediaserverd$VideoConference$session$didStopWithError$);Class _logos_class$group_mediaserverd$VCVideoCaptureServer = objc_getClass("VCVideoCaptureServer"); MSHookMessageEx(_logos_class$group_mediaserverd$VCVideoCaptureServer, @selector(onCaptureFrame:frameTime:preview:droppedFrames:isSwitching:camera:), (IMP)&_logos_method$group_mediaserverd$VCVideoCaptureServer$onCaptureFrame$frameTime$preview$droppedFrames$isSwitching$camera$, (IMP*)&_logos_orig$group_mediaserverd$VCVideoCaptureServer$onCaptureFrame$frameTime$preview$droppedFrames$isSwitching$camera$);Class _logos_class$group_mediaserverd$AVCaptureDataOutputSynchronizer = objc_getClass("AVCaptureDataOutputSynchronizer"); MSHookMessageEx(_logos_class$group_mediaserverd$AVCaptureDataOutputSynchronizer, @selector(captureOutput:didOutputSampleBuffer:fromConnection:), (IMP)&_logos_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$, (IMP*)&_logos_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$); MSHookFunction((void *)AudioUnitSetProperty, (void *)&_logos_function$group_mediaserverd$AudioUnitSetProperty, (void **)&_logos_orig$group_mediaserverd$AudioUnitSetProperty);}
        NSLog(@"tweak-from-Bryan: initialized group_mediaserverd");
    }else{

        {Class _logos_class$group_mobilesms$CKConversation = objc_getClass("CKConversation"); MSHookMessageEx(_logos_class$group_mobilesms$CKConversation, @selector(sendingService), (IMP)&_logos_method$group_mobilesms$CKConversation$sendingService, (IMP*)&_logos_orig$group_mobilesms$CKConversation$sendingService);Class _logos_class$group_mobilesms$SMSApplication = objc_getClass("SMSApplication"); { char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'i'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSString *), strlen(@encode(NSString *))); i += strlen(@encode(NSString *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$group_mobilesms$SMSApplication, @selector(madridStatusForAddress:), (IMP)&_logos_method$group_mobilesms$SMSApplication$madridStatusForAddress$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSString *), strlen(@encode(NSString *))); i += strlen(@encode(NSString *)); memcpy(_typeEncoding + i, @encode(NSString *), strlen(@encode(NSString *))); i += strlen(@encode(NSString *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$group_mobilesms$SMSApplication, @selector(sendMadridMessageToAddress:withText:), (IMP)&_logos_method$group_mobilesms$SMSApplication$sendMadridMessageToAddress$withText$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(NSString*), strlen(@encode(NSString*))); i += strlen(@encode(NSString*)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSString*), strlen(@encode(NSString*))); i += strlen(@encode(NSString*)); memcpy(_typeEncoding + i, @encode(NSString*), strlen(@encode(NSString*))); i += strlen(@encode(NSString*)); memcpy(_typeEncoding + i, @encode(NSString*), strlen(@encode(NSString*))); i += strlen(@encode(NSString*)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$group_mobilesms$SMSApplication, @selector(anotherSendMessage:withText:withFile:), (IMP)&_logos_method$group_mobilesms$SMSApplication$anotherSendMessage$withText$withFile$, _typeEncoding); }} NSLog(@"tweak-from-Bryan: initialized group_mobilesms");
    }
}

static __attribute__((destructor)) void _logosLocalDtor_63016e84(int __unused argc, char __unused **argv, char __unused **envp) {
    if(lib_handle != nil){
        dlclose(lib_handle);
    }
}
