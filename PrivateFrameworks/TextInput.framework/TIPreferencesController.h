/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPreferencesController : NSObject <TIPreferencesControllerActions> {
    NSMutableDictionary * _cachedMCRestrictedValue;
    NSMutableDictionary * _configuredDomains;
    NSMutableDictionary * _configuredPreferences;
    bool  _ignoreNextSyncNotification;
    bool  _inhibitGlobalNotification;
    double  _lastSynchronizePreferencesTime;
    NSTimer * _synchronizePreferencesTimer;
    bool  isInternalInstall;
}

@property (nonatomic) bool automaticMinimizationEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreNextSyncNotification;
@property (nonatomic) bool inhibitGlobalNotification;
@property (nonatomic, copy) NSArray *inputModeSelectionSequence;
@property (nonatomic) bool isInternalInstall;
@property (nonatomic) struct CGPoint { double x1; double x2; } keyboardPosition;
@property (nonatomic) bool keyboardShownByTouch;
@property (nonatomic) bool predictionEnabled;
@property (readonly) Class superclass;

+ (void)registerPreferredLanguagesForInputModes:(id)arg1 replacingInputModes:(id)arg2;
+ (id)sharedPreferencesController;

- (void).cxx_destruct;
- (int)MCValueForManagedPreferenceKey:(id)arg1;
- (void)_configureDomain:(id)arg1 notification:(id)arg2;
- (void)_configureDomains;
- (void)_configureKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;
- (void)_configurePreferences;
- (bool)_isOneTimeAction:(id)arg1;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (bool)allEnabledInputModesAreValid;
- (bool)automaticMinimizationEnabled;
- (bool)boolForKey:(int)arg1;
- (bool)boolForPreferenceKey:(id)arg1;
- (void)clearSynchronizePreferencesTimer;
- (void)dealloc;
- (void)didSeeHardwareKeyboard:(id)arg1;
- (void)didTriggerOneTimeAction:(id)arg1;
- (void)didUnseeHardwareKeyboard:(id)arg1;
- (bool)ignoreNextSyncNotification;
- (bool)inhibitGlobalNotification;
- (id)init;
- (id)inputModeSelectionSequence;
- (bool)isInternalInstall;
- (bool)isKeyLockedDown:(int)arg1;
- (bool)isPreferenceKeyLockedDown:(id)arg1;
- (struct CGPoint { double x1; double x2; })keyboardPosition;
- (bool)keyboardShownByTouch;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (bool)oneTimeActionCompleted:(id)arg1;
- (void)performWithWriteability:(bool)arg1 operations:(id /* block */)arg2;
- (bool)predictionEnabled;
- (void)preferencesChangedCallback:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(bool)arg1;
- (void)setIgnoreNextSyncNotification:(bool)arg1;
- (void)setInhibitGlobalNotification:(bool)arg1;
- (void)setInputModeSelectionSequence:(id)arg1;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setKeyboardPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeyboardShownByTouch:(bool)arg1;
- (void)setPredictionEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forManagedPreferenceKey:(id)arg2;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)synchronizeDomainIfNeedsGet:(id)arg1;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)updateEnabledDictationLanguages:(id)arg1;
- (void)updateInputModes:(id)arg1;
- (void)updateKeyboardHandBias:(id)arg1;
- (void)updateKeyboardIsFloating:(bool)arg1;
- (void)updateKeyboardIsSplit:(bool)arg1 locked:(bool)arg2;
- (void)updateLastUsedDictationLanguages:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)updateLastUsedKeyboards:(id)arg1;
- (void)updateLastUsedLayout:(id)arg1;
- (id)valueForKey:(int)arg1;
- (id)valueForPreferenceKey:(id)arg1;

@end
