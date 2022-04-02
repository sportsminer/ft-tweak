/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASDatabaseCompetitionListEntryEntity : HDDataEntity

+ (id)_competitionListsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_insertCompetitionList:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)_insertCompetitionLists:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)allCompetitionListsWithProfile:(id)arg1 withError:(id*)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (long long)protectionClass;
+ (bool)removeAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)saveCompetitionList:(id)arg1 profile:(id)arg2 withError:(id*)arg3;
+ (id)uniquedColumns;

@end
