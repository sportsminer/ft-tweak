/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPersistentDocument : NSObject {
    NSString * _fileType;
    NSURL * _fileURL;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    id  _store;
    NSURL * _temporaryFileURL;
}

@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, copy) NSURL *temporaryFileURL;

+ (id)_fileModificationDateForURL:(id)arg1;

- (id)_persistentStoreCoordinator;
- (void)close;
- (bool)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)displayName;
- (id)fileType;
- (id)fileURL;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)initWithType:(id)arg1 error:(id*)arg2;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (bool)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)saveDocument:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setTemporaryFileURL:(id)arg1;
- (id)temporaryFileURL;
- (id)undoManager;

@end
