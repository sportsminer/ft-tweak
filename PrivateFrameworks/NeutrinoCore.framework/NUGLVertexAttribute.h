/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLVertexAttribute : NSObject {
    NSString * _name;
    bool  _normalized;
    int  _size;
    unsigned int  _type;
}

@property (readonly) NSString *name;
@property (nonatomic, readonly) bool normalized;
@property (readonly) int size;
@property (readonly) long long sizeInBytes;
@property (readonly) unsigned int type;

+ (id)vec2Attribute:(id)arg1;
+ (id)vec4Attribute:(id)arg1;

- (void).cxx_destruct;
- (long long)_typeSize;
- (id)init;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3 normalized:(bool)arg4;
- (id)name;
- (bool)normalized;
- (int)size;
- (long long)sizeInBytes;
- (unsigned int)type;

@end
