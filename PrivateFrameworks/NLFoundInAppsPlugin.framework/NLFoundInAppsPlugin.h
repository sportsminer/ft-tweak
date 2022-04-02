/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
 */

@interface NLFoundInAppsPlugin : NSObject <FIAPPlugin> {
    NSBundle * _FIAPBundle;
    Class  _FIAPResult;
    DESRecordStore * _recordStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)identifier;
- (id)init;
- (bool)isSentMessage:(id)arg1;
- (id)languageForText:(id)arg1;
- (id)processSearchableItem:(id)arg1;

@end
