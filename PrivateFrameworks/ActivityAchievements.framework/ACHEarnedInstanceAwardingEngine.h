/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHEarnedInstanceAwardingEngine : NSObject <HDDatabaseProtectedDataObserver> {
    NSCalendar * _calendar;
    NSDate * _currentDateOverride;
    ACHDataStore * _dataStore;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    struct { 
        bool allowsHistoricalEvaluationFromBeginningOfTime; 
        long long startDate; 
        long long endDate; 
    }  _historicalEvaluationPolicy;
    NSObject<OS_dispatch_queue> * _internalQueue;
    HDProfile * _profile;
    NSMutableDictionary * _queuedIncrementalEvaluations;
    NSMutableDictionary * _sourceRegistry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_evaluateHistoryForSource:(id)arg1 databaseContext:(id)arg2 completion:(id /* block */)arg3;
- (id)currentDate;
- (id)dataStorePropertyProviderForSource:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)deregisterSource:(id)arg1;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 historicalEvaluationPolicy:(struct { bool x1; long long x2; long long x3; })arg4;
- (void)registerSource:(id)arg1;
- (void)requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)arg1;
- (void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)arg1 completion:(id /* block */)arg2;
- (void)requestIncrementalEvaluationForSource:(id)arg1 evaluationBlock:(id /* block */)arg2;
- (void)setCurrentDateOverride:(id)arg1;
- (unsigned long long)sourceCount;

@end
