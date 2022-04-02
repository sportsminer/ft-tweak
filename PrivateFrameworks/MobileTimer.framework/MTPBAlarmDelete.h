/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTPBAlarmDelete : PBCodable <NSCopying> {
    NSString * _alarmID;
    double  _deletionDate;
    bool  _isSleepAlarm;
}

@property (nonatomic, retain) NSString *alarmID;
@property (nonatomic) double deletionDate;
@property (nonatomic) bool isSleepAlarm;

- (void).cxx_destruct;
- (id)alarmID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)deletionDate;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSleepAlarm;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarmID:(id)arg1;
- (void)setDeletionDate:(double)arg1;
- (void)setIsSleepAlarm:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
