/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {
    PFDispatchQueueExtensionManager * _extensionManager;
    PFDispatchQueue * _queue;
    PFSerialQueue * _requestSerializer;
    unsigned long long  _suspendCount;
}

- (void).cxx_destruct;
- (id)_dispatchQueueForSetTargetQueue;
- (id)_extensionManager;
- (id)_extensionsForTargetingQueue;
- (void)_invoke:(id /* block */)arg1 extensionDataArray:(id)arg2;
- (void)_performAsyncNotify:(id)arg1 enqueueBlock:(id /* block */)arg2;
- (void)addExtensions:(id)arg1;
- (bool)assertNotOnQueue;
- (bool)assertOnQueue;
- (bool)assertQueueBarrier;
- (id)description;
- (void)disableExtension:(id)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)dispatchAfterInterval:(double)arg1 block:(id /* block */)arg2;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)dispatchBarrierAsync:(id /* block */)arg1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)dispatchBarrierSync:(id /* block */)arg1;
- (id)dispatchCancellable:(id /* block */)arg1;
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(id /* block */)arg2;
- (id)dispatchCancellableGroup:(id)arg1 notify:(id /* block */)arg2;
- (void)dispatchGroup:(id)arg1 async:(id /* block */)arg2;
- (void)dispatchGroup:(id)arg1 notify:(id /* block */)arg2;
- (void)dispatchSync:(id /* block */)arg1;
- (void)enableExtension:(id)arg1;
- (id)extensionMatching:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void*)getSpecific:(void*)arg1;
- (id)initWithQueue:(id)arg1;
- (const char *)label;
- (bool)onQueue;
- (unsigned int)qualityOfService;
- (void)removeAllQueuedBlocks;
- (void)removeAllQueuedBlocksAndWait;
- (void)resume;
- (void)resumeRequests;
- (void)runBlock:(id /* block */)arg1;
- (void)setSpecific:(void*)arg1 forKey:(void*)arg2;
- (void)setTargetQueue:(id)arg1;
- (void)suspend;
- (void)suspendRequests;
- (id)wrappedQueue;

@end
