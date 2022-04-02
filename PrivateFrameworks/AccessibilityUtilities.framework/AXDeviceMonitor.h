/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDeviceMonitor : NSObject {
    <AXDeviceMonitorDelegate> * _delegate;
    struct __IOHIDManager { } * _hidManager;
    unsigned long long  _state;
    NSRunLoop * _targetRunLoop;
}

@property (nonatomic) <AXDeviceMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)begin;
- (id)copyDevices;
- (void)dealloc;
- (id)delegate;
- (void)informDelegate;
- (id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2;
- (void)invalidate;
- (void)setDelegate:(id)arg1;

@end
