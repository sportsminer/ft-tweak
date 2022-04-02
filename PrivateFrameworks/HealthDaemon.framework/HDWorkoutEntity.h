/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEntity : HDSampleEntity

+ (id)_codableCondensedWorkoutProperties;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (bool)copySampleAssociationsFromWorkout:(id)arg1 toWorkout:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateCondensedWorkoutsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;

- (id)codableCondensedWorkoutWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)getCondenserVersion:(out long long*)arg1 date:(out id*)arg2 profile:(id)arg3 error:(id*)arg4;
- (bool)isCondenserVersionLessThan:(long long)arg1 transaction:(id)arg2;
- (bool)updateCondenserVersion:(long long)arg1 date:(id)arg2 transaction:(id)arg3 error:(id*)arg4;

@end
