/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
 */

@interface DNDLifetimeDetailsProvider : NSObject <CLLocationManagerDelegate> {
    NSArray * _availableLifetimeDetails;
    EKCalendarVisibilityManager * _calendarVisibilityManager;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    CLLocation * _currentLocation;
    <DNDLifetimeDetailsProviderDelegate> * _delegate;
    EKEventStore * _eventStore;
    CLGeocoder * _geocoder;
    CLLocationManager * _locationManager;
    bool  _monitoringLifetimes;
    NSObject<OS_dispatch_queue> * _queue;
    EKEvent * _relevantEvent;
    RTLocationOfInterest * _relevantLOI;
    CLPlacemark * _relevantPlacemark;
    RTRoutineManager * _routineManager;
}

@property (nonatomic, readonly, copy) NSArray *availableLifetimeDetails;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDLifetimeDetailsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)arg1;
- (void)_queue_gotLocationOfInterest:(id)arg1 forLocation:(id)arg2;
- (void)_queue_gotPlacemark:(id)arg1 forLocation:(id)arg2;
- (void)_queue_rebuildAvailableLifetimeDetails;
- (void)_queue_requestLifetimeDetails;
- (void)_queue_requestRelevantLocationMetadataForLocation:(id)arg1;
- (void)_requestRelevantEvent;
- (void)_requestRelevantLocationMetadata;
- (id)availableLifetimeDetails;
- (id)delegate;
- (id)init;
- (id)lifetimeDetailsForAssertionDetails:(id)arg1 error:(id*)arg2;
- (void)lifetimeDetailsWithMetadataForAssertionDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)lifetimeForLifetimeDetails:(id)arg1 error:(id*)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)requestLifetimeDetails;
- (void)setDelegate:(id)arg1;
- (void)startUpdatingLifetimeDetailMetadata;
- (void)startUpdatingLifetimeDetails;
- (void)stopUpdatingLifetimeDetailMetadata;
- (void)stopUpdatingLifetimeDetails;

@end
