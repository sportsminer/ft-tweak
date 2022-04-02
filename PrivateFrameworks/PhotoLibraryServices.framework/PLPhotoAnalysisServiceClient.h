/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoAnalysisServiceClient : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSDictionary * _cachedRequestContextDictionary;
    NSURL * _libraryURL;
    _PLPhotoAnalysisXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)backgroundQueue;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1;
- (void)dispatchOnQueue:(id)arg1 blockWithoutBoost:(id /* block */)arg2;
- (id)dumpAnalysisStatusError:(id*)arg1;
- (id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id*)arg2;
- (void)faceProcessingStatusForUserInterface:(id /* block */)arg1;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(id /* block */)arg1;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)generateSuggestionsWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithLibraryURL:(id)arg1;
- (void)invalidateGraphWithReply:(id /* block */)arg1;
- (bool)isGraphReady;
- (void)loadGraph;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id*)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (bool)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (void)personPromoterAdvancedStatus:(id /* block */)arg1;
- (void)personPromoterStatus:(id /* block */)arg1;
- (int)photoanalysisdPid;
- (int)pingFaceWorkerWithOptions:(id)arg1 error:(id*)arg2;
- (int)pingGraphWorkerWithOptions:(id)arg1 error:(id*)arg2;
- (int)pingSceneWorkerWithOptions:(id)arg1 error:(id*)arg2;
- (bool)processPersonsWithOptions:(id)arg1 error:(id*)arg2;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(id /* block */)arg2;
- (bool)rebuildPersonsWithOptions:(id)arg1 error:(id*)arg2;
- (bool)reclusterFacesWithOptions:(id)arg1 error:(id*)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id*)arg3;
- (id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id*)arg2;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4;
- (id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestContextDictionary;
- (id)requestContextDictionaryWithOperationId:(bool)arg1;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (id)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestDefaultsObjectForKey:(id)arg1 withError:(id*)arg2;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id*)arg2;
- (id)requestGraphPerformQuery:(id)arg1 error:(id*)arg2;
- (void)requestGraphRebuildFractionCompletedWithReply:(id /* block */)arg1;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestGraphStatisticsWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestGraphStatus:(id*)arg1;
- (id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (bool)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id*)arg2;
- (void)requestHighlightEstimatesWithReply:(id /* block */)arg1;
- (id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 error:(id*)arg2;
- (bool)requestInvalidatePersistentCaches:(id*)arg1;
- (bool)requestInvalidateTransientCaches:(id*)arg1;
- (id)requestLocalizedSceneAncestryInformationWithError:(id*)arg1;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestMetadataSnapshotFolderCreation:(id*)arg1;
- (bool)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id*)arg4;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4;
- (id)requestSearchInformationForTripUUIDs:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id*)arg3;
- (id)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 error:(id*)arg3;
- (id)requestSharingSuggestionsFromMomentLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id*)arg2;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(id /* block */)arg6;
- (id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id*)arg2;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)requestSuggestedContributionsForAssetsMetadata:(id)arg1 error:(id*)arg2;
- (id)requestSuggestedMePersonIdentifierWithError:(id*)arg1;
- (id)requestSuggestedRecipientsForMomentIdentifiers:(id)arg1 sharingStream:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestSynonymsDictionariesWithError:(id*)arg1;
- (bool)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5;
- (bool)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5;
- (bool)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3 error:(id*)arg4;
- (bool)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5;
- (id)requestTransientMemoriesWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id*)arg3;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id*)arg2;
- (bool)resetFaceClassificationModel:(id*)arg1;
- (bool)resetFaceClusteringState:(id*)arg1;
- (bool)resetPeople:(id*)arg1;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(id /* block */)arg4;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (long long)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (long long)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(id /* block */)arg4;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)unloadGraph;
- (long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 completion:(id /* block */)arg3;
- (id)xpcConnection;

@end
