/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNetServiceAdvertiser : NSObject {
    bool  _activated;
    CUBonjourAdvertiser * _awdlBonjourAdvertiser;
    int  _awdlControl;
    struct NSMutableDictionary { Class x1; } * _bleDevices;
    SFDeviceDiscovery * _bleDiscovery;
    unsigned long long  _bleDiscoveryFlags;
    NSSet * _blePeerFilter;
    bool  _blePeerFilterChanged;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUBonjourAdvertiser * _infraBonjourAdvertiser;
    int  _infraControl;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    int  _nanControl;
    CUNANPublisher * _nanPublisher;
    int  _port;
    bool  _portChanged;
    NSDictionary * _serviceInfo;
    bool  _serviceInfoChanged;
    NSString * _serviceType;
    bool  _serviceTypeChanged;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    bool  _updatePending;
}

@property (nonatomic) int awdlControl;
@property (nonatomic, copy) NSSet *blePeerFilter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int infraControl;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) int nanControl;
@property (nonatomic) int port;
@property (nonatomic, copy) NSDictionary *serviceInfo;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_activateSafeInvokeBlock:(id /* block */)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_awdlBonjourAdvertiserEnsureStarted;
- (void)_awdlBonjourAdvertiserEnsureStopped;
- (void)_bleTriggerDeviceFound:(id)arg1;
- (void)_bleTriggerDeviceLost:(id)arg1;
- (void)_bleTriggerEnsureStarted;
- (void)_bleTriggerEnsureStopped;
- (void)_infraBonjourAdvertiserEnsureStarted;
- (void)_infraBonjourAdvertiserEnsureStopped;
- (void)_invalidate;
- (void)_invalidated;
- (void)_nanAdvertiserEnsureStarted;
- (void)_nanAdvertiserEnsureStopped;
- (void)_updateLocked;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)awdlControl;
- (id)blePeerFilter;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (int)infraControl;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (int)nanControl;
- (int)port;
- (id)serviceInfo;
- (id)serviceType;
- (void)setAwdlControl:(int)arg1;
- (void)setBlePeerFilter:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInfraControl:(int)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setNanControl:(int)arg1;
- (void)setPort:(int)arg1;
- (void)setServiceInfo:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
