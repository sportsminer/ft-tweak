/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _syncStateItems;
}

@property (nonatomic, readonly) NSData *syncStateHash;
@property (nonatomic, retain) NSMutableDictionary *syncStateItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commonBaselinePassSyncStateWithState:(id)arg1;
- (void)compareWithBaselinePassSyncState:(id)arg1 outAddedPassUniqueIDs:(id*)arg2 outUpdatedPassUniqueIDs:(id*)arg3 outRemovedPassUniqueIDs:(id*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)diffWithBaselineState:(id)arg1 representsMaterialDifferenceFromState:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithProtoSyncState:(id)arg1;
- (id)initWithSyncStateItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassSyncState:(id)arg1;
- (id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg1;
- (id)passSyncStateByApplyingChange:(id)arg1;
- (id)passSyncStateByRemovingPassWithUniqueID:(id)arg1;
- (id)protoSyncState;
- (void)setSyncStateItems:(id)arg1;
- (bool)stateContainsSyncStateItem:(id)arg1;
- (bool)stateIsSubsetOfUnionOfPassSyncStates:(id)arg1;
- (id)syncStateHash;
- (id)syncStateItems;

@end