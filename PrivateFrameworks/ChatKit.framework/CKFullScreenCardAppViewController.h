/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenCardAppViewController : UIViewController <CKBrowserViewControllerProtocol, CKFullScreenAppViewControllerProtocol, UIGestureRecognizerDelegate> {
    UIView * _contentView;
    UIViewController<CKBrowserViewControllerProtocol> * _contentViewController;
    CKConversation * _conversation;
    <CKFullScreenAppViewControllerDelegate> * _delegate;
    CKDismissView * _dismissView;
    bool  _inTransition;
    long long  _lastKnownDeviceOrientation;
    long long  _parentModalPresentationStyle;
    <UIViewControllerTransitioningDelegate> * _parentTransitioningDelegate;
}

@property (nonatomic, retain) NSNumber *adamID;
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
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } horizontalSwipeExclusionRect;
@property (nonatomic, readonly) bool inExpandedPresentation;
@property (nonatomic, readonly) bool inFullScreenModalPresentation;
@property (nonatomic) bool inTransition;
@property (nonatomic) bool isPrimaryViewController;
@property (nonatomic) bool isiMessage;
@property (nonatomic) long long lastKnownDeviceOrientation;
@property (nonatomic, readonly) bool mayBeKeptInViewHierarchy;
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
@property (nonatomic, readonly) bool wantsDarkUI;
@property (nonatomic, readonly) bool wantsOpaqueUI;
@property (nonatomic, readonly) bool wasExpandedPresentation;

- (void).cxx_destruct;
- (bool)_currentPluginIsJellyfish;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
- (bool)_shouldShowDimmingView;
- (void)_updateDimmingViewAlpha;
- (void)animateBrowserViewFromSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interactive:(bool)arg2 grabberView:(id)arg3 completion:(id /* block */)arg4;
- (void)animateBrowserViewToTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 grabberView:(id)arg2 completion:(id /* block */)arg3;
- (id)balloonPlugin;
- (id)balloonPluginDataSource;
- (long long)browserPresentationStyle;
- (bool)canBecomeFirstResponder;
- (id)contentView;
- (id)contentViewController;
- (id)conversation;
- (id)conversationID;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)dismissView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalContentViewFrame;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)inExpandedPresentation;
- (bool)inFullScreenModalPresentation;
- (bool)inTransition;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (id)inputAccessoryView;
- (bool)isLoaded;
- (bool)isiMessage;
- (long long)lastKnownDeviceOrientation;
- (void)loadView;
- (bool)mayBeKeptInViewHierarchy;
- (long long)parentModalPresentationStyle;
- (long long)parentModalPresentationStyle;
- (id)parentTransitioningDelegate;
- (long long)preferredStatusBarStyle;
- (id)presentationViewController;
- (id)sendDelegate;
- (void)setBalloonPluginDataSource:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissView:(id)arg1;
- (void)setInTransition:(bool)arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setLastKnownDeviceOrientation:(long long)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldShowChatChrome;
- (bool)shouldSuppressEntryView;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsQuickView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;
- (void)willMoveToParentViewController:(id)arg1;

@end
