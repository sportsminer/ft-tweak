/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse {
    NSString * _deviceIdentifier;
    NSURL * _peerPaymentServiceURL;
    NSString * _peerPaymentServicesPushTopic;
}

@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly, copy) NSURL *peerPaymentServiceURL;
@property (nonatomic, readonly, copy) NSString *peerPaymentServicesPushTopic;

- (void).cxx_destruct;
- (id)deviceIdentifier;
- (id)initWithData:(id)arg1;
- (id)peerPaymentServiceURL;
- (id)peerPaymentServicesPushTopic;

@end
