/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSiriActionAppList : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> * _appListQueue;
    NSMutableSet * _appListStore;
    <BLTSiriActionAppListDelegate> * _delegate;
    NSMutableDictionary * _installed;
    NSMutableSet * _removed;
    NSURL * _siriActionAppListStoreURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSiriActionAppListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *installed;
@property (nonatomic, readonly) NSSet *removed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_handleAppListInstalled:(struct NSDictionary { Class x1; }*)arg1 removed:(id)arg2;
- (void)applicationIconDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (struct NSDictionary { Class x1; }*)installed;
- (struct NSDictionary { Class x1; }*)removed;
- (void)setDelegate:(id)arg1;
- (void)updateStoreWithInstalled:(id)arg1 removed:(id)arg2;

@end
