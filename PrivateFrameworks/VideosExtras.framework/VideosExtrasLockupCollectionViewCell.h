/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasLockupCollectionViewCell : UICollectionViewCell <VideosExtrasCarouselCollectionViewCell> {
    bool  _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    NSLayoutConstraint * _artworkContainerHeightConstraint;
    VideosExtrasConstrainedArtworkContainerView * _artworkContainerView;
    NSLayoutConstraint * _artworkContainerWidthConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    NSLayoutConstraint * _descriptionBaselineConstraint;
    UILabel * _descriptionLabel;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext * _interactiveTransitionSourceContext;
    unsigned long long  _itemIndex;
    IKLockupElement * _lockup;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    NSLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _subtitleLabel;
    UIView * _textContainerView;
    UILabel * _titleLabel;
    NSString * _zoomingImageTransitionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) IKLockupElement *lockup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePinchGesture:(id)arg1;
- (id)descriptionText;
- (id)descriptionTextStyle;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)itemIndex;
- (id)lockup;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareForReuse;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(bool)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setLockup:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (void)setThumbnailMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnailOverlayImage:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (id)subtitleText;
- (id)subtitleTextStyle;
- (id)thumbnailImage;
- (struct CGSize { double x1; double x2; })thumbnailMaxSize;
- (id)titleText;
- (id)titleTextStyle;
- (void)updateConstraints;

@end
