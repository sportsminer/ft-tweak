/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol> {
    SBCPlaybackPositionDomain * _playbackPositionDomain;
    bool  _usingPlaybackPositions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBCPlaybackPositionDomain *playbackPositionDomain;
@property (readonly) Class superclass;
@property (readonly) bool usingPlaybackPositions;

+ (Class)XPCServiceInterfaceClass;
+ (id)_serviceForPlaybackPositionDomain:(id)arg1;
+ (id)serviceForSyncDomain:(id)arg1;
+ (id)serviceForValueDomain:(id)arg1;

- (void).cxx_destruct;
- (oneway void)beginAccessingPlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(id)arg1;
- (void)didConnectToService;
- (oneway void)endAccessingPlaybackPositionEntities;
- (id)initWithPlaybackPositionDomain:(id)arg1;
- (oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)playbackPositionDomain;
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(id /* block */)arg2;
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(id /* block */)arg2;
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(id /* block */)arg2;
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(id /* block */)arg1;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
- (bool)usingPlaybackPositions;
- (void)validateConnectionConfiguration;

@end
