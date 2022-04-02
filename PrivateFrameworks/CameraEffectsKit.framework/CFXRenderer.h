/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXRenderer : NSObject <PVLivePlayerDelegate> {
    CFXAnimojiEffectRenderer * _animojiRenderer;
    PVLivePlayerCameraSource * _cameraSource;
    long long  _captureMode;
    <CFXRendererDelegate> * _delegate;
    CFXFaceTrackingRenderer * _faceTrackingRenderer;
    JTFrameRateCalculator * _fpsCalc;
    PVLivePlayer * _livePlayer;
    JTPixelRotationSession * _pixelRotationSession;
}

@property (nonatomic, retain) CFXAnimojiEffectRenderer *animojiRenderer;
@property (nonatomic, retain) PVLivePlayerCameraSource *cameraSource;
@property (nonatomic) long long captureMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CFXFaceTrackingRenderer *faceTrackingRenderer;
@property (nonatomic, readonly) JTFrameRateCalculator *fpsCalc;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PVLivePlayer *livePlayer;
@property (nonatomic, readonly) bool livePlayerIsSaturated;
@property (nonatomic, retain) JTPixelRotationSession *pixelRotationSession;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)CFX_JTEffectsFromCFXEffectComposition:(id)arg1;
- (id)CFX_PVFrameSetFromCFXFrame:(id)arg1;
- (id)animojiRenderer;
- (id)buildRenderRequest:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)cameraSource;
- (long long)captureMode;
- (void)dealloc;
- (id)delegate;
- (id)faceTrackingRenderer;
- (id)fpsCalc;
- (id)initWithDelegate:(id)arg1 captureMode:(long long)arg2;
- (id)livePlayer;
- (void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)livePlayerIsSaturated;
- (id)pixelRotationSession;
- (void)renderFrame:(id)arg1 effectComposition:(id)arg2;
- (void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(bool)arg3;
- (void)setAnimojiRenderer:(id)arg1;
- (void)setCameraSource:(id)arg1;
- (void)setCaptureMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceTrackingRenderer:(id)arg1;
- (void)setLivePlayer:(id)arg1;
- (void)setPixelRotationSession:(id)arg1;
- (void)shutdown;
- (void)willDropCameraFrame;

@end
