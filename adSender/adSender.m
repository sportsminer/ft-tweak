#line 1 "/Users/shiyong/Downloads/My Tweak Source/adSender/adSender/adSender.x"


#if TARGET_OS_SIMULATOR
#error Do not support the simulator, please use the real iPhone Device.
#endif

#import <UIKit/UIKit.h>
#import <CoreMedia/CMSampleBuffer.h>


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

@class AVCaptureDataOutputSynchronizer; @class SpringBoard; 


#line 10 "/Users/shiyong/Downloads/My Tweak Source/adSender/adSender/adSender.x"
static void (*_logos_orig$group_springboard$SpringBoard$applicationDidFinishLaunching$)(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$group_springboard$SpringBoard$applicationDidFinishLaunching$(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST, SEL, id); 


static void _logos_method$group_springboard$SpringBoard$applicationDidFinishLaunching$(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id application) {
    _logos_orig$group_springboard$SpringBoard$applicationDidFinishLaunching$(self, _cmd, application);
}




static id (*_logos_meta_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static id _logos_meta_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$)(_LOGOS_SELF_TYPE_NORMAL AVCaptureDataOutputSynchronizer* _LOGOS_SELF_CONST, SEL, id, opaqueCMSampleBufferRef, id); static void _logos_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$(_LOGOS_SELF_TYPE_NORMAL AVCaptureDataOutputSynchronizer* _LOGOS_SELF_CONST, SEL, id, opaqueCMSampleBufferRef, id); 



static id _logos_meta_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	HBLogDebug(@"+[<AVCaptureDataOutputSynchronizer: %p> sharedInstance]", self);

	return _logos_meta_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$sharedInstance(self, _cmd);
}

static void _logos_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$(_LOGOS_SELF_TYPE_NORMAL AVCaptureDataOutputSynchronizer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, opaqueCMSampleBufferRef arg2, id arg3) ;
{
	HBLogDebug(@"-[<AVCaptureDataOutputSynchronizer: %p> captureOutput:%@ didOutputSampleBuffer:%@ fromConnection:%@]", self, arg1, arg2, arg3);

	_logos_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$(self, _cmd, arg1, arg2, arg3);
	
	
}




static __attribute__((constructor)) void _logosLocalCtor_d26df6f8(int __unused argc, char __unused **argv, char __unused **envp) {
    NSString *bundle = [NSBundle mainBundle].bundleIdentifier;
    if ([bundle isEqualToString:@"com.apple.springboard"]) {
        {Class _logos_class$group_springboard$SpringBoard = objc_getClass("SpringBoard"); MSHookMessageEx(_logos_class$group_springboard$SpringBoard, @selector(applicationDidFinishLaunching:), (IMP)&_logos_method$group_springboard$SpringBoard$applicationDidFinishLaunching$, (IMP*)&_logos_orig$group_springboard$SpringBoard$applicationDidFinishLaunching$);}
    } else if ([bundle isEqualToString:@"com.apple.mediaserverd"]) {
        {Class _logos_class$group_mediaserverd$AVCaptureDataOutputSynchronizer = objc_getClass("AVCaptureDataOutputSynchronizer"); Class _logos_metaclass$group_mediaserverd$AVCaptureDataOutputSynchronizer = object_getClass(_logos_class$group_mediaserverd$AVCaptureDataOutputSynchronizer); MSHookMessageEx(_logos_metaclass$group_mediaserverd$AVCaptureDataOutputSynchronizer, @selector(sharedInstance), (IMP)&_logos_meta_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$sharedInstance, (IMP*)&_logos_meta_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$sharedInstance);MSHookMessageEx(_logos_class$group_mediaserverd$AVCaptureDataOutputSynchronizer, @selector(captureOutput:didOutputSampleBuffer:fromConnection:), (IMP)&_logos_method$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$, (IMP*)&_logos_orig$group_mediaserverd$AVCaptureDataOutputSynchronizer$captureOutput$didOutputSampleBuffer$fromConnection$);}
    }
}
