/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHWorkoutUtility : NSObject {
    HDDatabaseTransactionContext * _databaseContext;
    HDSQLitePredicate * _firstPartyPredicate;
    HDProfile * _profile;
}

@property (nonatomic) HDDatabaseTransactionContext *databaseContext;
@property (nonatomic, retain) HDSQLitePredicate *firstPartyPredicate;
@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2;
- (id)databaseContext;
- (id)firstPartyPredicate;
- (id)initWithProfile:(id)arg1;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4;
- (id)profile;
- (void)setDatabaseContext:(id)arg1;
- (void)setFirstPartyPredicate:(id)arg1;
- (void)setProfile:(id)arg1;
- (id)workoutsInDateInterval:(id)arg1;

@end