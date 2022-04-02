/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder, UIKeyboardHandBiasTransitionCoordinatorDelegate, UIKeyboardPinchGestureRecognizerDelegate> {
    NSMutableSet * _accentInfo;
    UIKBTree * _activeKey;
    NSMutableDictionary * _activeKeyplaneTransitions;
    NSMutableSet * _allKeyplaneKeycaps;
    NSMutableDictionary * _allKeyplaneViews;
    long long  _appearance;
    double  _autoSplitElapsedTime;
    double  _autoSplitLastUpdate;
    bool  _autoshift;
    UIKBBackgroundView * _backgroundView;
    UIButton * _biasEscapeButton;
    NSLayoutConstraint * _biasEscapeButtonLeftConstraint;
    NSLayoutConstraint * _biasEscapeButtonRightConstraint;
    NSMutableDictionary * _compositeImages;
    long long  _currentHandBias;
    UIDelayedAction * _delayedCentroidUpdate;
    SEL  _deleteAction;
    SEL  _deleteLongAction;
    id  _deleteTarget;
    bool  _dictationUsingServerManualEndpointing;
    bool  _didLongPress;
    UIView * _dimKeyboardImageView;
    CADisplayLink * _displayLink;
    UIKeyboardEmojiKeyDisplayController * _emojiKeyManager;
    struct __CFDictionary { } * _extendedTouchInfoMap;
    bool  _externalDictationAndInternationalKeys;
    double  _finalSplitProgress;
    UIView * _flickPopupView;
    NSTimer * _flickPopuptimer;
    UIGestureKeyboardIntroduction * _gestureKeyboardIntroduction;
    bool  _ghostKeysEnabled;
    UIKeyboardHandBiasTransitionCoordinator * _handBiasTransitionCoordinator;
    NSMutableSet * _hasAccents;
    bool  _hasPeekedGestureKey;
    bool  _holdingShift;
    NSNumber * _homeRowHint;
    bool  _inDealloc;
    UIKBTree * _inactiveLanguageIndicator;
    double  _initialSplitProgress;
    bool  _inputTraitsPreventInitialReuse;
    bool  _isOutOfBounds;
    bool  _isRebuilding;
    bool  _isTrackpadMode;
    UIKBKeyViewAnimator * _keyViewAnimator;
    UIKBTree * _keyboard;
    bool  _keyboardImageViewIsDim;
    NSString * _keyboardName;
    NSMutableDictionary * _keyboards;
    UIKBTree * _keyplane;
    NSString * _keyplaneName;
    NSMutableSet * _keyplaneTransformations;
    UIKBKeyplaneView * _keyplaneView;
    NSMutableSet * _keysUnderIndicator;
    bool  _lastInputIsGestureKey;
    NSString * _lastInputMode;
    double  _lastTwoFingerTapTimestamp;
    NSString * _layoutTag;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftDriftOffset;
    NSMutableSet * _leftKeySet;
    NSMutableArray * _leftSideReachability;
    UISwipeGestureRecognizer * _leftSwipeRecognizer;
    NSString * _localizedInputKey;
    UIView * _modalDisplayView;
    UIDelayedAction * _multitapAction;
    int  _multitapCount;
    UIKBTree * _multitapKey;
    bool  _muteNextKeyClickSound;
    UIKBRenderConfig * _passcodeRenderConfig;
    bool  _pendingDictationReload;
    UIKeyboardPinchGestureRecognizer * _pinchGestureRecognizer;
    NSString * _preRotateKeyplaneName;
    bool  _preRotateShift;
    bool  _preRotateTrackpadMode;
    NSString * _preTouchKeyplaneName;
    int  _preferredTrackingChangeCount;
    double  _prevTouchDownTime;
    NSDate * _prevTouchMoreKeyTime;
    double  _prevTouchUpFinishedTime;
    double  _prevTouchUpTime;
    unsigned long long  _prevUpActions;
    UIKBRenderConfig * _renderConfig;
    SEL  _returnAction;
    SEL  _returnLongAction;
    id  _returnTarget;
    bool  _revertKeyplaneAfterTouch;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightDriftOffset;
    NSMutableSet * _rightKeySet;
    NSMutableArray * _rightSideReachability;
    UISwipeGestureRecognizer * _rightSwipeRecognizer;
    long long  _setKeyplaneViewCount;
    bool  _settingFloat;
    bool  _settingShift;
    bool  _shift;
    double  _shiftLockFirstTapTime;
    bool  _shiftLockReady;
    int  _shiftTrackingChangeCount;
    bool  _showDictationKey;
    bool  _showIntlKey;
    UISelectionFeedbackGenerator * _slideBehaviour;
    SEL  _spaceAction;
    SEL  _spaceLongAction;
    id  _spaceTarget;
    bool  _suppressDeactivateKeys;
    bool  _suppressShiftKeyplaneAnimation;
    bool  _swipeDetected;
    double  _touchDownTimeSpan;
    id  _touchInfo;
    UIKeyboardSplitTransitionView * _transitionView;
    _UIKeyboardTypingSpeedLogger * _typingSpeedLogger;
    bool  _unshiftAfterMultitap;
    UISwipeGestureRecognizer * _upSwipeRecognizer;
    NSMutableSet * _validInputStrings;
    bool  _wasShifted;
    int  playKeyClickSoundOn;
}

@property (nonatomic, retain) UIKBTree *activeKey;
@property (nonatomic) bool autoShift;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLongPress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIKBTree *keyboard;
@property (nonatomic, copy) NSString *keyboardName;
@property (nonatomic, readonly) UIKBTree *keyplane;
@property (nonatomic, copy) NSString *keyplaneName;
@property (nonatomic) double lastTwoFingerTapTimestamp;
@property (nonatomic, retain) NSString *layoutTag;
@property (nonatomic, copy) NSString *localizedInputKey;
@property (nonatomic, readonly) NSString *localizedInputMode;
@property (nonatomic, retain) UIView *modalDisplayView;
@property (nonatomic) bool muteNextKeyClickSound;
@property (nonatomic) int playKeyClickSoundOn;
@property (nonatomic, copy) NSString *preTouchKeyplaneName;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (getter=isRotating, nonatomic, readonly) bool rotating;
@property (nonatomic) bool shift;
@property (nonatomic, readonly) bool showsDictationKey;
@property (nonatomic, readonly) bool showsInternationalKey;
@property (nonatomic, retain) UISelectionFeedbackGenerator *slideBehaviour;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_subclassForScreenTraits:(id)arg1;
+ (void)accessibilitySensitivityChanged;
+ (id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
+ (id)keyboardWithName:(id)arg1 screenTraits:(id)arg2;
+ (id)sharedPunctuationCharacterSet;
+ (id)sharedRivenKeyplaneGenerator;

- (void)_addExtraControlKeysIfNecessary;
- (bool)_allowPaddle;
- (id)_appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3;
- (void)_autoSplit:(id)arg1;
- (id)_currentKeyplaneTransformationContext;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (void)_didTapBiasEscapeButton:(id)arg1;
- (bool)_handRestRecognizerCancelShouldBeEnd;
- (bool)_handleTouchForEmojiInputView;
- (id)_keyboardLongPressInteractionRegions;
- (id)_keyplaneVariantsKeyForString:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_paddedKeyUnionFrame;
- (bool)_pointAllowedInStaticHitBuffer:(struct CGPoint { double x1; double x2; })arg1;
- (void)_recordKeystrokeStatisticForKeyPress;
- (void)_setBiasEscapeButtonVisible:(bool)arg1;
- (void)_setReturnKeyEnabled:(bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (bool)_shouldAttemptToAddSupplementaryControlKeys;
- (bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (bool)_stringContainsCurrencyCharacters:(id)arg1;
- (void)_swapGlobeAndMoreKeysIfNecessary;
- (void)_updateSupplementaryKeys;
- (id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2;
- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)accessibilitySensitivityChanged;
- (id)activationIndicatorView;
- (id)activeKey;
- (id)activeMultitapCompleteKey;
- (id)activeTouchInfoForShift;
- (bool)allKeyplanesHaveSameHeight;
- (void)annotateKeysWithDeveloperPunctuation;
- (void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
- (struct CGPoint { double x1; double x2; })applyError:(struct CGPoint { double x1; double x2; })arg1 toKey:(id)arg2;
- (bool)autoShift;
- (id)baseKeyForString:(id)arg1;
- (double)biasedKeyboardWidthRatio;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1;
- (id)cacheTokenForKeyplane:(id)arg1 caseAlternates:(bool)arg2;
- (struct CGImage { }*)cachedCompositeImageWithCacheKey:(id)arg1;
- (void)calculateReachabilityScoreWithKey:(id)arg1 keyError:(struct CGPoint { double x1; double x2; })arg2;
- (bool)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2;
- (bool)canMultitap;
- (bool)canProduceString:(id)arg1;
- (bool)canReuseKeyplaneView;
- (void)cancelDelayedCentroidUpdate;
- (void)cancelMultitapTimer;
- (void)cancelTouchIfNecessaryForInfo:(id)arg1 forResting:(bool)arg2;
- (void)cancelTouchesForTwoFingerTapGesture:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg1;
- (void)clearAllTouchInfo;
- (void)clearHandwritingStrokesIfNeededAndNotify:(bool)arg1;
- (void)clearInfoForTouch:(id)arg1;
- (void)clearInfoForTouch:(id)arg1 forResting:(bool)arg2;
- (void)clearKeyAnnotationsIfNecessary;
- (void)clearTransientState;
- (void)clearUnusedObjects:(bool)arg1;
- (void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2;
- (void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2;
- (void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2;
- (void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4;
- (void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)completeSendStringActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(bool)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7;
- (void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(bool)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7;
- (id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 inputFlags:(int)arg3;
- (long long)currentHandBias;
- (long long)currentHandBiasWithCoordinator:(id)arg1;
- (id)currentKeyplane;
- (id)currentKeyplaneView;
- (id)currentRepresentedStringForDualDisplayKey:(id)arg1;
- (void)deactivateActiveKey;
- (void)deactivateActiveKeys;
- (void)deactivateActiveKeysClearingTouchInfo:(bool)arg1 clearingDimming:(bool)arg2;
- (id)defaultKeyplaneForKeyplane:(id)arg1;
- (id)defaultNameForKeyplaneName:(id)arg1;
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (bool)diacriticForwardCompose;
- (void)didClearInput;
- (void)didDetectPinchWithSeparation:(double)arg1;
- (void)didEndIndirectSelectionGesture;
- (void)didEndIndirectSelectionGesture:(bool)arg1;
- (bool)didLongPress;
- (void)didRotate;
- (void)dismissGestureKeyboardIntroduction;
- (int)displayTypeHintForMoreKey;
- (int)displayTypeHintForShiftKey;
- (void)divideKeysIntoLeft:(id)arg1 right:(id)arg2;
- (unsigned long long)downActionFlagsForKey:(id)arg1;
- (void)downActionShiftWithKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dragGestureRectInView:(id)arg1;
- (id)emojiKeyManager;
- (void)endMultitapForKey:(id)arg1;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2;
- (void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(double)arg3;
- (void)fadeWithInvocation:(id)arg1;
- (void)finishHandBiasTransitionWithFinalBias:(long long)arg1;
- (void)finishSliderBehaviorFeedback;
- (void)finishSplitTransition;
- (void)finishSplitTransitionWithCompletion:(id /* block */)arg1;
- (void)finishSplitTransitionWithProgress:(double)arg1;
- (void)finishSplitWithCompletion:(id /* block */)arg1;
- (id)flickPopupStringForKey:(id)arg1 withString:(id)arg2;
- (id)flickStringForInputKey:(id)arg1 direction:(int)arg2;
- (void)flushKeyCache:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeyWithRepresentedString:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLastKeyWithRepresentedString:(id)arg1;
- (id)generateInfoForTouch:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1 forHandBiasCoordinator:(id)arg2;
- (struct CGPoint { double x1; double x2; })getCenterForKeyUnderLeftIndexFinger;
- (struct CGPoint { double x1; double x2; })getCenterForKeyUnderRightIndexFinger;
- (unsigned char)getHandRestRecognizerState;
- (id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1;
- (id)getSortedKeysForDisplayRowHint:(int)arg1;
- (bool)globeKeyDisplaysAsEmojiKey;
- (id)handRestRecognizerGetHomeRowHint;
- (void)handRestRecognizerNotifyRestForBegin:(bool)arg1 location:(struct CGPoint { double x1; double x2; })arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6;
- (bool)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 toPoint:(struct CGPoint { double x1; double x2; })arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5;
- (id /* block */)handRestRecognizerSilenceNextTouchDown;
- (struct CGSize { double x1; double x2; })handRestRecognizerStandardKeyPixelSize;
- (void)handleDelayedCentroidUpdate;
- (void)handleDismissFlickView;
- (void)handleDismissFlickView:(id)arg1;
- (bool)handleFlick:(id)arg1;
- (void)handleKeyboardMenusForTouch:(id)arg1;
- (void)handleMultitapTimerFired;
- (void)handlePopupView;
- (void)handlePopupView:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (bool)handwritingPlane;
- (bool)hasAccentKey;
- (bool)hasCandidateKeys;
- (void)hideMenu:(id)arg1 forKey:(id)arg2;
- (id)highlightedVariantListForStylingKey:(id)arg1;
- (double)hitBuffer;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hostViewForHandBiasTransition:(id)arg1;
- (bool)ignoreWriteboard;
- (bool)ignoresShiftState;
- (void)incrementPunctuationIfNeeded:(id)arg1;
- (id)infoForTouch:(id)arg1;
- (id)infoForTouchUUID:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initialKeyplaneNameWithKBStarName:(id)arg1;
- (id)inputModeToMergeCapsLockKey;
- (void)installGestureRecognizers;
- (id)internationalKeyDisplayStringOnEmojiKeyboard;
- (bool)is10KeyRendering;
- (bool)isAlphabeticPlane;
- (bool)isDeadkeyInput:(id)arg1;
- (bool)isEmojiKeyplane;
- (bool)isKeyScriptSwitchKey:(id)arg1;
- (bool)isLongPressedKey:(id)arg1;
- (bool)isMultitapKey:(id)arg1;
- (bool)isRotating;
- (bool)isShiftKeyBeingHeld;
- (bool)isShiftKeyPlaneChooser;
- (bool)isTrackpadMode;
- (bool)keyHasAccentedVariants:(id)arg1;
- (id)keyHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyViewAnimator;
- (id)keyViewHitTestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyWithRepresentedString:(id)arg1;
- (id)keyboard;
- (id)keyboardName;
- (int)keycodeForKey:(id)arg1;
- (id)keylistContainingKey:(id)arg1;
- (id)keyplane;
- (bool)keyplaneContainsDismissKey;
- (bool)keyplaneContainsEmojiKey;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneName;
- (id)keyplaneNameForRevertAfterTouch;
- (id)keyplaneNamed:(id)arg1;
- (unsigned long long)keyplaneShiftState;
- (double)lastTouchDownTimestamp;
- (double)lastTouchUpTimestamp;
- (double)lastTwoFingerTapTimestamp;
- (id)layoutTag;
- (id)localizedInputKey;
- (id)localizedInputMode;
- (void)logHandwritingData;
- (void)longPressAction;
- (void)mergeKeysIfNeeded;
- (id)modalDisplayView;
- (id)multitapCompleteKeys;
- (void)multitapExpired;
- (void)multitapInterrupted;
- (bool)muteNextKeyClickSound;
- (void)nextToUseInputModeDidChange:(id)arg1;
- (void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3;
- (bool)performReturnAction;
- (bool)performSpaceAction;
- (bool)pinchCanBeginWithTouches:(id)arg1;
- (bool)pinchDetected;
- (void)pinchDidConsumeTouch:(id)arg1;
- (void)pinchHandler:(id)arg1;
- (bool)pinchSplitGestureEnabled;
- (void)playKeyClickSoundForKey:(id)arg1;
- (int)playKeyClickSoundOn;
- (void)playKeyClickSoundOnDownForKey:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)populateFlickPopupsForKey:(id)arg1;
- (id)popupKeyViews;
- (id)preTouchKeyplaneName;
- (void)prepareForSplitTransition;
- (void)prepareSliderBehaviorFeedback;
- (id)prepareTransition:(id)arg1 forTargetHandBias:(long long)arg2 coordinator:(id)arg3;
- (void)presentModalDisplayForKey:(id)arg1;
- (void)provideSliderBehaviorFeedback;
- (void)rebuildSplitTransitionView;
- (void)refreshDualStringKeys;
- (void)refreshForDictationAvailablityDidChange;
- (void)refreshForRivenPreferences;
- (void)refreshGhostKeyState;
- (void)relayoutForWriteboardKey;
- (void)removeFromSuperview;
- (id)renderConfig;
- (struct CGImage { }*)renderedImageWithStateFallbacksForToken:(id)arg1;
- (struct CGImage { }*)renderedImageWithToken:(id)arg1;
- (struct CGImage { }*)renderedKeyplaneWithToken:(id)arg1 split:(bool)arg2;
- (void)resetHRRLayoutState;
- (void)resetPanAlternativesForEndedTouch:(id)arg1;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveKey:(id)arg1;
- (void)setAutoShift:(bool)arg1;
- (void)setAutoshift:(bool)arg1;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setDidLongPress:(bool)arg1;
- (void)setDisableInteraction:(bool)arg1;
- (void)setHideKeysUnderIndicator:(bool)arg1;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setKeyboardBias:(long long)arg1;
- (void)setKeyboardDim:(bool)arg1;
- (void)setKeyboardDim:(bool)arg1 amount:(double)arg2 withDuration:(double)arg3;
- (void)setKeyboardName:(id)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;
- (void)setKeyplaneName:(id)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLastTwoFingerTapTimestamp:(double)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setLocalizedInputKey:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setModalDisplayView:(id)arg1;
- (void)setMultitapReverseKeyState;
- (void)setMuteNextKeyClickSound:(bool)arg1;
- (void)setNeedsVirtualDriftUpdate;
- (void)setPasscodeOutlineAlpha:(double)arg1;
- (void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setPlayKeyClickSoundOn:(int)arg1;
- (void)setPreTouchKeyplaneName:(id)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setReturnKeyEnabled:(bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setShift:(bool)arg1;
- (void)setSlideBehaviour:(id)arg1;
- (void)setSplit:(bool)arg1 animated:(bool)arg2;
- (void)setSplitProgress:(double)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setTextEditingTraits:(id)arg1;
- (void)setToInitialKeyplane;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (bool)shift;
- (bool)shouldAllowCurrentKeyplaneReload;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1;
- (bool)shouldDeactivateWithoutWindow;
- (bool)shouldHitTestKey:(id)arg1;
- (bool)shouldMatchCaseForDomainKeys;
- (bool)shouldMergeAssistantBarWithKeyboardLayout;
- (bool)shouldMergeKey:(id)arg1;
- (bool)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (bool)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (bool)shouldRetestTouchDraggedFromKey:(id)arg1;
- (bool)shouldSendStringForFlick:(id)arg1;
- (bool)shouldSendTouchUpToInputManager:(id)arg1;
- (bool)shouldShowDictationKey;
- (bool)shouldShowGestureKeyboardIntroduction;
- (bool)shouldShowIndicator;
- (bool)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)shouldUseDefaultShiftStateFromLayout;
- (bool)shouldYieldToControlCenterForFlickWithInitialPoint:(struct CGPoint { double x1; double x2; })arg1 finalPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (bool)showGestureKeyboardIntroductionIfNeeded;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (void)showMenu:(id)arg1 forKey:(id)arg2;
- (void)showPopupVariantsForKey:(id)arg1;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(bool)arg4;
- (void)showSplitTransitionView:(bool)arg1;
- (bool)showsDictationKey;
- (bool)showsInternationalKey;
- (id)simulateTouch:(struct CGPoint { double x1; double x2; })arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { double x1; double x2; })arg2 shouldTypeVariants:(bool)arg3 baseKeyForVariants:(bool)arg4;
- (id)slideBehaviour;
- (id)splitNameForKeyplane:(id)arg1;
- (id)splitNameForKeyplaneName:(id)arg1;
- (int)stateForCandidateListKey:(id)arg1;
- (int)stateForDictationKey:(id)arg1;
- (int)stateForKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (int)stateForManipulationKey:(id)arg1;
- (int)stateForMultitapReverseKey:(id)arg1;
- (int)stateForShiftKey:(id)arg1;
- (int)stateForStylingKey:(id)arg1;
- (struct CGSize { double x1; double x2; })stretchFactor;
- (double)stretchFactorHeight;
- (bool)stretchKeyboardToFit;
- (bool)stretchKeyboardToFitKeyplane:(id)arg1;
- (bool)supportStylingWithKey:(id)arg1;
- (bool)supportsEmoji;
- (void)swipeDetected:(id)arg1;
- (id)synthesizeTouchUpEventForKey:(id)arg1;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (void)tearDownSplitTransitionView;
- (unsigned long long)textEditingKeyMask;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchCancelled:(id)arg1 forResting:(bool)arg2 executionContext:(id)arg3;
- (void)touchChanged:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (id)touchInfoForKey:(id)arg1;
- (void)touchMultitapTimer;
- (bool)touchPassesDragThreshold:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (void)uninstallGestureRecognizers;
- (unsigned long long)upActionFlagsForKey:(id)arg1;
- (void)upActionShift;
- (void)updateAutolocalizedKeysForKeyplane:(id)arg1;
- (void)updateBackgroundCorners;
- (void)updateBackgroundIfNeeded;
- (void)updateCachedKeyplaneKeycaps;
- (void)updateCurrencySymbolForKey:(id)arg1 withCurrencyString:(id)arg2;
- (void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg1;
- (void)updateGlobeKeyDisplayString;
- (void)updateInputModeLocalizedKeysForKeyplane:(id)arg1;
- (void)updateKeyCentroids;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (void)updateLayoutTags;
- (void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2;
- (void)updateLocalizedKeys:(bool)arg1;
- (void)updateLocalizedKeysForKeyplane:(id)arg1 updateAllKeyplanes:(bool)arg2;
- (void)updateLocalizedKeysOnKeyplane:(id)arg1;
- (void)updateMoreAndInternationalKeys;
- (void)updatePanAlternativesForTouchInfo:(id)arg1;
- (void)updatePhysicalKeyboardEvent:(id)arg1 withMarkedInput:(id)arg2;
- (void)updateReturnKeysIfNeeded;
- (void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)updateShiftKeyState;
- (void)updateTransitionWithFlags:(unsigned long long)arg1;
- (void)updateUndoKeyState;
- (bool)useDismissForMessagesWriteboard;
- (bool)useUndoForMessagesWriteboard;
- (bool)usesAutoShift;
- (int)visualStyleForKeyboardIfSplit:(bool)arg1;
- (void)willBeginIndirectSelectionGesture;
- (void)willBeginIndirectSelectionGesture:(bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willRotate;

@end
