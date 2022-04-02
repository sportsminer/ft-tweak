/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationServiceExtension : NSObject {
    NSExtension * _extension;
    double  _graceTime;
    NSObject<OS_dispatch_queue> * _queue;
    double  _serviceTime;
}

@property (nonatomic, readonly) LSPlugInKitProxy *proxy;

+ (void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;
+ (void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;
+ (id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+ (bool)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3;
- (id)mutateContentForNotificationRequest:(id)arg1 error:(id*)arg2;
- (id)proxy;

@end
