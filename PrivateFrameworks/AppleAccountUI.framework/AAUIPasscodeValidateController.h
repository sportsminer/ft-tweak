/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate> {
    id /* block */  __passcodeValidationCompletion;
    AAUICDPHelper * _helper;
    PSSetupController * _navController;
}

@property (nonatomic, copy) id /* block */ _passcodeValidationCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)stingrayControllerWithPresenter:(id)arg1;
+ (id)stingrayControllerWithPresenter:(id)arg1 forceInline:(bool)arg2;

- (void).cxx_destruct;
- (id /* block */)_passcodeValidationCompletion;
- (id)_presentingViewController;
- (void)_setupNavController;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (id)_specifierForMode:(int)arg1;
- (void)dealloc;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
- (void)didAcceptEnteredPIN;
- (void)didCancelEnteringPIN;
- (void)dismissFlowWithSuccess:(bool)arg1 error:(id)arg2;
- (void)set_passcodeValidationCompletion:(id /* block */)arg1;
- (void)validateStingrayPasscodeStateWithCompletion:(id /* block */)arg1;

@end
