/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _disableScreenTimeSpecifier;
}

@property (nonatomic, retain) PSSpecifier *disableScreenTimeSpecifier;

- (void).cxx_destruct;
- (void)confirmDisableScreenTime:(id)arg1;
- (void)disableScreenTime:(id)arg1;
- (id)disableScreenTimeConfirmationPrompt;
- (id)disableScreenTimeSpecifier;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;
- (void)setCoordinator:(id)arg1;
- (void)setDisableScreenTimeSpecifier:(id)arg1;
- (void)updateDisableScreenTimeSpecifier;

@end
