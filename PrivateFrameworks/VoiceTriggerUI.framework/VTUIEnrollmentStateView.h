/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollmentStateView : UIView <UIScrollViewDelegate> {
    _UIBackdropView * _backdropView;
    NSLayoutConstraint * _bottomFooterConstraint;
    VTUIButton * _finishEnrollmentButton;
    NSMutableArray * _horizontalPaddingConstraints;
    UIImageView * _imageView;
    UIView * _imageViewContainer;
    NSLayoutConstraint * _imageViewHeightCapConstraint;
    UILabel * _instructionLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageSize;
    UIView * _scrollContainerView;
    UIScrollView * _scrollView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    bool  _usingFallbackImage;
    NSLayoutConstraint * _videoContainerLeftConstraint;
    NSLayoutConstraint * _videoContainerRightConstraint;
    UIView * _videoContainerView;
    NSLayoutConstraint * _videoContainerWidthConstraint;
    NSURL * _videoURL;
    VTBFFOnBoardingVideoView * _videoView;
    NSMutableArray * _widthConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VTUIButton *finishEnrollmentButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (void)_positionFooter;
- (void)_restoreHeroImageSize;
- (void)_setupUI;
- (void)_updateHeroImageSize;
- (void)fadeInSubviews;
- (id)finishEnrollmentButton;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setImage:(id)arg1;
- (void)setInstructionText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (void)stopPlayingVideo;
- (bool)suppressFinishButton;
- (id)videoURL;
- (bool)viewSupportsEducationalVideo;

@end
