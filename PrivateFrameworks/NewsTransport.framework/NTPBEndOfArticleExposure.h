/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEndOfArticleExposure : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _articleType;
    int  _backendArticleVersion;
    long long  _backendArticleVersionInt64;
    int  _characterCount;
    NSString * _feedId;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int backendArticleVersionInt64 : 1; 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int publisherArticleVersionInt64 : 1; 
        unsigned int articleType : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int characterCount : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    bool  _isUserSubscribedToFeed;
    NSString * _language;
    NSMutableArray * _namedEntities;
    long long  _personalizationTreatmentId;
    int  _publisherArticleVersion;
    long long  _publisherArticleVersionInt64;
    NSMutableArray * _recommendedArticleIds;
    NSString * _referencedArticleId;
    NSMutableArray * _referencedRecommendedArticleIds;
    NSString * _sectionHeadlineId;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int articleType;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic) long long backendArticleVersionInt64;
@property (nonatomic) int characterCount;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasArticleType;
@property (nonatomic) bool hasBackendArticleVersion;
@property (nonatomic) bool hasBackendArticleVersionInt64;
@property (nonatomic) bool hasCharacterCount;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasIsUserSubscribedToFeed;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasPersonalizationTreatmentId;
@property (nonatomic) bool hasPublisherArticleVersion;
@property (nonatomic) bool hasPublisherArticleVersionInt64;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic, readonly) bool hasSectionHeadlineId;
@property (nonatomic, readonly) bool hasSurfacedByChannelId;
@property (nonatomic, readonly) bool hasSurfacedBySectionId;
@property (nonatomic, readonly) bool hasSurfacedByTopicId;
@property (nonatomic) bool isUserSubscribedToFeed;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic, retain) NSMutableArray *recommendedArticleIds;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSMutableArray *referencedRecommendedArticleIds;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;

+ (Class)namedEntitiesType;
+ (Class)recommendedArticleIdType;
+ (Class)referencedRecommendedArticleIdsType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (void)addRecommendedArticleId:(id)arg1;
- (void)addReferencedRecommendedArticleIds:(id)arg1;
- (id)articleId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (int)backendArticleVersion;
- (long long)backendArticleVersionInt64;
- (int)characterCount;
- (void)clearNamedEntities;
- (void)clearRecommendedArticleIds;
- (void)clearReferencedRecommendedArticleIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (id)feedViewExposureId;
- (bool)hasArticleId;
- (bool)hasArticleType;
- (bool)hasBackendArticleVersion;
- (bool)hasBackendArticleVersionInt64;
- (bool)hasCharacterCount;
- (bool)hasFeedId;
- (bool)hasFeedViewExposureId;
- (bool)hasIsUserSubscribedToFeed;
- (bool)hasLanguage;
- (bool)hasPersonalizationTreatmentId;
- (bool)hasPublisherArticleVersion;
- (bool)hasPublisherArticleVersionInt64;
- (bool)hasReferencedArticleId;
- (bool)hasSectionHeadlineId;
- (bool)hasSurfacedByChannelId;
- (bool)hasSurfacedBySectionId;
- (bool)hasSurfacedByTopicId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isUserSubscribedToFeed;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (long long)personalizationTreatmentId;
- (int)publisherArticleVersion;
- (long long)publisherArticleVersionInt64;
- (bool)readFrom:(id)arg1;
- (id)recommendedArticleIdAtIndex:(unsigned long long)arg1;
- (id)recommendedArticleIds;
- (unsigned long long)recommendedArticleIdsCount;
- (id)referencedArticleId;
- (id)referencedRecommendedArticleIds;
- (id)referencedRecommendedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencedRecommendedArticleIdsCount;
- (id)sectionHeadlineId;
- (void)setArticleId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setBackendArticleVersionInt64:(long long)arg1;
- (void)setCharacterCount:(int)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasArticleType:(bool)arg1;
- (void)setHasBackendArticleVersion:(bool)arg1;
- (void)setHasBackendArticleVersionInt64:(bool)arg1;
- (void)setHasCharacterCount:(bool)arg1;
- (void)setHasIsUserSubscribedToFeed:(bool)arg1;
- (void)setHasPersonalizationTreatmentId:(bool)arg1;
- (void)setHasPublisherArticleVersion:(bool)arg1;
- (void)setHasPublisherArticleVersionInt64:(bool)arg1;
- (void)setIsUserSubscribedToFeed:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setPersonalizationTreatmentId:(long long)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setPublisherArticleVersionInt64:(long long)arg1;
- (void)setRecommendedArticleIds:(id)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setReferencedRecommendedArticleIds:(id)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (void)writeTo:(id)arg1;

@end
