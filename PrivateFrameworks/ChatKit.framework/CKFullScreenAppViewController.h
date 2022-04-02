/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenAppViewController : UIViewController <CKAppGrabberViewDelegate, CKBrowserViewControllerProtocol, CKFullScreenAppNavbarManagerDelegate, CKFullScreenAppViewControllerProtocol, UIGestureRecognizerDelegate> {
    bool  _addsVerticalPaddingForStatusBar;
    struct CGPoint { 
        double x; 
        double y; 
    }  _collapseGestureStartingLocation;
    CKImmediatePanGestureRecognizer * _collapseGestureTracker;
    bool  _collapseInteractionDidMove;
    UIViewPropertyAnimator * _collapsePropertyAnimator;
    UIView * _contentView;
    UIViewController<CKBrowserViewControllerProtocol> * _contentViewController;
    CKConversation * _conversation;
    <CKFullScreenAppViewControllerDelegate> * _delegate;
    CKDismissView * _dismissView;
    bool  _fadesOutDuringStickerDrag;
    CKAppGrabberView * _grabberView;
    bool  _inDragAndDrop;
    bool  _inTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBrowserFrame;
    long long  _lastKnownDeviceOrientation;
    CKFullScreenAppNavbarManager * _navbarManager;
    bool  _shouldDoCollapseInteraction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetBrowserFrame;
    UILongPressGestureRecognizer * _touchTracker;
    unsigned long long  _transitionDirection;
    bool  _usesDimmingView;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic) bool addsVerticalPaddingForStatusBar;
@property (nonatomic, readonly) unsigned long long badgeValue;
@property (nonatomic, readonly) IMBalloonPlugin *balloonPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic, readonly) CKBrowserDragManager *browserDragManager;
@property (nonatomic, readonly) long long browserPresentationStyle;
@property (nonatomic, readonly) bool canReplaceDataSource;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *contentViewController;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, retain) NSData *conversationEngramID;
@property (nonatomic) NSString *conversationID;
@property (nonatomic) long long currentBrowserConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKFullScreenAppViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDismissView *dismissView;
@property (nonatomic) bool fadesOutDuringStickerDrag;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } horizontalSwipeExclusionRect;
@property (nonatomic) bool inDragAndDrop;
@property (nonatomic, readonly) bool inExpandedPresentation;
@property (nonatomic, readonly) bool inFullScreenModalPresentation;
@property (nonatomic) bool inTransition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialBrowserFrame;
@property (nonatomic) bool isPrimaryViewController;
@property (nonatomic) bool isiMessage;
@property (nonatomic) long long lastKnownDeviceOrientation;
@property (nonatomic, readonly) bool mayBeKeptInViewHierarchy;
@property (nonatomic, retain) CKFullScreenAppNavbarManager *navbarManager;
@property (nonatomic, readonly) long long parentModalPresentationStyle;
@property (nonatomic, readonly) <UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (nonatomic, retain) UIViewController *presentationViewController;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, readonly) UIViewController *remoteViewController;
@property (nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (nonatomic, retain) NSString *sender;
@property (nonatomic, readonly) bool shouldShowChatChrome;
@property (nonatomic, readonly) bool shouldSuppressEntryView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsQuickView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetBrowserFrame;
@property (nonatomic) unsigned long long transitionDirection;
@property (nonatomic) bool usesDimmingView;
@property (nonatomic, readonly) bool wantsDarkUI;
@property (nonatomic, readonly) bool wantsOpaqueUI;
@property (nonatomic, readonly) bool wasExpandedPresentation;

- (void).cxx_destruct;
- (bool)_currentPluginIsAppManager;
- (bool)_currentPluginIsAppStore;
- (bool)_currentPluginIsJellyfish;
- (void)_dismiss:(id)arg1;
- (void)_dragBegan:(id)arg1;
- (void)_dragEnded:(id)arg1;
- (bool)_shouldShowDimmingView;
- (void)_updateDimmingViewAlpha;
- (void)addNewGrabberView;
- (bool)addsVerticalPaddingForStatusBar;
- (void)animateBrowserViewFromSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interactive:(bool)arg2 grabberView:(id)arg3 completion:(id /* block */)arg4;
- (void)animateBrowserViewToTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 grabberView:(id)arg2 completion:(id /* block */)arg3;
- (void)appGrabberViewCloseButtonTapped:(id)arg1;
- (id)balloonPlugin;
- (id)balloonPluginDataSource;
- (long long)browserPresentationStyle;
- (bool)canBecomeFirstResponder;
- (void)collapse;
- (void)collapse:(id)arg1;
- (void)collapseGestureTouchMoved:(id)arg1;
- (double)collapseTargetOriginY;
- (id)contentView;
- (id)contentViewController;
- (id)conversation;
- (id)conversationID;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)dismissView;
- (bool)fadesOutDuringStickerDrag;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalContentViewFrame;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideDimmingView;
- (bool)inDragAndDrop;
- (bool)inExpandedPresentation;
- (bool)inFullScreenModalPresentation;
- (bool)inTransition;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialBrowserFrame;
- (id)inputAccessoryView;
- (bool)isLoaded;
- (bool)isiMessage;
- (long long)lastKnownDeviceOrientation;
- (void)loadView;
- (bool)mayBeKeptInViewHierarchy;
- (id)navbarManager;
- (void)navbarManagerDidDismissAllMessages:(id)arg1;
- (void)navbarManagerDidReceiveMessage:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)presentationViewController;
- (void)reverseAndCleanupCollapseAnimator;
- (id)sendDelegate;
- (void)setAddsVerticalPaddingForStatusBar:(bool)arg1;
- (void)setBalloonPluginDataSource:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissView:(id)arg1;
- (void)setFadesOutDuringStickerDrag:(bool)arg1;
- (void)setGrabberView:(id)arg1;
- (void)setInDragAndDrop:(bool)arg1;
- (void)setInTransition:(bool)arg1;
- (void)setInitialBrowserFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setLastKnownDeviceOrientation:(long long)arg1;
- (void)setNavbarManager:(id)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (void)setTargetBrowserFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionDirection:(unsigned long long)arg1;
- (void)setUsesDimmingView:(bool)arg1;
- (void)setupPausedCollapseAnimatorIfNeeded;
- (bool)shouldAutorotate;
- (bool)shouldShowChatChrome;
- (bool)shouldSuppressEntryView;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsQuickView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetBrowserFrame;
- (double)topAreaHeight;
- (void)touchTrackerRecognized:(id)arg1;
- (unsigned long long)transitionDirection;
- (bool)usesDimmingView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;
- (void)willMoveToParentViewController:(id)arg1;

@end
