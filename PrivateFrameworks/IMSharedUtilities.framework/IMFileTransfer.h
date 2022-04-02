/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMFileTransfer : NSObject {
    NSDictionary * _AuxTranscoderUserInfo;
    NSString * _accountID;
    bool  _appMessageFallbackImage;
    NSArray * _attachmentSendContexts;
    NSDictionary * _attributionInfo;
    unsigned long long  _averageTransferRate;
    NSString * _cloudKitRecordID;
    NSData * _cloudKitServerChangeTokenBlob;
    long long  _cloudKitSyncState;
    NSDate * _createdDate;
    unsigned long long  _currentBytes;
    long long  _error;
    NSString * _errorDescription;
    NSString * _filename;
    NSString * _guid;
    unsigned int  _hfsCreator;
    unsigned short  _hfsFlags;
    unsigned int  _hfsType;
    bool  _hideAttachment;
    bool  _isAuxImage;
    bool  _isAuxVideo;
    bool  _isContact;
    bool  _isDirectory;
    bool  _isIncoming;
    bool  _isLocation;
    bool  _isSticker;
    unsigned long long  _lastAveragedBytes;
    double  _lastAveragedInterval;
    double  _lastUpdatedInterval;
    NSURL * _localURL;
    NSDictionary * _localUserInfo;
    NSString * _messageGUID;
    NSString * _mimeType;
    bool  _needsWrapper;
    NSString * _originalGUID;
    NSString * _otherPerson;
    bool  _shouldAttemptToResume;
    bool  _shouldForceArchive;
    NSString * _srCloudKitRecordID;
    NSData * _srCloudKitServerChangeTokenBlob;
    long long  _srCloudKitSyncState;
    NSDate * _startDate;
    NSDictionary * _stickerUserInfo;
    NSURL * _temporaryHighQualityLocalURL;
    unsigned long long  _totalBytes;
    NSDictionary * _transcoderUserInfo;
    NSURL * _transferDataURL;
    long long  _transferState;
    NSString * _transferredFilename;
    NSString * _utiType;
    bool  _wasRegisteredAsStandalone;
}

@property (nonatomic, retain) NSDictionary *AuxTranscoderUserInfo;
@property (nonatomic, readonly) unsigned long long _lastAveragedBytes;
@property (setter=_setLastAveragedInterval:, nonatomic) double _lastAveragedInterval;
@property (setter=_setLastUpdatedInterval:, nonatomic) double _lastUpdatedInterval;
@property (setter=_setNeedsWrapper:, nonatomic) bool _needsWrapper;
@property (nonatomic, retain) NSString *accountID;
@property (nonatomic) bool appMessageFallbackImage;
@property (nonatomic, retain) NSArray *attachmentSendContexts;
@property (nonatomic, retain) NSDictionary *attributionInfo;
@property (nonatomic) unsigned long long averageTransferRate;
@property (nonatomic, readonly) bool canBeAccepted;
@property (nonatomic, retain) NSString *cloudKitRecordID;
@property (nonatomic, retain) NSData *cloudKitServerChangeTokenBlob;
@property (nonatomic) long long cloudKitSyncState;
@property (nonatomic, retain) NSDate *createdDate;
@property (nonatomic) unsigned long long currentBytes;
@property (nonatomic, readonly, retain) NSString *displayName;
@property (setter=_setError:, nonatomic) long long error;
@property (setter=_setErrorDescription:, nonatomic, retain) NSString *errorDescription;
@property (nonatomic, readonly) bool existsAtLocalPath;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) unsigned int hfsCreator;
@property (nonatomic) unsigned short hfsFlags;
@property (nonatomic) unsigned int hfsType;
@property (nonatomic) bool hideAttachment;
@property (nonatomic, readonly) bool isAutoloopVideo;
@property (nonatomic) bool isAuxImage;
@property (nonatomic) bool isAuxVideo;
@property (nonatomic) bool isContact;
@property (nonatomic) bool isDirectory;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic) bool isIncoming;
@property (nonatomic) bool isLocation;
@property (nonatomic, readonly) bool isRecipeBasedSticker;
@property (nonatomic) bool isSticker;
@property (setter=_setLocalPath:, nonatomic, retain) NSString *localPath;
@property (setter=_setLocalURL:, nonatomic, retain) NSURL *localURL;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic, readonly, retain) NSString *mimeType;
@property (nonatomic, retain) NSString *originalGUID;
@property (nonatomic, retain) NSString *otherPerson;
@property (nonatomic, readonly, retain) NSString *permanentHighQualityLocalPath;
@property (nonatomic) bool shouldAttemptToResume;
@property (setter=_setForceArchive:, nonatomic) bool shouldForceArchive;
@property (nonatomic, retain) NSString *srCloudKitRecordID;
@property (nonatomic, retain) NSData *srCloudKitServerChangeTokenBlob;
@property (nonatomic) long long srCloudKitSyncState;
@property (setter=_setStartDate:, nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDictionary *stickerUserInfo;
@property (nonatomic, readonly, retain) NSString *temporaryHighQualityLocalPath;
@property (nonatomic, retain) NSURL *temporaryHighQualityLocalURL;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic, retain) NSDictionary *transcoderUserInfo;
@property (setter=_setTransferDataURL:, nonatomic, retain) NSURL *transferDataURL;
@property (setter=_setTransferState:, nonatomic) long long transferState;
@property (nonatomic, retain) NSString *transferredFilename;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (setter=setRegisteredAsStandalone:, nonatomic) bool wasRegisteredAsStandalone;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)AuxGUIDFromFileTransferGUID:(id)arg1;
+ (bool)_doesLocalURLRequireArchiving:(id)arg1;
+ (id)guidByStrippingAuxPrefix:(id)arg1;

- (id)AuxTranscoderUserInfo;
- (id)_auxVideoPathIfItExists;
- (void)_calculateTypeInformation;
- (void)_clear;
- (id)_dictionaryRepresentation;
- (id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(bool)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned int)arg8 hfsCreator:(unsigned int)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(bool)arg11;
- (unsigned long long)_lastAveragedBytes;
- (double)_lastAveragedInterval;
- (double)_lastUpdatedInterval;
- (bool)_needsWrapper;
- (void)_setAccount:(id)arg1 otherPerson:(id)arg2;
- (void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3;
- (void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (void)_setDirectory:(bool)arg1 hfsType:(unsigned int)arg2 hfsCreator:(unsigned int)arg3 hfsFlags:(unsigned short)arg4;
- (void)_setError:(long long)arg1;
- (void)_setErrorDescription:(id)arg1;
- (void)_setForceArchive:(bool)arg1;
- (void)_setLastAveragedInterval:(double)arg1;
- (void)_setLastUpdatedInterval:(double)arg1;
- (void)_setLocalPath:(id)arg1;
- (void)_setLocalURL:(id)arg1;
- (void)_setNeedsWrapper:(bool)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setTransferDataURL:(id)arg1;
- (void)_setTransferState:(long long)arg1;
- (bool)_updateWithDictionaryRepresentation:(id)arg1;
- (id)accountID;
- (bool)appMessageFallbackImage;
- (id)attachmentSendContexts;
- (id)attributionInfo;
- (unsigned long long)averageTransferRate;
- (bool)canBeAccepted;
- (id)cloudKitRecordID;
- (id)cloudKitServerChangeTokenBlob;
- (long long)cloudKitSyncState;
- (id)createdDate;
- (unsigned long long)currentBytes;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (long long)error;
- (id)errorDescription;
- (bool)existsAtLocalPath;
- (id)filename;
- (id)guid;
- (unsigned int)hfsCreator;
- (unsigned short)hfsFlags;
- (unsigned int)hfsType;
- (bool)hideAttachment;
- (id)init;
- (bool)isAutoloopVideo;
- (bool)isAuxImage;
- (bool)isAuxVideo;
- (bool)isContact;
- (bool)isDirectory;
- (bool)isFinished;
- (bool)isIncoming;
- (bool)isLocation;
- (bool)isRecipeBasedSticker;
- (bool)isSticker;
- (id)localPath;
- (id)localURL;
- (id)messageGUID;
- (id)mimeType;
- (id)originalGUID;
- (id)otherPerson;
- (id)permanentHighQualityLocalPath;
- (void)setAccountID:(id)arg1;
- (void)setAppMessageFallbackImage:(bool)arg1;
- (void)setAttachmentSendContexts:(id)arg1;
- (void)setAttributionInfo:(id)arg1;
- (void)setAuxTranscoderUserInfo:(id)arg1;
- (void)setAverageTransferRate:(unsigned long long)arg1;
- (void)setCloudKitRecordID:(id)arg1;
- (void)setCloudKitServerChangeTokenBlob:(id)arg1;
- (void)setCloudKitSyncState:(long long)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setCurrentBytes:(unsigned long long)arg1;
- (void)setFilename:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHfsCreator:(unsigned int)arg1;
- (void)setHfsFlags:(unsigned short)arg1;
- (void)setHfsType:(unsigned int)arg1;
- (void)setHideAttachment:(bool)arg1;
- (void)setIsAuxImage:(bool)arg1;
- (void)setIsAuxVideo:(bool)arg1;
- (void)setIsContact:(bool)arg1;
- (void)setIsDirectory:(bool)arg1;
- (void)setIsIncoming:(bool)arg1;
- (void)setIsLocation:(bool)arg1;
- (void)setIsSticker:(bool)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setOriginalGUID:(id)arg1;
- (void)setOtherPerson:(id)arg1;
- (void)setRegisteredAsStandalone:(bool)arg1;
- (void)setShouldAttemptToResume:(bool)arg1;
- (void)setSrCloudKitRecordID:(id)arg1;
- (void)setSrCloudKitServerChangeTokenBlob:(id)arg1;
- (void)setSrCloudKitSyncState:(long long)arg1;
- (void)setStickerUserInfo:(id)arg1;
- (void)setTemporaryHighQualityLocalURL:(id)arg1;
- (void)setTotalBytes:(unsigned long long)arg1;
- (void)setTranscoderUserInfo:(id)arg1;
- (void)setTransferredFilename:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAttemptToResume;
- (bool)shouldForceArchive;
- (id)srCloudKitRecordID;
- (id)srCloudKitServerChangeTokenBlob;
- (long long)srCloudKitSyncState;
- (id)startDate;
- (id)stickerUserInfo;
- (id)temporaryHighQualityLocalPath;
- (id)temporaryHighQualityLocalURL;
- (unsigned long long)totalBytes;
- (id)transcoderUserInfo;
- (id)transferDataURL;
- (long long)transferState;
- (id)transferredFilename;
- (id)type;
- (id)userInfo;
- (bool)wasRegisteredAsStandalone;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

+ (bool)_recordIsValid:(id)arg1;
+ (id)_recordType;
+ (bool)attachmentRecordHasAsset:(id)arg1;
+ (id)md5HashForRecord:(id)arg1;
+ (long long)sizeOfAssetForRecord:(id)arg1;
+ (id)transferGUIDOfRecord:(id)arg1;
+ (id)transferMetaDataFromRecord:(id)arg1;
+ (id)utiTypeForRecord:(id)arg1;
+ (bool)validateMD5HashForRecord:(id)arg1;

- (id)_assetURLToInsertToRecord;
- (id)_ckUniqueID;
- (id)_copyCKRecordFromExistingCKMetadata:(bool)arg1;
- (id)_fileManager;
- (bool)_isUsingStingRay;
- (void)_setRecordPropertiesBasedOnExistingRecord:(id)arg1 useStingRay:(bool)arg2;
- (id)ckRecordIDFromExistingMetadata;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2 useStingRay:(bool)arg3;
- (id)initWithCKRecord:(id)arg1 writeAssetToDisk:(bool)arg2;
- (id)md5HashForTransfer;
- (id)md5HashForURL:(id)arg1;

@end
