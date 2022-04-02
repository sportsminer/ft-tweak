/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntityRecord : _PASZonedObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned char  _algorithm;
    unsigned char  _changeType;
    float  _decayRate;
    PPNamedEntity * _entity;
    unsigned short  _extractionAssetVersion;
    NSString * _extractionOsBuild;
    float  _initialScore;
    PPSource * _source;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) unsigned char changeType;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) PPNamedEntity *entity;
@property (nonatomic, readonly) unsigned long long extractionAssetVersion;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) PPSource *source;

+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (id)describeChangeType:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)algorithm;
- (unsigned char)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decayRate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (unsigned long long)extractionAssetVersion;
- (id)extractionOsBuild;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (double)initialScore;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntityRecord:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)source;

@end
