/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStorageController : NSObject {
    NSObject<OS_dispatch_queue> * __cacheDeleteQueryQueue;
    long long  __cachedLegacyMGDiskThreshold;
    long long  __cachedLowDiskThreshold;
    long long  __cachedVeryLowDiskThreshold;
    NSDate * __lastPurgeRequestUpdateTime;
    struct CacheDeleteToken { } * __queryQueue_currentToken;
    <CAMStorageControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_cacheDeleteQueryQueue;
@property (nonatomic) long long _cachedLegacyMGDiskThreshold;
@property (nonatomic) long long _cachedLowDiskThreshold;
@property (nonatomic) long long _cachedVeryLowDiskThreshold;
@property (nonatomic, retain) NSDate *_lastPurgeRequestUpdateTime;
@property (nonatomic) struct CacheDeleteToken { }*_queryQueue_currentToken;
@property (nonatomic) <CAMStorageControllerDelegate> *delegate;

- (void).cxx_destruct;
- (long long)_absoluteMinimumBytesForMode:(long long)arg1;
- (id)_cacheDeleteQueryQueue;
- (long long)_cachedLegacyMGDiskThreshold;
- (long long)_cachedLowDiskThreshold;
- (long long)_cachedVeryLowDiskThreshold;
- (id)_lastPurgeRequestUpdateTime;
- (void)_legacyDiskSpaceDidBecomeLowNotification;
- (void)_loadFreeDiskThresholds;
- (void)_notifyDelegate;
- (id)_pathForStorageMountPoint;
- (long long)_preferredMinimumBytesForConfiguration:(id)arg1;
- (long long)_preferredMinimumBytesForVideoConfiguration:(long long)arg1 encodingBehavior:(long long)arg2;
- (void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)arg1;
- (struct CacheDeleteToken { }*)_queryQueue_currentToken;
- (void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(long long)arg1 preferredFreeBytes:(long long)arg2;
- (void)_statMountPoint:(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16[8]; }*)arg1;
- (long long)_totalFreeBytes;
- (void)_updatePurgeRequestStateForConfiguration:(id)arg1 totalFreeBytes:(long long)arg2;
- (id)delegate;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(bool)arg2;
- (id)init;
- (void)reportLowDiskEventWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)set_cachedLegacyMGDiskThreshold:(long long)arg1;
- (void)set_cachedLowDiskThreshold:(long long)arg1;
- (void)set_cachedVeryLowDiskThreshold:(long long)arg1;
- (void)set_lastPurgeRequestUpdateTime:(id)arg1;
- (void)set_queryQueue_currentToken:(struct CacheDeleteToken { }*)arg1;

@end
