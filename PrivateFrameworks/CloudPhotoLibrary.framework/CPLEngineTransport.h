/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent> {
    CPLEngineLibrary * _engineLibrary;
    CPLPlatformObject * _platformObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class transportGroupClass;
@property (nonatomic, readonly) Class userIdentifierClass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (id)acceptTaskForMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (void)cancelBlockedTasksIncludingBackground:(bool)arg1;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 transportScope:(id)arg3 scope:(id)arg4 additionalTransportScopes:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (id)createGroupForAcceptingMomentShare;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForChangeDownload;
- (id)createGroupForChangeUpload;
- (id)createGroupForFeedback;
- (id)createGroupForFetchScopeListChanges;
- (id)createGroupForFetchingMomentShare;
- (id)createGroupForInitialDownload;
- (id)createGroupForInitialUpload;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForMovieStreaming;
- (id)createGroupForPrefetch;
- (id)createGroupForPruningCheck;
- (id)createGroupForPublishingMomentShare;
- (id)createGroupForQueryUserIdentities;
- (id)createGroupForResetSync;
- (id)createGroupForResourcesDownload;
- (id)createGroupForSetup;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForThumbnailsDownload;
- (id)createGroupForTransportScopeDelete;
- (id)createGroupForTransportScopeUpdate;
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)descriptionForTransportScope:(id)arg1;
- (id)downloadBatchTaskForSyncAnchor:(struct NSData { Class x1; }*)arg1 transportScope:(id)arg2 scope:(id)arg3 currentLibraryInfo:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)engineLibrary;
- (id)fetchScopeListChangesForScopeListSyncAnchor:(struct NSData { Class x1; }*)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchTaskForMomentShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getLibraryInfoAndStateWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getPushEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (id)inMemoryDownloadTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithEngineLibrary:(id)arg1;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (id)publishTaskForMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 transportScope:(id)arg3 scopeIdentifier:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)queryUserIdentitiesTaskForParticipants:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)resourceCheckTaskForResources:(id)arg1 transportScopes:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)resourcePublishTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)resourcesDownloadTaskWithCompletionHandler:(id /* block */)arg1;
- (id)scopeNameForTransportScope:(id)arg1;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (id)setupTaskUpdateDisabledFeatures:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)simpleDescriptionForScopeListSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (id)simpleDescriptionForSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (Class)transportGroupClass;
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 libraryInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;
- (id)uploadBatchTaskForBatch:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (Class)userIdentifierClass;

@end
