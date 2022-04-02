/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    long long  _desiredMode;
    bool  _testingAnimation;
    CAMViewfinderViewController * _viewfinderViewController;
}

@property (nonatomic, readonly) long long desiredMode;
@property (getter=isTestingAnimation, nonatomic, readonly) bool testingAnimation;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

- (void).cxx_destruct;
- (void)_ensureCaptureMode:(long long)arg1 thenPerform:(id /* block */)arg2;
- (long long)desiredMode;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 mode:(long long)arg3 testingAnimation:(bool)arg4;
- (bool)isTestingAnimation;
- (void)startTesting;
- (id)viewfinderViewController;

@end
