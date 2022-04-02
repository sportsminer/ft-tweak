/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider> {
    CNContactStore * _contactStore;
    <DNDSEventBehaviorResolverDataSource> * _dataSource;
    CNFavorites * _favorites;
    <DNDSModeRepository> * _modeRepository;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _resolutionRecord;
}

@property (nonatomic) <DNDSEventBehaviorResolverDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (bool)_queue_eventSourceIsContact:(id)arg1;
- (bool)_queue_eventSourceIsContact:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (bool)_queue_eventSourceIsEmergencyContact:(id)arg1;
- (bool)_queue_eventSourceIsFavorite:(id)arg1;
- (bool)_queue_eventSourceIsRepeat:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3;
- (id)_queue_resolveBehaviorForEventDetails:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (unsigned long long)_queue_resolveOutcomeForEventSource:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3 reason:(out unsigned long long*)arg4;
- (id)dataSource;
- (void)dealloc;
- (id)initWithModeRepository:(id)arg1 contactStore:(id)arg2;
- (id)resolveBehaviorForEventDetails:(id)arg1 clientIdentifier:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (void)setDataSource:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (id)sysdiagnoseDataIdentifier;

@end
