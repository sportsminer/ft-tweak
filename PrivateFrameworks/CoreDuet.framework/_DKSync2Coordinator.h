/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSync2Coordinator : NSObject <APSConnectionDelegate, _DKSyncRemoteKnowledgeStorageFetchDelegate> {
    NSMutableSet * _activatedPeers;
    _DKThrottledActivity * _activityThrottler;
    NSMutableSet * _busyTransactions;
    bool  _cloudDeviceCountChangedObserverRegistered;
    _DKSyncToggle * _cloudIsAvailableToggler;
    bool  _cloudSyncAvailablityObserverRegistered;
    APSConnection * _connection;
    _DKDataProtectionStateMonitor * _dataProtectionMonitor;
    bool  _databaseObserversRegistered;
    NSMutableArray * _deletedSyncedEvents;
    bool  _hasRegisteredOptionalObservers;
    bool  _hasSyncedUpHistoryToCloud;
    NSMutableArray * _insertedSyncedEvents;
    bool  _isBusy;
    bool  _isEnabled;
    <_DKKeyValueStore> * _keyValueStore;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    <NSObject> * _observerToken;
    struct _CDPerfEvent { 
        unsigned long long CDPM_startTime; 
        unsigned long long CDPM_endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _CDPeriodicSchedulerJob * _periodicJob;
    double  _periodicJobInterval;
    bool  _rapportAvailablityObserverRegistered;
    _DKSyncToggle * _rapportIsAvailableToggler;
    bool  _siriSyncEnabledObserverRegistered;
    _DKSyncToggle * _someTransportIsAvailableToggler;
    _DKKnowledgeStorage * _storage;
    NSMutableSet * _streamNamesObservedForAdditions;
    NSMutableSet * _streamNamesObservedForDeletions;
    NSString * _syncActivityName;
    _DKSyncToggle * _syncEnabledToggler;
    bool  _syncPolicyChangedObserverRegistered;
    _DKSync2State * _syncState;
    <_DKSyncRemoteKnowledgeStorage> * _transportCloudDown;
    <_DKSyncRemoteKnowledgeStorage> * _transportCloudUp;
    <_DKSyncRemoteKnowledgeStorage> * _transportRapport;
    NSString * _triggeredSyncDelayActivityName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (nonatomic) bool hasSyncedUpHistoryToCloud;
@property (readonly) unsigned long long hash;
@property bool isBusy;
@property (nonatomic, retain) <_DKSyncLocalKnowledgeStorage> *localStorage;
@property (nonatomic, readonly) _DKKnowledgeStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, retain) <_DKSyncRemoteKnowledgeStorage> *transportCloudDown;
@property (nonatomic, retain) <_DKSyncRemoteKnowledgeStorage> *transportCloudUp;
@property (nonatomic, retain) <_DKSyncRemoteKnowledgeStorage> *transportRapport;

+ (void)_updateEventStatsWithSyncElapsedTimeStartDate:(id)arg1 endDate:(id)arg2;
+ (void)_updateEventStatsWithSyncType:(id)arg1;
+ (bool)canPerformSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 history:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6;
+ (bool)isOnPower;
+ (id)keyValueStoreForDomain:(id)arg1;
+ (bool)shouldDeferSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5;
+ (id)storage;
+ (id)streamNamesToTombstone;

- (void).cxx_destruct;
- (void)__finishSyncWithTransaction:(id)arg1 startDate:(id)arg2 completion:(id /* block */)arg3;
- (void)__performSyncWithCompletion:(id /* block */)arg1;
- (void)_cloudIsAvailableToggle;
- (void)_cloudIsUnavailableToggle;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_createPushConnection;
- (void)_databaseDidDeleteFromStreamNameCounts:(id)arg1;
- (void)_deleteForeignSiriEvents;
- (void)_deleteNextBatchOfOurSiriEventsFromCloudWithStartDate:(id)arg1;
- (void)_deleteSiriCloudEvents;
- (void)_deleteSiriEventsIfSiriCloudSyncHasBeenDisabled;
- (void)_destroyPushConnection;
- (id)_executionCriteriaWithInterval:(double)arg1;
- (double)_intervalForJobGivenIsSingleDevice:(bool)arg1;
- (void)_noTransportIsAvailableToggle;
- (void)_performEnableAndStart;
- (void)_performInitialSync;
- (void)_performPeriodicJob;
- (void)_performSyncTogglesChangedActions;
- (void)_performSyncWithForceSync:(bool)arg1 completion:(id /* block */)arg2;
- (void)_performSyncWithSyncType:(id)arg1 completion:(id /* block */)arg2;
- (void)_possiblyPerformInitialSync;
- (void)_rapportIsAvailableToggle;
- (void)_rapportIsUnavailableToggle;
- (void)_registerCloudDeviceCountChangedObserver;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_registerDatabaseObservers;
- (void)_registerPeriodicJob;
- (void)_registerPeriodicJobWithInterval:(double)arg1;
- (void)_registerRapportAvailablityObserver;
- (void)_registerSiriSyncEnabledObserver;
- (void)_registerSyncPolicyChangedObserver;
- (void)_reregisterPeriodicJob;
- (void)_siriSyncEnabledDidChange;
- (void)_someTransportIsAvailableToggle;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)_synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)_unregisterCloudDeviceCountChangedObserver;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_unregisterDatabaseObservers;
- (void)_unregisterPeriodicJob;
- (void)_unregisterRapportAvailablityObserver;
- (void)_unregisterSiriSyncEnabledObserver;
- (void)_unregisterSyncPolicyChangedObserver;
- (void)configureTracker;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)createBusyTransactionWithName:(const char *)arg1;
- (void)dealloc;
- (void)deleteRemoteStateWithReply:(id /* block */)arg1;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5;
- (id)deviceUUID;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(bool)arg2;
- (void)handleFetchedSourceDeviceID:(id)arg1 fromPeer:(id)arg2 error:(id)arg3;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (bool)hasSyncedUpHistoryToCloud;
- (id)initWithStorage:(id)arg1;
- (bool)isBusy;
- (bool)isSingleDevice;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
- (id)localStorage;
- (id)policyForSyncTransportType:(long long)arg1;
- (void)possiblyUpdateIsBusyProperty;
- (void)removeBusyTransaction:(id)arg1;
- (void)setHasSyncedUpHistoryToCloud:(bool)arg1;
- (void)setIsBusy:(bool)arg1;
- (void)setLocalStorage:(id)arg1;
- (void)setTransportCloudDown:(id)arg1;
- (void)setTransportCloudUp:(id)arg1;
- (void)setTransportRapport:(id)arg1;
- (void)setupStorage;
- (id)sortedEventsWithCreationDateBetweenDate:(id)arg1 andDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
- (void)start;
- (id)storage;
- (void)syncWithReply:(id /* block */)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(id /* block */)arg3;
- (id)transportCloudDown;
- (id)transportCloudUp;
- (id)transportRapport;

@end