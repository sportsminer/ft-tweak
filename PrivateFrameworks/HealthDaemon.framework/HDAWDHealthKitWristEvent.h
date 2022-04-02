/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitWristEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int onWrist : 1; 
    }  _has;
    bool  _onWrist;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasOnWrist;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool onWrist;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOnWrist;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)onWrist;
- (bool)readFrom:(id)arg1;
- (void)setHasOnWrist:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOnWrist:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
