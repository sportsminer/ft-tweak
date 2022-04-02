/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVPerson : PVObject {
    long long  _faceCount;
    bool  _inPersonNamingModel;
    long long  _manualOrder;
    NSString * _name;
    long long  _type;
    NSString * _uri;
    bool  _verified;
}

@property (nonatomic) long long faceCount;
@property (nonatomic) bool inPersonNamingModel;
@property (nonatomic) long long manualOrder;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic) bool verified;

- (void).cxx_destruct;
- (void)_setPropertiesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)faceCount;
- (bool)inPersonNamingModel;
- (id)initWithName:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (long long)manualOrder;
- (id)name;
- (void)setFaceCount:(long long)arg1;
- (void)setInPersonNamingModel:(bool)arg1;
- (void)setManualOrder:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUri:(id)arg1;
- (void)setVerified:(bool)arg1;
- (long long)type;
- (id)uri;
- (bool)verified;

@end
