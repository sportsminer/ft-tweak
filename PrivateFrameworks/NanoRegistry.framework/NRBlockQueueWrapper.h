/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRBlockQueueWrapper : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)queue;
- (void)setBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
