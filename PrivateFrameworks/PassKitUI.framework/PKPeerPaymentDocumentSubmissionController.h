/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentDocumentSubmissionController : NSObject <PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentAccountResolutionController * _accountResolutionController;
    UIImage * _backID;
    long long  _context;
    <PKPeerPaymentDocumentSubmissionControllerDelegate> * _delegate;
    UIImage * _frontID;
    PKPeerPaymentIdentityVerificationResponse * _identityVerificationResponse;
    NSString * _selectedCountryCode;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    long long  _side;
    long long  _state;
    bool  _supportsBackID;
    bool  _supportsPassport;
    unsigned long long  _type;
    PKPeerPaymentWebService * _webService;
}

@property (nonatomic, retain) PKPeerPaymentAccountResolutionController *accountResolutionController;
@property (nonatomic, retain) UIImage *backID;
@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentDocumentSubmissionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *frontID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPeerPaymentIdentityVerificationResponse *identityVerificationResponse;
@property (nonatomic, retain) NSString *selectedCountryCode;
@property (nonatomic, retain) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (nonatomic) long long side;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBackID;
@property (nonatomic) bool supportsPassport;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) PKPeerPaymentWebService *webService;

- (void).cxx_destruct;
- (void)_dismissViewController;
- (void)_presentViewController:(id)arg1;
- (id)accountResolutionController;
- (id)backID;
- (void)captureFailedWithError:(id)arg1;
- (void)capturedImage:(id)arg1;
- (void)contactApplePressed;
- (long long)context;
- (id)delegate;
- (void)finishPressedFromViewController:(id)arg1;
- (id)frontID;
- (id)identityVerificationResponse;
- (id)init;
- (id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4;
- (id)nextViewController;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)scanAgain;
- (id)selectedCountryCode;
- (void)setAccountResolutionController:(id)arg1;
- (void)setBackID:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrontID:(id)arg1;
- (void)setIdentityVerificationResponse:(id)arg1;
- (void)setSelectedCountryCode:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setSide:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsBackID:(bool)arg1;
- (void)setSupportsPassport:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setWebService:(id)arg1;
- (id)setupDelegate;
- (long long)side;
- (long long)state;
- (void)stateChanged;
- (bool)supportsBackID;
- (bool)supportsPassport;
- (void)tryUploadAgain;
- (unsigned long long)type;
- (void)uploadID;
- (void)userApprovedCapturedID;
- (void)userRejectedCapturedID;
- (void)userWantsToCancelFromViewController:(id)arg1;
- (void)userWantsToContinue;
- (id)webService;

@end
