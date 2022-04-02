/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PhotoVision : NSObject {
    PVVisionAnalyzer * _analyzer;
    NSURL * _cacheDirUrl;
    PVClusterer * _clusterer;
    PVContext * _context;
    PVDataAccessor * _dataAccessor;
    PVEventManager * _eventManager;
    unsigned int  _faceAlgorithmUmbrellaVersion;
    PVFaceMerger * _faceMerger;
    <PVNotificationListener> * _notificationListener;
    <PVPersistenceDelegate> * _persistenceDelegate;
    unsigned int  _sceneAlgorithmUmbrellaVersion;
    <PVVisionIntegrating> * _visionIntegration;
}

@property (nonatomic, readonly) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic, readonly) unsigned int sceneAlgorithmUmbrellaVersion;

+ (int)_intValueForKey:(id)arg1 defaultValue:(int)arg2;
+ (unsigned long long)defaultFaceAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned int)arg1;
+ (unsigned long long)faceprintAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned int)arg1;
+ (bool)isAppleInternal;
+ (unsigned int)maximumFaceAlgorithmUmbrellaVersion;
+ (unsigned int)maximumSceneAlgorithmUmbrellaVersion;
+ (unsigned int)minimumFaceAlgorithmUmbrellaVersion;
+ (unsigned int)minimumSceneAlgorithmUmbrellaVersion;
+ (void)setAlgorithmRevisionForRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2 algorithmCollectionType:(unsigned long long)arg3;
+ (id)supportedFaceAlgorithmUmbrellaVersions;
+ (id)supportedSceneAlgorithmUmbrellaVersions;

- (void).cxx_destruct;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)buildPersonsWithCanceler:(id)arg1 keyFaceUpdateBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)cancelAllSuggestionRequests;
- (void)cancelFaceClustering;
- (void)cancelSuggestionRequest:(id)arg1;
- (bool)clustererIsReadyToReturnSuggestions;
- (long long)clustererState;
- (id)clusteringStatus;
- (id)context;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1;
- (unsigned int)faceAlgorithmUmbrellaVersion;
- (bool)getFaceClusters:(id*)arg1 clusteringThreshold:(double*)arg2 utilizingGPU:(bool*)arg3 error:(id*)arg4;
- (id)initWithPersistenceDelegate:(id)arg1 visionIntegration:(id)arg2 workingDirectoryURL:(id)arg3 faceAlgorithmUmbrellaVersion:(unsigned int)arg4 sceneAlgorithmUmbrellaVersion:(unsigned int)arg5 notificationListener:(id)arg6;
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;
- (unsigned long long)numberOfFacesPendingClustering;
- (void)performFaceClusteringAndWait;
- (void)performFaceClusteringIfNecessaryAndWait;
- (void)performFaceClusteringWithCompletion:(id /* block */)arg1;
- (bool)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(bool)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(id /* block */)arg3 error:(id*)arg4;
- (void)resetClusterer;
- (bool)resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2;
- (unsigned int)sceneAlgorithmUmbrellaVersion;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1;
- (void)startAndSyncClusterCacheWithLibrary:(bool)arg1 reply:(id /* block */)arg2;
- (void)stop;
- (id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)suggestionsForFaceClusterSequenceNumbers:(id)arg1 error:(id*)arg2;

@end
