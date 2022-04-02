/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorldClockComplication : NTKComplication {
    WorldClockCity * _city;
}

@property (nonatomic, readonly) WorldClockCity *city;

+ (id)_allCities;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
