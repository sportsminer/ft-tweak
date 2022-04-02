/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSUserNotificationCenter : NSObject {
    NSString * _bundleIdentifier;
    <AMSUserNotificationCenterDelegate> * _delegate;
    bool  _runningInDaemon;
    <AMSUserNotificationStrategy> * _strategy;
}

@property (nonatomic, readonly) NSArray *activeNotifications;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) <AMSUserNotificationCenterDelegate> *delegate;
@property (nonatomic, readonly) bool runningInDaemon;
@property (nonatomic, readonly) <AMSUserNotificationStrategy> *strategy;

+ (Class)_determineStrategyForBundleId:(id)arg1;
+ (id)currentCenter;

- (void).cxx_destruct;
- (id)activeNotifications;
- (id)bundleIdentifier;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 runningInDaemon:(bool)arg2;
- (id)postNotification:(id)arg1;
- (id)removeNotification:(id)arg1;
- (bool)runningInDaemon;
- (void)setDelegate:(id)arg1;
- (id)strategy;

@end
