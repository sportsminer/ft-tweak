/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {
    struct { 
        unsigned int isAirQualityShown : 1; 
    }  _has;
    bool  _isAirQualityShown;
}

@property (nonatomic) bool hasIsAirQualityShown;
@property (nonatomic) bool isAirQualityShown;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsAirQualityShown;
- (unsigned long long)hash;
- (bool)isAirQualityShown;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAirQualityShown:(bool)arg1;
- (void)setIsAirQualityShown:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
