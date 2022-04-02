/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject {
    double  _ageLimit;
    WBSHistoryDeletionPlan * _deletionPlan;
    unsigned long long  _itemCountLimit;
    NSSet * _items;
    NSSet * _itemsToDiscard;
    NSSet * _itemsToKeep;
    long long  _reason;
    <WBSHistoryStore> * _store;
}

@property (nonatomic, readonly) WBSHistoryDeletionPlan *deletionPlan;
@property (nonatomic, readonly) NSSet *itemsToDiscard;
@property (nonatomic, readonly) NSSet *itemsToKeep;

- (void).cxx_destruct;
- (id)_itemsToDiscard;
- (id)deletionPlan;
- (void)execute;
- (id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned long long)arg4 reason:(long long)arg5;
- (id)itemsToDiscard;
- (id)itemsToKeep;
- (void)prepare;

@end
