/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFetchOperation : FCOperation {
    unsigned long long  _cachePolicy;
    bool  _canSendFetchCompletionSynchronously;
    id /* block */  _fetchCompletionBlock;
    NSObject<OS_dispatch_queue> * _fetchCompletionQueue;
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
    double  _maximumCachedAge;
    FCFetchOperationResult * _result;
    bool  _wifiOnly;
}

@property unsigned long long cachePolicy;
@property bool canSendFetchCompletionSynchronously;
@property (copy) id /* block */ fetchCompletionBlock;
@property (retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue;
@property double maximumCachedAge;
@property (readonly) FCFetchOperationResult *result;
@property bool wifiOnly;

- (void).cxx_destruct;
- (unsigned long long)cachePolicy;
- (bool)canSendFetchCompletionSynchronously;
- (void)cancel;
- (id /* block */)fetchCompletionBlock;
- (id)fetchCompletionQueue;
- (void)finishExecutingWithError:(id)arg1;
- (void)finishExecutingWithFetchedObject:(id)arg1;
- (void)finishExecutingWithResult:(id)arg1;
- (void)finishExecutingWithStatus:(unsigned long long)arg1;
- (void)finishFromEarlyCancellation;
- (id)init;
- (double)maximumCachedAge;
- (void)operationDidFinishWithError:(id)arg1;
- (id)result;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setCanSendFetchCompletionSynchronously:(bool)arg1;
- (void)setFetchCompletionBlock:(id /* block */)arg1;
- (void)setFetchCompletionQueue:(id)arg1;
- (void)setMaximumCachedAge:(double)arg1;
- (void)setWifiOnly:(bool)arg1;
- (void)takeInputsFromFetchOperation:(id)arg1;
- (bool)waitUntilFinishedWithTimeout:(double)arg1;
- (bool)wifiOnly;

@end
