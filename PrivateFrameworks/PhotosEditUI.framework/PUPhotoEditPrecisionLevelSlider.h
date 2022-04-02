/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditPrecisionLevelSlider : PUPhotoEditLevelSlider <PUPhotoEditPrecisionLevelContentViewDataSource> {
    PUPhotoEditPrecisionLevelContentView * _precisionSliderContentView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideIdentityIndicator;
@property (nonatomic) unsigned long long mainTickMarkInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hideIdentityIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateConversionFactors;
- (unsigned long long)mainTickMarkInterval;
- (double)precisionLevelContentViewIdentityOffset:(id)arg1;
- (id)preferredSliderContentView;
- (void)setHideIdentityIndicator:(bool)arg1;
- (void)setMainTickMarkInterval:(unsigned long long)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;

@end
