/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying> {
    NSString * _launchUri;
    NSString * _sourceAppId;
}

@property (nonatomic, readonly) bool hasLaunchUri;
@property (nonatomic, readonly) bool hasSourceAppId;
@property (nonatomic, retain) NSString *launchUri;
@property (nonatomic, retain) NSString *sourceAppId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLaunchUri;
- (bool)hasSourceAppId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)launchUri;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLaunchUri:(id)arg1;
- (void)setSourceAppId:(id)arg1;
- (id)sourceAppId;
- (void)writeTo:(id)arg1;

@end
