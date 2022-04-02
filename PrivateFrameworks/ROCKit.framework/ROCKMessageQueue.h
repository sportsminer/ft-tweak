/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKMessageQueue : NSObject {
    ROCKConnection * _connection;
    unsigned long long  _invocationMode;
    NSObject<OS_dispatch_queue> * _messageFlushQueue;
    NSObject<OS_dispatch_queue> * _messageHandlerQueue;
    NSObject<OS_xpc_object> * _messages;
    NSPointerArray * _notifiers;
    unsigned int  _semaphore;
}

@property (nonatomic, retain) ROCKConnection *connection;
@property (nonatomic) unsigned long long invocationMode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *messageFlushQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *messageHandlerQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *messages;
@property (nonatomic, retain) NSPointerArray *notifiers;
@property (nonatomic) unsigned int semaphore;

+ (id)messageQueueWithConnection:(id)arg1 invocationMode:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 invocationMode:(unsigned long long)arg2;
- (unsigned long long)invocationMode;
- (id)messageFlushQueue;
- (id)messageHandlerQueue;
- (id)messages;
- (id)notifiers;
- (unsigned int)semaphore;
- (void)setConnection:(id)arg1;
- (void)setInvocationMode:(unsigned long long)arg1;
- (void)setMessageFlushQueue:(id)arg1;
- (void)setMessageHandlerQueue:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)setNotifiers:(id)arg1;
- (void)setSemaphore:(unsigned int)arg1;

@end