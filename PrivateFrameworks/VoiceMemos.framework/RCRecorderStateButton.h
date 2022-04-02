/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCRecorderStateButton : UIButton {
    long long  _AVCaptureState;
    UIColor * _innerColor;
    CALayer * _innerLayer;
    bool  _isForceDisabled;
    UIColor * _outerColor;
    bool  _realEnabledState;
}

@property (nonatomic) long long AVCaptureState;
@property (nonatomic) bool isForceDisabled;

- (void).cxx_destruct;
- (long long)AVCaptureState;
- (double)_currentStateInnerDrawingAlpha;
- (double)_currentStateTopLevelDrawingAlpha;
- (void)_drawOuterCircle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isForceDisabled;
- (void)layoutSubviews;
- (void)setAVCaptureState:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsForceDisabled:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
