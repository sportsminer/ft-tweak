/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostAuthorizationViewControllerDelegate, _HKAuthorizationPresentationController> {
    bool  _didPresent;
    HKHealthPrivacyHostAuthorizationViewController * _hostViewController;
    _UIAsyncInvocation * _requestCancellationInvocation;
    UIWindow * _savedKeyWindow;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPresent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthPrivacyHostAuthorizationViewController *hostViewController;
@property (nonatomic, retain) _UIAsyncInvocation *requestCancellationInvocation;
@property (nonatomic, retain) UIWindow *savedKeyWindow;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)_clinicalHealthRecordsPresentationRequestForRequestRecord:(id)arg1;
- (id)_clinicalTypesSubsetOfTypes:(id)arg1;
- (void)_dismissRemoteViewController;
- (id)_healthDataPresentationRequestForRequestRecord:(id)arg1;
- (id)_healthDataTypesSubsetOfTypes:(id)arg1;
- (void)_mainQueue_presentWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)_makeRemoteViewControllerKeyAndVisible:(id)arg1;
- (void)_requestAndConfigureHostViewController:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)_shouldPresentClinicalHealthRecordsFlowForRequestRecord:(id)arg1;
- (bool)_shouldPresentHealthDataFlowForRequestRecord:(id)arg1;
- (bool)_validatePurposeStringsWithinRequest:(id)arg1 readUsageDescriptionKey:(id)arg2 shareUsageDescriptionKey:(id)arg3 error:(id*)arg4;
- (void)cancelPresentation;
- (void)dealloc;
- (bool)didPresent;
- (void)healthPrivacyHostAuthorizationViewController:(id)arg1 didFinishWithError:(id)arg2;
- (id)hostViewController;
- (void)presentWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (id)requestCancellationInvocation;
- (id)savedKeyWindow;
- (void)setDidPresent:(bool)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRequestCancellationInvocation:(id)arg1;
- (void)setSavedKeyWindow:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
