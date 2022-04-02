/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRAccount : NSObject {
    NSString * _accountID;
    NSData * _perAppAccountIdentifier;
}

@property (nonatomic, copy) NSData *perAppAccountIdentifier;

+ (bool)_refreshCurrentLoggedInAccountForcingRefresh:(bool)arg1 error:(id*)arg2;
+ (id)currentCachedLoggedInAccountWithError:(id*)arg1;
+ (id)currentLoggedInAccountWithError:(id*)arg1;
+ (bool)refreshCurrentLoggedInAccount;
+ (void)startAccountTokenChangeObserverIfNeeded;

- (void).cxx_destruct;
- (id)containerWithPendingChanges;
- (void)evictOldDocumentsWithHandler:(id /* block */)arg1;
- (bool)getEvictableSpace:(id*)arg1 error:(id*)arg2;
- (bool)hasOptimizeStorageWithError:(id*)arg1;
- (bool)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id*)arg2;
- (id)initWithAccountID:(id)arg1;
- (bool)loginWithError:(id*)arg1;
- (bool)logoutWithError:(id*)arg1;
- (id)perAppAccountIdentifier;
- (bool)setOptimizeStorageEnabled:(bool)arg1 error:(id*)arg2;
- (void)setPerAppAccountIdentifier:(id)arg1;

@end
