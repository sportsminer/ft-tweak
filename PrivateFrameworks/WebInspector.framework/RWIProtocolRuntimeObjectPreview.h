/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *entries;
@property (nonatomic) bool lossless;
@property (nonatomic) bool overflow;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic) int size;
@property (nonatomic, copy) NSString *stringRepresentation;
@property (nonatomic) long long subtype;
@property (nonatomic) long long type;

- (id)entries;
- (id)initWithType:(long long)arg1 lossless:(bool)arg2;
- (bool)lossless;
- (bool)overflow;
- (id)properties;
- (void)setEntries:(id)arg1;
- (void)setLossless:(bool)arg1;
- (void)setOverflow:(bool)arg1;
- (void)setProperties:(id)arg1;
- (void)setSize:(int)arg1;
- (void)setStringRepresentation:(id)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setType:(long long)arg1;
- (int)size;
- (id)stringRepresentation;
- (long long)subtype;
- (long long)type;

@end
