/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateTitleCell : PSTableCell {
    PSSoftwareUpdateAnimatedIcon * _animatedGearView;
    bool  _animatingGearView;
    UIImageView * _gearBackgroundImageView;
    UIProgressView * _progressBar;
    int  _progressStyle;
    PSWebContainerView * _releaseNotesSummaryView;
    UILabel * _updateStatusLabel;
    NSLayoutConstraint * _updateStatusLabelVerticalConstraint;
}

@property (nonatomic, readonly) UIImage *gearBackgroundImage;
@property (nonatomic, retain) UIImageView *gearBackgroundImageView;
@property (nonatomic, readonly) UIProgressView *progressBar;
@property (nonatomic) int progressDisplayStyle;
@property (nonatomic, readonly) PSWebContainerView *releaseNotesSummaryView;
@property (nonatomic, readonly) UILabel *updateStatusLabel;
@property (nonatomic, retain) NSLayoutConstraint *updateStatusLabelVerticalConstraint;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)configureImageView;
- (void)configureProgressBar:(bool)arg1;
- (void)configurePublisherLabel:(bool)arg1;
- (void)configureReleaseNotesSummaryView:(bool)arg1;
- (void)configureUpdateNameLabel:(bool)arg1;
- (void)configureUpdateStatusLabel:(bool)arg1;
- (void)createGearIconConstraints;
- (id)gearBackgroundImage;
- (id)gearBackgroundImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)newGearBackgroundImageView;
- (id)newProgressBar;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)newUpdateStatusLabel;
- (double)preferredHeightWithTable:(id)arg1;
- (id)progressBar;
- (int)progressDisplayStyle;
- (id)releaseNotesSummaryView;
- (void)setAnimatingGearView:(bool)arg1;
- (void)setGearBackgroundImageView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressDisplayStyle:(int)arg1;
- (void)setPublisherText:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setUpdateName:(id)arg1;
- (void)setUpdateStatusLabelVerticalConstraint:(id)arg1;
- (void)setupViews;
- (void)updateConstraints;
- (void)updateProgressTintColor;
- (id)updateStatusLabel;
- (id)updateStatusLabelVerticalConstraint;

@end