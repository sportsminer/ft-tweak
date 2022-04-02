/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCommentContent : PBCodable <NSCopying> {
    NSData * _comment;
    bool  _encrypted;
    struct { 
        unsigned int encrypted : 1; 
    }  _has;
}

@property (nonatomic, retain) NSData *comment;
@property (nonatomic) bool encrypted;
@property (nonatomic, readonly) bool hasComment;
@property (nonatomic) bool hasEncrypted;

- (void).cxx_destruct;
- (id)comment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)encrypted;
- (bool)hasComment;
- (bool)hasEncrypted;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setEncrypted:(bool)arg1;
- (void)setHasEncrypted:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
