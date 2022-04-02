/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRegion : PBCodable <NSCopying> {
    double  _eastLng;
    struct { 
        unsigned int eastLng : 1; 
        unsigned int northLat : 1; 
        unsigned int southLat : 1; 
        unsigned int westLng : 1; 
    }  _has;
    double  _northLat;
    double  _southLat;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _vertexs;
    double  _westLng;
}

@property (nonatomic, readonly) double centerLat;
@property (nonatomic, readonly) double centerLng;
@property (nonatomic) double eastLng;
@property (nonatomic) bool hasEastLng;
@property (nonatomic) bool hasNorthLat;
@property (nonatomic) bool hasSouthLat;
@property (nonatomic) bool hasWestLng;
@property (nonatomic) double northLat;
@property (nonatomic) double southLat;
@property (nonatomic, readonly) double spanLat;
@property (nonatomic, readonly) double spanLng;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *vertexs;
@property (nonatomic) double westLng;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (Class)vertexType;

- (void).cxx_destruct;
- (void)addVertex:(id)arg1;
- (double)centerLat;
- (double)centerLng;
- (void)clearVertexs;
- (bool)containsCoordinate:(struct { double x1; double x2; })arg1;
- (bool)containsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)containsRegion:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eastLng;
- (bool)hasEastLng;
- (bool)hasNorthLat;
- (bool)hasSouthLat;
- (bool)hasWestLng;
- (unsigned long long)hash;
- (id)initWithCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRadialPlace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)northLat;
- (bool)readFrom:(id)arg1;
- (void)setEastLng:(double)arg1;
- (void)setHasEastLng:(bool)arg1;
- (void)setHasNorthLat:(bool)arg1;
- (void)setHasSouthLat:(bool)arg1;
- (void)setHasWestLng:(bool)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setVertexs:(id)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)spanLat;
- (double)spanLng;
- (id)unknownFields;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (id)vertexs;
- (unsigned long long)vertexsCount;
- (double)westLng;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)_initWithCLRegion:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)arg1;
+ (id)_mapkit_mapRegionForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_mapkit_mapRegionForLatitude:(double)arg1 longitude:(double)arg2 latSpan:(double)arg3 longSpan:(double)arg4;

@end
