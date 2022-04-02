/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentService : NSObject <PKPaymentServiceExportedInterface, PKXPCServiceDelegate> {
    bool  _cachedFieldPropertiesValid;
    <PKPaymentServiceDelegate> * _delegate;
    bool  _forceConnectionOnResume;
    bool  _hasPaymentDeviceFieldProperties;
    unsigned long long  _interfaceType;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultPaymentPassUniqueIdentifier;
@property (nonatomic) <PKPaymentServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPaymentDeviceFieldProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKExpressTransactionState *outstandingExpressTransactionState;
@property (nonatomic, readonly) PKFieldProperties *paymentDeviceFieldProperties;
@property (nonatomic, retain) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessDelegate:(id /* block */)arg1;
- (void)_defaultPaymentPassUniqueIdentifier:(id /* block */)arg1;
- (id)_existingRemoteObjectProxy;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)consistencyCheck;
- (void)dealloc;
- (id)defaultExpressFelicaTransitPassIdentifier;
- (id)defaultExpressTransitPassIdentifier;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)defaultPaymentPassUniqueIdentifier;
- (id)delegate;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)downloadAllPaymentPasses;
- (id)expressPassInformationForMode:(id)arg1;
- (id)expressPassInformationWithPassUniqueIdentifier:(id)arg1;
- (id)expressPassesInformation;
- (id)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (bool)hasPaymentDeviceFieldProperties;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)initializeSecureElement:(id /* block */)arg1;
- (void)initializeSecureElementIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(id /* block */)arg4;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(id /* block */)arg4;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)outstandingExpressTransactionState;
- (void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)passbookUIServiceDidLaunch;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)paymentDeviceDidExitField;
- (id)paymentDeviceFieldProperties;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)processTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4 expressTransactionState:(id)arg5;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(id /* block */)arg2;
- (void)sanitizeExpressPasses;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)scheduleSetupReminders;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultExpressTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setSharedPaymentWebServiceContext:(id)arg1;
- (id)sharedPaymentWebServiceContext;
- (void)sharedPaymentWebServiceContextWithCompletion:(id /* block */)arg1;
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1 forExpressMode:(id)arg2;
- (void)simulatePaymentPush;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)transactionCountByYearForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 completion:(id /* block */)arg5;
- (void)transactionWithServiceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionWithTransactionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(id /* block */)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* block */)arg7;
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(id /* block */)arg4;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* block */)arg3;
- (void)valueAddedServiceTransactionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;

@end
