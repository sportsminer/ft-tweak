/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationBarBackgroundView : UIView {
    _UIBackdropView * _backdropView;
    UIView * _borderView;
    bool  _separatorOnTop;
    UIView * _shadowView;
    _UINavigationBarAppearanceStorage * appearanceStorage;
    long long  barStyle;
    UIColor * barTintColor;
    bool  barWantsAdaptiveBackdrop;
    bool  translucent;
}

@property (setter=_setShadowView:, nonatomic, retain) UIView *_shadowView;
@property (nonatomic, retain) _UINavigationBarAppearanceStorage *appearanceStorage;
@property (nonatomic) long long backdropStyle;
@property (readonly) _UIBackdropView *backdropView;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) bool barWantsAdaptiveBackdrop;
@property (nonatomic) bool separatorOnTop;
@property (getter=isTranslucent, nonatomic) bool translucent;

- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(bool*)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(bool)arg2;
- (void)_setIsContainedInPopover:(bool)arg1;
- (void)_setShadowView:(id)arg1;
- (id)_shadowView;
- (id)appearanceStorage;
- (long long)backdropStyle;
- (id)backdropView;
- (long long)barStyle;
- (id)barTintColor;
- (bool)barWantsAdaptiveBackdrop;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTranslucent;
- (void)layoutSubviews;
- (bool)separatorOnTop;
- (void)setAppearanceStorage:(id)arg1;
- (void)setBackdropStyle:(long long)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBarWantsAdaptiveBackdrop:(bool)arg1;
- (void)setSeparatorOnTop:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)updateBackgroundImage;

@end
