/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkChangeSet : NSObject {
    NSMutableDictionary * _bookmarkIDToChanges;
    NSMutableOrderedSet * _changes;
    NSURL * _fileURL;
    NSMutableDictionary * _folderIDToAddedChildrenChanges;
    NSMutableDictionary * _folderIDToDeletedChildrenChanges;
    NSMutableDictionary * _folderIDToModifiedChildrenChanges;
    int  _lastBookmarkIDForAddingInMemoryBookmark;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *changes;
@property (nonatomic, readonly, copy) NSURL *fileURL;

+ (void)setSharedChangeSet:(id)arg1;
+ (id)sharedChangeSet;

- (void).cxx_destruct;
- (void)_addChange:(id)arg1;
- (void)_readPersistedChanges;
- (void)_removeAllChanges;
- (void)addChange:(id)arg1;
- (id)addedBookmarksInBookmarkFolder:(int)arg1;
- (bool)bookmarkIsAddedInMemory:(int)arg1;
- (id)changes;
- (id)deletedBookmarkIDsInBookmarkFolder:(int)arg1;
- (id)fileURL;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (bool)isBookmarkDeleted:(int)arg1;
- (id)modifiedBookmarksInBookmarkFolder:(int)arg1;
- (int)nextBookmarkIDForAddingBookmarkInMemory;
- (unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1;
- (void)persistChangesWithCompletion:(id /* block */)arg1;
- (void)removeAllChanges;
- (void)removeChange:(id)arg1;
- (long long)replayChangesToBookmark:(id)arg1;
- (void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2;

@end
