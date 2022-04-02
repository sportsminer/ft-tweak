/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState

@property (nonatomic) double backOffTime;
@property (nonatomic) long long escrowCount;
@property (nonatomic) unsigned long long failedAttemptCount;
@property (nonatomic) long long lockState;
@property (nonatomic) bool permanentlyBlocked;
@property (nonatomic) bool recoveryEnabled;
@property (nonatomic) bool recoveryPossible;
@property (nonatomic) bool recoveryRequired;
@property (nonatomic) bool shouldWipe;

- (id)_mutableState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMKBLockStateInfo:(id)arg1;
- (void)setBackOffTime:(double)arg1;
- (void)setEscrowCount:(long long)arg1;
- (void)setFailedAttemptCount:(unsigned long long)arg1;
- (void)setLockState:(long long)arg1;
- (void)setPermanentlyBlocked:(bool)arg1;
- (void)setRecoveryEnabled:(bool)arg1;
- (void)setRecoveryPossible:(bool)arg1;
- (void)setRecoveryRequired:(bool)arg1;
- (void)setShouldWipe:(bool)arg1;

@end
