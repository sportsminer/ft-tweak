/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteAutoFillService : NSObject {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    NSArray * _associatedDomains;
    NSString * _bundleID;
    struct NSMutableDictionary { Class x1; } * _devices;
    id /* block */  _discoveredDevicesChanged;
    SFDeviceDiscovery * _discovery;
    int  _discoveryState;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    NSString * _fixedPIN;
    id /* block */  _hidePINHandler;
    bool  _invalidateCalled;
    NSString * _localizedAppName;
    id /* block */  _receivedCredentialsHandler;
    NSString * _receivedPassword;
    NSString * _receivedUsername;
    bool  _requestingAutoFill;
    SFService * _service;
    int  _serviceState;
    SFSession * _session;
    id /* block */  _sessionEndedHandler;
    id /* block */  _sessionStartedHandler;
    id /* block */  _showPINHandlerEx;
    NSData * _systemBTAddress;
    CUSystemMonitor * _systemMonitor;
    int  _systemMonitorState;
    bool  _unitTesting;
    NSString * _unlocalizedAppName;
    NSURL * _urlForVisualScanning;
    id /* block */  _urlForVisualScanningChanged;
    NSString * _urlString;
}

@property (nonatomic, copy) NSArray *associatedDomains;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned long long discoveredDevices;
@property (nonatomic, copy) id /* block */ discoveredDevicesChanged;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) NSString *fixedPIN;
@property (nonatomic, copy) id /* block */ hidePINHandler;
@property (nonatomic, copy) NSString *localizedAppName;
@property (nonatomic, readonly) bool needsSetup;
@property (nonatomic, copy) id /* block */ receivedCredentialsHandler;
@property (nonatomic, copy) id /* block */ sessionEndedHandler;
@property (nonatomic, copy) id /* block */ sessionStartedHandler;
@property (nonatomic, copy) id /* block */ showPINHandlerEx;
@property (nonatomic) bool unitTesting;
@property (nonatomic, copy) NSString *unlocalizedAppName;
@property (nonatomic, copy) id /* block */ urlForVisualScanningChanged;
@property (nonatomic, copy) NSString *urlString;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_activated;
- (void)_bluetoothAddressChanged;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_discoveryChanged:(id)arg1;
- (void)_discoveryFound:(id)arg1;
- (void)_discoveryLost:(id)arg1;
- (void)_discoveryStart;
- (int)_readyForAutoFillRequest;
- (void)_serviceHandleReceivedContextRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)_serviceHandleReceivedCredentialRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)_serviceHandleReceivedRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)_serviceHidePIN;
- (void)_serviceSessionEnded:(id)arg1 withError:(id)arg2;
- (void)_serviceSessionStarted:(id)arg1;
- (void)_serviceStart;
- (void)_systemMonitorStart;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)associatedDomains;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (unsigned long long)discoveredDevices;
- (id /* block */)discoveredDevicesChanged;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)fixedPIN;
- (id /* block */)hidePINHandler;
- (id)init;
- (void)invalidate;
- (id)localizedAppName;
- (bool)needsSetup;
- (id /* block */)receivedCredentialsHandler;
- (id /* block */)sessionEndedHandler;
- (id /* block */)sessionStartedHandler;
- (void)setAssociatedDomains:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDiscoveredDevicesChanged:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFixedPIN:(id)arg1;
- (void)setHidePINHandler:(id /* block */)arg1;
- (void)setLocalizedAppName:(id)arg1;
- (void)setReceivedCredentialsHandler:(id /* block */)arg1;
- (void)setSessionEndedHandler:(id /* block */)arg1;
- (void)setSessionStartedHandler:(id /* block */)arg1;
- (void)setShowPINHandlerEx:(id /* block */)arg1;
- (void)setUnitTesting:(bool)arg1;
- (void)setUnlocalizedAppName:(id)arg1;
- (void)setUrlForVisualScanningChanged:(id /* block */)arg1;
- (void)setUrlString:(id)arg1;
- (id /* block */)showPINHandlerEx;
- (void)startRequestingAutoFill;
- (void)stopRequestingAutoFill;
- (bool)unitTesting;
- (id)unlocalizedAppName;
- (void)updateURLForVisualScanning;
- (id)urlForVisualScanning;
- (id /* block */)urlForVisualScanningChanged;
- (id)urlString;

@end
