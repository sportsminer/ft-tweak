/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUSystemMonitorImp : NSObject <CXCallObserverDelegate, FMFSessionDelegate> {
    int  _activeCallCount;
    struct { 
        unsigned char bytes[6]; 
    }  _bluetoothAddress48;
    NSData * _bluetoothAddressData;
    CUBluetoothClient * _bluetoothClient;
    CXCallObserver * _callObserver;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _familyFailed;
    NSArray * _familyMembers;
    bool  _familyObserving;
    CUSystemMonitor * _familyPrimaryIPMonitor;
    int  _familyUpdatedToken;
    int  _firstUnlockToken;
    bool  _firstUnlocked;
    int  _fmfDevicesChangedToken;
    int  _meDeviceChangedToken;
    NSString * _meDeviceFMFDeviceID;
    NSString * _meDeviceIDSDeviceID;
    NSString * _meDeviceName;
    int  _meDeviceRetryToken;
    bool  _meDeviceValid;
    struct NSMutableSet { Class x1; } * _monitors;
    unsigned int  _netFlags;
    CUNetInterfaceMonitor * _netInterfaceMonitor;
    int  _powerSourceToken;
    bool  _powerUnlimited;
    bool  _primaryAppleIDIsHSA2;
    int  _primaryAppleIDNotifyToken;
    bool  _primaryAppleIDObserving;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _primaryIPv4Addr;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _primaryIPv6Addr;
    NSString * _primaryNetworkSignature;
    struct { 
        unsigned char bytes[6]; 
    }  _rotatingIdentifier48;
    CUSystemMonitor * _rotatingIdentifierBluetoothAddressMonitor;
    NSData * _rotatingIdentifierData;
    NSObject<OS_dispatch_source> * _rotatingIdentifierTimer;
    int  _screenBlankedToken;
    bool  _screenLocked;
    int  _screenLockedToken;
    bool  _screenOn;
    bool  _screenSaverActive;
    unsigned int  _wifiFlags;
    CUWiFiManager * _wifiManager;
    int  _wifiState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_activeCallCountUnached;
- (void)_bluetoothAddressMonitorStart;
- (void)_bluetoothAddressMonitorStop;
- (void)_callMonitorStart;
- (void)_callMonitorStop;
- (void)_familyGetMembers:(bool)arg1;
- (void)_familyMonitorStart;
- (void)_familyMonitorStop;
- (void)_familyNetworkChanged;
- (void)_familyUpdated:(id)arg1;
- (void)_firstUnlockMonitorCheck:(bool)arg1;
- (void)_firstUnlockMonitorStart;
- (void)_firstUnlockMonitorStop;
- (bool)_hasMonitorPassingTest:(id /* block */)arg1;
- (void)_invokeBlock:(id /* block */)arg1 passingTest:(id /* block */)arg2;
- (void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(bool)arg3;
- (void)_meDeviceCheckStart:(bool)arg1;
- (void)_meDeviceMonitorStart;
- (void)_meDeviceMonitorStop;
- (void)_netInterfaceMonitorStart;
- (void)_netInterfaceMonitorStop;
- (void)_powerUnlimitedMonitorStart;
- (void)_powerUnlimitedMonitorStop;
- (void)_primaryAppleIDChanged:(id)arg1;
- (void)_primaryAppleIDMonitorStart;
- (void)_primaryAppleIDMonitorStop;
- (void)_rotatingIdentifierBTUpdated;
- (void)_rotatingIdentifierMonitorStart;
- (void)_rotatingIdentifierMonitorStop;
- (void)_rotatingIdentifierTimerFired;
- (void)_rotatingIdentifierTimerReset:(bool)arg1;
- (void)_screenChanged:(bool)arg1;
- (void)_screenLockedChanged;
- (void)_screenLockedMonitorStart;
- (void)_screenLockedMonitorStop;
- (void)_screenOnMonitorStart;
- (void)_screenOnMonitorStop;
- (void)_screenSaverMonitorStart;
- (void)_screenSaverMonitorStop;
- (void)_update;
- (void)_wifiMonitorStart;
- (void)_wifiMonitorStateChanged:(bool)arg1;
- (void)_wifiMonitorStop;
- (void)addMonitor:(id)arg1 completion:(id /* block */)arg2;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;
- (void)removeMonitor:(id)arg1;
- (void)updateWithQueue:(id)arg1 completion:(id /* block */)arg2;

@end
