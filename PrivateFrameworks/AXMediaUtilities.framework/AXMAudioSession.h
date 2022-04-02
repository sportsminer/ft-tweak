/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMAudioSession : NSObject {
    NSMutableArray * _notificationObserverTokens;
    AVAudioSession * _session;
}

@property (nonatomic, retain) NSMutableArray *notificationObserverTokens;
@property (nonatomic, retain) AVAudioSession *session;

- (void).cxx_destruct;
- (void)_handleMediaServicesLost;
- (void)_handleMediaServicesReset;
- (void)_handleRouteChanged:(unsigned long long)arg1 previousRoute:(id)arg2;
- (void)_handleSessionInterrupted:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)_handleSilenceSecondaryAudio:(unsigned long long)arg1;
- (bool)activateSessionWithError:(id*)arg1;
- (void)dealloc;
- (id)init;
- (id)notificationObserverTokens;
- (id)session;
- (void)setNotificationObserverTokens:(id)arg1;
- (void)setSession:(id)arg1;

@end
