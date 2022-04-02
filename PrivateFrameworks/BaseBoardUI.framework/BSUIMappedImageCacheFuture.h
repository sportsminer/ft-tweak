/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIMappedImageCacheFuture : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_workBlock;
    bool  _lock_workCompletionWasCalled;
    UIImage * _postlock_cachedImage;
    NSThread * _submissionThread;
    BSAtomicSignal * _submitted;
}

- (void).cxx_destruct;
- (id)cacheImage;
- (void)dealloc;
- (id)init;
- (void)submitWorkBlock:(id /* block */)arg1;

@end