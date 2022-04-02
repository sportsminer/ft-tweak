/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMDiagnostics : NSObject <NSSecureCoding> {
    bool  _diagnosticsEnabled;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_diagnosticMetrics;
}

@property (nonatomic) bool diagnosticsEnabled;
@property (nonatomic, readonly, copy) NSArray *metrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)addMetric:(id)arg1;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(id /* block */)arg3;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(id /* block */)arg3 signpostStartBlock:(id /* block */)arg4 signpostEndBlock:(id /* block */)arg5;
- (void)clearMetrics;
- (bool)diagnosticsEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)metrics;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (id)startMeasurement:(long long)arg1 name:(id)arg2;

@end
