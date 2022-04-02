/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState> {
    NSString * _activeControllerIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSString *activeControllerIdentifier;
@property (nonatomic, readonly) NSString *activeControllerPairingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)systemStore;

- (void).cxx_destruct;
- (int)_addKeychainItem:(id)arg1 logDuplicateItemError:(bool)arg2;
- (id)_auditAccessoryKeys:(id)arg1;
- (int)_createControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4;
- (int)_createMetadataSecretKey:(id*)arg1;
- (int)_deleteAllPeripheralIdentifiers;
- (int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1;
- (int)_getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3;
- (id)_getControllerKeychainItemError:(int*)arg1;
- (id)_getControllerKeychainItemForKeyType:(id)arg1 error:(int*)arg2;
- (int)_getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4;
- (id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(bool)arg4 error:(int*)arg5;
- (id)_getLocalPairingIdentityAllowingCreation:(bool)arg1 error:(id*)arg2;
- (int)_getMetadataSecretKey:(id*)arg1;
- (int)_getPeripheralIdentifier:(id*)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long*)arg3 resumeSessionID:(unsigned long long*)arg4;
- (int)_getPublicKey:(id*)arg1 registeredWithHomeKit:(bool*)arg2 forAccessoryName:(id)arg3;
- (int)_removeAccessoryKeyForName:(id)arg1;
- (int)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(bool)arg2;
- (int)_removeControllerKeyPairForKeyType:(id)arg1 identifier:(id)arg2 leaveTombstone:(bool)arg3;
- (int)_removeKeychainItem:(id)arg1 leaveTombstone:(bool)arg2;
- (int)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(bool)arg3 keyType:(id)arg4;
- (int)_savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4;
- (int)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2;
- (int)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2;
- (void)_updateKeychainItemToInvisible:(id)arg1;
- (id)activeControllerIdentifier;
- (id)activeControllerPairingIdentifier;
- (id)auditAccessoryKeys:(id)arg1;
- (bool)deleteAllPeripheralIdentifiers:(id*)arg1;
- (bool)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id*)arg2;
- (bool)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
- (id)dumpState;
- (void)ensureControllerKeyExistsForAllViews;
- (bool)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
- (bool)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(bool)arg5 error:(id*)arg6;
- (bool)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(bool)arg4 error:(id*)arg5;
- (bool)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
- (id)getLocalPairingIdentity:(id*)arg1;
- (bool)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
- (id)getOrCreateLocalPairingIdentity:(id*)arg1;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (id)queue;
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long*)arg2 resumeSessionID:(unsigned long long*)arg3 error:(id*)arg4;
- (id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(bool*)arg2 error:(id*)arg3;
- (bool)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2;
- (bool)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2;
- (bool)removeAllAccessoryKeys:(id*)arg1;
- (bool)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(bool)arg2 error:(id*)arg3;
- (bool)removeControllerKeyPairLeaveTombstone:(bool)arg1 error:(id*)arg2;
- (bool)removeControllerKeyPairWithError:(id*)arg1;
- (bool)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(bool)arg3 error:(id*)arg4;
- (bool)saveLocalPairingIdentity:(id)arg1 syncable:(bool)arg2 error:(id*)arg3;
- (bool)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4 error:(id*)arg5;
- (bool)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
- (void)setActiveControllerIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)updateActiveControllerPairingIdentifier:(id)arg1;
- (bool)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3;
- (bool)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long*)arg4 resumeSessionID:(unsigned long long)arg5 error:(id*)arg6;

@end
