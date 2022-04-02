/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTWritablePrivateDataStorage : NSObject <NTWritablePrivateDataStorage> {
    FCFileCoordinatedTodayDropbox * _dropbox;
    FCFileCoordinatedTodayPrivateDataTransactionQueue * _transactionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCFileCoordinatedTodayDropbox *dropbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue;

- (void).cxx_destruct;
- (id)dropbox;
- (id)init;
- (id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2;
- (void)setDropbox:(id)arg1;
- (void)setTransactionQueue:(id)arg1;
- (id)transactionQueue;
- (void)writeReadHistoryItem:(id)arg1;
- (void)writeSeenHistoryItems:(id)arg1;

@end
