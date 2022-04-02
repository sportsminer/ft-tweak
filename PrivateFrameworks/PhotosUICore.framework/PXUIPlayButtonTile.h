/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIPlayButtonTile : NSObject <PXChangeObserver, PXMutableUIPlayButtonTile, PXUIViewBasicTile> {
    bool  __animatingGeometry;
    unsigned long long  __animationCount;
    UIImage * __backgroundImage;
    long long  __style;
    bool  _allowsBackdropStatisticsSuppression;
    <PXDisplayAsset> * _assetForImageExtraction;
    <PXUIPlayButtonTileDelegate> * _delegate;
    UIView<PXVideoOverlayButton> * _hifiPlayButtonView;
    PXImageExtraction * _imageExtraction;
    PXImageRequester * _imageRequester;
    struct CGPoint { 
        double x; 
        double y; 
    }  _imageViewportLocation;
    bool  _isPerformingChanges;
    struct { 
        bool backgroundImage; 
        bool playButton; 
    }  _needsUpdate;
    UIImageView * _playButtonBackgroundImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _playButtonSize;
    long long  _playButtonStyle;
    UIView<PXVideoOverlayButton> * _playButtonView;
    UIView * _view;
}

@property (getter=_isAnimatingGeometry, setter=_setAnimatingGeometry:, nonatomic) bool _animatingGeometry;
@property (setter=_setAnimationCount:, nonatomic) unsigned long long _animationCount;
@property (setter=_setBackgroundImage:, nonatomic, retain) UIImage *_backgroundImage;
@property (setter=_setStyle:, nonatomic) long long _style;
@property (nonatomic, readonly) bool allowsBackdropStatisticsSuppression;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXUIPlayButtonTileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXImageRequester *imageRequester;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } imageViewportLocation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } playButtonSize;
@property (nonatomic, readonly) long long playButtonStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (struct CGSize { double x1; double x2; })preferredSize;

- (void).cxx_destruct;
- (unsigned long long)_animationCount;
- (id)_backgroundImage;
- (void)_handleExtractionResult:(id)arg1 isPlaceholder:(bool)arg2 extraction:(id)arg3;
- (void)_invalidateBackgroundImage;
- (void)_invalidatePlayButton;
- (bool)_isAnimatingGeometry;
- (bool)_needsUpdate;
- (void)_resetHifiPlayButton;
- (void)_setAnimatingGeometry:(bool)arg1;
- (void)_setAnimationCount:(unsigned long long)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setStyle:(long long)arg1;
- (long long)_style;
- (void)_updateBackgroundImageIfNeeded;
- (void)_updateIfNeeded;
- (void)_updatePlayButtonViewIfNeeded;
- (bool)allowsBackdropStatisticsSuppression;
- (void)becomeReusable;
- (id)delegate;
- (void)didAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (void)didTapButton:(id)arg1;
- (id)imageRequester;
- (struct CGPoint { double x1; double x2; })imageViewportLocation;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })playButtonSize;
- (long long)playButtonStyle;
- (void)prepareForReuse;
- (void)setAllowsBackdropStatisticsSuppression:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageRequester:(id)arg1;
- (void)setImageViewportLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPlayButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlayButtonStyle:(long long)arg1;
- (id)view;
- (void)willAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;

@end
