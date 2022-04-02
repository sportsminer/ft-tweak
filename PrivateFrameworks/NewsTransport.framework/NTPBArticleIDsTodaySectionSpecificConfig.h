/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying> {
    NSMutableArray * _articles;
}

@property (nonatomic, retain) NSMutableArray *articles;

+ (Class)articlesType;

- (void)addArticles:(id)arg1;
- (id)articles;
- (id)articlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)articlesCount;
- (void)clearArticles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticles:(id)arg1;
- (void)writeTo:(id)arg1;

@end
