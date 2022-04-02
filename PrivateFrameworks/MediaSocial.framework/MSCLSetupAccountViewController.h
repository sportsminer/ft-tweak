/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSetupAccountViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    MSCLAccountStore * _accountStore;
    bool  _isVerifying;
    MSCLSettingsTextFieldTableViewCell * _passwordCell;
    MSCLSocialService * _service;
    MSCLSettingsTableViewCell * _signInButtonCell;
    UITableView * _tableView;
    MSCLSettingsTextFieldTableViewCell * _userNameCell;
}

@property (nonatomic, readonly) MSCLAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MSCLSocialService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishSignInWithAccount:(id)arg1 error:(id)arg2;
- (void)_setDefaultOptionsForTextField:(id)arg1;
- (void)_setVerifying:(bool)arg1;
- (void)_signIn;
- (void)_textFieldDidChangeNotification:(id)arg1;
- (bool)_textFieldsHaveValues;
- (long long)_userNameKeyboardType;
- (id)_userNamePlaceholder;
- (id)accountStore;
- (void)dealloc;
- (id)initWithService:(id)arg1 accountStore:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)service;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillLayoutSubviews;

@end