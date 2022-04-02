/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTPowerMonitor : NSObject {
    struct IONotificationPort { } * _batteryIONotifyPort;
    unsigned int  _batteryNotificationRef;
    struct __CFRunLoopSource { } * _batteryRunLoopSource;
    double  _currentLevel;
    NSHashTable * _delegates;
    bool  _isExternalPowerConnected;
    unsigned int  _pmConnection;
    unsigned int  _pmNotifier;
    struct IONotificationPort { } * _pmPort;
}

@property (nonatomic, readonly) double batteryPercentRemaining;
@property (nonatomic) double currentLevel;
@property (setter=setExternalPowerConnected:, nonatomic) bool isExternalPowerConnected;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void*)arg2;
- (id)_init;
- (bool)_initIOService;
- (bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)addDelegate:(id)arg1;
- (double)batteryPercentRemaining;
- (double)currentLevel;
- (void)dealloc;
- (bool)isExternalPowerConnected;
- (void)removeDelegate:(id)arg1;
- (void)setCurrentLevel:(double)arg1;
- (void)setExternalPowerConnected:(bool)arg1;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;

@end
