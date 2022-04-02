/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRClient : NSObject {
    NSXPCConnection * _serverConnection;
    NSObject<OS_dispatch_queue> * _serverConnectionQueue;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)_proxy;
- (void)discoverAndConnectEndpoints;
- (void)fetchCompanionCloudAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)prewarmCompanionSystemMusicApp;
- (void)refreshMediaRemoteStateIfNecessary;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withCommandOptions:(id)arg2 toOriginWithUniqueIdentifier:(int)arg3 commandResultHandler:(id /* block */)arg4;

@end
