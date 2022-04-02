/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProductStackView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView * _buttonsRowView;
    UIView * _descriptionView;
    UIView * _initialFocusView;
    UIView * _lastFocusedView;
    IKViewElement * _stackElement;
    UIView * _titleView;
    NSArray * _viewsAboveDescription;
    NSArray * _viewsBelowDescription;
}

@property (nonatomic, retain) UIView *buttonsRowView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *descriptionView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *initialFocusView;
@property (nonatomic, retain) IKViewElement *stackElement;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic, retain) NSArray *viewsAboveDescription;
@property (nonatomic, retain) NSArray *viewsBelowDescription;

+ (id)productStackViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)buttonsRowView;
- (id)descriptionView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)initialFocusView;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)setButtonsRowView:(id)arg1;
- (void)setDescriptionView:(id)arg1;
- (void)setInitialFocusView:(id)arg1;
- (void)setStackElement:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setViewsAboveDescription:(id)arg1;
- (void)setViewsBelowDescription:(id)arg1;
- (id)stackElement;
- (id)titleView;
- (id)viewsAboveDescription;
- (id)viewsBelowDescription;

@end
