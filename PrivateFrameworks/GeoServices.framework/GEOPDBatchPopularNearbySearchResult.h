/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchPopularNearbySearchResult : PBCodable <NSCopying> {
    NSMutableArray * _popularNearbyResults;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *popularNearbyResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)popularNearbyResultType;

- (void).cxx_destruct;
- (void)addPopularNearbyResult:(id)arg1;
- (void)clearPopularNearbyResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)popularNearbyResultAtIndex:(unsigned long long)arg1;
- (id)popularNearbyResults;
- (unsigned long long)popularNearbyResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setPopularNearbyResults:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
