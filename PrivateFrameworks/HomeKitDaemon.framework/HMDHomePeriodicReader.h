/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomePeriodicReader : HMFObject <HMFLogging> {
    HMDBackgroundTaskAgentTimer * _btaReadTimer;
    HMDHome * _home;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDBackgroundTaskAgentTimer *btaReadTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_characteristicsToRead;
- (void)_checkToIssueRead;
- (void)_issueCharacteristicRequests:(id)arg1;
- (void)_startTimer;
- (id)btaReadTimer;
- (void)checkToIssueRead;
- (void)configure:(id)arg1;
- (void)dealloc;
- (void)handleCharacteristicBasedEventAdded:(id)arg1;
- (id)home;
- (id)logIdentifier;
- (void)residentUpdated;
- (void)setHome:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startReadTimer;
- (void)timerFired:(id)arg1;
- (id)workQueue;

@end
