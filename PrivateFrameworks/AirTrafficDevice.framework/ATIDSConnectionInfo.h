/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATIDSConnectionInfo : NSObject {
    unsigned long long  _connectionState;
    IDSDevice * _device;
    unsigned int  _failureCount;
    long long  _priority;
    ATIDSSocket * _socket;
    double  _wakeupTimestamp;
}

@property (nonatomic) unsigned long long connectionState;
@property (nonatomic, retain) IDSDevice *device;
@property (nonatomic) unsigned int failureCount;
@property (nonatomic) long long priority;
@property (nonatomic, retain) ATIDSSocket *socket;
@property (nonatomic) double wakeupTimestamp;

- (void).cxx_destruct;
- (unsigned long long)connectionState;
- (void)dealloc;
- (id)device;
- (unsigned int)failureCount;
- (id)init;
- (long long)priority;
- (void)setConnectionState:(unsigned long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setFailureCount:(unsigned int)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSocket:(id)arg1;
- (void)setWakeupTimestamp:(double)arg1;
- (id)socket;
- (double)wakeupTimestamp;

@end
