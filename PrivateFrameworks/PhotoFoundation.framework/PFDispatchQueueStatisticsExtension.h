/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension {
    unsigned long long  _completedCount;
    unsigned long long  _enqueuedCount;
    unsigned long long  _executingCount;
    unsigned long long  _executionTime;
    unsigned long long  _lastLogTime;
    unsigned long long  _maxEnqueuedCount;
    unsigned long long  _maxEnqueuedCountTrigger;
    unsigned long long  _maxExecutionTime;
    unsigned long long  _maxExecutionTimeTrigger;
    unsigned long long  _maxWaitTime;
    unsigned long long  _maxWaitTimeTrigger;
    unsigned long long  _totalWaitTime;
}

- (bool)_shouldLog;
- (bool)_updateMaximum:(void *)arg1 value:(void *)arg2; // needs 2 arg types, found 3: /* Warning: Unrecognized filer type: '' using 'void*' */ void**, unsigned long long, unsigned long long
- (void)blockCompletedAfterWait:(unsigned long long)arg1 executionTime:(unsigned long long)arg2 queue:(id)arg3;
- (void)blockEnqueued:(id)arg1;
- (Class)blockInfoClass;
- (unsigned long long)completedCount;
- (id)description;
- (unsigned long long)enqueuedCount;
- (unsigned long long)executingCount;
- (unsigned long long)executionTime;
- (id)init;
- (void)installOnQueue:(id)arg1;
- (unsigned long long)maxEnqueuedCount;
- (void)maxEnqueuedCountIncreased:(id)arg1;
- (unsigned long long)maxExecutionTime;
- (void)maxExecutionTimeIncreased:(id)arg1;
- (unsigned long long)maxWaitTime;
- (void)maxWaitTimeIncreased:(id)arg1;
- (id)newBlockInfo;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(id /* block */)arg3;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(id /* block */)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (unsigned long long)totalWaitTime;

@end
