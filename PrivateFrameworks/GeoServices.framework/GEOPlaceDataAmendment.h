/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataAmendment : PBCodable <NSCopying> {
    struct { 
        unsigned int suppressSiriRating : 1; 
    }  _has;
    bool  _suppressSiriRating;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSuppressSiriRating;
@property (nonatomic) bool suppressSiriRating;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSuppressSiriRating;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSuppressSiriRating:(bool)arg1;
- (void)setSuppressSiriRating:(bool)arg1;
- (bool)suppressSiriRating;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
