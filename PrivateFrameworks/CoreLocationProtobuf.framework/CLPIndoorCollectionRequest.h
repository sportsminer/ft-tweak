/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _bundleIds;
    NSMutableArray * _indoorCMAttitudes;
    NSMutableArray * _indoorCMPedometers;
    NSMutableArray * _indoorLocations;
    NSMutableArray * _indoorMotionActivitys;
    NSMutableArray * _indoorPressures;
    NSMutableArray * _indoorWifis;
    CLPMeta * _meta;
}

@property (nonatomic, retain) NSMutableArray *bundleIds;
@property (nonatomic, retain) NSMutableArray *indoorCMAttitudes;
@property (nonatomic, retain) NSMutableArray *indoorCMPedometers;
@property (nonatomic, retain) NSMutableArray *indoorLocations;
@property (nonatomic, retain) NSMutableArray *indoorMotionActivitys;
@property (nonatomic, retain) NSMutableArray *indoorPressures;
@property (nonatomic, retain) NSMutableArray *indoorWifis;
@property (nonatomic, retain) CLPMeta *meta;

+ (Class)bundleIdType;
+ (Class)indoorCMAttitudeType;
+ (Class)indoorCMPedometerType;
+ (Class)indoorLocationsType;
+ (Class)indoorMotionActivityType;
+ (Class)indoorPressureType;
+ (Class)indoorWifisType;

- (void).cxx_destruct;
- (void)addBundleId:(id)arg1;
- (void)addIndoorCMAttitude:(id)arg1;
- (void)addIndoorCMPedometer:(id)arg1;
- (void)addIndoorLocations:(id)arg1;
- (void)addIndoorMotionActivity:(id)arg1;
- (void)addIndoorPressure:(id)arg1;
- (void)addIndoorWifis:(id)arg1;
- (id)bundleIdAtIndex:(unsigned long long)arg1;
- (id)bundleIds;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (void)clearIndoorCMAttitudes;
- (void)clearIndoorCMPedometers;
- (void)clearIndoorLocations;
- (void)clearIndoorMotionActivitys;
- (void)clearIndoorPressures;
- (void)clearIndoorWifis;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)indoorCMAttitudeAtIndex:(unsigned long long)arg1;
- (id)indoorCMAttitudes;
- (unsigned long long)indoorCMAttitudesCount;
- (id)indoorCMPedometerAtIndex:(unsigned long long)arg1;
- (id)indoorCMPedometers;
- (unsigned long long)indoorCMPedometersCount;
- (id)indoorLocations;
- (id)indoorLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorLocationsCount;
- (id)indoorMotionActivityAtIndex:(unsigned long long)arg1;
- (id)indoorMotionActivitys;
- (unsigned long long)indoorMotionActivitysCount;
- (id)indoorPressureAtIndex:(unsigned long long)arg1;
- (id)indoorPressures;
- (unsigned long long)indoorPressuresCount;
- (id)indoorWifis;
- (id)indoorWifisAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorWifisCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setBundleIds:(id)arg1;
- (void)setIndoorCMAttitudes:(id)arg1;
- (void)setIndoorCMPedometers:(id)arg1;
- (void)setIndoorLocations:(id)arg1;
- (void)setIndoorMotionActivitys:(id)arg1;
- (void)setIndoorPressures:(id)arg1;
- (void)setIndoorWifis:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)writeTo:(id)arg1;

@end
