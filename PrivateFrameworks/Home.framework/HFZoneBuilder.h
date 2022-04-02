/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFZoneBuilder : HFItemBuilder {
    NSString * _name;
    HFMutableSetDiff * _roomUUIDs;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HFMutableSetDiff *roomUUIDs;
@property (nonatomic, readonly) NSSet *rooms;
@property (nonatomic, readonly) HMZone *zone;

+ (Class)homeKitRepresentationClass;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)_createZone;
- (id)_performValidation;
- (id)_updateName;
- (id)_updateRooms;
- (void)addRoom:(id)arg1;
- (id)commitItem;
- (unsigned long long)hash;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)removeRoom:(id)arg1;
- (id)roomUUIDs;
- (id)rooms;
- (void)setName:(id)arg1;
- (void)setRoomUUIDs:(id)arg1;
- (void)setZone:(id)arg1;
- (id)zone;

@end
