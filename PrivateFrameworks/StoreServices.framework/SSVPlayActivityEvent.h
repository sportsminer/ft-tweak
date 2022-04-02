/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityEvent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _SBEnabled;
    NSString * _buildVersion;
    NSString * _containerID;
    SSVPlayActivityEventContainerIDs * _containerIDs;
    unsigned long long  _containerType;
    NSString * _deviceName;
    unsigned long long  _endReasonType;
    SSVPlayActivityEnqueuerProperties * _enqueuerProperties;
    NSDate * _eventDate;
    NSTimeZone * _eventTimeZone;
    unsigned long long  _eventType;
    NSString * _externalID;
    NSString * _featureName;
    NSString * _householdID;
    double  _itemDuration;
    double  _itemEndTime;
    SSVPlayActivityEventItemIDs * _itemIDs;
    double  _itemStartTime;
    unsigned long long  _itemType;
    unsigned long long  _mediaType;
    bool  _offline;
    long long  _persistentID;
    NSString * _personalizedContainerID;
    NSNumber * _privateListeningEnabled;
    unsigned long long  _reasonHintType;
    NSData * _recommendationData;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    NSNumber * _siriInitiated;
    unsigned long long  _sourceType;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
    NSString * _storeID;
    long long  _systemReleaseType;
    NSData * _timedMetadata;
    NSData * _trackInfo;
    long long  _version;
}

@property (getter=isSBEnabled, nonatomic, readonly) bool SBEnabled;
@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *containerID;
@property (nonatomic, readonly, copy) SSVPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic, readonly) unsigned long long containerType;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) unsigned long long endReasonType;
@property (nonatomic, readonly, copy) SSVPlayActivityEnqueuerProperties *enqueuerProperties;
@property (nonatomic, readonly, copy) NSDate *eventDate;
@property (nonatomic, readonly, copy) NSTimeZone *eventTimeZone;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly, copy) NSString *householdID;
@property (getter=isInternalBuild, nonatomic, readonly) bool internalBuild;
@property (nonatomic, readonly) double itemDuration;
@property (nonatomic, readonly) double itemEndTime;
@property (nonatomic, readonly, copy) SSVPlayActivityEventItemIDs *itemIDs;
@property (nonatomic, readonly) double itemStartTime;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (getter=isOffline, nonatomic, readonly) bool offline;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly, copy) NSString *personalizedContainerID;
@property (getter=isPrivateListeningEnabled, nonatomic, readonly, copy) NSNumber *privateListeningEnabled;
@property (nonatomic, readonly) unsigned long long reasonHintType;
@property (nonatomic, readonly, copy) NSData *recommendationData;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;
@property (getter=isSiriInitiated, nonatomic, readonly, copy) NSNumber *siriInitiated;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly, copy) NSString *storeFrontID;
@property (nonatomic, readonly, copy) NSString *storeID;
@property (nonatomic, readonly) long long systemReleaseType;
@property (nonatomic, readonly, copy) NSData *timedMetadata;
@property (nonatomic, readonly, copy) NSData *trackInfo;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_mutableCopyClass;
- (id)buildVersion;
- (id)containerID;
- (id)containerIDs;
- (unsigned long long)containerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endReasonType;
- (id)enqueuerProperties;
- (id)eventDate;
- (id)eventTimeZone;
- (unsigned long long)eventType;
- (id)externalID;
- (id)featureName;
- (unsigned long long)hash;
- (id)householdID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInternalBuild;
- (bool)isOffline;
- (id)isPrivateListeningEnabled;
- (bool)isSBEnabled;
- (id)isSiriInitiated;
- (double)itemDuration;
- (double)itemEndTime;
- (id)itemIDs;
- (double)itemStartTime;
- (unsigned long long)itemType;
- (unsigned long long)mediaType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)persistentID;
- (id)personalizedContainerID;
- (unsigned long long)reasonHintType;
- (id)recommendationData;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (unsigned long long)sourceType;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;
- (id)storeID;
- (long long)systemReleaseType;
- (id)timedMetadata;
- (id)trackInfo;
- (long long)version;

@end
