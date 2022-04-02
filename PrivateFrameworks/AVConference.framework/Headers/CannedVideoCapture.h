/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CannedVideoCapture : VCVideoCapture <VideoCaptureProtocol> {
    <CannedVideoFrameFeeder> * _frameFeeder;
    struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; id x3; struct OpaqueCMClock {} *x4; bool x5; bool x6; struct OpaqueFigThread {} *x7; bool x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _opaque_pthread_cond_t { long long x_10_1_1; BOOL x_10_1_2[40]; } x10; struct OpaqueFigThread {} *x11; bool x12; struct _opaque_pthread_mutex_t { long long x_13_1_1; BOOL x_13_1_2[56]; } x13; struct _opaque_pthread_cond_t { long long x_14_1_1; BOOL x_14_1_2[40]; } x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct Frame {} *x16; int x17; } * _pimpl;
}

@property (nonatomic, retain) <CannedVideoFrameFeeder> *frameFeeder;
@property (nonatomic, readonly) struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; id x3; struct OpaqueCMClock {} *x4; bool x5; bool x6; struct OpaqueFigThread {} *x7; bool x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _opaque_pthread_cond_t { long long x_10_1_1; BOOL x_10_1_2[40]; } x10; struct OpaqueFigThread {} *x11; bool x12; struct _opaque_pthread_mutex_t { long long x_13_1_1; BOOL x_13_1_2[56]; } x13; struct _opaque_pthread_cond_t { long long x_14_1_1; BOOL x_14_1_2[40]; } x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct Frame {} *x16; int x17; }*pimpl;

+ (int)cannedVideoTypeForPath:(id)arg1;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withWidth:(int)arg2 height:(int)arg3;

- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (id)frameFeeder;
- (id)getCameraUID;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5 video:(id)arg6 error:(int*)arg7;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; id x3; struct OpaqueCMClock {} *x4; bool x5; bool x6; struct OpaqueFigThread {} *x7; bool x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _opaque_pthread_cond_t { long long x_10_1_1; BOOL x_10_1_2[40]; } x10; struct OpaqueFigThread {} *x11; bool x12; struct _opaque_pthread_mutex_t { long long x_13_1_1; BOOL x_13_1_2[56]; } x13; struct _opaque_pthread_cond_t { long long x_14_1_1; BOOL x_14_1_2[40]; } x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct Frame {} *x16; int x17; }*)pimpl;
- (int)setCameraWithUID:(id)arg1;
- (void)setFrameFeeder:(id)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)startThreads;
- (int)stop:(bool)arg1;
- (void)stopThreads;

@end
