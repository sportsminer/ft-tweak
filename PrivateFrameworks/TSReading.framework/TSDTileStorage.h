/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTileStorage : NSObject <NSCacheDelegate> {
    NSCache * mCache;
    NSMutableDictionary * mCacheKeysByBucket;
    NSObject<OS_dispatch_queue> * mCacheKeysQueue;
    TSUPointerKeyDictionary * mReverseCacheKeys;
    NSObject<OS_dispatch_semaphore> * mReverseCacheKeysLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)contentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentsScale:(double)arg2 forTileAtLocation:(struct { unsigned long long x1; unsigned long long x2; })arg3 inBucket:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)p_cacheKeyForImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentsScale:(double)arg2 tileLocation:(struct { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeAllContents;
- (void)removeImagesInBucket:(id)arg1;
- (void)storeContents:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentsScale:(double)arg3 forTileAtLocation:(struct { unsigned long long x1; unsigned long long x2; })arg4 inBucket:(id)arg5;

@end
