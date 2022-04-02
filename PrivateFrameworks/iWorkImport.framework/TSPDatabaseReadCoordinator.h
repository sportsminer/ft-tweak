/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseReadCoordinator : TSPReadCoordinatorBase <TSPDatabaseReaderDelegate, TSPReadCoordinator> {
    NSMutableDictionary * _appRelativeDataDictionary;
    NSObject<OS_dispatch_queue> * _appRelativeDataQueue;
    NSUUID * _baseObjectUUID;
    TSPObjectContext * _context;
    NSMapTable * _dataDictionary;
    NSObject<OS_dispatch_queue> * _dataQueue;
    TSPDatabase * _database;
    unsigned long long  _databaseVersion;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    NSMapTable * _objects;
    NSURL * _packageURL;
}

@property (nonatomic, readonly) NSUUID *baseObjectUUID;
@property (nonatomic, readonly) bool canRetainObjectReferencedByWeakLazyReference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) bool hasDocumentVersionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;
@property (nonatomic, readonly) bool isReadingFromDocument;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) long long sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseObjectUUID;
- (bool)canRetainObjectReferencedByWeakLazyReference;
- (id)context;
- (id)createUpgradedOldAppBundleResourcePath:(id)arg1;
- (id)dataForAppRelativePath:(id)arg1 filename:(id)arg2;
- (id)dataForDatabaseObject:(id)arg1 filename:(id)arg2;
- (id)dataForLinkURL:(id)arg1 filename:(id)arg2;
- (id)dataForReadChannel:(id)arg1 filename:(id)arg2 linkURLOrNil:(id)arg3;
- (id)databaseReader:(id)arg1 wantsDataForAppRelativePath:(id)arg2 filename:(id)arg3;
- (id)databaseReader:(id)arg1 wantsDataForDatabaseObjectIdentifier:(long long)arg2 filename:(id)arg3;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (id)documentResourceInfoForAppRelativePath:(id)arg1;
- (bool)endReading;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(bool)arg3;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1 packageURL:(id)arg2 finalizeHandlerQueue:(id)arg3 error:(id*)arg4;
- (bool)isReadingFromDocument;
- (unsigned char)packageIdentifier;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(bool)arg4 allowUnknownObject:(bool)arg5 fromParentObject:(id)arg6 completion:(id /* block */)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4 fromParentObject:(id)arg5 completion:(id /* block */)arg6;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (long long)sourceType;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(bool)arg2;

@end
