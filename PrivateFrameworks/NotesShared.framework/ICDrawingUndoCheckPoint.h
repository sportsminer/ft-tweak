/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingUndoCheckPoint : NSObject {
    NSString * _cacheFilename;
    struct CGImage { } * _image;
    bool  _isEraseAllCheckPoint;
    NSOrderedSet * _renderedCommands;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *cacheFilename;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, readonly) bool isEraseAllCheckPoint;
@property (nonatomic, readonly) NSOrderedSet *renderedCommands;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)cacheDirectory;
+ (unsigned long long)cacheSize;
+ (void)deleteAllCacheFiles;

- (void).cxx_destruct;
- (id)cacheFilename;
- (void)dealloc;
- (bool)ensureCacheDirectoryExists;
- (void)flushFromMemoryIfPossible;
- (struct CGImage { }*)image;
- (id)initWithImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 renderedCommands:(id)arg3;
- (bool)isEraseAllCheckPoint;
- (bool)isInMemory;
- (void)reloadImage;
- (id)renderedCommands;
- (struct CGImage { }*)retainedImage;
- (void)setImage:(struct CGImage { }*)arg1;
- (id)uuid;
- (void)writeToDiskAndFreeMemory;

@end
