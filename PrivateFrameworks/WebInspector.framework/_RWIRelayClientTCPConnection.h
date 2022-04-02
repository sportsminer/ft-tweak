/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection <_RWITCPConnectionDelegate> {
    _RWITCPConnection * _connection;
}

@property (nonatomic, retain) _RWITCPConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)connectionFromLockdownCheckinWithInfo:(void*)arg1 delegate:(id)arg2;
+ (id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)closeInternal;
- (id)connection;
- (id)initWithTCPConnection:(id)arg1 delegate:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)tcpConnectionDidClose:(id)arg1;

@end
