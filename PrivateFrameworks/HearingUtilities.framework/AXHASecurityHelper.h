/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
 */

@interface AXHASecurityHelper : NSObject <AXIDCManagerSecurityDelegate> {
    struct __SecIdentity { } * _appleIDIdentity;
    NSArray * _certificateDescription;
    NSObject<OS_dispatch_queue> * _securityQueue;
}

@property (nonatomic, retain) NSArray *certificateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHelper;

- (void).cxx_destruct;
- (void)appleIDDidChange:(id)arg1;
- (id)certificateChainForIdentity:(struct __SecIdentity { }*)arg1;
- (id)certificateChainFromTrust:(struct __SecTrust { }*)arg1;
- (id)certificateDescription;
- (void)dealloc;
- (id)init;
- (void)prepareHelper;
- (id)securityTrustChainForStream:(id)arg1;
- (void)setCertificateDescription:(id)arg1;
- (bool)shouldTrustStream:(id)arg1;
- (id)trustChain;
- (bool)trustChainAvailable;

@end
