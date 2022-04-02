/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    <PLViewControllerAnimatorDelegate> * _delegate;
    bool  _didPrepareForTransition;
    bool  _includePresentingViewInAnimation;
    NSPointerArray * _observers;
    bool  _presenting;
    UIView * _sourceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLViewControllerAnimatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includePresentingViewInAnimation;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (readonly) Class superclass;

+ (bool)drivesAnimation;

- (void).cxx_destruct;
- (void)_animateTransitionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_animationFactoryForLongLookPresentation:(bool)arg1;
- (bool)_isTransitionAnimated;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (void)_performTransitionWithContext:(id)arg1;
- (id)_presentedExpandedPlatterForPresentedView:(id)arg1;
- (id)_presentedViewControllerForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewControllerForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_previewInteractionPresentableViewControllerForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_sourceViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (bool)includePresentingViewInAnimation;
- (id)initForPresentation:(bool)arg1 withSourceView:(id)arg2;
- (bool)isPresenting;
- (void)performTransitionWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludePresentingViewInAnimation:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
