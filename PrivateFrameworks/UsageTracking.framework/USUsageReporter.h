/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USUsageReporter : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)getLocalDeviceIdentifierAndReturnError:(id*)arg1;
- (id)init;
- (id)xpcConnection;

@end
