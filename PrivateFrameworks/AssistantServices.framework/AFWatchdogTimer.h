/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFWatchdogTimer : NSObject <NSCopying> {
    double  _interval;
    bool  _isStopped;
    NSObject<OS_dispatch_queue> * _queue;
    double  _remainingInterval;
    double  _startTime;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timerSource;
}

- (void).cxx_destruct;
- (void)cancel;
- (bool)cancelIfNotAlreadyCanceled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(id /* block */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(id /* block */)arg2;
- (bool)isStopped;
- (void)reset;
- (void)start;
- (void)stop;

@end
