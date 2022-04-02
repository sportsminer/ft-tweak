/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBar : UIStatusBar_Base <UIStatusBarServerClient, UIStatusBarStateObserver> {
    NSMutableDictionary * _actions;
    UIStatusBarBackgroundView * _backgroundView;
    NSString * _currentDoubleHeightText;
    struct { 
        bool itemIsEnabled[41]; 
        BOOL timeString[64]; 
        BOOL shortTimeString[64]; 
        BOOL dateString[256]; 
        int gsmSignalStrengthRaw; 
        int secondaryGsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        int secondaryGsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL secondaryServiceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL secondaryServiceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        unsigned int secondaryServiceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        unsigned int secondaryDataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
        unsigned int wifiSearching : 1; 
        double backgroundActivityDisplayStartDate; 
        unsigned int shouldShowEmergencyOnlyStatus : 1; 
        unsigned int secondaryCellularConfigured : 1; 
        BOOL primaryServiceBadgeString[100]; 
        BOOL secondaryServiceBadgeString[100]; 
    }  _currentRawData;
    NSMutableSet * _disableRasterizationReasons;
    bool  _disablesRasterization;
    UILabel * _doubleHeightLabel;
    UIView * _doubleHeightLabelContainer;
    UIStatusBarForegroundView * _foregroundView;
    bool  _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    <UIStatusBarStateProvider> * _inProcessProvider;
    NSMutableArray * _interruptedAnimationCompositeViews;
    UIColor * _lastUsedBackgroundColor;
    UIStatusBarBackgroundView * _newStyleBackgroundView;
    UIStatusBarForegroundView * _newStyleForegroundView;
    UIStatusBarStyleAnimationParameters * _nextTintTransition;
    NSNumber * _overrideHeight;
    bool  _showOnlyCenterItems;
    bool  _showsForeground;
    UIStatusBar * _slidingStatusBar;
    UIStatusBarWindow * _statusBarWindow;
    UIStatusBarStyleAttributes * _styleAttributes;
    bool  _suppressGlow;
    bool  _timeHidden;
    UIColor * _tintColor;
    double  _translucentBackgroundAlpha;
    bool  _waitingOnCallbackAfterChangingStyleOverridesLocally;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTimeHidden, nonatomic) bool timeHidden;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(bool)arg3;
+ (bool)_isLightContentStyle:(long long)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1;
+ (bool)_shouldForwardToImplementationClassForStyle:(long long)arg1;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1 legacy:(bool)arg2;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
+ (int)cornerStyleForRequestedStyle:(long long)arg1 effectiveStyle:(long long)arg2 alignment:(int)arg3;
+ (id)defaultBlueTintColor;
+ (long long)defaultStatusBarStyleWithTint:(bool)arg1;
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (long long)deviceUserInterfaceLayoutDirection;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(id /* block */)arg1;
+ (void)getData:(struct { bool x1[41]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; int x17; int x18; unsigned int x19; unsigned int x20; int x21; unsigned int x22; BOOL x23[150]; int x24; int x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; BOOL x29[256]; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; BOOL x39[256]; BOOL x40[256]; BOOL x41[100]; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; double x45; unsigned int x46 : 1; unsigned int x47 : 1; BOOL x48[100]; BOOL x49[100]; }*)arg1 forRequestedData:(const struct { bool x1[41]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; int x17; int x18; unsigned int x19; unsigned int x20; int x21; unsigned int x22; BOOL x23[150]; int x24; int x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; BOOL x29[256]; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; BOOL x39[256]; BOOL x40[256]; BOOL x41[100]; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; double x45; unsigned int x46 : 1; unsigned int x47 : 1; BOOL x48[100]; BOOL x49[100]; }*)arg2 withOverrides:(const struct { bool x1[41]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; struct { bool x_36_1_1[41]; BOOL x_36_1_2[64]; BOOL x_36_1_3[64]; BOOL x_36_1_4[256]; int x_36_1_5; int x_36_1_6; int x_36_1_7; int x_36_1_8; BOOL x_36_1_9[100]; BOOL x_36_1_10[100]; BOOL x_36_1_11[100]; BOOL x_36_1_12[100]; BOOL x_36_1_13[2][100]; BOOL x_36_1_14[1024]; unsigned int x_36_1_15; unsigned int x_36_1_16; int x_36_1_17; int x_36_1_18; unsigned int x_36_1_19; unsigned int x_36_1_20; int x_36_1_21; unsigned int x_36_1_22; BOOL x_36_1_23[150]; int x_36_1_24; int x_36_1_25; unsigned int x_36_1_26 : 1; unsigned int x_36_1_27 : 1; unsigned int x_36_1_28 : 1; BOOL x_36_1_29[256]; unsigned int x_36_1_30 : 1; unsigned int x_36_1_31 : 1; unsigned int x_36_1_32 : 1; unsigned int x_36_1_33 : 1; unsigned int x_36_1_34 : 1; unsigned int x_36_1_35; unsigned int x_36_1_36 : 1; unsigned int x_36_1_37 : 1; unsigned int x_36_1_38 : 1; BOOL x_36_1_39[256]; BOOL x_36_1_40[256]; BOOL x_36_1_41[100]; unsigned int x_36_1_42 : 1; unsigned int x_36_1_43 : 1; unsigned int x_36_1_44 : 1; double x_36_1_45; unsigned int x_36_1_46 : 1; unsigned int x_36_1_47 : 1; } x36; }*)arg3;
+ (long long)lowBatteryLevel;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (void)setTintOverrideEnabled:(bool)arg1 withColor:(id)arg2;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustDoubleHeightTextVisibility;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrameForAttributes:(id)arg1;
- (id)_backgroundView;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_clearOverrideHeight;
- (void)_crossfadeToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1;
- (id)_currentComposedData;
- (id)_currentComposedDataForStyle:(id)arg1;
- (id)_currentStyleAttributes;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 inProcessStateProvider:(id)arg3;
- (bool)_isTransparent;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(id /* block */)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(bool)arg1;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(bool)arg3;
- (bool)_rectIntersectsTimeItem:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(bool)arg3;
- (void)_setDisablesRasterization:(bool)arg1;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_setHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)_setOverrideHeight:(double)arg1;
- (void)_setStyle:(id)arg1;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldReverseLayoutDirection;
- (bool)_shouldSeekHigherPriorityTouchTarget;
- (bool)_shouldUseInProcessProviderDoubleHeightStatusString;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_slideTransform;
- (double)_standardHeight;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (id)_styleAttributesForRequest:(id)arg1;
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (bool)_touchShouldProduceReturnEvent;
- (void)_updateBackgroundFrame;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(bool)arg3;
- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)actionForPartWithIdentifier:(id)arg1;
- (id)activeTintColor;
- (void)animateUnlock;
- (void)crossfadeTime:(bool)arg1 duration:(double)arg2;
- (id)currentDoubleHeightLabelText;
- (long long)currentStyle;
- (id)currentStyleRequestForStyle:(long long)arg1;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (bool)disablesRasterization;
- (void)forceUpdate:(bool)arg1;
- (void)forceUpdateData:(bool)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateToData:(const struct { bool x1[41]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; int x17; int x18; unsigned int x19; unsigned int x20; int x21; unsigned int x22; BOOL x23[150]; int x24; int x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; BOOL x29[256]; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; BOOL x39[256]; BOOL x40[256]; BOOL x41[100]; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; double x45; unsigned int x46 : 1; unsigned int x47 : 1; BOOL x48[100]; BOOL x49[100]; }*)arg1 animated:(bool)arg2;
- (void)forgetEitherSideHistory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPartWithIdentifier:(id)arg1;
- (double)heightForOrientation:(long long)arg1;
- (bool)isDoubleHeight;
- (bool)isTimeHidden;
- (bool)isTranslucent;
- (void)jiggleLockIcon;
- (void)layoutSubviews;
- (void)noteStyleOverridesChangedLocally;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setShowsOnlyCenterItems:(bool)arg1;
- (void)setSimulatesLegacyAppearance:(bool)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setSuppressesGlow:(bool)arg1;
- (void)setSuppressesHiddenSideEffects:(bool)arg1;
- (void)setTimeHidden:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { bool x1[41]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; int x17; int x18; unsigned int x19; unsigned int x20; int x21; unsigned int x22; BOOL x23[150]; int x24; int x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; BOOL x29[256]; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; BOOL x39[256]; BOOL x40[256]; BOOL x41[100]; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; double x45; unsigned int x46 : 1; unsigned int x47 : 1; BOOL x48[100]; BOOL x49[100]; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const struct { bool x1[41]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; int x17; int x18; unsigned int x19; unsigned int x20; int x21; unsigned int x22; BOOL x23[150]; int x24; int x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; BOOL x29[256]; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; BOOL x39[256]; BOOL x40[256]; BOOL x41[100]; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; double x45; unsigned int x46 : 1; unsigned int x47 : 1; BOOL x48[100]; BOOL x49[100]; }*)arg2 withActions:(int)arg3;
- (id)statusBarWindow;
- (id)styleRequest;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
