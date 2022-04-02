/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
    int  _activeTileGroupChangedNotificationToken;
    NSString * _authToken;
    NSLock * _authTokenLock;
    GEOResourceManifestConfiguration * _configuration;
    NSObject<OS_xpc_object> * _conn;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <GEOResourceManifestServerProxyDelegate> * _delegate;
    bool  _hasOpenConnection;
    bool  _isLoadingResources;
    bool  _isUpdatingManifest;
    bool  _sentConfigurationMessage;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property (nonatomic, readonly) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOResourceManifestServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (id)_xpcConnection;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (id)activeTileGroup;
- (id)authToken;
- (void)cancelCurrentManifestUpdate;
- (void)closeConnection;
- (id)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forceUpdate:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getResourceManifestWithHandler:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateIfNecessary:(id /* block */)arg1;
- (id)updateProgress;

@end
