/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSActionListenerController : NSObject {
    BSActionListener * _listener;
    unsigned int  _listenerCount;
    unsigned int  _listenerTearDownToken;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _transactionCount;
}

+ (id)sharedInstance;

- (void)beginTransaction;
- (void)beginTransactionForListener:(id)arg1;
- (void)dealloc;
- (void)endTransaction;
- (void)endTransactionForListener:(id)arg1;
- (id)init;
- (id)listener;

@end
