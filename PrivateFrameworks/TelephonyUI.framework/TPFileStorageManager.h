/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPFileStorageManager : NSObject {
    bool  _hasClearedLegacyStorage;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _urlForFileSystem;
}

@property (nonatomic) bool hasClearedLegacyStorage;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSURL *urlForFileSystem;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clearLegacyStorageIfNecessary;
- (void)dealloc;
- (void)deleteStorageAtURLs:(id)arg1;
- (bool)hasClearedLegacyStorage;
- (id)imageWithName:(id)arg1;
- (id)init;
- (void)localeChanged;
- (id)queue;
- (void)saveImage:(id)arg1 withName:(id)arg2;
- (void)setHasClearedLegacyStorage:(bool)arg1;
- (void)setQueue:(id)arg1;
- (id)urlForFileSystem;
- (id)urlsForLegacyFileSystem;

@end
