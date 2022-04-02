/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSUploader : BRCFSTransferScheduler <BRCModule> {
    NSMutableSet * _boostedDocIDs;
    BRCFairScheduler * _fairScheduler;
    br_pacer * _globalQuotaStateUpdatePacer;
    bool  _isDefaultOwnerOutOfQuota;
    bool  _prepareReachedMax;
    br_pacer * _quotaPacer;
    BRCDeadlineSource * _retryQueueSource;
    NSMutableDictionary * _stampForDocID;
    NSObject<OS_dispatch_queue> * _thumbnailQueue;
    NSMutableDictionary * _thumbnailsOperations;
    BRCDeadlineScheduler * _uploadsDeadlineScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic) bool isDefaultOwnerOutOfQuota;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *thumbnailsOperationsByID;
@property (nonatomic, readonly) BRCDeadlineScheduler *uploadsDeadlineScheduler;

- (void).cxx_destruct;
- (id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2;
- (void)_cancelJobs:(id)arg1 state:(int)arg2;
- (void)_cancelJobsMatching:(id)arg1;
- (void)_computeRecordForJobID:(id)arg1 item:(id)arg2 syncContext:(id)arg3;
- (id)_documentItemForJobID:(id)arg1 operationID:(id)arg2;
- (id)_documentItemForJobID:(id)arg1 stageID:(id)arg2;
- (void)_doneFetchingThumbnailForJobID:(id)arg1;
- (id)_duplicatePackage:(id)arg1 stageID:(id)arg2 stageName:(id)arg3 error:(id*)arg4;
- (bool)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id*)arg4;
- (void)_finishedUploadingItem:(id)arg1 record:(id)arg2 jobID:(id)arg3 stageID:(id)arg4 syncContext:(id)arg5 error:(id)arg6;
- (void)_globalQuotaStateUpdateForDefaultOwner;
- (void)_handleFileModifiedError:(id)arg1 forItem:(id)arg2;
- (unsigned long long)_minBatchSize;
- (void)_rescheduleJobsOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_scheduleRetries;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1;
- (void)_startFetchThumbnail:(id)arg1 jobID:(id)arg2;
- (id)_thumbnailOperationForItemRowID:(id)arg1;
- (unsigned long long)_thumbnailOperationsMax;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (void)_updateJobID:(id)arg1 setStageID:(id)arg2 operationID:(id)arg3;
- (bool)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id*)arg4;
- (void)_updateRecord:(id)arg1 item:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5;
- (void)_updateRecord:(id)arg1 jobID:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5;
- (void)_willAttemptJobID:(id)arg1 throttle:(id)arg2 operationID:(id)arg3;
- (void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2;
- (void)boostDocID:(id)arg1 item:(id)arg2;
- (bool)canScheduleMoreJobs;
- (void)cancel;
- (void)cancelAndCleanupItemUpload:(id)arg1;
- (void)close;
- (void)deleteJobsForZone:(id)arg1;
- (void)deleteJobsMatching:(id)arg1;
- (void)deleteUploadingJobForItem:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (id)descriptionForJobID:(id)arg1 context:(id)arg2;
- (void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2;
- (bool)hasItemsOverQuotaForOwner:(id)arg1;
- (bool)hasItemsOverQuotaInZone:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (bool)isDefaultOwnerOutOfQuota;
- (bool)isUploadingItem:(id)arg1;
- (void)ownerDidReceiveOutOfQuotaError:(id)arg1;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (id)quotaAvailableForOwner:(id)arg1;
- (void)removeBoostedDocID:(id)arg1;
- (void)rescheduleJobsPendingInitialSyncInZone:(id)arg1;
- (void)resume;
- (void)schedule;
- (void)scheduleQuotaFetchIfNeededForOwner:(id)arg1;
- (void)scheduleQuotaStateUpdateForOwner:(id)arg1;
- (void)setIsDefaultOwnerOutOfQuota:(bool)arg1;
- (void)setIsDefaultOwnerOutOfQuota:(bool)arg1 forceSignalContainers:(bool)arg2;
- (void)setState:(int)arg1 forItem:(id)arg2;
- (void)setState:(int)arg1 forJobID:(id)arg2 zone:(id)arg3;
- (void)setState:(int)arg1 forUploadJobID:(id)arg2 zone:(id)arg3;
- (void)suspend;
- (id)thumbnailsOperationsByID;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(id /* block */)arg5;
- (void)uploadItem:(id)arg1;
- (id)uploadsDeadlineScheduler;

@end
