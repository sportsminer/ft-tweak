/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAssetChange : CPLItemChange {
    NSDate * _addedDate;
    CPLAdjustments * _adjustments;
    NSDate * _assetDate;
    unsigned long long  _assetHDRType;
    unsigned long long  _assetSubtype;
    unsigned long long  _burstFlags;
    NSString * _burstIdentifier;
    NSString * _caption;
    NSString * _collectionIdentifier;
    NSString * _collectionName;
    long long  _customRenderedValue;
    long long  _duration;
    NSString * _extendedDescription;
    NSString * _facesAdjustmentsFingerprint;
    NSData * _facesData;
    long long  _facesVersion;
    bool  _favorite;
    bool  _hidden;
    NSArray * _keywords;
    NSDate * _lastSharedDate;
    CLLocation * _location;
    NSString * _masterIdentifier;
    NSString * _mediaGroupIdentifier;
    NSString * _momentIdentifier;
    NSString * _momentName;
    long long  _orientation;
    unsigned long long  _originalChoice;
    NSArray * _people;
    CPLPlaceAnnotation * _placeAnnotation;
    long long  _playCount;
    NSDictionary * _resourcePerResourceType;
    NSArray * _resources;
    long long  _shareCount;
    NSString * _timeZoneName;
    NSNumber * _timeZoneOffset;
    long long  _videoComplementDurationTimescale;
    long long  _videoComplementDurationValue;
    long long  _videoComplementImageDisplayTimescale;
    long long  _videoComplementImageDisplayValue;
    unsigned long long  _videoComplementVisibilityState;
    long long  _viewCount;
}

@property (nonatomic, copy) NSDate *addedDate;
@property (nonatomic, retain) CPLAdjustments *adjustments;
@property (nonatomic, copy) NSDate *assetDate;
@property (nonatomic) unsigned long long assetHDRType;
@property (nonatomic) unsigned long long assetSubtype;
@property (nonatomic) unsigned long long burstFlags;
@property (nonatomic, copy) NSString *burstIdentifier;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSString *collectionName;
@property (nonatomic) long long customRenderedValue;
@property (nonatomic) long long duration;
@property (nonatomic, copy) NSString *extendedDescription;
@property (nonatomic, copy) CPLFaceAnalysisReference *faces;
@property (nonatomic, copy) NSString *facesAdjustmentsFingerprint;
@property (nonatomic, copy) NSData *facesData;
@property (nonatomic) long long facesVersion;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSDate *lastSharedDate;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, copy) NSString *masterIdentifier;
@property (nonatomic, copy) NSString *mediaGroupIdentifier;
@property (nonatomic, copy) NSString *momentIdentifier;
@property (nonatomic, copy) NSString *momentName;
@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long originalChoice;
@property (nonatomic, copy) NSArray *people;
@property (nonatomic, retain) CPLPlaceAnnotation *placeAnnotation;
@property (nonatomic) long long playCount;
@property (nonatomic, copy) NSArray *resources;
@property (nonatomic) long long shareCount;
@property (nonatomic, copy) NSString *timeZoneName;
@property (nonatomic, copy) NSNumber *timeZoneOffset;
@property (nonatomic) long long videoComplementDurationTimescale;
@property (nonatomic) long long videoComplementDurationValue;
@property (nonatomic) long long videoComplementImageDisplayTimescale;
@property (nonatomic) long long videoComplementImageDisplayValue;
@property (nonatomic) unsigned long long videoComplementVisibilityState;
@property (nonatomic) long long viewCount;

+ (id /* block */)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id /* block */)equalityBlockForDirection:(unsigned long long)arg1;
+ (bool)serverSupportsVision;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canLowerQuota;
- (id)addedDate;
- (id)adjustments;
- (id)allRelatedScopedIdentifiers;
- (id)assetDate;
- (unsigned long long)assetHDRType;
- (unsigned long long)assetSubtype;
- (unsigned long long)burstFlags;
- (id)burstIdentifier;
- (id)caption;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)collectionIdentifier;
- (id)collectionName;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (long long)customRenderedValue;
- (long long)dequeueOrder;
- (long long)duration;
- (id)extendedDescription;
- (id)faces;
- (id)facesAdjustmentsFingerprint;
- (id)facesData;
- (long long)facesVersion;
- (unsigned long long)fullChangeTypeForFullRecord;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFavorite;
- (bool)isHidden;
- (id)keywords;
- (id)lastSharedDate;
- (id)location;
- (id)masterIdentifier;
- (id)masterScopedIdentifier;
- (id)mediaGroupIdentifier;
- (id)momentIdentifier;
- (id)momentName;
- (long long)orientation;
- (unsigned long long)originalChoice;
- (id)people;
- (id)placeAnnotation;
- (long long)playCount;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)relatedIdentifier;
- (id)resourceForType:(unsigned long long)arg1;
- (id)resources;
- (id)scopeIdentifiersForQuarantine;
- (id)scopedIdentifiersForMapping;
- (void)setAddedDate:(id)arg1;
- (void)setAdjustments:(id)arg1;
- (void)setAssetDate:(id)arg1;
- (void)setAssetHDRType:(unsigned long long)arg1;
- (void)setAssetSubtype:(unsigned long long)arg1;
- (void)setBurstFlags:(unsigned long long)arg1;
- (void)setBurstIdentifier:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setCustomRenderedValue:(long long)arg1;
- (void)setDuration:(long long)arg1;
- (void)setExtendedDescription:(id)arg1;
- (void)setFaces:(id)arg1;
- (void)setFacesAdjustmentsFingerprint:(id)arg1;
- (void)setFacesData:(id)arg1;
- (void)setFacesVersion:(long long)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLastSharedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMasterIdentifier:(id)arg1;
- (void)setMasterScopedIdentifier:(id)arg1;
- (void)setMediaGroupIdentifier:(id)arg1;
- (void)setMomentIdentifier:(id)arg1;
- (void)setMomentName:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOriginalChoice:(unsigned long long)arg1;
- (void)setPeople:(id)arg1;
- (void)setPlaceAnnotation:(id)arg1;
- (void)setPlayCount:(long long)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setShareCount:(long long)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setTimeZoneOffset:(id)arg1;
- (void)setVideoComplementDurationTimescale:(long long)arg1;
- (void)setVideoComplementDurationValue:(long long)arg1;
- (void)setVideoComplementImageDisplayTimescale:(long long)arg1;
- (void)setVideoComplementImageDisplayValue:(long long)arg1;
- (void)setVideoComplementVisibilityState:(unsigned long long)arg1;
- (void)setViewCount:(long long)arg1;
- (long long)shareCount;
- (bool)supportsDeletion;
- (bool)supportsResources;
- (id)timeZoneName;
- (id)timeZoneOffset;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (bool)validateChangeWithError:(id*)arg1;
- (bool)validateFullRecord;
- (bool)validateRecordForTracker:(id)arg1;
- (long long)videoComplementDurationTimescale;
- (long long)videoComplementDurationValue;
- (long long)videoComplementImageDisplayTimescale;
- (long long)videoComplementImageDisplayValue;
- (unsigned long long)videoComplementVisibilityState;
- (long long)viewCount;

@end
