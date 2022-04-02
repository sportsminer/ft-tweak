/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDResolvedItem : PBCodable <NSCopying> {
    NSString * _extractedTerm;
    struct { 
        unsigned int resolvedItemType : 1; 
        unsigned int resultIndex : 1; 
    }  _has;
    int  _resolvedItemType;
    unsigned int  _resultIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *extractedTerm;
@property (nonatomic, readonly) bool hasExtractedTerm;
@property (nonatomic) bool hasResolvedItemType;
@property (nonatomic) bool hasResultIndex;
@property (nonatomic) int resolvedItemType;
@property (nonatomic) unsigned int resultIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsResolvedItemType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extractedTerm;
- (bool)hasExtractedTerm;
- (bool)hasResolvedItemType;
- (bool)hasResultIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resolvedItemType;
- (id)resolvedItemTypeAsString:(int)arg1;
- (unsigned int)resultIndex;
- (void)setExtractedTerm:(id)arg1;
- (void)setHasResolvedItemType:(bool)arg1;
- (void)setHasResultIndex:(bool)arg1;
- (void)setResolvedItemType:(int)arg1;
- (void)setResultIndex:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
