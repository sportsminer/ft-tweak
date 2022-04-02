/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface DummyWarningView : UIView {
    UILabel * _label;
    PXUpdater * _updater;
    long long  _warningLevel;
    NSString * _warningReason;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic) long long warningLevel;
@property (nonatomic, copy) NSString *warningReason;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setWarningLevel:(long long)arg1;
- (void)setWarningReason:(id)arg1;
- (id)updater;
- (long long)warningLevel;
- (id)warningReason;

@end
