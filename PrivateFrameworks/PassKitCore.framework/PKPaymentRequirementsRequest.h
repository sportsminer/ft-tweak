/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest {
    NSString * _cardholderName;
    PKPaymentCredential * _paymentCredential;
    NSString * _primaryAccountNumber;
    NSString * _referrerIdentifier;
}

@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, retain) PKPaymentCredential *paymentCredential;
@property (nonatomic, copy) NSString *primaryAccountNumber;
@property (nonatomic, copy) NSString *referrerIdentifier;

- (void).cxx_destruct;
- (id)_cardDictionary;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(id /* block */)arg8;
- (id)cardholderName;
- (id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2;
- (id)initWithPaymentCredential:(id)arg1;
- (id)paymentCredential;
- (id)primaryAccountNumber;
- (id)referrerIdentifier;
- (void)setCardholderName:(id)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;

@end
