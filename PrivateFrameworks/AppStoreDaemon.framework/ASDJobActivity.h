/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobActivity : NSObject <NSCopying, NSSecureCoding> {
    NSData * _appReceiptData;
    NSNumber * _artistID;
    NSString * _artistName;
    NSArray * _assets;
    NSNumber * _betaExternalVersionIdentifier;
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSString * _buyParams;
    NSString * _cancelDownloadURL;
    bool  _cancelIfDuplicate;
    NSString * _clientID;
    NSString * _collectionName;
    NSNumber * _divertedTrackingID;
    NSNumber * _enableExtensions;
    bool  _explicitContent;
    NSNumber * _externalOrderKey;
    NSString * _genre;
    NSNumber * _genreID;
    bool  _hasMessagesExtension;
    bool  _hasWatchApp;
    NSNumber * _iAdAttribution;
    NSDate * _iAdConversionDate;
    NSDate * _iAdImpressionDate;
    bool  _isAutomatic;
    bool  _isCompatibilityUpdate;
    bool  _isDeviceBasedVPP;
    bool  _isFromStore;
    bool  _isGameCenterEnabled;
    bool  _isInQueue;
    bool  _isPendingApproval;
    bool  _isPurchasedRedownload;
    bool  _isRestore;
    bool  _isShared;
    bool  _isTVTemplate;
    bool  _isUpdate;
    NSNumber * _itemID;
    NSString * _kind;
    bool  _launchProhibited;
    NSString * _messagesArtworkURL;
    NSNumber * _persistentID;
    NSDate * _purchaseDate;
    NSNumber * _purchaseID;
    NSString * _ratingLabel;
    NSNumber * _ratingRank;
    NSDate * _releaseDate;
    bool  _softwareIconNeedsShine;
    NSNumber * _softwareVersionExternalIdentifier;
    NSNumber * _storeAccountID;
    NSString * _storeAccountName;
    NSString * _storeCohort;
    NSString * _storeCorrelationKey;
    NSDictionary * _storeDownloadInfo;
    NSString * _storeDownloadKey;
    NSString * _storeTransactionID;
    NSString * _storefront;
    bool  _thirtyTwoBitOnly;
    NSString * _thumbnailURL;
    NSString * _title;
    NSString * _variantID;
}

@property (nonatomic, copy) NSData *appReceiptData;
@property (nonatomic, copy) NSNumber *artistID;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, copy) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSString *buyParams;
@property (nonatomic, copy) NSString *cancelDownloadURL;
@property (nonatomic) bool cancelIfDuplicate;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) NSString *collectionName;
@property (nonatomic, copy) NSNumber *divertedTrackingID;
@property (nonatomic, copy) NSNumber *enableExtensions;
@property (nonatomic) bool explicitContent;
@property (nonatomic, copy) NSNumber *externalOrderKey;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSNumber *genreID;
@property (nonatomic) bool hasMessagesExtension;
@property (nonatomic) bool hasWatchApp;
@property (nonatomic, copy) NSNumber *iAdAttribution;
@property (nonatomic, copy) NSDate *iAdConversionDate;
@property (nonatomic, copy) NSDate *iAdImpressionDate;
@property (nonatomic) bool isAutomatic;
@property (nonatomic) bool isCompatibilityUpdate;
@property (nonatomic) bool isDeviceBasedVPP;
@property (nonatomic) bool isFromStore;
@property (nonatomic) bool isGameCenterEnabled;
@property (nonatomic) bool isInQueue;
@property (nonatomic) bool isPendingApproval;
@property (nonatomic) bool isPurchasedRedownload;
@property (nonatomic) bool isRestore;
@property (nonatomic) bool isShared;
@property (nonatomic) bool isTVTemplate;
@property (nonatomic) bool isUpdate;
@property (nonatomic, copy) NSNumber *itemID;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic) bool launchProhibited;
@property (nonatomic, copy) NSString *messagesArtworkURL;
@property (nonatomic, retain) NSNumber *persistentID;
@property (nonatomic, copy) NSDate *purchaseDate;
@property (nonatomic, copy) NSNumber *purchaseID;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic, copy) NSNumber *ratingRank;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic) bool softwareIconNeedsShine;
@property (nonatomic, copy) NSNumber *softwareVersionExternalIdentifier;
@property (nonatomic, copy) NSNumber *storeAccountID;
@property (nonatomic, copy) NSString *storeAccountName;
@property (nonatomic, copy) NSString *storeCohort;
@property (nonatomic, copy) NSString *storeCorrelationKey;
@property (nonatomic, copy) NSDictionary *storeDownloadInfo;
@property (nonatomic, copy) NSString *storeDownloadKey;
@property (nonatomic, copy) NSString *storeTransactionID;
@property (nonatomic, copy) NSString *storefront;
@property (getter=is32BitOnly) bool thirtyTwoBitOnly;
@property (nonatomic, copy) NSString *thumbnailURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *variantID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appReceiptData;
- (id)artistID;
- (id)artistName;
- (id)assets;
- (id)betaExternalVersionIdentifier;
- (id)bundleID;
- (id)bundleVersion;
- (id)buyParams;
- (id)cancelDownloadURL;
- (bool)cancelIfDuplicate;
- (id)clientID;
- (id)collectionName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)divertedTrackingID;
- (id)enableExtensions;
- (void)encodeWithCoder:(id)arg1;
- (bool)explicitContent;
- (id)externalOrderKey;
- (id)genre;
- (id)genreID;
- (bool)hasMessagesExtension;
- (bool)hasWatchApp;
- (id)iAdAttribution;
- (id)iAdConversionDate;
- (id)iAdImpressionDate;
- (id)initWithCoder:(id)arg1;
- (bool)is32BitOnly;
- (bool)isAutomatic;
- (bool)isCompatibilityUpdate;
- (bool)isDeviceBasedVPP;
- (bool)isFromStore;
- (bool)isGameCenterEnabled;
- (bool)isInQueue;
- (bool)isPendingApproval;
- (bool)isPurchasedRedownload;
- (bool)isRestore;
- (bool)isShared;
- (bool)isTVTemplate;
- (bool)isUpdate;
- (bool)isValid;
- (id)itemID;
- (id)kind;
- (bool)launchProhibited;
- (id)messagesArtworkURL;
- (id)persistentID;
- (id)purchaseDate;
- (id)purchaseID;
- (id)ratingLabel;
- (id)ratingRank;
- (id)releaseDate;
- (void)setAppReceiptData:(id)arg1;
- (void)setArtistID:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setBetaExternalVersionIdentifier:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setCancelDownloadURL:(id)arg1;
- (void)setCancelIfDuplicate:(bool)arg1;
- (void)setClientID:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setDivertedTrackingID:(id)arg1;
- (void)setEnableExtensions:(id)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setExternalOrderKey:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setGenreID:(id)arg1;
- (void)setHasMessagesExtension:(bool)arg1;
- (void)setHasWatchApp:(bool)arg1;
- (void)setIAdAttribution:(id)arg1;
- (void)setIAdConversionDate:(id)arg1;
- (void)setIAdImpressionDate:(id)arg1;
- (void)setIsAutomatic:(bool)arg1;
- (void)setIsCompatibilityUpdate:(bool)arg1;
- (void)setIsDeviceBasedVPP:(bool)arg1;
- (void)setIsFromStore:(bool)arg1;
- (void)setIsGameCenterEnabled:(bool)arg1;
- (void)setIsInQueue:(bool)arg1;
- (void)setIsPendingApproval:(bool)arg1;
- (void)setIsPurchasedRedownload:(bool)arg1;
- (void)setIsRestore:(bool)arg1;
- (void)setIsShared:(bool)arg1;
- (void)setIsTVTemplate:(bool)arg1;
- (void)setIsUpdate:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLaunchProhibited:(bool)arg1;
- (void)setMessagesArtworkURL:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingRank:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSoftwareIconNeedsShine:(bool)arg1;
- (void)setSoftwareVersionExternalIdentifier:(id)arg1;
- (void)setStoreAccountID:(id)arg1;
- (void)setStoreAccountName:(id)arg1;
- (void)setStoreCohort:(id)arg1;
- (void)setStoreCorrelationKey:(id)arg1;
- (void)setStoreDownloadInfo:(id)arg1;
- (void)setStoreDownloadKey:(id)arg1;
- (void)setStoreTransactionID:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)setThirtyTwoBitOnly:(bool)arg1;
- (void)setThumbnailURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVariantID:(id)arg1;
- (bool)softwareIconNeedsShine;
- (id)softwareVersionExternalIdentifier;
- (id)storeAccountID;
- (id)storeAccountName;
- (id)storeCohort;
- (id)storeCorrelationKey;
- (id)storeDownloadInfo;
- (id)storeDownloadKey;
- (id)storeTransactionID;
- (id)storefront;
- (id)thumbnailURL;
- (id)title;
- (id)variantID;

@end
