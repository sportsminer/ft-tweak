/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFContinuityScanManager : NSObject <SFCompanionXPCManagerObserver, SFContinuityScannerClient> {
    <SFContinuityScannerProtocol><NSXPCProxyCreating> * _connectionProxy;
    NSMutableSet * _foundDevices;
    NSHashTable * _observers;
    unsigned long long  _scanTypes;
    bool  _xpcSetupInProgress;
}

@property (retain) <SFContinuityScannerProtocol><NSXPCProxyCreating> *connectionProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableSet *foundDevices;
@property (readonly) unsigned long long hash;
@property (retain) NSHashTable *observers;
@property unsigned long long scanTypes;
@property (readonly) Class superclass;
@property bool xpcSetupInProgress;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)addObserver:(id)arg1;
- (id)connectionProxy;
- (void)foundDeviceWithDevice:(id)arg1;
- (id)foundDevices;
- (id)init;
- (void)lostDeviceWithDevice:(id)arg1;
- (id)observers;
- (void)pairedDevicesChanged:(id)arg1;
- (void)receivedAdvertisement:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)scanForTypes:(unsigned long long)arg1;
- (unsigned long long)scanTypes;
- (void)setConnectionProxy:(id)arg1;
- (void)setFoundDevices:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setScanTypes:(unsigned long long)arg1;
- (void)setXpcSetupInProgress:(bool)arg1;
- (void)setupProxyIfNeeded;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidResumeConnection:(id)arg1;
- (bool)xpcSetupInProgress;

@end
