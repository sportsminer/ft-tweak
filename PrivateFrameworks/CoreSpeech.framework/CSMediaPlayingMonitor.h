/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSMediaPlayingMonitor : CSEventMonitor {
    long long  _mediaIsPlaying;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notePossiblePlayPausedStateChange:(id)arg1;
- (void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)initializeMediaPlayingState;
- (long long)mediaPlayingState;

@end
