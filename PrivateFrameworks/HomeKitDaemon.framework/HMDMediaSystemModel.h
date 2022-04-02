/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *configuredName;
@property (nonatomic, retain) NSArray *mediaSystemComponents;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSData *symptoms;

+ (id)modelWithMessage:(id)arg1 home:(id)arg2 changetype:(unsigned long long)arg3 outError:(id*)arg4;
+ (id)properties;
+ (id)schemaHashRoot;

- (id)dependentUUIDs;

@end
