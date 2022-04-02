/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAKnowledgeGetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *keys;
@property (nonatomic, copy) NSString *storeName;
@property (nonatomic, copy) NSString *storeType;
@property (readonly) Class superclass;

+ (id)getValuesForKeys;
+ (id)getValuesForKeysWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)keys;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setKeys:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setStoreType:(id)arg1;
- (id)storeName;
- (id)storeType;

@end
