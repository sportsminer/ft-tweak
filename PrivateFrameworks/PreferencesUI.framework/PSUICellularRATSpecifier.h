/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularRATSpecifier : PSSpecifier {
    bool  _3GOverrideTo4G;
    bool  _LTEOverrideTo4G;
    PSListItemsController * _RATModeDrilldownController;
    int  _RATSwitchKind;
    PSListController * _hostController;
    PSSpecifier * _mobileDataGroup;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (nonatomic) PSListItemsController *RATModeDrilldownController;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;

- (void).cxx_destruct;
- (id)RATModeDrilldownController;
- (void)_setRATModeConfirmed:(int)arg1;
- (void)_setRATModeStateIsOn:(bool)arg1;
- (bool)_updateMobileDataGroupContentShowingRAT:(bool)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (id)getLTEService:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (id)getRATSwitchIsOn:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)reloadRATStatus:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (void)setRATModeDrilldownController:(id)arg1;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (void)setSubscriptionContext:(id)arg1;
- (bool)shouldShowLTEOptions;
- (bool)shouldShowLegacyRATOptions;
- (id)subscriptionContext;
- (bool)supportsVoLTE;
- (void)updateRATSpecifiers;
- (void)updateRATState;
- (bool)updateState;

@end
