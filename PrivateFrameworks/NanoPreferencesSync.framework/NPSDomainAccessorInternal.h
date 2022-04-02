/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSDomainAccessorInternal : NSObject <NPSDomainAccessorFilePresenterDelegate> {
    NSMutableSet * _dirtyKeysForWriting;
    NSString * _domain;
    NSURL * _domainURL;
    NSObject<OS_dispatch_queue> * _externalQueue;
    NPSDomainAccessorFilePresenter * _filePresenter;
    bool  _hasReadFromDisk;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _map;
    bool  _nanoSettingsDirectoryExists;
    NSUUID * _pairingID;
    NSString * _pairingStorePath;
    unsigned long long  _referenceCounter;
}

@property (nonatomic, retain) NSMutableSet *dirtyKeysForWriting;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSURL *domainURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalQueue;
@property (nonatomic, retain) NPSDomainAccessorFilePresenter *filePresenter;
@property (nonatomic) bool hasReadFromDisk;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSMutableDictionary *map;
@property (nonatomic) bool nanoSettingsDirectoryExists;
@property (nonatomic, retain) NSUUID *pairingID;
@property (nonatomic, retain) NSString *pairingStorePath;
@property (nonatomic) unsigned long long referenceCounter;

+ (void)applicationDidEnterBackground;
+ (void)applicationDidResume;
+ (id)cfTypeNameForCFPropertyListRef:(void*)arg1;
+ (id)copyDomainListForPairingDataStore:(id)arg1;
+ (void)decrementInternalAccessorReferenceCount:(id)arg1;
+ (bool)domainIsValid:(id)arg1;
+ (void)extensionDidBecomeActive;
+ (void)extensionWillResignActive;
+ (void)initialize;
+ (id)internalAccessorForPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;
+ (void)invalidateAndReleaseUnreferencedAccessors;
+ (void)mergeDirtyKeys:(id)arg1 fromDictionary:(id)arg2 toDictionary:(id)arg3;
+ (id)readDomainURL:(id)arg1 withError:(id*)arg2;
+ (id)urlForDomain:(id)arg1 pairingDataStore:(id)arg2;
+ (bool)valueIsValid:(id)arg1;
+ (id)writeDomain:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_copyKeyList;
- (id)_dictionaryRepresentation;
- (void)_invalidatePresenter;
- (id)_objectForKey:(id)arg1 error:(id*)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)_synchronizeReadOnly:(bool)arg1;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)canSynchronizeForReadingURL:(id)arg1;
- (id)canSynchronizeForWritingURL:(id)arg1 readFirst:(bool)arg2;
- (id)copyKeyList;
- (id)createNanoSettingsDirectory;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dirtyKeysForWriting;
- (id)domain;
- (id)domainURL;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)externalQueue;
- (id)filePresenter;
- (void)filePresenterDidBecomeNonCurrent:(id)arg1;
- (float)floatForKey:(id)arg1;
- (float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (bool)hasReadFromDisk;
- (id)initWithPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)internalQueue;
- (void)invalidatePresenter;
- (long long)longForKey:(id)arg1;
- (long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)map;
- (bool)nanoSettingsDirectoryExists;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pairingID;
- (id)pairingStorePath;
- (unsigned long long)referenceCounter;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDirtyKeysForWriting:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainURL:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setExternalQueue:(id)arg1;
- (void)setFilePresenter:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setHasReadFromDisk:(bool)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setInternalQueue:(id)arg1;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setMap:(id)arg1;
- (void)setNanoSettingsDirectoryExists:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setPairingID:(id)arg1;
- (void)setPairingStorePath:(id)arg1;
- (void)setReferenceCounter:(unsigned long long)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;

@end
