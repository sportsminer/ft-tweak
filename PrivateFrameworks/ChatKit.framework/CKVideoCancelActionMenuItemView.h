/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVideoCancelActionMenuItemView : UIView <CKActionMenuItemView> {
    UIVisualEffectView * _blurView;
    bool  _highlighted;
    UIImageView * _maskView;
    UIImageView * _xView;
}

@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIImageView *maskView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *xView;

- (void).cxx_destruct;
- (id)blurView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)maskView;
- (void)setBlurView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setMaskView:(id)arg1;
- (void)setXView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)xView;

@end
