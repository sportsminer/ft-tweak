/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseMigrationOperation : FCOperation {
    FCCKPrivateDatabase * _database;
    id /* block */  _migrationCompletionHandler;
    <FCCKDatabaseMigrator> * _migrator;
    NSMutableArray * _resultRecordIDsEligibleForDeletion;
    NSMutableArray * _resultZoneIDsEligibleForDeletion;
}

@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic, copy) id /* block */ migrationCompletionHandler;
@property (nonatomic, retain) <FCCKDatabaseMigrator> *migrator;
@property (nonatomic, retain) NSMutableArray *resultRecordIDsEligibleForDeletion;
@property (nonatomic, retain) NSMutableArray *resultZoneIDsEligibleForDeletion;

- (void).cxx_destruct;
- (void)_migrateZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)_migrateZoneIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id)database;
- (id /* block */)migrationCompletionHandler;
- (id)migrator;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultRecordIDsEligibleForDeletion;
- (id)resultZoneIDsEligibleForDeletion;
- (void)setDatabase:(id)arg1;
- (void)setMigrationCompletionHandler:(id /* block */)arg1;
- (void)setMigrator:(id)arg1;
- (void)setResultRecordIDsEligibleForDeletion:(id)arg1;
- (void)setResultZoneIDsEligibleForDeletion:(id)arg1;
- (bool)validateOperation;

@end
