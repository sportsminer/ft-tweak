/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationManager : NSObject <BRCModule> {
    unsigned long long  _activeAliasQueries;
    NSMutableSet * _additionalUpdatesItemRowID;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    BRCXPCClient * _client;
    NSMapTable * _fileObjectIDByWatcher;
    bool  _isCancelled;
    BRNotificationQueue * _notifs;
    NSHashTable * _pipes;
    unsigned long long  _previousMaxRank;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    BRCClientRanksPersistedState * _state;
    NSMutableDictionary * _transferCache;
    NSMutableDictionary * _watchersByFileObjectID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasActiveAliasWatchers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchUpdatesToPipesWithRank:(unsigned long long)arg1;
- (void)_queueAdditionalUpdates;
- (void)cancel;
- (void)close;
- (void)fetchLastFlushedRankWithReply:(id /* block */)arg1;
- (void)flushUpdatesWithRank:(unsigned long long)arg1;
- (void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 reply:(id /* block */)arg3;
- (bool)hasActiveAliasWatchers;
- (bool)hasWatcherForDocumentID:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)invalidatePipesWatchingAppLibraryIDs:(id)arg1;
- (bool)isCancelled;
- (void)pipeDelegateInvalidated:(id)arg1;
- (id)pipeWithReceiver:(id)arg1;
- (void)queueProgressUpdates:(id)arg1;
- (void)queueUpdate:(id)arg1;
- (void)queueUpdateForItemAtRowID:(unsigned long long)arg1;
- (void)registerAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)registerPipe:(id)arg1 asWatcherForFileObjectID:(id)arg2;
- (void)resume;
- (id)session;
- (void)suspend;
- (void)unregisterAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)unregisterPipeAsWatcher:(id)arg1;

@end
