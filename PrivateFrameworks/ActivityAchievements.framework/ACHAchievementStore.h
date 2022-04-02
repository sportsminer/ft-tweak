/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHAchievementStore : NSObject <ACHAchievementProgressEngineObserving, ACHEarnedInstanceStoreObserving, ACHTemplateAssetRegistryDelegate, ACHTemplateStoreObserving> {
    NSMutableDictionary * _achievementsByTemplateUniqueName;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    bool  _earnedInstanceStoreDidFinishInitialFetch;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSHashTable * _observers;
    ACHAchievementProgressEngine * _progressProvider;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
    ACHTemplateAssetRegistry * _templateAssetRegistry;
    ACHTemplateStore * _templateStore;
    bool  _templateStoreDidFinishInitialFetch;
}

@property (nonatomic, retain) NSMutableDictionary *achievementsByTemplateUniqueName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ACHEarnedInstanceStore *earnedInstanceStore;
@property (nonatomic) bool earnedInstanceStoreDidFinishInitialFetch;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) ACHAchievementProgressEngine *progressProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic, retain) ACHTemplateAssetRegistry *templateAssetRegistry;
@property (nonatomic, retain) ACHTemplateStore *templateStore;
@property (nonatomic) bool templateStoreDidFinishInitialFetch;

- (void).cxx_destruct;
- (void)_notifyObserversOfInitialFetchCompletion;
- (void)_notifyObserversOfNewAchievements:(id)arg1;
- (void)_notifyObserversOfRemovedAchievements:(id)arg1;
- (void)_notifyObserversOfUpdatedAchievements:(id)arg1;
- (void)_queue_addEarnedInstancesToLocalStore:(id)arg1;
- (bool)_queue_addProgressAndGoalToAchievement:(id)arg1;
- (void)_queue_addTemplatesToLocalStore:(id)arg1;
- (id)_queue_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)arg1 earnedInstance:(id)arg2;
- (void)_queue_populateResourcesForAchievementsWithTemplateSourceName:(id)arg1;
- (void)_queue_removeEarnedInstancesFromLocalStore:(id)arg1;
- (void)_queue_removeTemplatesFromLocalStore:(id)arg1;
- (id)achievementWithTemplateUniqueName:(id)arg1;
- (id)achievementsByTemplateUniqueName;
- (void)addObserver:(id)arg1;
- (id)allAchievements;
- (id)earnedInstanceStore;
- (void)earnedInstanceStore:(id)arg1 didAddNewEarnedInstances:(id)arg2;
- (void)earnedInstanceStore:(id)arg1 didRemoveEarnedInstances:(id)arg2;
- (bool)earnedInstanceStoreDidFinishInitialFetch;
- (void)earnedInstanceStoreDidFinishInitialFetch:(id)arg1;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)arg1;
- (id)initWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 templateAssetRegistry:(id)arg3 progressProvider:(id)arg4;
- (void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (id)notificationQueue;
- (id)observers;
- (id)progressProvider;
- (void)progressProviderDidUpdateProgressValues:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAchievementsByTemplateUniqueName:(id)arg1;
- (void)setEarnedInstanceStore:(id)arg1;
- (void)setEarnedInstanceStoreDidFinishInitialFetch:(bool)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setSynchronizationQueue:(id)arg1;
- (void)setTemplateAssetRegistry:(id)arg1;
- (void)setTemplateStore:(id)arg1;
- (void)setTemplateStoreDidFinishInitialFetch:(bool)arg1;
- (id)synchronizationQueue;
- (id)templateAssetRegistry;
- (void)templateAssetRegistry:(id)arg1 didUpdateResourcesForTemplatesWithSourceName:(id)arg2;
- (id)templateStore;
- (void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2;
- (void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2;
- (bool)templateStoreDidFinishInitialFetch;
- (void)templateStoreDidFinishInitialFetch:(id)arg1;

@end
