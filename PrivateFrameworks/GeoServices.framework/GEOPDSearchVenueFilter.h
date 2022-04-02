/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchVenueFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int venueSearchType : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueFilter;
    int  _venueSearchType;
}

@property (nonatomic, readonly) bool hasVenueFilter;
@property (nonatomic) bool hasVenueSearchType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueFilter;
@property (nonatomic) int venueSearchType;

- (void).cxx_destruct;
- (int)StringAsVenueSearchType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVenueFilter;
- (bool)hasVenueSearchType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVenueSearchType:(bool)arg1;
- (void)setVenueFilter:(id)arg1;
- (void)setVenueSearchType:(int)arg1;
- (id)unknownFields;
- (id)venueFilter;
- (int)venueSearchType;
- (id)venueSearchTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
