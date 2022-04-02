/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseConnectionPool : NSObject {
    unsigned long long  _connectionsJournalingMode;
    int  _connectionsProfilingLevel;
    NSString * _databasePath;
    <ML3DatabaseConnectionPoolDelegate> * _delegate;
    NSMutableDictionary * _identifiersConnectionsMap;
    bool  _locked;
    unsigned long long  _maxReaders;
    unsigned long long  _maxWriters;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _poolLockCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _poolLockMutex;
    NSUUID * _poolStorageKey;
    _ML3DatabaseConnectionSubPool * _readersSubPool;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _useDistantWriterConnections;
    _ML3DatabaseConnectionSubPool * _writersSubPool;
}

@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) int connectionsProfilingLevel;
@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic) <ML3DatabaseConnectionPoolDelegate> *delegate;
@property (readonly) bool isCurrentThreadConnectionInTransaction;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (nonatomic, readonly) unsigned long long maxReaders;
@property (nonatomic, readonly) unsigned long long maxWriters;
@property (nonatomic) bool useDistantWriterConnections;

- (void).cxx_destruct;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(bool)arg1;
- (id)_connectionForIdentifier:(id)arg1;
- (id)_connectionForWriting:(bool)arg1 useThreadConnection:(bool)arg2 storeThreadLocalConnection:(bool)arg3;
- (id)_generateDiagnostic;
- (id)_localConnectionForThread:(id)arg1;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (void)checkInConnection:(id)arg1;
- (void)closeAllConnections;
- (unsigned long long)connectionsJournalingMode;
- (int)connectionsProfilingLevel;
- (id)databasePath;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 maxWriters:(unsigned long long)arg3;
- (bool)isCurrentThreadConnectionInTransaction;
- (bool)isLocked;
- (void)lock;
- (unsigned long long)maxReaders;
- (unsigned long long)maxWriters;
- (id)readerConnection;
- (void)setConnectionsJournalingMode:(unsigned long long)arg1;
- (void)setConnectionsProfilingLevel:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUseDistantWriterConnections:(bool)arg1;
- (void)unlock;
- (bool)useDistantWriterConnections;
- (id)writerConnection;

@end
