/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UIInputViewAnimationHost, UIInputViewSetPlacementDelegate, UIInputViewSetPlacementOwner, UISplitKeyboardSource, _UIRemoteKeyboardDistributedViewSource, _UIRemoteKeyboardViewSource, _UITextEffectsSceneObserver> {
    NSMutableDictionary * _accessoryBackdropViewEdgeConstraints;
    NSMutableDictionary * _accessoryViewEdgeConstraints;
    NSLayoutConstraint * _accessoryViewHeightConstraint;
    NSMutableArray * _animationStyleStack;
    <UIInputViewSetPlacementApplicator> * _applicator;
    NSMutableDictionary * _assistantBackdropViewEdgeConstraints;
    NSMutableDictionary * _assistantViewEdgeConstraints;
    NSLayoutConstraint * _assistantViewHeightConstraint;
    double  _backdropHeightDelta;
    UIScrollToDismissSupport * _cachedScrollDismissController;
    UISplitKeyboardSupport * _cachedSplitKeyboardController;
    <_UIRemoteKeyboardControllerDelegate> * _controllerDelegate;
    UIInputViewPlacementTransition * _currentTransition;
    bool  _didOverridePreLayoutHostViewFrame;
    bool  _didPostLayoutNotification;
    bool  _disablePlacementChanges;
    UISystemKeyboardDockController * _dockViewController;
    bool  _dontDismissKeyboardOnScrolling;
    bool  _dontDismissReachability;
    NSLayoutConstraint * _emptyHeightConstraint;
    int  _hiddenCount;
    UIView * _hostView;
    bool  _inhibitingHiding;
    UIKBInputBackdropView * _inputAccessoryBackdropView;
    UIInputViewController * _inputAccessoryViewController;
    UIKBInputBackdropView * _inputAssistantBackdropView;
    UIInputViewController * _inputAssistantViewController;
    UIView * _inputBackdropBackgroundView;
    NSMutableDictionary * _inputBackdropBackgroundViewEdgeConstraints;
    UIKBInputBackdropView * _inputBackdropView;
    NSMutableDictionary * _inputBackdropViewEdgeConstraints;
    NSMutableDictionary * _inputDockViewEdgeConstraints;
    UIInputViewController * _inputViewController;
    NSMutableDictionary * _inputViewEdgeConstraints;
    NSLayoutConstraint * _inputViewHeightConstraint;
    UIInputViewSet * _inputViewSet;
    SEL  _interactiveTransitionCleanupSelector;
    bool  _isChangingInputViews;
    bool  _isChangingPlacement;
    bool  _isSnapshotting;
    UIInputViewSetNotificationInfo * _keyboardHeightChangeNotificationInfo;
    NSDate * _keyboardShowTimestamp;
    NSString * _lastKeyboardID;
    id /* block */  _pendingTransitionActivity;
    UIInputViewSetPlacement * _placement;
    UIInputViewSetNotificationInfo * _postRotationInputViewNotificationInfo;
    UIInputViewSet * _postRotationInputViewSet;
    UIInputViewSetPlacement * _postRotationPlacement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preLayoutHostViewFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _preRotationInputAccessoryViewSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preRotationInputAccessoryViewTransform;
    struct CGSize { 
        double width; 
        double height; 
    }  _preRotationInputAssistantViewSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preRotationInputAssistantViewTransform;
    struct CGSize { 
        double width; 
        double height; 
    }  _preRotationInputViewSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preRotationInputViewTransform;
    UIView * _preRotationSnapshot;
    bool  _requiresConstraintUpdate;
    NSArray * _rootViewConstraints;
    UIInputViewSetNotificationInfo * _rotationInfo;
    unsigned long long  _rotationState;
    bool  _shouldNotifyRemoteKeyboards;
    bool  _supportsDockViewController;
    bool  _suppressUpdateVisibilityConstraints;
    int  _suppressedCallbacks;
    int  _suppressedNotifications;
    UIInputViewSetNotificationInfo * _templateNotificationInfo;
    bool  _wasOnScreen;
}

@property (nonatomic, retain) UISystemKeyboardDockController *_dockViewController;
@property (setter=setInputAccessoryBackdropView:, nonatomic, retain) UIKBInputBackdropView *_inputAccessoryBackdropView;
@property (nonatomic, readonly) UIView *_inputAccessoryView;
@property (nonatomic, retain) UIInputViewController *_inputAccessoryViewController;
@property (setter=setInputAssistantBackdropView:, nonatomic, retain) UIKBInputBackdropView *_inputAssistantBackdropView;
@property (nonatomic, readonly) UIView *_inputAssistantView;
@property (nonatomic, retain) UIInputViewController *_inputAssistantViewController;
@property (nonatomic, readonly) UIView *_inputBackdropBackgroundView;
@property (setter=setInputBackdropView:, nonatomic, retain) UIKBInputBackdropView *_inputBackdropView;
@property (nonatomic, readonly) UIView *_inputView;
@property (nonatomic, retain) UIInputViewController *_inputViewController;
@property (nonatomic, retain) NSLayoutConstraint *accessoryViewHeightConstraint;
@property (nonatomic, retain) <UIInputViewSetPlacementApplicator> *applicator;
@property (nonatomic, retain) NSLayoutConstraint *assistantViewHeightConstraint;
@property (readonly, retain) UIView *containerView;
@property (nonatomic, retain) <_UIRemoteKeyboardControllerDelegate> *controllerDelegate;
@property (nonatomic, retain) UIInputViewPlacementTransition *currentTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dontDismissKeyboardOnScrolling;
@property (nonatomic) bool dontDismissReachability;
@property (readonly) unsigned long long hash;
@property bool hideInputViewBackdrops;
@property (nonatomic, readonly) UIView *hostView;
@property (nonatomic, readonly) UIKBInputBackdropView *inputViewBackdrop;
@property (readonly) long long inputViewBackdropStyle;
@property (nonatomic, retain) NSLayoutConstraint *inputViewHeightConstraint;
@property (nonatomic, retain) UIInputViewSet *inputViewSet;
@property (getter=isInputViewsHidden, nonatomic, readonly) bool inputViewsHidden;
@property (nonatomic, readonly) bool isChangingPlacement;
@property (nonatomic, readonly) bool isOnScreenRotating;
@property (nonatomic, readonly) bool isTransitionStarted;
@property (nonatomic, readonly) bool isTransitioning;
@property (readonly) bool keyboardController;
@property (nonatomic, readonly) long long keyboardOrientation;
@property (nonatomic, retain) UIInputViewSetPlacement *placement;
@property (nonatomic, readonly, retain) UIInputViewSetPlacement *placementIgnoringRotation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } positionConstraintConstant;
@property (nonatomic, retain) UIInputViewSetNotificationInfo *postRotationInputViewNotificationInfo;
@property (nonatomic, retain) UIInputViewSet *postRotationInputViewSet;
@property (nonatomic, retain) UIInputViewSetPlacement *postRotationPlacement;
@property (nonatomic) bool shouldNotifyRemoteKeyboards;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIInputViewSetNotificationInfo *templateNotificationInfo;
@property (nonatomic, readonly, retain) UIView *view;

+ (bool)_doesOverrideLegacyFullScreenLayout;
+ (id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForOrientation:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_centerForOrientation:(long long)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (void)_collectTransitionTimeStatistics:(unsigned long long)arg1 withStart:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultInitialViewFrame;
- (id)_dockViewController;
- (void)_forcePreLayoutHostViewFrame;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (id)_inputAccessoryBackdropView;
- (id)_inputAccessoryView;
- (id)_inputAccessoryViewController;
- (id)_inputAssistantBackdropView;
- (id)_inputAssistantView;
- (id)_inputAssistantViewController;
- (id)_inputBackdropBackgroundView;
- (id)_inputBackdropView;
- (id)_inputDockView;
- (id)_inputView;
- (id)_inputViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_inputViewPadding;
- (void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(id /* block */)arg6;
- (bool)_shouldShowInputDockView;
- (bool)_subviewAutoSizesWithPredictionBar:(id)arg1;
- (bool)_subviewUsesClassicLayout:(id)arg1;
- (void)_updateBackdropViews;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(id /* block */)arg6;
- (void)_updatePlacementWithPlacement:(id)arg1;
- (bool)_useLiveRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrameInWindowForContentOverlayInsetsCalculation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_viewSafeAreaInsetsFromScene;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleInputViewFrame;
- (id)accessoryViewHeightConstraint;
- (void)addPendingActivity:(id /* block */)arg1;
- (void)animateAccessoryViewVisibility:(bool)arg1 withDuration:(double)arg2;
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(bool)arg3;
- (id)applicator;
- (id)assistantViewHeightConstraint;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(bool)arg3;
- (unsigned long long)changeToInputViewSet:(id)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(bool)arg1 layoutSubviews:(bool)arg2;
- (void)clearInputViewEdgeConstraints;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)configureDockViewController:(bool)arg1;
- (void)configureScrollDismissController:(bool)arg1;
- (void)configureSplitKeyboardController:(bool)arg1;
- (id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (id)containerView;
- (id)controllerDelegate;
- (id)currentPresentationPlacement;
- (id)currentTransition;
- (void)dealloc;
- (void)didFinishTranslation;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSnapshot;
- (void)didSuspend:(id)arg1;
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;
- (bool)dontDismissKeyboardOnScrolling;
- (bool)dontDismissReachability;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;
- (void)finishScrollViewTransition;
- (void)finishSplitTransition:(bool)arg1;
- (void)flushPendingActivities;
- (void)generateNotificationsForStart:(bool)arg1;
- (bool)hideInputViewBackdrops;
- (void)hostAppSceneBoundsChanged;
- (id)hostView;
- (void)ignoreLayoutNotifications:(id /* block */)arg1;
- (bool)inhibitRotationAnimation;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialNotificationInfo;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (id)inputSetContainerView;
- (id)inputViewBackdrop;
- (long long)inputViewBackdropStyle;
- (id)inputViewHeightConstraint;
- (id)inputViewSet;
- (bool)inputViewSetContainsView:(id)arg1;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(bool)arg2;
- (void)invalidateInputAccessoryView;
- (void)invalidateInputAssistantView;
- (void)invalidateInputView;
- (bool)isChangingPlacement;
- (bool)isInputViewsHidden;
- (bool)isOnScreen;
- (bool)isOnScreenRotating;
- (bool)isRotating;
- (bool)isSplitting;
- (bool)isTransitionStarted;
- (bool)isTransitioning;
- (bool)isTranslating;
- (bool)isUndocked;
- (bool)isViewLandscape;
- (bool)keyboardController;
- (void)keyboardHeightChangeDone;
- (long long)keyboardOrientation;
- (void)loadView;
- (bool)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)nextAnimationStyle;
- (void)performOperations:(id /* block */)arg1 withAnimationStyle:(id)arg2;
- (void)performOperations:(id /* block */)arg1 withTemplateNotificationInfo:(id)arg2;
- (void)performWithSafeTransitionFrames:(id /* block */)arg1;
- (void)performWithoutAppearanceCallbacks:(id /* block */)arg1;
- (void)performWithoutCallbacksOrNotifications:(id /* block */)arg1;
- (id)placement;
- (id)placementIgnoringRotation;
- (void)placementNeedsUpdate:(id)arg1;
- (void)popAnimationStyle;
- (struct CGPoint { double x1; double x2; })positionConstraintConstant;
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (id)postRotationInputViewNotificationInfo;
- (id)postRotationInputViewSet;
- (id)postRotationPlacement;
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postTransitionEndNotification;
- (void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2;
- (void)pushAnimationStyle:(id)arg1;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4;
- (void)registerPowerLogEvent:(bool)arg1;
- (void)resetBackdropHeight;
- (void)resetVerticalConstraint;
- (id)screenSnapshotOfView:(id)arg1;
- (void)setAccessoryViewHeightConstraint:(id)arg1;
- (void)setAccessoryViewVisible:(bool)arg1 delay:(double)arg2;
- (void)setApplicator:(id)arg1;
- (void)setAssistantViewHeightConstraint:(id)arg1;
- (void)setControllerDelegate:(id)arg1;
- (void)setCurrentTransition:(id)arg1;
- (void)setDontDismissKeyboardOnScrolling:(bool)arg1;
- (void)setDontDismissReachability:(bool)arg1;
- (void)setHideInputViewBackdrops:(bool)arg1;
- (void)setInputAccessoryBackdropView:(id)arg1;
- (void)setInputAssistantBackdropView:(id)arg1;
- (void)setInputBackdropView:(id)arg1;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
- (void)setInputViewHeightConstraint:(id)arg1;
- (void)setInputViewSet:(id)arg1;
- (void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2;
- (void)setInputViewsHidden:(bool)arg1;
- (void)setInterfaceAutorotationDisabled:(bool)arg1;
- (void)setPlacement:(id)arg1;
- (void)setPlacement:(id)arg1 completion:(id /* block */)arg2;
- (void)setPlacement:(id)arg1 quietly:(bool)arg2 animated:(bool)arg3 generateSplitNotification:(bool)arg4;
- (void)setPlacement:(id)arg1 starting:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setPlacementChangeDisabled:(bool)arg1 withPlacement:(id)arg2;
- (void)setPostRotationInputViewNotificationInfo:(id)arg1;
- (void)setPostRotationInputViewSet:(id)arg1;
- (void)setPostRotationPlacement:(id)arg1;
- (void)setRotationAwarePlacement:(id)arg1;
- (void)setShouldNotifyRemoteKeyboards:(bool)arg1;
- (void)setTemplateNotificationInfo:(id)arg1;
- (void)set_dockViewController:(id)arg1;
- (void)set_inputAccessoryViewController:(id)arg1;
- (void)set_inputAssistantViewController:(id)arg1;
- (void)set_inputViewController:(id)arg1;
- (bool)shouldNotifyRemoteKeyboards;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)syncToExistingAnimations;
- (id)templateNotificationInfo;
- (void)transferActiveNotificationInfoToInfo:(id)arg1;
- (void)transferPlacementStateToInputWindowController:(id)arg1;
- (void)transitionDidFinish:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningFrame;
- (id)transitioningView;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(bool)arg2 animated:(bool)arg3;
- (void)updateConstraintInsets;
- (void)updateForKeyplaneChangeWithContext:(id)arg1;
- (void)updateInputAssistantView:(id)arg1;
- (void)updateInputAssistantViewForInputViewSet:(id)arg1;
- (void)updateKeyboardDockViewVisibility;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)updateSupportsDockViewController;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(bool)arg2;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)updateViewSizingConstraints:(id)arg1;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForTransitionScreenSnapshot;
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewWillMoveToWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleInputViewFrame;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willBeginTranslation;
- (void)willResume:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willSnapshot;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;

@end
