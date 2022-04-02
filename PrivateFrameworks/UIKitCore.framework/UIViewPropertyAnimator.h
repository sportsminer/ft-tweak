/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewPropertyAnimator : NSObject <NSCopying, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, _UIBasicAnimationFactory> {
    bool  _addedPacingAnimation;
    _UICompoundObjectMap * _additiveOffsetsForAnimationKeysMap;
    NSMutableDictionary * _animationDescriptionMap;
    long long  _animationState;
    NSMutableArray * _animations;
    double  _baseDuration;
    _UIAppCACommitFuture * _caContinuationCommitFuture;
    NSMutableArray * _completions;
    _UICompoundObjectMap * _continuedWithSpringForAnimationKeyMap;
    double  _delay;
    double  _drag;
    long long  _finishingPosition;
    double  _fractionComplete;
    double  _fractionCompleteWhenContinued;
    bool  _hasFinalized;
    double  _internalDuration;
    bool  _interruptible;
    bool  _introspectable;
    bool  _manualHitTestingEnabled;
    unsigned long long  _options;
    bool  _optionsAreExplicit;
    _UICompoundObjectMap * _originalFromValueMap;
    _UICompoundObjectMap * _originalToValueMap;
    UIViewPropertyAnimator * _outerAnimator;
    NSString * _pacingAnimationKey;
    bool  _pausedAsSpring;
    bool  _pausedOnCompletion;
    bool  _pausesOnCompletion;
    bool  _reversed;
    bool  _running;
    bool  _scrubsLinearly;
    bool  _starting;
    CAMediaTimingFunction * _timingFunctionPriorToPause;
    CAMediaTimingFunction * _timingFunctionWhenPaused;
    <UITimingCurveProvider> * _timingParameters;
    <UITimingCurveProvider> * _timingProviderWhenContinued;
    NSString * _trackingDescription;
    NSUUID * _trackingIdentifier;
    UIViewPropertyAnimatorTrackingState * _trackingState;
    bool  _useCoreAnimation;
    bool  _userInteractionEnabled;
    UIViewAnimationState * _viewAnimationState;
}

@property (getter=_animationDescriptionMap, setter=setAnimationDescriptionMap:, nonatomic, retain) NSMutableDictionary *animationDescriptionMap;
@property (nonatomic, readonly) NSArray *animationDescriptions;
@property (getter=_animationState, setter=_setAnimationState:, nonatomic) long long animationState;
@property (getter=_animations, setter=_setAnimations:, nonatomic, retain) NSMutableArray *animations;
@property (getter=_completions, setter=_setCompletions:, nonatomic, retain) NSMutableArray *completions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=_finishingPosition, setter=_setFinishingPosition:, nonatomic) long long finishingPosition;
@property (nonatomic) double fractionComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic) double internalDuration;
@property (getter=isInterruptible, nonatomic) bool interruptible;
@property (getter=isIntrospectable, nonatomic) bool introspectable;
@property (getter=isManualHitTestingEnabled, nonatomic) bool manualHitTestingEnabled;
@property (getter=_options, setter=_setOptions:, nonatomic) unsigned long long options;
@property (nonatomic) double pacedFractionComplete;
@property (getter=_isPausedOnCompletion, setter=_setPausedOnCompletion:, nonatomic) bool pausedOnCompletion;
@property (nonatomic) bool pausesOnCompletion;
@property (getter=isReversed, nonatomic) bool reversed;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) bool scrubsLinearly;
@property (getter=_isStarting, setter=_setStarting:, nonatomic) bool starting;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (setter=_setTimingParameters:, nonatomic, copy) <UITimingCurveProvider> *timingParameters;
@property (getter=_trackingIdentifier, setter=_setTrackingIdentifier:, nonatomic, retain) NSUUID *trackingIdentifier;
@property (nonatomic) double unitDuration;
@property (nonatomic, readonly) bool useCoreAnimation;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (getter=_viewAnimationState, setter=_setViewAnimationState:, nonatomic, retain) UIViewAnimationState *viewAnimationState;

+ (id /* block */)_animationBlockForTrackingAnimation:(id)arg1 animator:(id)arg2 trackingSetup:(id /* block */)arg3;
+ (id)_animatorForTrackedAnimationsUUID:(id)arg1;
+ (id)_animatorWithTimingAttributesMatchingAnimation:(id)arg1 forLayer:(id)arg2 wasReused:(bool*)arg3;
+ (id)_animatorsForTrackedAnimationsUUID:(id)arg1;
+ (bool)_canEnableTrackingAnimationsWithAnimators;
+ (bool)_containsAnimatorForTrackedAnimationsUUID:(id)arg1;
+ (id)_currentPropertyAnimator;
+ (id)_currentTrackedAnimationsState;
+ (id)_currentTrackedAnimationsUUID;
+ (double)_delayForAnimation:(id)arg1 forLayer:(id)arg2;
+ (void)_finishTrackingAnimations;
+ (id)_getPropertyAnimationForState:(id)arg1;
+ (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2 forAnimatorWithTrackingIdentifier:(id)arg3;
+ (id)_performWhileTrackingAnimations:(id /* block */)arg1;
+ (id)_propertyAnimatorWithUUID:(id)arg1;
+ (void)_removeReferenceToActivePropertyAnimator:(id)arg1;
+ (void)_removeReferenceToPropertyAnimatorWithTrackingIdentifier:(id)arg1;
+ (void)_removeTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;
+ (void)_saveReferenceToActivePropertyAnimator:(id)arg1;
+ (void)_saveReferenceToPropertyAnimator:(id)arg1;
+ (void)_saveTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;
+ (void)_setTrackedAnimationsOptimizationsEnabled:(bool)arg1;
+ (void)_setTrackedAnimationsScrubLinearly:(bool)arg1;
+ (void)_setTrackedAnimationsStartPaused:(bool)arg1;
+ (void)_setTrackedAnimationsUserInteractionEnabled:(bool)arg1;
+ (id)_startTrackingAnimations;
+ (id)_trackAdditiveAnimationWithAnimator:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 forLayer:(id)arg5;
+ (id)_trackAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forAnimationKey:(id)arg3 trackingSetup:(id /* block */)arg4;
+ (id)_trackNonAdditiveAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
+ (bool)_trackedAnimationsOptimizationsEnabled;
+ (bool)_trackedAnimationsScrubLinearly;
+ (bool)_trackedAnimationsStartPaused;
+ (bool)_trackedAnimationsUserInteractionEnabled;
+ (bool)_trackingAnimationsCurrentlyEnabled;
+ (void)animator:(id)arg1 isObserving:(id)arg2;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)observedsOfAnimatorWithTrackingId:(id)arg1;
+ (void)removeObserved:(id)arg1 forObservingAnimatorWithId:(id)arg2;
+ (id)runningPropertyAnimatorWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (bool)_addedPacingAnimation;
- (double)_additiveOffsetForKey:(id)arg1 inLayer:(id)arg2;
- (id)_animationDescriptionForView:(id)arg1;
- (id)_animationDescriptionMap;
- (long long)_animationState;
- (id)_animations;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_clearAnimationState;
- (id)_completions;
- (bool)_computeDisplacementFractionComplete:(id)arg1 withKey:(id)arg2 inLayer:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 fractionComplete:(double*)arg6 displacement:(double*)arg7;
- (bool)_computeSmallestDisplacementFractionComplete:(double*)arg1;
- (void)_continueWithTimingParameters:(id)arg1 duration:(double)arg2;
- (id)_currentTimingFunction;
- (double)_drag;
- (double)_dragAdjustedDuration;
- (double)_effectiveAdditiveOffsetForKey:(id)arg1 inLayer:(id)arg2;
- (void)_executeCompletionHandlerWithFinalPosition:(long long)arg1;
- (id)_explicitAnimationUpdateForProperty:(id)arg1 forView:(id)arg2 withValue:(id)arg3;
- (long long)_finishingPosition;
- (bool)_generatePointValueSpringAnimationsForKeyPath:(id)arg1;
- (bool)_isActive;
- (bool)_isPausedOnCompletion;
- (bool)_isStarting;
- (id)_newAnimationUpdateForProperty:(id)arg1 implicit:(bool)arg2 additive:(bool)arg3;
- (void)_notePropertyAnimationUpdate:(id)arg1 forView:(id)arg2;
- (unsigned long long)_options;
- (unsigned long long)_optionsForNestedLegacyAnimation:(unsigned long long)arg1;
- (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2;
- (id)_originalToValueForKey:(id)arg1 inLayer:(id)arg2;
- (double)_pauseAnimation:(id)arg1;
- (bool)_pausesOnCompletion;
- (id)_previousAnimatorForKeyPath:(id)arg1 inLayer:(id)arg2 compoundKeys:(id*)arg3;
- (void)_restoreLayerValueIfReversed:(id)arg1 animation:(id)arg2 toValue:(id)arg3;
- (void)_runAnimations;
- (void)_runCompletions:(long long)arg1 finished:(bool)arg2;
- (void)_scheduleCACommitFuture;
- (void)_setAddedPacingAnimation:(bool)arg1 animationKey:(id)arg2;
- (void)_setAdditiveOffset:(double)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setAnimationState:(long long)arg1;
- (void)_setAnimations:(id)arg1;
- (void)_setCompletions:(id)arg1;
- (bool)_setContinuedWithNewSpring:(bool)arg1 forAnimationKey:(id)arg2 forLayer:(id)arg3;
- (void)_setFinishingPosition:(long long)arg1;
- (void)_setKVOCompliantReversed:(bool)arg1;
- (void)_setKVOCompliantRunning:(bool)arg1;
- (void)_setKVOCompliantState:(long long)arg1;
- (void)_setKVOCompliantState:(long long)arg1 fromState:(long long)arg2;
- (void)_setOptions:(unsigned long long)arg1;
- (void)_setOriginalFromValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setOriginalToValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setPausedOnCompletion:(bool)arg1;
- (void)_setPausesOnCompletion:(bool)arg1;
- (void)_setStarting:(bool)arg1;
- (void)_setTimingParameters:(id)arg1;
- (void)_setTrackingIdentifier:(id)arg1;
- (void)_setViewAnimationState:(id)arg1;
- (void)_setupAnimationTracking:(id /* block */)arg1;
- (void)_setupAssociatedViewAnimationState:(id)arg1;
- (void)_setupWithDuration:(double)arg1 timingParameters:(id)arg2 animations:(id /* block */)arg3;
- (bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_springAnimationForXComponent:(id*)arg1 forYComponent:(id*)arg2;
- (id)_stateAsString;
- (id)_trackingIdentifier;
- (void)_untrackPropertyAnimationsForKeys:(id*)arg1 inLayer:(id)arg2;
- (id)_viewAnimationState;
- (bool)_wasContinuedWithNewSpringForAnimationKey:(id)arg1 forLayer:(id)arg2;
- (void)addAnimations:(id /* block */)arg1;
- (void)addAnimations:(id /* block */)arg1 delayFactor:(double)arg2;
- (void)addAnimations:(id /* block */)arg1 delayFactor:(double)arg2 durationFactor:(double)arg3;
- (void)addCompletion:(id /* block */)arg1;
- (id)animationDescriptions;
- (id)animationsDescription;
- (void)clearAnimationDescriptions;
- (void)continueAnimation;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delay;
- (id)description;
- (double)duration;
- (void)finalizeStoppedAnimationWithPosition:(long long)arg1;
- (void)finishAnimationAtPosition:(long long)arg1;
- (double)fractionComplete;
- (id)init;
- (id)initWithDuration:(double)arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3 animations:(id /* block */)arg4;
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 animations:(id /* block */)arg3;
- (id)initWithDuration:(double)arg1 dampingRatio:(double)arg2 animations:(id /* block */)arg3;
- (id)initWithDuration:(double)arg1 timingParameters:(id)arg2;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector { double x1; double x2; })arg4 animations:(id /* block */)arg5;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (double)internalDuration;
- (bool)isInterruptible;
- (bool)isIntrospectable;
- (bool)isManualHitTestingEnabled;
- (bool)isReversed;
- (bool)isRunning;
- (bool)isUserInteractionEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)pacedFractionComplete;
- (void)pauseAnimation;
- (void)pauseAnimationTransiently;
- (bool)pausesOnCompletion;
- (bool)scrubsLinearly;
- (void)setAnimationDescriptionMap:(id)arg1;
- (void)setFractionComplete:(double)arg1;
- (void)setInternalDuration:(double)arg1;
- (void)setInterruptible:(bool)arg1;
- (void)setIntrospectable:(bool)arg1;
- (void)setManualHitTestingEnabled:(bool)arg1;
- (void)setPacedFractionComplete:(double)arg1;
- (void)setPausesOnCompletion:(bool)arg1;
- (void)setReversed:(bool)arg1;
- (void)setScrubsLinearly:(bool)arg1;
- (void)setUnitDuration:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimationAsPaused:(bool)arg1;
- (long long)state;
- (void)stopAnimation:(bool)arg1;
- (id)timingFunctionForPause;
- (id)timingParameters;
- (double)unitDuration;
- (bool)useCoreAnimation;

@end
