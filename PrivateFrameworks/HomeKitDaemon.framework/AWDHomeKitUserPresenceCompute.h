/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitUserPresenceCompute : PBCodable <NSCopying> {
    int  _compute;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int compute : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int compute;
@property (nonatomic) bool hasCompute;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsCompute:(id)arg1;
- (int)compute;
- (id)computeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompute;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompute:(int)arg1;
- (void)setHasCompute:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
