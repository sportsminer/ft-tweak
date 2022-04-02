/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocation : HMFObject <CLLocationManagerDelegate, HMFTimerDelegate> {
    int  _authStatus;
    NSHashTable * _batchLocationDelegates;
    NSMutableArray * _batchLocationTuples;
    double  _batchLocationsFetchInterval;
    bool  _beingConfigured;
    HMFTimer * _extractBatchLocationsTimer;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSDate * _lastFetchBatchLocationsTime;
    int  _locationAuthorized;
    CLLocationManager * _locationManager;
    HMFMessageDispatcher * _msgDispatcher;
    NSMapTable * _pendingRegionCallbacks;
    NSMapTable * _pendingRegionMonitoringRequests;
    NSMapTable * _regionStateDelegatesByRegionIdentifier;
    NSHashTable * _singleLocationDelegates;
}

@property (nonatomic) int authStatus;
@property (nonatomic, readonly) NSHashTable *batchLocationDelegates;
@property (nonatomic, readonly) NSMutableArray *batchLocationTuples;
@property (nonatomic) double batchLocationsFetchInterval;
@property (nonatomic) bool beingConfigured;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMFTimer *extractBatchLocationsTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastFetchBatchLocationsTime;
@property (nonatomic) int locationAuthorized;
@property (nonatomic, readonly) CLLocationManager *locationManager;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSMapTable *pendingRegionCallbacks;
@property (nonatomic, readonly) NSMapTable *pendingRegionMonitoringRequests;
@property (nonatomic, readonly) NSMapTable *regionStateDelegatesByRegionIdentifier;
@property (nonatomic, readonly) NSHashTable *singleLocationDelegates;
@property (readonly) Class superclass;

+ (id)_getAlmanacWithLocation:(id)arg1;
+ (id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2;
+ (id)bundleForLocationManager;
+ (id)findEvent:(id)arg1 withGeo:(id)arg2;
+ (bool)isValidLocation:(id)arg1;
+ (id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)sharedManager;
+ (id)sunriseTimeForLocation:(id)arg1;
+ (id)sunsetTimeForLocation:(id)arg1;
+ (void)timeZoneForCLLocationAsync:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_canLocationBeExtracted;
- (id)_delegateforRegion:(id)arg1;
- (void)_extractBatchLocationsWithDelegate:(id)arg1;
- (void)_extractSingleLocationWithDelegate:(id)arg1;
- (void)_notifyAllLocationDelegatesWithLocation:(id)arg1;
- (void)_notifyBatchLocationDelegate:(id)arg1 withLocation:(id)arg2;
- (void)_notifyBatchLocationDelegatesWithLocation:(id)arg1;
- (void)_notifySingleLocationDelegate:(id)arg1 withLocation:(id)arg2;
- (void)_notifySingleLocationDelegatesWithLocation:(id)arg1;
- (void)_updateEntryForRegion:(id)arg1;
- (void)_updateExitForRegion:(id)arg1;
- (void)_updateRegionState:(long long)arg1 forRegion:(id)arg2;
- (void)_updateWithLocationAuthorizationStatus:(int)arg1;
- (int)authStatus;
- (id)batchLocationDelegates;
- (id)batchLocationTuples;
- (double)batchLocationsFetchInterval;
- (bool)beingConfigured;
- (void)beingConfigured:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deregisterForRegionUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)extractBatchLocationsTimer;
- (id)handlerQueue;
- (id)init;
- (id)initWithLocationManager:(id)arg1;
- (id)lastFetchBatchLocationsTime;
- (int)locationAuthorized;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)msgDispatcher;
- (id)pendingRegionCallbacks;
- (id)pendingRegionMonitoringRequests;
- (id)regionStateDelegatesByRegionIdentifier;
- (void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAuthStatus:(int)arg1;
- (void)setBatchLocationsFetchInterval:(double)arg1;
- (void)setBeingConfigured:(bool)arg1;
- (void)setExtractBatchLocationsTimer:(id)arg1;
- (void)setLastFetchBatchLocationsTime:(id)arg1;
- (void)setLocationAuthorized:(int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (id)singleLocationDelegates;
- (void)startExtractingBatchLocationsWithDelegate:(id)arg1;
- (void)startExtractingSingleLocationWithDelegate:(id)arg1;
- (void)stopExtractingBatchLocations;
- (void)timerDidFire:(id)arg1;

@end
