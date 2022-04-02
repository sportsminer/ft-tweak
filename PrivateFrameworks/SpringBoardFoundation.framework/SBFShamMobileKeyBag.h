/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFShamMobileKeyBag : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSData * _queue_correctPasscode;
    float  _queue_escrowCountDelta;
    float  _queue_escrowCountTotal;
    unsigned long long  _queue_escrowState;
    SBFMutableMobileKeyBagState * _queue_state;
    NSData * _queue_trialPasscode;
    float  _timeScaleFactor;
}

+ (id)shamKeyBagWithRecoveryRequired:(bool)arg1 correctPasscode:(id)arg2;
+ (id)shamKeyBagWithRecoveryRequired:(bool)arg1 recoveryPossible:(bool)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;

- (void).cxx_destruct;
- (void)_queue_initializeSecretChangeMachine:(id)arg1;
- (void)_queue_stepSecretChangeMachine;
- (long long)_simplifiedLockStateForLockState:(long long)arg1;
- (bool)beginRecovery:(id)arg1 error:(id*)arg2;
- (void)createStashBag:(id)arg1 completion:(id /* block */)arg2;
- (void)createStashBag:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
- (id)extendedState;
- (id)initWithRecoveryRequired:(bool)arg1 correctPasscode:(id)arg2;
- (id)initWithRecoveryRequired:(bool)arg1 recoveryPossible:(bool)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;
- (void)lock;
- (id)state;
- (void)waitForUnlockWithTimeout:(float)arg1;

@end
