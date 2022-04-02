/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInternalResource : NSManagedObject <PLCloudResource, PLResource>

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, readonly, copy) <PLAssetID> *assetID;
@property (nonatomic, readonly, retain) NSString *assetUuid;
@property (nonatomic, retain) PLInternalResourceCloudAttributes *cloudAttributes;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) PLCloudMaster *cloudMaster;
@property (nonatomic, retain) PLCodec *codec;
@property (nonatomic, readonly) <PLCodecIdentity> *codecID;
@property (nonatomic, retain) PLColorSpace *colorSpace;
@property (nonatomic, readonly) <PLColorSpaceIdentity> *colorSpaceID;
@property (nonatomic) unsigned long long cplType;
@property (nonatomic) long long dataLength;
@property (nonatomic, readonly) <PLResourceDataStore> *dataStore;
@property (nonatomic) short dataStoreID;
@property (nonatomic, readonly) <PLResourceDataStoreKey> *dataStoreKey;
@property (nonatomic, copy) NSData *dataStoreKeyData;
@property (nonatomic) long long dataStoreSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSString *filePath;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, retain) NSString *fingerprint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long height;
@property (nonatomic) bool isAvailable;
@property (nonatomic, readonly) bool isDerivative;
@property (nonatomic, readonly) bool isLocallyAvailable;
@property (nonatomic, readonly, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSDate *lastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *lastPrefetchDate;
@property (nonatomic) short localAvailability;
@property (nonatomic) short localAvailabilityTarget;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) unsigned int orientation;
@property (nonatomic, readonly) long long orientedHeight;
@property (nonatomic, readonly) long long orientedWidth;
@property (nonatomic) short prefetchCount;
@property (nonatomic, retain) NSDate *prunedAt;
@property (nonatomic) int qualitySortValue;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) short remoteAvailabilityTarget;
@property (nonatomic) short resourceType;
@property (nonatomic, readonly, retain) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, readonly) unsigned long long sourceCplType;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic, readonly) <PLUniformTypeIdentifierIdentity> *uniformTypeIdentifierID;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic, readonly, retain) NSString *utiString;
@property (nonatomic) short version;
@property (nonatomic, readonly) long long width;

+ (bool)_countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(bool)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6;
+ (id)_persistedResourcesForManagedAsset:(id)arg1 resourceIdentity:(id)arg2 error:(id*)arg3;
+ (unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (bool)countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5;
+ (bool)countOfMediumOriginalLocallyAvailableCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)insertResourceForAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)insertResourceForMasterObjectID:(id)arg1 withExternalCPLResource:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3;
+ (id)nonPersistedResourcesForManagedAsset:(id)arg1;
+ (id)predicateForAvailableResources;
+ (id)predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)predicateForMaxFilesize:(long long)arg1;
+ (id)predicateForNonLocalFullSizeResources;
+ (id)predicateForNonLocalOriginalResources;
+ (id)predicateForNonLocalOriginalResources_Unused;
+ (id)predicateForOrginalsToDownload;
+ (id)predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)prefetchResourcePredicateForCPLResourceType:(unsigned long long)arg1 isAssetResource:(bool)arg2 maxRetry:(unsigned long long)arg3 additionalResourcePredicates:(id)arg4;
+ (id)prunePredicateForCPLResourceTypes:(id)arg1;
+ (int)qualitySortValueBasedOnFullSizeWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 isNativeColorSpace:(bool)arg3 forResource:(id)arg4;
+ (void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(bool)arg2;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3;
+ (id)resourceForManagedAsset:(id)arg1 resourceIdentity:(id)arg2 createIfNeeded:(bool)arg3 error:(id*)arg4;
+ (id)resourceForManagedAsset:(id)arg1 sharedStreamsType:(unsigned int)arg2 managedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)resourcesForAssetObjectID:(id)arg1 versions:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4;

- (bool)_colorSpaceIsNativeForDisplay;
- (id)assetID;
- (id)assetUuid;
- (short)cloudLocalState;
- (id)codecID;
- (id)colorSpaceID;
- (id)cplFileURL;
- (id)cplResourceIncludeFile:(bool)arg1;
- (unsigned long long)cplType;
- (id)dataStore;
- (id)dataStoreKey;
- (id)debugDescription;
- (id)filePath;
- (unsigned long long)fileSize;
- (id)fileURL;
- (long long)height;
- (bool)isAdjustedResource;
- (bool)isAvailable;
- (bool)isCPLAssetResource;
- (bool)isCPLMasterResource;
- (bool)isDefaultOrientation;
- (bool)isDerivative;
- (bool)isLocallyAvailable;
- (bool)isPrimaryUTI;
- (id)itemIdentifier;
- (const void*)keyStruct;
- (id)lastOnDemandDownloadDate;
- (id)lastPrefetchDate;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
- (void)markAsNotLocallyAvailable;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (id)photosCTLDescription;
- (id)photosCTLJSONDict;
- (short)prefetchCount;
- (void)prepareForDeletion;
- (id)prunedAt;
- (id)scopedIdentifier;
- (void)setCloudLocalState:(short)arg1;
- (void)setCplType:(unsigned long long)arg1;
- (void)setDataStoreKeyData:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setLastOnDemandDownloadDate:(id)arg1;
- (void)setLastPrefetchDate:(id)arg1;
- (void)setPrefetchCount:(short)arg1;
- (void)setPrunedAt:(id)arg1;
- (void)setQualitySortValueBasedOnAssetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setResourceIdentity:(id)arg1 managedObjectContext:(id)arg2;
- (bool)supportsCloudUpload;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg1;
- (id)uniformTypeIdentifierID;
- (void)updateResourceForMasterExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)utiString;
- (id)validatedExternalCPLResourceForFileURL:(id)arg1;
- (long long)width;

@end
