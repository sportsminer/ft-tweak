/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseZoneMigrationOperation : FCOperation {
    NSMutableSet * _createdZones;
    FCCKPrivateDatabase * _database;
    id /* block */  _migrationCompletionHandler;
    <FCCKDatabaseMigrator> * _migrator;
    <FCCKZonePruningAssistant> * _pruningAssistant;
    CKRecordZoneID * _recordZoneID;
    NSMutableArray * _resultRecordIDsEligibleForDeletion;
    NSMutableArray * _resultZoneIDsEligibleForDeletion;
}

@property (nonatomic, retain) NSMutableSet *createdZones;
@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic, copy) id /* block */ migrationCompletionHandler;
@property (nonatomic, retain) <FCCKDatabaseMigrator> *migrator;
@property (nonatomic, retain) <FCCKZonePruningAssistant> *pruningAssistant;
@property (nonatomic, copy) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSMutableArray *resultRecordIDsEligibleForDeletion;
@property (nonatomic, retain) NSMutableArray *resultZoneIDsEligibleForDeletion;

- (void).cxx_destruct;
- (void)_continueGatheringRecordsWithPreviousServerChangeToken:(id)arg1 recordsAlreadyFetched:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_createZones:(id)arg1 completion:(id /* block */)arg2;
- (void)_gatherRecordsToMigrateWithCompletionHandler:(id /* block */)arg1;
- (void)_migrateAndUpdateRecords:(id)arg1 completion:(id /* block */)arg2;
- (void)_migrateEntireZoneWithCompletionHandler:(id /* block */)arg1;
- (void)_migrateIndividualRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)_migrateRecordIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_migrateRecords:(id)arg1 completion:(id /* block */)arg2;
- (id)_migratedRecord:(id)arg1 error:(id*)arg2;
- (id)_pruneRecords:(id)arg1;
- (void)_saveMigratedRecords:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldStopGatheringAfterFetchingRecords:(id)arg1 cumulativeRecords:(id)arg2;
- (id)_uncreatedZonesInRecords:(id)arg1;
- (id)createdZones;
- (id)database;
- (id /* block */)migrationCompletionHandler;
- (id)migrator;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)pruningAssistant;
- (id)recordZoneID;
- (id)resultRecordIDsEligibleForDeletion;
- (id)resultZoneIDsEligibleForDeletion;
- (void)setCreatedZones:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setMigrationCompletionHandler:(id /* block */)arg1;
- (void)setMigrator:(id)arg1;
- (void)setPruningAssistant:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultRecordIDsEligibleForDeletion:(id)arg1;
- (void)setResultZoneIDsEligibleForDeletion:(id)arg1;
- (bool)validateOperation;

@end
