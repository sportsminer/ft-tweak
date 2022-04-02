/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@interface IAPClientPortManager : NSObject {
    bool  _iaptransportdIsRunning;
    NSObject<OS_xpc_object> * _iaptransportdXPCConnection;
    NSMutableDictionary * _portList;
    NSObject<OS_dispatch_queue> * _portListQueue;
}

@property (nonatomic) bool iaptransportdIsRunning;

+ (id)sharedInstance;

- (void)dealloc;
- (int)forwardAccessoryDataToIAP:(id)arg1 data:(const char *)arg2 length:(unsigned short)arg3;
- (bool)iaptransportdIsRunning;
- (id)init;
- (void)reRegisterHandlers;
- (int)registerSendDataHandler:(id)arg1 queue:(id)arg2 sendBlock:(id /* block */)arg3;
- (void)sendData:(id)arg1 data:(char *)arg2 length:(unsigned short)arg3;
- (void)setIaptransportdIsRunning:(bool)arg1;
- (int)unregisterSendDataHandler:(id)arg1;

@end
