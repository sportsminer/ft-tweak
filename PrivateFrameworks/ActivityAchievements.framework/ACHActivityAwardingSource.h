/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHActivityAwardingSource : NSObject <ACHAchievementProgressProviding, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, HDCurrentActivitySummaryHelperObserver, HDHealthDaemonReadyObserver> {
    ACHActivitySummaryUtility * _activitySummaryUtility;
    NSMutableArray * _currentTemplates;
    ACHActivityAwardingDataProvider * _dataProvider;
    ACHDataStore * _dataStore;
    ACHEarnedInstanceAwardingEngine * _engine;
    ACHActivityAwardingEnvironment * _environment;
    NSCalendar * _gregorianUTCCalendar;
    id /* block */  _incrementalUpdateCompletionHandler;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isObservingSummaryUpdates;
    NSNumber * _overrideIsAppleWatch;
    NSString * _overrideWatchCountryCode;
    HDProfile * _profile;
    ACHActivityAwardingDataProvider * _progressDataProvider;
    ACHActivityAwardingEnvironment * _progressEnvironment;
    ACHAchievementProgressEngine * _progressProvider;
    ACHTemplateStore * _templateStore;
    HKActivitySummary * _todayActivitySummary;
    ACHActivityTriggerGenerator * _triggerGenerator;
    NSString * _watchCountryCode;
    HKActivitySummary * _yesterdayActivitySummary;
}

@property (nonatomic, retain) ACHActivitySummaryUtility *activitySummaryUtility;
@property (nonatomic, retain) NSMutableArray *currentTemplates;
@property (nonatomic, retain) ACHActivityAwardingDataProvider *dataProvider;
@property (nonatomic) ACHDataStore *dataStore;
@property (nonatomic, retain) NSDictionary *dataStoreProperties;
@property (nonatomic, readonly) NSArray *dataStorePropertyKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (nonatomic, retain) ACHActivityAwardingEnvironment *environment;
@property (nonatomic, retain) NSCalendar *gregorianUTCCalendar;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ incrementalUpdateCompletionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic) bool isObservingSummaryUpdates;
@property (nonatomic, retain) NSNumber *overrideIsAppleWatch;
@property (nonatomic, retain) NSString *overrideWatchCountryCode;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) ACHActivityAwardingDataProvider *progressDataProvider;
@property (nonatomic, retain) ACHActivityAwardingEnvironment *progressEnvironment;
@property (nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (readonly) Class superclass;
@property (nonatomic) ACHTemplateStore *templateStore;
@property (nonatomic, retain) HKActivitySummary *todayActivitySummary;
@property (nonatomic, retain) ACHActivityTriggerGenerator *triggerGenerator;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic, retain) NSString *watchCountryCode;
@property (nonatomic, retain) HKActivitySummary *yesterdayActivitySummary;

- (void).cxx_destruct;
- (unsigned char)_creatorDevice;
- (id)_queue_companionProgressEnvironment;
- (id)_queue_evaluateTriggers:(unsigned long long)arg1 activitySummary:(id)arg2 templates:(id)arg3 shouldLog:(bool)arg4;
- (void)_queue_observeSummaries;
- (id)_queue_progressEnvironment;
- (unsigned long long)_queue_triggersWithChangedSummaryFields:(unsigned long long)arg1 dataProvider:(id)arg2;
- (void)_queue_updateDataProvider:(id)arg1 forDateInterval:(id)arg2 awardingBlock:(id /* block */)arg3;
- (void)_runIncrementallyForChangedSummaryFields:(unsigned long long)arg1;
- (id)activitySummaryUtility;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (id)currentTemplates;
- (void)daemonReady:(id)arg1;
- (id)dataProvider;
- (id)dataStore;
- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(id /* block */)arg2;
- (id)dataStoreProperties;
- (id)dataStorePropertyKeys;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (id)engine;
- (id)environment;
- (id)gregorianUTCCalendar;
- (id /* block */)incrementalUpdateCompletionHandler;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 templateStore:(id)arg3 awardingEngine:(id)arg4 progressProvider:(id)arg5;
- (id)internalQueue;
- (bool)isAppleWatch;
- (bool)isObservingSummaryUpdates;
- (id)overrideIsAppleWatch;
- (id)overrideWatchCountryCode;
- (id)profile;
- (id)progressDataProvider;
- (id)progressEnvironment;
- (id)progressProvider;
- (bool)providesProgressForTemplate:(id)arg1;
- (void)setActivitySummaryUtility:(id)arg1;
- (void)setCurrentTemplates:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreProperties:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setGregorianUTCCalendar:(id)arg1;
- (void)setIncrementalUpdateCompletionHandler:(id /* block */)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setIsObservingSummaryUpdates:(bool)arg1;
- (void)setOverrideIsAppleWatch:(id)arg1;
- (void)setOverrideWatchCountryCode:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProgressDataProvider:(id)arg1;
- (void)setProgressEnvironment:(id)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setTemplateStore:(id)arg1;
- (void)setTodayActivitySummary:(id)arg1;
- (void)setTriggerGenerator:(id)arg1;
- (void)setWatchCountryCode:(id)arg1;
- (void)setYesterdayActivitySummary:(id)arg1;
- (id)templateStore;
- (id)todayActivitySummary;
- (id)triggerGenerator;
- (id)uniqueName;
- (id)watchCountryCode;
- (id)yesterdayActivitySummary;

@end
