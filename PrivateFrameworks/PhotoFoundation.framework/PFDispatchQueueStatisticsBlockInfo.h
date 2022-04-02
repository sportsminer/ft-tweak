/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueStatisticsBlockInfo : NSObject {
    unsigned long long  _completionTimestamp;
    unsigned long long  _dequeueTimestamp;
    unsigned long long  _enqueueTimestamp;
    unsigned long long  _executionTimestamp;
    unsigned long long  _receivedTimestamp;
    bool  _skippedExecuting;
}

@property (readonly) unsigned long long completionTimestamp;
@property (readonly) unsigned long long dequeueTimestamp;
@property (readonly) unsigned long long enqueueTimestamp;
@property (readonly) unsigned long long executionTimestamp;
@property (readonly) unsigned long long receivedTimestamp;
@property bool skippedExecuting;

+ (void)initialize;

- (void)blockCompleted;
- (void)blockDequeued;
- (void)blockEnqueued;
- (void)blockWillStart;
- (unsigned long long)completionTimestamp;
- (unsigned long long)currentAbsoluteTime;
- (unsigned long long)dequeueTimestamp;
- (unsigned long long)enqueueTimestamp;
- (unsigned long long)executionLatency;
- (unsigned long long)executionTime;
- (unsigned long long)executionTimestamp;
- (id)init;
- (unsigned long long)nsecBetween:(unsigned long long)arg1 and:(unsigned long long)arg2;
- (unsigned long long)receivedTimestamp;
- (void)setSkippedExecuting:(bool)arg1;
- (bool)skippedExecuting;

@end
