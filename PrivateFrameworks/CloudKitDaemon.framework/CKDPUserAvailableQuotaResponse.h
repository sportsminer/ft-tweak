/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int storageAvailableBytes : 1; 
    }  _has;
    unsigned long long  _storageAvailableBytes;
}

@property (nonatomic) bool hasStorageAvailableBytes;
@property (nonatomic) unsigned long long storageAvailableBytes;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStorageAvailableBytes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStorageAvailableBytes:(bool)arg1;
- (void)setStorageAvailableBytes:(unsigned long long)arg1;
- (unsigned long long)storageAvailableBytes;
- (void)writeTo:(id)arg1;

@end
