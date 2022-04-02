/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoStabilizationCommand : CAMCaptureCommand {
    bool  __enabled;
}

@property (getter=_isEnabled, nonatomic, readonly) bool _enabled;

- (bool)_isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAutomaticVideoStabilizationEnabled:(bool)arg1;
- (id)initWithCoder:(id)arg1;

@end
