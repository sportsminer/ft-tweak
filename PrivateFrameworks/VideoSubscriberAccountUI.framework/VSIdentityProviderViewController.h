/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderViewController : UIViewController <VSAuthenticationViewControllerDelegate, VSIdentityProviderRequestManagerDelegate> {
    VSAuditToken * _auditToken;
    bool  _canIssuePrivacyVouchers;
    UIBarButtonItem * _cancelButtonItem;
    bool  _cancellationAllowed;
    <VSIdentityProviderViewControllerDelegate> * _delegate;
    VSIdentityProvider * _identityProvider;
    VSImageLoadOperation * _logoLoadOperation;
    NSOperationQueue * _privateQueue;
    VSIdentityProviderRequestManager * _requestManager;
    UIBarButtonItem * _signInButtonItem;
    VSViewModel * _viewModel;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic) bool canIssuePrivacyVouchers;
@property (nonatomic, retain) UIBarButtonItem *cancelButtonItem;
@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSIdentityProviderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VSIdentityProvider *identityProvider;
@property (nonatomic, retain) VSImageLoadOperation *logoLoadOperation;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSIdentityProviderRequestManager *requestManager;
@property (nonatomic, retain) UIBarButtonItem *signInButtonItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSViewModel *viewModel;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_didCancel;
- (void)_dismiss;
- (void)_hideNavigationBarButtons;
- (id)_logoLoadOperationForPreferredImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_showNavigationBarButtons;
- (void)_showValidationAlertForError:(id)arg1;
- (void)_showViewController:(id)arg1;
- (void)_signInButtonPressed:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_startValidation;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_stopValidationAndShowButtons:(bool)arg1;
- (id)auditToken;
- (void)authenticationViewControllerDidCancel:(id)arg1;
- (bool)canIssuePrivacyVouchers;
- (id)cancelButtonItem;
- (void)dealloc;
- (id)delegate;
- (void)enqueueRequest:(id)arg1;
- (id)identityProvider;
- (void)identityProviderRequestManager:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityProvider:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCancellationAllowed;
- (id)logoLoadOperation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)privateQueue;
- (id)requestManager;
- (void)setAuditToken:(id)arg1;
- (void)setCanIssuePrivacyVouchers:(bool)arg1;
- (void)setCancelButtonItem:(id)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogoLoadOperation:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRequestManager:(id)arg1;
- (void)setSignInButtonItem:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)signInButtonItem;
- (void)viewDidLayoutSubviews;
- (id)viewModel;

@end
