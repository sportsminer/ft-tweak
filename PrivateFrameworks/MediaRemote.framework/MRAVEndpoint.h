/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVEndpoint : NSObject {
    NSOperationQueue * _connectionHandlerOperationQueue;
    NSTimer * _connectionTimeoutTimer;
    long long  _connectionType;
    NSString * _localizedName;
    bool  _outputDevicesDidChangeNotificationScheduled;
    NSMutableArray * _pendingConnectionHandlers;
    bool  _proxyGroupPlayer;
    bool  _registeredForConnectionStateDidChangeNotifications;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool canModifyGroupMembership;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) _MRAVEndpointDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) MRAVOutputDevice *designatedGroupLeader;
@property (nonatomic, readonly) MRExternalDevice *externalDevice;
@property (nonatomic, readonly) NSDictionary *jsonEncodableDictionaryRepresentation;
@property (getter=isLocalEndpoint, nonatomic, readonly) bool localEndpoint;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, readonly) unsigned long long logicalOutputDeviceCount;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (getter=isProxyGroupPlayer, nonatomic) bool proxyGroupPlayer;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (void)_modifyOutputDevices:(id)arg1 inGroup:(id)arg2 queue:(id)arg3 modifyDevices:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (id)_notificationSerialQueue;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;

- (void).cxx_destruct;
- (void)_callAllCompletionHandlersWithError:(id)arg1;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)canModifyGroupMembership;
- (void)connectToExternalDeviceWithCompletion:(id /* block */)arg1;
- (long long)connectionType;
- (bool)containsOutputDevice:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (bool)isEqual:(id)arg1;
- (bool)isLocalEndpoint;
- (bool)isProxyGroupPlayer;
- (bool)isVolumeControlAvailable;
- (id)jsonEncodableDictionaryRepresentation;
- (id)localizedName;
- (unsigned long long)logicalOutputDeviceCount;
- (id)outputDeviceUIDs;
- (id)outputDeviceUIDsMatchingPredicate:(id /* block */)arg1;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)outputDevices;
- (id)outputDevicesMatchingPredicate:(id /* block */)arg1;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)scheduleEndpointOutputDevicesDidChangeNotification;
- (void)setLocalizedName:(id)arg1;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)setProxyGroupPlayer:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)shortDescription;
- (id)uniqueIdentifier;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

@end
