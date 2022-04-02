/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {
    GEOMapItemAddressBookAttributes * _addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes * _correctedLocationAttributes;
    GEOMapItemRoutineAttributes * _routineAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property (nonatomic, retain) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
@property (nonatomic, readonly) bool hasAddressBookAttributes;
@property (nonatomic, readonly) bool hasCorrectedLocationAttributes;
@property (nonatomic, readonly) bool hasRoutineAttributes;
@property (nonatomic, retain) GEOMapItemRoutineAttributes *routineAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)addressBookAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedLocationAttributes;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressBookAttributes;
- (bool)hasCorrectedLocationAttributes;
- (bool)hasRoutineAttributes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routineAttributes;
- (void)setAddressBookAttributes:(id)arg1;
- (void)setCorrectedLocationAttributes:(id)arg1;
- (void)setRoutineAttributes:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
