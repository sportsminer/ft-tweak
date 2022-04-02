/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlEnrollViewController : UIViewController <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, BKUIPearlEnrollViewDelegate, LAUIDelegate> {
    BKUIPearlInstructionView * _animatingInstructionView;
    bool  _animatingState;
    BKUIPearlAudioSession * _audioSession;
    LAContext * _authContext;
    bool  _bioCaptureComplete;
    double  _bioKitCompletion;
    UIView * _buttonTray;
    NSLayoutConstraint * _buttonTrayToNextStateButtonContainerTopConstraint;
    NSString * _credential;
    NSMutableDictionary * _customDetailStrings;
    NSMutableDictionary * _customInstructionStrings;
    bool  _darkBackground;
    _UIBackdropView * _darkTrayBackdrop;
    UILabel * _debugLabel;
    <BKUIPearlEnrollViewControllerDelegate> * _delegate;
    BKDevicePearl * _device;
    BKEnrollPearlOperation * _enrollOperation;
    BKUIPearlEnrollView * _enrollView;
    NSLayoutConstraint * _enrollViewTopConstraint;
    UIButton * _escapeHatchButton;
    AVHapticPlayer * _hapticPlayer;
    BKIdentity * _identity;
    bool  _inBuddy;
    bool  _inDemo;
    UILayoutGuide * _instructionBaselineLayoutGuide;
    BKUIPearlInstructionView * _instructionView;
    NSArray * _instructionViewConstraints;
    bool  _isDisplayZoomEnabled;
    NSDate * _lastFaceFoundDate;
    _UIBackdropView * _lightTrayBackdrop;
    UIButton * _nextStateButton;
    UIView * _nextStateButtonContainer;
    NSLayoutConstraint * _nextStateButtonContainerHorizontalPositionConstraint;
    int  _pendingSubstate;
    NSMutableArray * _poseStatus;
    BKUIPearlEnrollControllerPreloadedState * _preloadedState;
    int  _previousState;
    NSString * _progressString;
    UIScrollView * _scrollView;
    SFClient * _sharingclient;
    int  _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSObject<OS_dispatch_semaphore> * _stateSema;
    NSDate * _stateStart;
    NSTimer * _statusPollTimer;
    NSString * _statusString;
    int  _substate;
    NSTimer * _substateDelayTimer;
    bool  _substatePending;
    bool  _suspended;
}

@property (nonatomic, copy) NSString *credential;
@property (nonatomic) bool darkBackground;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKUIPearlEnrollViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *enrollViewTopConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BKIdentity *identity;
@property (nonatomic) bool inBuddy;
@property (nonatomic) bool inDemo;
@property (nonatomic, retain) UILayoutGuide *instructionBaselineLayoutGuide;
@property (nonatomic) bool isDisplayZoomEnabled;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

+ (id)_entryAnimationImages;
+ (bool)_shouldShowAccessibilityOptionForState:(int)arg1 poseStatus:(id)arg2;
+ (bool)_shouldShowEscapeHatchForState:(int)arg1 inBuddy:(bool)arg2 inDemo:(bool)arg3;
+ (void)preloadWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_checkForCompletion;
- (void)_cleanUpHaptics;
- (void)_cleanupEnroll;
- (void)_cleanupEnroll:(bool)arg1;
- (void)_cleanupSound;
- (void)_configureInstructionView:(id)arg1 forState:(int)arg2 substate:(int)arg3;
- (id)_constraintsForInstructionView:(id)arg1 state:(int)arg2 position:(long long)arg3;
- (id)_detailTextForState:(int)arg1 substate:(int)arg2;
- (void)_endEnrollFlowWithError:(id)arg1;
- (id)_escapeHatchTitleForState:(int)arg1;
- (int)_firstVisibleState;
- (id)_instructionTextForState:(int)arg1 substate:(int)arg2;
- (id)_locStateNameForState:(int)arg1;
- (id)_nextStateButtonTitleForState:(int)arg1;
- (void)_removeIdentity;
- (void)_setState:(int)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setSubstate:(int)arg1 animated:(bool)arg2;
- (void)_setSuspended:(bool)arg1;
- (void)_setUpHaptics;
- (void)_setupSound;
- (void)_triggerSoundHapticForTransitionToState:(int)arg1 fromState:(int)arg2;
- (void)_triggerSoundHapticForTransitionToSubstate:(int)arg1 fromSubstate:(int)arg2;
- (void)_updateDebugLabel;
- (void)_updateLeftBarButtonItem;
- (bool)_validateEnrolledPoses:(id)arg1;
- (void)animateInstruction;
- (void)animateWithOrientation:(long long)arg1;
- (void)cancelEnroll;
- (id)credential;
- (bool)darkBackground;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)didReachLargeNudgePeakForEnrollView:(id)arg1;
- (void)didReachSmallNudgePeakForEnrollView:(id)arg1;
- (void)endEnrollFlowWithError:(id)arg1;
- (void)enrollOperation:(id)arg1 failedWithReason:(long long)arg2;
- (void)enrollOperation:(id)arg1 finishedWithIdentity:(id)arg2;
- (void)enrollOperation:(id)arg1 percentCompleted:(long long)arg2;
- (void)enrollOperation:(id)arg1 progressedWithInfo:(id)arg2;
- (void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
- (void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
- (id)enrollViewTopConstraint;
- (void)escapeHatchButtonPressed;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (void)fadeCurrentSound:(double)arg1 completion:(id /* block */)arg2;
- (void)finalizeInstructionAnimation;
- (id)getAuthContextForCredentialError:(id*)arg1;
- (id)getEnrollview;
- (id)identity;
- (bool)inBuddy;
- (bool)inDemo;
- (id)initWithPreloadedState:(id)arg1;
- (id)instructionBaselineLayoutGuide;
- (bool)isDisplayZoomEnabled;
- (void)nextStateButtonPressed:(id)arg1;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)playHaptic:(unsigned long long)arg1 withDelay:(double)arg2 gain:(double)arg3;
- (long long)preferredStatusBarStyle;
- (void)prepareForAnimationToState:(int)arg1 fromState:(int)arg2;
- (void)primeWithPasscode:(id)arg1;
- (void)restartEnroll;
- (void)returnToEnroll;
- (void)setCredential:(id)arg1;
- (void)setCustomDetailString:(id)arg1 forState:(int)arg2;
- (void)setCustomInstructionString:(id)arg1 forState:(int)arg2;
- (void)setDarkBackground:(bool)arg1;
- (void)setDarkBackground:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnrollMovieViewHidden:(bool)arg1;
- (void)setEnrollViewTopConstraint:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setInBuddy:(bool)arg1;
- (void)setInDemo:(bool)arg1;
- (void)setInstructionBaselineLayoutGuide:(id)arg1;
- (void)setIsDisplayZoomEnabled:(bool)arg1;
- (void)setSplashImageView:(id)arg1;
- (void)setState:(int)arg1 animated:(bool)arg2;
- (void)setState:(int)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)setStatus:(id)arg1;
- (void)setSubstate:(int)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)setUseNextButton:(bool)arg1;
- (void)startEnroll;
- (int)state;
- (void)toggleDebug;
- (void)toggleDebugAndSave;
- (bool)useNextButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive:(id)arg1;

@end
