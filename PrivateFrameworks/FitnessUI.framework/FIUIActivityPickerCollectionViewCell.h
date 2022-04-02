/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIActivityPickerCollectionViewCell : UICollectionViewCell {
    UILabel * _activityTypeLabel;
    UIImageView * _backgroundImageView;
    UIImageView * _bottomLeftCornerView;
    UIImageView * _bottomRightCornerView;
    UIButton * _configButton;
    id /* block */  _configurationButtonTappedHandler;
    NSArray * _cornerViews;
    UIView * _darkeningView;
    UIImageView * _iconImageView;
    UILabel * _lastGoalLabel;
    NLActivityPickerCellLayoutCache * _layoutCache;
    UILabel * _paceLabel;
    double  _screenScale;
    UIImageView * _topLeftCornerView;
    UIImageView * _topRightCornerView;
    bool  _useRoundedCornerMask;
}

@property (nonatomic, retain) UILabel *activityTypeLabel;
@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) UIImageView *bottomLeftCornerView;
@property (nonatomic, retain) UIImageView *bottomRightCornerView;
@property (nonatomic, retain) UIButton *configButton;
@property (nonatomic, copy) id /* block */ configurationButtonTappedHandler;
@property (nonatomic, retain) NSArray *cornerViews;
@property (nonatomic, retain) UIView *darkeningView;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UILabel *lastGoalLabel;
@property (nonatomic, retain) NLActivityPickerCellLayoutCache *layoutCache;
@property (nonatomic, retain) UILabel *paceLabel;
@property (nonatomic) double screenScale;
@property (nonatomic, retain) UIImageView *topLeftCornerView;
@property (nonatomic, retain) UIImageView *topRightCornerView;
@property (nonatomic) bool useRoundedCornerMask;

+ (id)_workoutTypeLabelAttributes:(id)arg1;
+ (double)heightForCellWithWidth:(double)arg1 activityType:(id)arg2 activityString:(id)arg3;

- (void).cxx_destruct;
- (bool)_allowResizeDuringScrolling;
- (id)_cellBackgroundColor;
- (bool)_hasConfigurationButton;
- (void)_updateAlphaForState;
- (bool)_useOpaqueCornerImages;
- (id)activityTypeLabel;
- (void)animateForQuickStartWithDuration:(double)arg1 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (id)backgroundImageView;
- (id)bottomLeftCornerView;
- (id)bottomRightCornerView;
- (id)configButton;
- (void)configButtonTapped:(id)arg1;
- (id /* block */)configurationButtonTappedHandler;
- (id)cornerViews;
- (id)darkeningView;
- (id)deepCopy;
- (id)iconImageView;
- (id)iconImageViewCopy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastGoalLabel;
- (id)layoutCache;
- (void)layoutSubviews;
- (id)paceLabel;
- (void)prepareForReuse;
- (double)screenScale;
- (void)setActivityTypeLabel:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setBottomLeftCornerView:(id)arg1;
- (void)setBottomRightCornerView:(id)arg1;
- (void)setConfigButton:(id)arg1;
- (void)setConfigurationButtonTappedHandler:(id /* block */)arg1;
- (void)setCornerViews:(id)arg1;
- (void)setDarkeningView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLastGoalLabel:(id)arg1;
- (void)setLayoutCache:(id)arg1;
- (void)setPaceLabel:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTopLeftCornerView:(id)arg1;
- (void)setTopRightCornerView:(id)arg1;
- (void)setUseRoundedCornerMask:(bool)arg1;
- (id)topLeftCornerView;
- (id)topRightCornerView;
- (bool)useRoundedCornerMask;

@end
