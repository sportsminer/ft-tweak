/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitPresenceEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int presenceEventGranularity : 1; 
        unsigned int presenceEventType : 1; 
    }  _has;
    int  _presenceEventGranularity;
    int  _presenceEventType;
}

@property (nonatomic) bool hasPresenceEventGranularity;
@property (nonatomic) bool hasPresenceEventType;
@property (nonatomic) int presenceEventGranularity;
@property (nonatomic) int presenceEventType;

- (int)StringAsPresenceEventGranularity:(id)arg1;
- (int)StringAsPresenceEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPresenceEventGranularity;
- (bool)hasPresenceEventType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)presenceEventGranularity;
- (id)presenceEventGranularityAsString:(int)arg1;
- (int)presenceEventType;
- (id)presenceEventTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPresenceEventGranularity:(bool)arg1;
- (void)setHasPresenceEventType:(bool)arg1;
- (void)setPresenceEventGranularity:(int)arg1;
- (void)setPresenceEventType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
