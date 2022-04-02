/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCClientZone : NSObject <BRCReachabilityDelegate, BRCZone> {
    bool  _activated;
    NSMutableArray * _allItemsDidUploadTrackers;
    NSMutableIndexSet * _appliedTombstoneRanks;
    UMUserSyncTask * _bubbleSyncTask;
    BRCCreateZoneAndSubscribeOperation * _createZoneOperation;
    NSObject<OS_dispatch_queue> * _createZoneQueue;
    NSMutableArray * _currentSyncDownBarriers;
    BRCPQLConnection * _db;
    BRCZoneRowID * _dbRowID;
    <BRCClientZoneDelegate> * _delegate;
    NSMutableDictionary * _downloadedBlockToPerformForItemID;
    <NSObject> * _hasWorkDidUpdateObserver;
    bool  _isInitialCreation;
    NSDate * _lastAttemptedSyncDownDate;
    long long  _lastInsertedRank;
    NSDate * _lastSyncDownDate;
    NSError * _lastSyncDownError;
    NSError * _lastSyncUpError;
    BRMangledID * _mangledID;
    bool  _needsSave;
    NSMutableArray * _nextIdleHandlers;
    NSMutableArray * _nextSyncDownBarriers;
    NSMutableDictionary * _onDiskBlockToPerformForItemID;
    NSString * _osNameRequiredToSync;
    NSString * _ownerName;
    BRCThrottleBase * _readerThrottle;
    unsigned long long  _requestID;
    NSObject<OS_dispatch_source> * _resetTimer;
    BRCServerZone * _serverZone;
    BRCAccountSession * _session;
    bool  _shouldShowiCloudDriveAppInstallationNotification;
    unsigned int  _state;
    BRCDeadlineSource * _syncDeadlineSource;
    id  _syncDeadlineSourceResumer;
    NSMutableDictionary * _syncDownBlockToPerformForBookmarkData;
    NSMutableDictionary * _syncDownBlockToPerformForItemID;
    NSMutableArray * _syncDownDependencies;
    CKOperationGroup * _syncDownGroup;
    BRCSyncDownOperation * _syncDownOperation;
    BRCSyncOperationThrottle * _syncDownThrottle;
    unsigned int  _syncState;
    NSArray * _syncThrottles;
    float  _syncUpBatchSizeMultiplier;
    BRCSyncBudgetThrottle * _syncUpBudget;
    BRCSyncUpOperation * _syncUpOperation;
    long long  _syncUpRetryAfter;
    BRCSyncOperationThrottle * _syncUpThrottle;
    NSMutableDictionary * _t_osNamesByItemIDBlockedForSyncUp;
    NSString * _t_syncBlockedUntilOSName;
    bool  _t_syncDownBlocked;
    bool  _t_syncUpBlocked;
    brc_task_tracker * _taskTracker;
    NSMutableArray * _zoneCreationCompletionBlocks;
    NSString * _zoneName;
}

@property (nonatomic, readonly) NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp;
@property (nonatomic, readonly) NSString *_t_syncBlockedUntilOSName;
@property (nonatomic, readonly) bool _t_syncDownBlocked;
@property (nonatomic, readonly) bool _t_syncUpBlocked;
@property (nonatomic, readonly) bool activated;
@property (nonatomic, readonly) unsigned long long currentRequestID;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, retain) BRCZoneRowID *dbRowID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BRCClientZoneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasHighPriorityWatchers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCloudDocsZone;
@property (nonatomic, readonly) bool isForeground;
@property (nonatomic, readonly) bool isPrivateZone;
@property (nonatomic, readonly) bool isSharedZone;
@property (nonatomic, retain) NSDate *lastAttemptedSyncDownDate;
@property (nonatomic, readonly) long long lastInsertedRank;
@property (nonatomic, readonly) BRMangledID *mangledID;
@property (nonatomic) bool needsSave;
@property (nonatomic, readonly) NSString *osNameRequiredToSync;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, readonly) BRCItemID *rootItemID;
@property (nonatomic, retain) BRCServerZone *serverZone;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCDeadlineSource *syncDeadlineSource;
@property (readonly) unsigned int syncState;
@property (nonatomic, readonly) NSArray *syncThrottles;
@property (nonatomic, readonly) unsigned int syncUpBatchSize;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;
@property (nonatomic, readonly) NSString *zoneName;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_allItemsDidUploadWithError:(id)arg1;
- (void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int*)arg4 containsSize:(bool)arg5 context:(id)arg6;
- (id)_cancelAllOperationsForReset;
- (void)_cancelSyncDownFromDBCorruption;
- (void)_createCloudKitZoneWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (bool)_crossZoneMoveDocumentsToZone:(id)arg1;
- (void)_decreaseSyncUpBatchSizeAfterError;
- (bool)_dumpItemsToContext:(id)arg1 includeAllItems:(bool)arg2 error:(id*)arg3;
- (void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3;
- (void)_enumerateFaultsWithBlock:(id /* block */)arg1 rowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
- (struct PQLResultSet { Class x1; }*)_faultsEnumeratorFromRow:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (void)_finishedReset:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_fixupMissingCrossMovedItems;
- (void)_forDBUpgrade_setStateBits:(unsigned int)arg1 clearStateBits:(unsigned int)arg2;
- (bool)_hasAllItemsDidUploadHandlers;
- (void)_increaseSyncUpBatchSizeAfterSuccess;
- (void)_markLatestSyncRequestFailed;
- (void)_markRequestIDAcked;
- (void)_mkdirAppLibraryIfNeeded:(id)arg1;
- (void)_performAfterResetServerAndClientPrivateTruthsAndUnlinkData:(id /* block */)arg1;
- (void)_performAfterResetServerAndClientSharedTruthsAndUnlinkData:(id /* block */)arg1;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkData:(id /* block */)arg1;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(id /* block */)arg1;
- (void)_performResetAndWantsUnlink:(bool)arg1 clientTruthBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)_prepareForForegroundSyncDown;
- (void)_removeAllShareAcceptanceBlocks;
- (void)_removeDownloadedBlockToPerformForItemID:(id)arg1;
- (void)_removeOnDiskBlockToPerformForItemID:(id)arg1;
- (void)_removeTargetedAliasesWithCompletionBlock:(id /* block */)arg1;
- (void)_reset:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)_resetItemsTable;
- (void)_startSync;
- (void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3;
- (void)_t_addItemID:(id)arg1 blockedForSyncUpUntilOSName:(id)arg2;
- (void)_t_flushIdleBlocksIfNeeded;
- (bool)_t_isIdle;
- (void)_t_markBlockedUntilOSName:(id)arg1;
- (void)_t_notifyClient:(id)arg1 whenIdle:(id /* block */)arg2;
- (id)_t_osNamesByItemIDBlockedForSyncUp;
- (void)_t_pauseSyncDown;
- (void)_t_pauseSyncUp;
- (void)_t_removeAllSyncUpBlocking;
- (void)_t_removeItemIDSyncUpBlocking:(id)arg1;
- (void)_t_resumeSyncDown;
- (void)_t_resumeSyncUp;
- (id)_t_syncBlockedUntilOSName;
- (bool)_t_syncDownBlocked;
- (bool)_t_syncUpBlocked;
- (bool)activated;
- (void)addSyncDownDependency:(id)arg1;
- (struct PQLResultSet { Class x1; }*)allItems;
- (id)asPrivateClientZone;
- (id)asSharedClientZone;
- (void)associateWithServerZone:(id)arg1;
- (void)associateWithServerZone:(id)arg1 offline:(bool)arg2;
- (void)beginSyncBubbleActivityIfNecessary;
- (void)cancelReset;
- (void)clearStateBits:(unsigned int)arg1;
- (void)clearSyncStateBits:(unsigned int)arg1;
- (void)clearSyncUpError;
- (void)close;
- (void)createCloudKitZoneWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)currentRequestID;
- (id)db;
- (id)dbRowID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (void)didApplyTombstoneForRank:(long long)arg1;
- (void)didClearOutOfQuota;
- (void)didGCTombstoneRanks:(id)arg1;
- (void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(bool)arg3 syncDownDate:(id)arg4;
- (id)directoryOrRootItemIDByFileID:(unsigned long long)arg1;
- (id)directoryOrRootItemIDByFileID:(unsigned long long)arg1 db:(id)arg2;
- (void)disconnectNSMDQListenerAsync;
- (id)documentItemByItemID:(id)arg1;
- (id)documentItemByItemID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)documentsNotIdleEnumeratorWithDB:(id)arg1;
- (bool)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(bool)arg2 error:(id*)arg3;
- (bool)dumpStatusToContext:(id)arg1 error:(id*)arg2;
- (bool)dumpTablesToContext:(id)arg1 includeAllItems:(bool)arg2 error:(id*)arg3;
- (void)enumerateFaultsAsyncWithBlock:(id /* block */)arg1 batchSize:(unsigned long long)arg2;
- (bool)existsByItemID:(id)arg1;
- (bool)existsByItemID:(id)arg1 db:(id)arg2;
- (bool)existsByParentID:(id)arg1 andLogicalName:(id)arg2;
- (bool)existsByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)faultByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)faultByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2;
- (id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3;
- (void)flushAppliedTombstones;
- (void)handleRootRecordDeletion;
- (bool)handleZoneLevelErrorIfNeeded:(id)arg1;
- (bool)hasCompletedInitialSyncDownOnce;
- (bool)hasHighPriorityWatchers;
- (bool)hasInitialFaultsEverLive;
- (bool)hasInitialFaultsLive;
- (bool)hasItems;
- (bool)hasItemsWithInFlightDiffs;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(bool)arg6;
- (bool)isCloudDocsZone;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClientZone:(id)arg1;
- (bool)isForeground;
- (bool)isPrivateZone;
- (bool)isSharedZone;
- (bool)isSyncBlocked;
- (bool)isSyncBlockedBecauseAppNotInstalled;
- (bool)isSyncBlockedBecauseOSNeedsUpgrade;
- (bool)isSyncBlockedOrBrokenStructure;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)itemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByItemID:(id)arg1;
- (id)itemByItemID:(id)arg1 db:(id)arg2;
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2;
- (id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemCountPendingUploadOrSyncUpAndReturnError:(id*)arg1;
- (BOOL)itemTypeByItemID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (struct PQLResultSet { Class x1; }*)itemsParentedToThisZoneButLivingInAnOtherZone;
- (struct PQLResultSet { Class x1; }*)itemsWithInFlightDiffsEnumerator;
- (id)lastAttemptedSyncDownDate;
- (long long)lastInsertedRank;
- (void)learnCKInfosFromSavedRecords:(id)arg1 isOutOfBandModifyRecords:(bool)arg2;
- (id)mangledID;
- (bool)needsSave;
- (void)networkReachabilityChanged:(bool)arg1;
- (unsigned long long)nextSyncUpRequestID;
- (void)notifyClient:(id)arg1 afterNextSyncDown:(id /* block */)arg2;
- (id)osNameRequiredToSync;
- (id)ownerName;
- (void)performBlock:(id /* block */)arg1 whenItemWithIDIsDownloaded:(id)arg2;
- (void)performBlock:(id /* block */)arg1 whenItemWithIDIsOnDisk:(id)arg2;
- (void)performBlock:(id /* block */)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2;
- (id)plist;
- (id /* block */)popDownloadedBlockForItemID:(id)arg1;
- (id /* block */)popOnDiskBlockForItemID:(id)arg1;
- (void)recomputeAllItemsDidUploadState;
- (void)registerAllItemsDidUploadTracker:(id)arg1;
- (bool)removeItemIsDownloadedBlock:(id)arg1;
- (bool)removeItemOnDiskBlock:(id)arg1;
- (void)removeSyncDownDependency:(id)arg1;
- (bool)removeSyncDownForItemIDBlock:(id)arg1;
- (id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (void)resetSyncBudgetAndThrottle;
- (void)resume;
- (id)rootItemID;
- (void)scheduleReset:(unsigned long long)arg1;
- (void)scheduleReset:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleSyncDown;
- (void)scheduleSyncDownFirst;
- (void)scheduleSyncDownForOOBModifyRecordsAck;
- (void)scheduleSyncDownWithGroup:(id)arg1;
- (void)scheduleSyncUp;
- (id)serverItemByItemID:(id)arg1;
- (id)serverItemByItemID:(id)arg1 db:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)serverItemByRank:(long long)arg1;
- (id)serverItemByRowID:(unsigned long long)arg1;
- (id)serverItemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (long long)serverRankByItemID:(id)arg1;
- (long long)serverRankByItemID:(id)arg1 db:(id)arg2;
- (id)serverZone;
- (id)session;
- (void)setDbRowID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAttemptedSyncDownDate:(id)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setServerZone:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)setStateBits:(unsigned int)arg1;
- (void)setSyncStateBits:(unsigned int)arg1;
- (void)setupOperationForTestsIfNeeded:(id)arg1 recordsToSave:(id)arg2;
- (bool)shouldSyncMangledID:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(id*)arg1;
- (unsigned int)state;
- (bool)supportsKeepingClientItemsDuringReset;
- (id)syncDeadlineSource;
- (id)syncDownImmediately;
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3;
- (unsigned int)syncState;
- (id)syncThrottles;
- (unsigned int)syncUpBatchSize;
- (id)taskTracker;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)unregisterAllItemsDidUploadTracker:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;
- (id)xattrForSignature:(id)arg1 db:(id)arg2;
- (id)zoneName;

@end
