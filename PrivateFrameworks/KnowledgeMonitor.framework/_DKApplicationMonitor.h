/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver> {
    NSMutableDictionary * _activeExtensions;
    BKSApplicationStateMonitor * _bksMonitor;
    NSString * _lastIdentifierSet;
    FBSDisplayLayoutMonitor * _monitor;
    NSMutableArray * _previouslyForegroundServices;
    NSSet * _servicesOfInterestForWatchCommunication;
}

@property (retain) NSMutableDictionary *activeExtensions;
@property (nonatomic, retain) BKSApplicationStateMonitor *bksMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastIdentifierSet;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *monitor;
@property (nonatomic, retain) NSMutableArray *previouslyForegroundServices;
@property (nonatomic, retain) NSSet *servicesOfInterestForWatchCommunication;
@property (readonly) Class superclass;

+ (id)_defaultEvent;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2;
+ (void)addServicesForeground:(id)arg1 andRemoveServices:(id)arg2;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setFocalApplication:(id)arg1 launchReason:(id)arg2;

- (void).cxx_destruct;
- (id)activeExtensions;
- (id)bksMonitor;
- (id)currentActiveComplications;
- (bool)ignoreAppExtension:(id)arg1;
- (id)lastIdentifierSet;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (id)monitor;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (id)previouslyForegroundServices;
- (void)registerForActiveComplicationChangeNotifications;
- (id)servicesOfInterestForWatchCommunication;
- (void)setActiveExtensions:(id)arg1;
- (void)setBksMonitor:(id)arg1;
- (void)setCurrentActiveComplications;
- (void)setLastIdentifierSet:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setPreviouslyForegroundServices:(id)arg1;
- (void)setServicesOfInterestForWatchCommunication:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
