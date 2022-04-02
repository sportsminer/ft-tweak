/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionProcessorItem : NSObject {
    bool  _foundOptimalLocation;
    NSString * _passUniqueIdentifier;
    PKPaymentApplication * _paymentApplication;
    PKPaymentTransaction * _paymentTransaction;
}

@property (nonatomic) bool foundOptimalLocation;
@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKPaymentTransaction *paymentTransaction;

- (void).cxx_destruct;
- (bool)foundOptimalLocation;
- (id)passUniqueIdentifier;
- (id)paymentApplication;
- (id)paymentTransaction;
- (void)setFoundOptimalLocation:(bool)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setPaymentTransaction:(id)arg1;

@end
