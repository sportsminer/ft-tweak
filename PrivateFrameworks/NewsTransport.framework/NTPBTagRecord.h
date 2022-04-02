/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTagRecord : PBCodable <NSCopying> {
    NSMutableArray * _allowedStorefrontIDs;
    NSData * _articleRecirculationConfiguration;
    NTPBRecordBase * _base;
    long long  _behaviorFlags;
    NSMutableArray * _blockedStorefrontIDs;
    NSString * _channelDefaultSectionID;
    NSMutableArray * _channelSectionFeedConfigurations;
    NSMutableArray * _channelSectionIDs;
    long long  _contentProvider;
    NSString * _coverArticleListID;
    NSString * _coverImageURL;
    NTPBFeedConfiguration * _feedConfiguration;
    NSString * _feedNavImageURL;
    int  _groupingAvailability;
    struct { 
        unsigned int behaviorFlags : 1; 
        unsigned int contentProvider : 1; 
        unsigned int minimumNewsVersion : 1; 
        unsigned int nameImageBaselineShift : 1; 
        unsigned int nameImageScaleFactor : 1; 
        unsigned int score : 1; 
        unsigned int groupingAvailability : 1; 
        unsigned int type : 1; 
        unsigned int hideAccessoryText : 1; 
        unsigned int isDeprecated : 1; 
        unsigned int isExplicitContent : 1; 
        unsigned int isHidden : 1; 
        unsigned int isNotificationEnabled : 1; 
        unsigned int isPublic : 1; 
        unsigned int publisherPaidLeakyPaywallOptOut : 1; 
        unsigned int publisherPaidWebOptIn : 1; 
    }  _has;
    bool  _hideAccessoryText;
    NSMutableArray * _iAdCategories;
    NSMutableArray * _iAdKeywords;
    bool  _isDeprecated;
    bool  _isExplicitContent;
    bool  _isHidden;
    bool  _isNotificationEnabled;
    bool  _isPublic;
    NSString * _logoURL;
    long long  _minimumNewsVersion;
    NSString * _name;
    NSString * _nameCompact;
    unsigned long long  _nameImageBaselineShift;
    NSData * _nameImageCompactMetadata;
    NSString * _nameImageCompactURL;
    NSString * _nameImageForDarkBackgroundURL;
    NSString * _nameImageMaskURL;
    NSString * _nameImageMaskWidgetHQURL;
    NSString * _nameImageMaskWidgetLQURL;
    NSData * _nameImageMetadata;
    double  _nameImageScaleFactor;
    NSString * _nameImageURL;
    NSString * _parentID;
    NSMutableArray * _pinnedArticleIDs;
    NSString * _primaryAudience;
    NSString * _publisherPaidAuthorizationURL;
    NTPBPublisherPaidDescriptionStrings * _publisherPaidDescriptionStrings;
    NSMutableArray * _publisherPaidFeldsparablePurchaseIDs;
    bool  _publisherPaidLeakyPaywallOptOut;
    NSString * _publisherPaidVerificationURL;
    bool  _publisherPaidWebOptIn;
    NSString * _publisherPaidWebaccessURL;
    NSMutableArray * _publisherSpecifiedArticleIds;
    NTPBDate * _publisherSpecifiedArticleIdsModifiedDate;
    NSMutableArray * _purchaseOfferableConfigurations;
    NSMutableArray * _relatedChannelIDs;
    NSMutableArray * _relatedChannelIDsForOnboardings;
    NSMutableArray * _relatedTopicIDs;
    NSMutableArray * _relatedTopicIDsForOnboardings;
    NSString * _replacementID;
    long long  _score;
    NSString * _subtitle;
    NSString * _templateJson;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic, retain) NSData *articleRecirculationConfiguration;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic, retain) NSMutableArray *blockedStorefrontIDs;
@property (nonatomic, retain) NSString *channelDefaultSectionID;
@property (nonatomic, retain) NSMutableArray *channelSectionFeedConfigurations;
@property (nonatomic, retain) NSMutableArray *channelSectionIDs;
@property (nonatomic) long long contentProvider;
@property (nonatomic, retain) NSString *coverArticleListID;
@property (nonatomic, retain) NSString *coverImageURL;
@property (nonatomic, retain) NTPBFeedConfiguration *feedConfiguration;
@property (nonatomic, retain) NSString *feedNavImageURL;
@property (nonatomic) int groupingAvailability;
@property (nonatomic, readonly) bool hasArticleRecirculationConfiguration;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic) bool hasBehaviorFlags;
@property (nonatomic, readonly) bool hasChannelDefaultSectionID;
@property (nonatomic) bool hasContentProvider;
@property (nonatomic, readonly) bool hasCoverArticleListID;
@property (nonatomic, readonly) bool hasCoverImageURL;
@property (nonatomic, readonly) bool hasFeedConfiguration;
@property (nonatomic, readonly) bool hasFeedNavImageURL;
@property (nonatomic) bool hasGroupingAvailability;
@property (nonatomic) bool hasHideAccessoryText;
@property (nonatomic) bool hasIsDeprecated;
@property (nonatomic) bool hasIsExplicitContent;
@property (nonatomic) bool hasIsHidden;
@property (nonatomic) bool hasIsNotificationEnabled;
@property (nonatomic) bool hasIsPublic;
@property (nonatomic, readonly) bool hasLogoURL;
@property (nonatomic) bool hasMinimumNewsVersion;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameCompact;
@property (nonatomic) bool hasNameImageBaselineShift;
@property (nonatomic, readonly) bool hasNameImageCompactMetadata;
@property (nonatomic, readonly) bool hasNameImageCompactURL;
@property (nonatomic, readonly) bool hasNameImageForDarkBackgroundURL;
@property (nonatomic, readonly) bool hasNameImageMaskURL;
@property (nonatomic, readonly) bool hasNameImageMaskWidgetHQURL;
@property (nonatomic, readonly) bool hasNameImageMaskWidgetLQURL;
@property (nonatomic, readonly) bool hasNameImageMetadata;
@property (nonatomic) bool hasNameImageScaleFactor;
@property (nonatomic, readonly) bool hasNameImageURL;
@property (nonatomic, readonly) bool hasParentID;
@property (nonatomic, readonly) bool hasPrimaryAudience;
@property (nonatomic, readonly) bool hasPublisherPaidAuthorizationURL;
@property (nonatomic, readonly) bool hasPublisherPaidDescriptionStrings;
@property (nonatomic) bool hasPublisherPaidLeakyPaywallOptOut;
@property (nonatomic, readonly) bool hasPublisherPaidVerificationURL;
@property (nonatomic) bool hasPublisherPaidWebOptIn;
@property (nonatomic, readonly) bool hasPublisherPaidWebaccessURL;
@property (nonatomic, readonly) bool hasPublisherSpecifiedArticleIdsModifiedDate;
@property (nonatomic, readonly) bool hasReplacementID;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTemplateJson;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hideAccessoryText;
@property (nonatomic, retain) NSMutableArray *iAdCategories;
@property (nonatomic, retain) NSMutableArray *iAdKeywords;
@property (nonatomic) bool isDeprecated;
@property (nonatomic) bool isExplicitContent;
@property (nonatomic) bool isHidden;
@property (nonatomic) bool isNotificationEnabled;
@property (nonatomic) bool isPublic;
@property (nonatomic, retain) NSString *logoURL;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameCompact;
@property (nonatomic) unsigned long long nameImageBaselineShift;
@property (nonatomic, retain) NSData *nameImageCompactMetadata;
@property (nonatomic, retain) NSString *nameImageCompactURL;
@property (nonatomic, retain) NSString *nameImageForDarkBackgroundURL;
@property (nonatomic, retain) NSString *nameImageMaskURL;
@property (nonatomic, retain) NSString *nameImageMaskWidgetHQURL;
@property (nonatomic, retain) NSString *nameImageMaskWidgetLQURL;
@property (nonatomic, retain) NSData *nameImageMetadata;
@property (nonatomic) double nameImageScaleFactor;
@property (nonatomic, retain) NSString *nameImageURL;
@property (nonatomic, retain) NSString *parentID;
@property (nonatomic, retain) NSMutableArray *pinnedArticleIDs;
@property (nonatomic, retain) NSString *primaryAudience;
@property (nonatomic, retain) NSString *publisherPaidAuthorizationURL;
@property (nonatomic, retain) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (nonatomic, retain) NSMutableArray *publisherPaidFeldsparablePurchaseIDs;
@property (nonatomic) bool publisherPaidLeakyPaywallOptOut;
@property (nonatomic, retain) NSString *publisherPaidVerificationURL;
@property (nonatomic) bool publisherPaidWebOptIn;
@property (nonatomic, retain) NSString *publisherPaidWebaccessURL;
@property (nonatomic, retain) NSMutableArray *publisherSpecifiedArticleIds;
@property (nonatomic, retain) NTPBDate *publisherSpecifiedArticleIdsModifiedDate;
@property (nonatomic, retain) NSMutableArray *purchaseOfferableConfigurations;
@property (nonatomic, retain) NSMutableArray *relatedChannelIDs;
@property (nonatomic, retain) NSMutableArray *relatedChannelIDsForOnboardings;
@property (nonatomic, retain) NSMutableArray *relatedTopicIDs;
@property (nonatomic, retain) NSMutableArray *relatedTopicIDsForOnboardings;
@property (nonatomic, retain) NSString *replacementID;
@property (nonatomic) long long score;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *templateJson;
@property (nonatomic) int type;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)channelSectionFeedConfigurationsType;
+ (Class)channelSectionIDsType;
+ (Class)iAdCategoriesType;
+ (Class)iAdKeywordsType;
+ (Class)pinnedArticleIDsType;
+ (Class)publisherPaidFeldsparablePurchaseIDsType;
+ (Class)publisherSpecifiedArticleIdsType;
+ (Class)purchaseOfferableConfigurationType;
+ (Class)relatedChannelIDsForOnboardingType;
+ (Class)relatedChannelIDsType;
+ (Class)relatedTopicIDsForOnboardingType;
+ (Class)relatedTopicIDsType;

- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)addChannelSectionFeedConfigurations:(id)arg1;
- (void)addChannelSectionIDs:(id)arg1;
- (void)addIAdCategories:(id)arg1;
- (void)addIAdKeywords:(id)arg1;
- (void)addPinnedArticleIDs:(id)arg1;
- (void)addPublisherPaidFeldsparablePurchaseIDs:(id)arg1;
- (void)addPublisherSpecifiedArticleIds:(id)arg1;
- (void)addPurchaseOfferableConfiguration:(id)arg1;
- (void)addRelatedChannelIDs:(id)arg1;
- (void)addRelatedChannelIDsForOnboarding:(id)arg1;
- (void)addRelatedTopicIDs:(id)arg1;
- (void)addRelatedTopicIDsForOnboarding:(id)arg1;
- (id)allowedStorefrontIDs;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)articleRecirculationConfiguration;
- (id)base;
- (long long)behaviorFlags;
- (id)blockedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (id)channelDefaultSectionID;
- (id)channelSectionFeedConfigurations;
- (id)channelSectionFeedConfigurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelSectionFeedConfigurationsCount;
- (id)channelSectionIDs;
- (id)channelSectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelSectionIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearBlockedStorefrontIDs;
- (void)clearChannelSectionFeedConfigurations;
- (void)clearChannelSectionIDs;
- (void)clearIAdCategories;
- (void)clearIAdKeywords;
- (void)clearPinnedArticleIDs;
- (void)clearPublisherPaidFeldsparablePurchaseIDs;
- (void)clearPublisherSpecifiedArticleIds;
- (void)clearPurchaseOfferableConfigurations;
- (void)clearRelatedChannelIDs;
- (void)clearRelatedChannelIDsForOnboardings;
- (void)clearRelatedTopicIDs;
- (void)clearRelatedTopicIDsForOnboardings;
- (long long)contentProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticleListID;
- (id)coverImageURL;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedConfiguration;
- (id)feedNavImageURL;
- (int)groupingAvailability;
- (bool)hasArticleRecirculationConfiguration;
- (bool)hasBase;
- (bool)hasBehaviorFlags;
- (bool)hasChannelDefaultSectionID;
- (bool)hasContentProvider;
- (bool)hasCoverArticleListID;
- (bool)hasCoverImageURL;
- (bool)hasFeedConfiguration;
- (bool)hasFeedNavImageURL;
- (bool)hasGroupingAvailability;
- (bool)hasHideAccessoryText;
- (bool)hasIsDeprecated;
- (bool)hasIsExplicitContent;
- (bool)hasIsHidden;
- (bool)hasIsNotificationEnabled;
- (bool)hasIsPublic;
- (bool)hasLogoURL;
- (bool)hasMinimumNewsVersion;
- (bool)hasName;
- (bool)hasNameCompact;
- (bool)hasNameImageBaselineShift;
- (bool)hasNameImageCompactMetadata;
- (bool)hasNameImageCompactURL;
- (bool)hasNameImageForDarkBackgroundURL;
- (bool)hasNameImageMaskURL;
- (bool)hasNameImageMaskWidgetHQURL;
- (bool)hasNameImageMaskWidgetLQURL;
- (bool)hasNameImageMetadata;
- (bool)hasNameImageScaleFactor;
- (bool)hasNameImageURL;
- (bool)hasParentID;
- (bool)hasPrimaryAudience;
- (bool)hasPublisherPaidAuthorizationURL;
- (bool)hasPublisherPaidDescriptionStrings;
- (bool)hasPublisherPaidLeakyPaywallOptOut;
- (bool)hasPublisherPaidVerificationURL;
- (bool)hasPublisherPaidWebOptIn;
- (bool)hasPublisherPaidWebaccessURL;
- (bool)hasPublisherSpecifiedArticleIdsModifiedDate;
- (bool)hasReplacementID;
- (bool)hasScore;
- (bool)hasSubtitle;
- (bool)hasTemplateJson;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)hideAccessoryText;
- (id)iAdCategories;
- (id)iAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdCategoriesCount;
- (id)iAdKeywords;
- (id)iAdKeywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdKeywordsCount;
- (bool)isDeprecated;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (bool)isHidden;
- (bool)isNotificationEnabled;
- (bool)isPublic;
- (id)logoURL;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (id)name;
- (id)nameCompact;
- (unsigned long long)nameImageBaselineShift;
- (id)nameImageCompactMetadata;
- (id)nameImageCompactURL;
- (id)nameImageForDarkBackgroundURL;
- (id)nameImageMaskURL;
- (id)nameImageMaskWidgetHQURL;
- (id)nameImageMaskWidgetLQURL;
- (id)nameImageMetadata;
- (double)nameImageScaleFactor;
- (id)nameImageURL;
- (id)parentID;
- (id)pinnedArticleIDs;
- (id)pinnedArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pinnedArticleIDsCount;
- (id)primaryAudience;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidDescriptionStrings;
- (id)publisherPaidFeldsparablePurchaseIDs;
- (id)publisherPaidFeldsparablePurchaseIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherPaidFeldsparablePurchaseIDsCount;
- (bool)publisherPaidLeakyPaywallOptOut;
- (id)publisherPaidVerificationURL;
- (bool)publisherPaidWebOptIn;
- (id)publisherPaidWebaccessURL;
- (id)publisherSpecifiedArticleIds;
- (id)publisherSpecifiedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherSpecifiedArticleIdsCount;
- (id)publisherSpecifiedArticleIdsModifiedDate;
- (id)purchaseOfferableConfigurationAtIndex:(unsigned long long)arg1;
- (id)purchaseOfferableConfigurations;
- (unsigned long long)purchaseOfferableConfigurationsCount;
- (bool)readFrom:(id)arg1;
- (id)relatedChannelIDs;
- (id)relatedChannelIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedChannelIDsCount;
- (id)relatedChannelIDsForOnboardingAtIndex:(unsigned long long)arg1;
- (id)relatedChannelIDsForOnboardings;
- (unsigned long long)relatedChannelIDsForOnboardingsCount;
- (id)relatedTopicIDs;
- (id)relatedTopicIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedTopicIDsCount;
- (id)relatedTopicIDsForOnboardingAtIndex:(unsigned long long)arg1;
- (id)relatedTopicIDsForOnboardings;
- (unsigned long long)relatedTopicIDsForOnboardingsCount;
- (id)replacementID;
- (long long)score;
- (void)setAllowedStorefrontIDs:(id)arg1;
- (void)setArticleRecirculationConfiguration:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBehaviorFlags:(long long)arg1;
- (void)setBlockedStorefrontIDs:(id)arg1;
- (void)setChannelDefaultSectionID:(id)arg1;
- (void)setChannelSectionFeedConfigurations:(id)arg1;
- (void)setChannelSectionIDs:(id)arg1;
- (void)setContentProvider:(long long)arg1;
- (void)setCoverArticleListID:(id)arg1;
- (void)setCoverImageURL:(id)arg1;
- (void)setFeedConfiguration:(id)arg1;
- (void)setFeedNavImageURL:(id)arg1;
- (void)setGroupingAvailability:(int)arg1;
- (void)setHasBehaviorFlags:(bool)arg1;
- (void)setHasContentProvider:(bool)arg1;
- (void)setHasGroupingAvailability:(bool)arg1;
- (void)setHasHideAccessoryText:(bool)arg1;
- (void)setHasIsDeprecated:(bool)arg1;
- (void)setHasIsExplicitContent:(bool)arg1;
- (void)setHasIsHidden:(bool)arg1;
- (void)setHasIsNotificationEnabled:(bool)arg1;
- (void)setHasIsPublic:(bool)arg1;
- (void)setHasMinimumNewsVersion:(bool)arg1;
- (void)setHasNameImageBaselineShift:(bool)arg1;
- (void)setHasNameImageScaleFactor:(bool)arg1;
- (void)setHasPublisherPaidLeakyPaywallOptOut:(bool)arg1;
- (void)setHasPublisherPaidWebOptIn:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHideAccessoryText:(bool)arg1;
- (void)setIAdCategories:(id)arg1;
- (void)setIAdKeywords:(id)arg1;
- (void)setIsDeprecated:(bool)arg1;
- (void)setIsExplicitContent:(bool)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setIsNotificationEnabled:(bool)arg1;
- (void)setIsPublic:(bool)arg1;
- (void)setLogoURL:(id)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNameCompact:(id)arg1;
- (void)setNameImageBaselineShift:(unsigned long long)arg1;
- (void)setNameImageCompactMetadata:(id)arg1;
- (void)setNameImageCompactURL:(id)arg1;
- (void)setNameImageForDarkBackgroundURL:(id)arg1;
- (void)setNameImageMaskURL:(id)arg1;
- (void)setNameImageMaskWidgetHQURL:(id)arg1;
- (void)setNameImageMaskWidgetLQURL:(id)arg1;
- (void)setNameImageMetadata:(id)arg1;
- (void)setNameImageScaleFactor:(double)arg1;
- (void)setNameImageURL:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setPinnedArticleIDs:(id)arg1;
- (void)setPrimaryAudience:(id)arg1;
- (void)setPublisherPaidAuthorizationURL:(id)arg1;
- (void)setPublisherPaidDescriptionStrings:(id)arg1;
- (void)setPublisherPaidFeldsparablePurchaseIDs:(id)arg1;
- (void)setPublisherPaidLeakyPaywallOptOut:(bool)arg1;
- (void)setPublisherPaidVerificationURL:(id)arg1;
- (void)setPublisherPaidWebOptIn:(bool)arg1;
- (void)setPublisherPaidWebaccessURL:(id)arg1;
- (void)setPublisherSpecifiedArticleIds:(id)arg1;
- (void)setPublisherSpecifiedArticleIdsModifiedDate:(id)arg1;
- (void)setPurchaseOfferableConfigurations:(id)arg1;
- (void)setRelatedChannelIDs:(id)arg1;
- (void)setRelatedChannelIDsForOnboardings:(id)arg1;
- (void)setRelatedTopicIDs:(id)arg1;
- (void)setRelatedTopicIDsForOnboardings:(id)arg1;
- (void)setReplacementID:(id)arg1;
- (void)setScore:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTemplateJson:(id)arg1;
- (void)setType:(int)arg1;
- (id)subtitle;
- (id)templateJson;
- (int)type;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)generateCoverImageAssetHandleForURLString:(id)arg1 withAssetManager:(id)arg2;
- (id)generateCoverImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateFeedNavImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateLogoImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageCompactAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageForDarkBackgroundAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageMaskAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2;

@end
