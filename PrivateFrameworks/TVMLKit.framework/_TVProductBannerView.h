/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProductBannerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView * _backgroundView;
    double  _height;
    UIView * _heroImageView;
    UIView * _infoListView;
    UIView * _stackView;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *heroImageView;
@property (nonatomic, retain) UIView *infoListView;
@property (nonatomic, retain) UIView *stackView;
@property (readonly) Class superclass;

+ (id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)heroImageView;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)infoListView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)setBackgroundView:(id)arg1;
- (void)setHeroImageView:(id)arg1;
- (void)setInfoListView:(id)arg1;
- (void)setStackView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;

@end
