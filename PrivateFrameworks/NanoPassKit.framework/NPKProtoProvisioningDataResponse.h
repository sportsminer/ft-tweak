/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoProvisioningDataResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
    NSData * _provisioningDataBytes;
}

@property (nonatomic) bool hasPending;
@property (nonatomic, readonly) bool hasProvisioningDataBytes;
@property (nonatomic) bool pending;
@property (nonatomic, retain) NSData *provisioningDataBytes;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (bool)hasProvisioningDataBytes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (id)provisioningDataBytes;
- (bool)readFrom:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setProvisioningDataBytes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
