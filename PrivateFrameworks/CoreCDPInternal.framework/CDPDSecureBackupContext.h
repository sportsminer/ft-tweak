/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDSecureBackupContext : NSObject {
    CDPDCircleJoinResult * _circleJoinResult;
    CDPDevice * _device;
    NSString * _localSecret;
    unsigned long long  _localSecretType;
    NSString * _recoveryKey;
    NSString * _recoverySecret;
    bool  _silentRecovery;
    bool  _usePreviouslyCachedSecret;
}

@property (nonatomic, retain) CDPDCircleJoinResult *circleJoinResult;
@property (nonatomic, copy) CDPDevice *device;
@property (nonatomic, copy) NSString *localSecret;
@property (nonatomic) unsigned long long localSecretType;
@property (nonatomic, copy) NSString *recoveryKey;
@property (nonatomic, copy) NSString *recoverySecret;
@property (nonatomic) bool silentRecovery;
@property (nonatomic) bool usePreviouslyCachedSecret;

- (void).cxx_destruct;
- (id)circleJoinResult;
- (id)device;
- (id)localSecret;
- (unsigned long long)localSecretType;
- (id)recoveryKey;
- (id)recoverySecret;
- (void)setCircleJoinResult:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setLocalSecret:(id)arg1;
- (void)setLocalSecretType:(unsigned long long)arg1;
- (void)setRecoveryKey:(id)arg1;
- (void)setRecoverySecret:(id)arg1;
- (void)setSilentRecovery:(bool)arg1;
- (void)setUsePreviouslyCachedSecret:(bool)arg1;
- (bool)silentRecovery;
- (bool)usePreviouslyCachedSecret;

@end
