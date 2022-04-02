/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamImageQuadEditViewController : UIViewController <DCUnsavedDataDelegate, ICDocCamImageQuadEditOverlayDelegate, UIScrollViewDelegate> {
    ICDocCamImageQuadEditImageView * _backgroundImageView;
    UIView * _buttonContainer;
    NSLayoutConstraint * _buttonContainerHeightConstraint;
    UIButton * _cancelButton;
    id /* block */  _completionHandler;
    bool  _didAdjustQuad;
    bool  _didPressSave;
    UIImage * _image;
    ICDocCamImageQuadEditImageView * _imageView;
    bool  _inCaptureMode;
    ICDocCamImageQuad * _initialQuad;
    bool  _invisibleButtonContainer;
    UIColor * _knobColor;
    double  _knobHeight;
    long long  _orientation;
    ICDocCamImageQuadEditOverlay * _overlay;
    CAShapeLayer * _overlayMask;
    UIBezierPath * _overlayMaskPath;
    UIView * _placard;
    ICDocCamImageQuad * _quad;
    UIButton * _saveButton;
    <DCScanDataDelegate> * _scanDataDelegate;
    UIScrollView * _scrollView;
    bool  _shouldAdjustForApectFitIfNecessary;
    bool  _showImageAsAspectFit;
    NSNumber * _startOrientationIsPortrait;
    UILabel * _userPromptLabel;
}

@property (nonatomic, retain) ICDocCamImageQuadEditImageView *backgroundImageView;
@property (nonatomic) UIView *buttonContainer;
@property (nonatomic) NSLayoutConstraint *buttonContainerHeightConstraint;
@property (nonatomic) UIButton *cancelButton;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAdjustQuad;
@property (nonatomic) bool didPressSave;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) ICDocCamImageQuadEditImageView *imageView;
@property (nonatomic) bool inCaptureMode;
@property (nonatomic, retain) ICDocCamImageQuad *initialQuad;
@property (nonatomic) bool invisibleButtonContainer;
@property (nonatomic, readonly) UIColor *knobColor;
@property (nonatomic, readonly) double knobHeight;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) ICDocCamImageQuadEditOverlay *overlay;
@property (nonatomic, retain) CAShapeLayer *overlayMask;
@property (nonatomic, retain) UIBezierPath *overlayMaskPath;
@property (nonatomic) UIView *placard;
@property (nonatomic, retain) ICDocCamImageQuad *quad;
@property (nonatomic) UIButton *saveButton;
@property (nonatomic, readonly) <DCScanDataDelegate> *scanDataDelegate;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) bool shouldAdjustForApectFitIfNecessary;
@property (nonatomic) bool showImageAsAspectFit;
@property (nonatomic, retain) NSNumber *startOrientationIsPortrait;
@property (readonly) Class superclass;
@property (nonatomic) UILabel *userPromptLabel;

- (void).cxx_destruct;
- (id)adjustedQuad;
- (void)applicationWillResignActive:(id)arg1;
- (id)backgroundImageView;
- (id)buttonContainer;
- (id)buttonContainerHeightConstraint;
- (id)cancelButton;
- (void)cancelButtonPressed:(id)arg1;
- (void)centerAndScaleImageInScrollView;
- (id /* block */)completionHandler;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (double)currentZoomFactorForOverlay;
- (void)dealloc;
- (bool)didAdjustQuad;
- (bool)didPressSave;
- (id)finalQuad;
- (id)finalQuadFromOverlay;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameInOverlayCoordinates;
- (id)imageView;
- (bool)inCaptureMode;
- (id)initWithImage:(id)arg1 quad:(id)arg2 scanDataDelegate:(id)arg3 orientation:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)initialQuad;
- (bool)invisibleButtonContainer;
- (id)knobColor;
- (double)knobHeight;
- (long long)orientation;
- (id)overlay;
- (void)overlayDidLayout:(id)arg1;
- (id)overlayMask;
- (id)overlayMaskPath;
- (id)placard;
- (bool)prefersStatusBarHidden;
- (void)prepareForDismissal;
- (id)quad;
- (id)quadForOverlay;
- (id)quadForOverlay:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectAvailableForDefaultRect;
- (id)saveButton;
- (void)saveButtonPressed:(id)arg1;
- (id)scanDataDelegate;
- (void)scanWasDeleted:(id)arg1;
- (id)scrollView;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)selectedKnobDidChange:(id)arg1;
- (void)selectedKnobDidPanToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setButtonContainerHeightConstraint:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDidAdjustQuad:(bool)arg1;
- (void)setDidPressSave:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setInCaptureMode:(bool)arg1;
- (void)setInitialQuad:(id)arg1;
- (void)setInvisibleButtonContainer:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOverlay:(id)arg1;
- (void)setOverlayMask:(id)arg1;
- (void)setOverlayMaskPath:(id)arg1;
- (void)setPlacard:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setShouldAdjustForApectFitIfNecessary:(bool)arg1;
- (void)setShowImageAsAspectFit:(bool)arg1;
- (void)setStartOrientationIsPortrait:(id)arg1;
- (void)setUpImageView;
- (void)setUserPromptLabel:(id)arg1;
- (void)setupAccessibility;
- (bool)shouldAdjustForApectFitIfNecessary;
- (bool)showImageAsAspectFit;
- (id)startOrientationIsPortrait;
- (id)uiInitialQuadForOverlay:(id)arg1;
- (id)uiQuadForOverlay:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unitImageRectForOverlayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateButtonTitles;
- (void)updateFonts;
- (void)updateOverlayScrimMask;
- (void)updateToAspectFitIfNecessary;
- (id)userPromptLabel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
