/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicle : NSObject <NSSecureCoding> {
    NSSet * _accessoryProtocols;
    NSString * _bluetoothAddress;
    NSString * _carplayWiFiUUID;
    NSData * _certificateSerialNumber;
    NSUUID * _identifier;
    NSString * _internalNotes;
    unsigned long long  _pairingStatus;
    NSString * _vehicleName;
}

@property (nonatomic, retain) NSSet *accessoryProtocols;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSString *carplayWiFiUUID;
@property (nonatomic, retain) NSData *certificateSerialNumber;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSString *internalNotes;
@property (nonatomic, readonly) bool isPaired;
@property (nonatomic) unsigned long long pairingStatus;
@property (nonatomic, retain) NSString *vehicleName;

+ (bool)supportsSecureCoding;
+ (id)vehicleForVehicleAccessory:(id)arg1;

- (void).cxx_destruct;
- (id)_pairingDebugDescription;
- (id)accessoryProtocols;
- (id)bluetoothAddress;
- (id)carplayWiFiUUID;
- (id)certificateSerialNumber;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (id)internalNotes;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (void)mergeAttributesFromVehicle:(id)arg1;
- (unsigned long long)pairingStatus;
- (void)setAccessoryProtocols:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCarplayWiFiUUID:(id)arg1;
- (void)setCertificateSerialNumber:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalNotes:(id)arg1;
- (void)setPairingStatus:(unsigned long long)arg1;
- (void)setVehicleName:(id)arg1;
- (id)vehicleName;

@end
