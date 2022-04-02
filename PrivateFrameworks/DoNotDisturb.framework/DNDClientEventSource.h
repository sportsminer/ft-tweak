/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDClientEventSource : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)sourceWithCNContactIdentifier:(id)arg1;
+ (id)sourceWithDestinationIdentifier:(id)arg1;
+ (id)sourceWithPhoneNumber:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)value;

@end
