/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKMultiFetchQueryOperation : FCOperation {
    FCCKContentDatabase * _database;
    FCEdgeCacheHint * _edgeCacheHint;
    NSMutableArray * _fetchedRecords;
    NSDictionary * _knownRecordIDsToEtags;
    NSMutableSet * _missingRecordIDs;
    NSArray * _networkEvents;
    id /* block */  _queryCompletionHandler;
    NSArray * _recordIDs;
    NSArray * _recordSpecs;
    NSDictionary * _recordSpecsByType;
}

@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic, retain) NSMutableArray *fetchedRecords;
@property (nonatomic, retain) NSDictionary *knownRecordIDsToEtags;
@property (nonatomic, retain) NSMutableSet *missingRecordIDs;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, copy) id /* block */ queryCompletionHandler;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, retain) NSArray *recordSpecs;
@property (nonatomic, retain) NSDictionary *recordSpecsByType;

- (void).cxx_destruct;
- (id)_constructQuery;
- (id)database;
- (id)edgeCacheHint;
- (id)fetchedRecords;
- (id)knownRecordIDsToEtags;
- (id)missingRecordIDs;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)queryCompletionHandler;
- (id)recordIDs;
- (id)recordSpecs;
- (id)recordSpecsByType;
- (void)setDatabase:(id)arg1;
- (void)setEdgeCacheHint:(id)arg1;
- (void)setFetchedRecords:(id)arg1;
- (void)setKnownRecordIDsToEtags:(id)arg1;
- (void)setMissingRecordIDs:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setQueryCompletionHandler:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordSpecs:(id)arg1;
- (void)setRecordSpecsByType:(id)arg1;
- (bool)validateOperation;

@end
