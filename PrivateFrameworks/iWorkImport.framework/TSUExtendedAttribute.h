/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUExtendedAttribute : NSObject <NSCopying> {
    NSString * _name;
    NSData * _value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *value;

+ (id)extendedAttributeFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id*)arg4;
+ (id)extendedAttributeWithName:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id*)arg4;
- (id)initFromPathFileSystemRepresentation:(const char *)arg1 name:(id)arg2 options:(int)arg3 error:(id*)arg4;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)setAttributeToPath:(id)arg1 options:(int)arg2 error:(id*)arg3;
- (bool)setAttributeToPathFileSystemRepresentation:(const char *)arg1 options:(int)arg2 error:(id*)arg3;
- (bool)shouldPreserveForIntent:(unsigned int)arg1;
- (id)value;

@end
