/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKSlotComplicationKey : NSObject <NSCopying> {
    NTKComplication * _complication;
    NSUUID * _deviceUUID;
    NSString * _slot;
}

@property (readonly) NTKComplication *complication;
@property (readonly) NSUUID *deviceUUID;
@property (readonly, copy) NSString *slot;

+ (id)keyWithSlot:(id)arg1 complication:(id)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)slot;

@end
