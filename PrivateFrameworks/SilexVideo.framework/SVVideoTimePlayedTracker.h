/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoTimePlayedTracker : NSObject <SVVideoTimePlayedTracking> {
    <SVVideoPlaybackStateObserving> * _playbackStateObserver;
    <SVVideoTimeJumpObserving> * _timeJumpObserver;
    <SVVideoPeriodicTimeObserving> * _timeObserver;
    double  _timePlayed;
    <SVVideoTimeProviding> * _timeProvider;
    id /* block */  changeBlock;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserving> *playbackStateObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoTimeJumpObserving> *timeJumpObserver;
@property (nonatomic, readonly) <SVVideoPeriodicTimeObserving> *timeObserver;
@property (nonatomic) double timePlayed;
@property (nonatomic, readonly) <SVVideoTimeProviding> *timeProvider;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithTimeObserver:(id)arg1 timeProvider:(id)arg2 playbackStateObserver:(id)arg3 timeJumpObserver:(id)arg4;
- (void)onChange:(id /* block */)arg1;
- (id)playbackStateObserver;
- (void)setTimePlayed:(double)arg1;
- (id)timeJumpObserver;
- (id)timeObserver;
- (double)timePlayed;
- (id)timeProvider;

@end
