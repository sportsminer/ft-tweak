/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppSettingsViewModel : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSString * _adamID;
    VSAppDescription * _appDescription;
    struct __CFBundle { } * _bundle;
    NSString * _bundleID;
    NSString * _buyParams;
    NSString * _displayName;
    UIImage * _icon;
    long long  _installState;
    VSPrivacyFacade * _privacyFacade;
    long long  _privacyState;
    int  _registrationToken;
    VSRestrictionsCenter * _restrictionsCenter;
    NSString * _storeName;
    VSOptional * _voucher;
    LSApplicationWorkspace * _workspace;
}

@property (getter=isAccessGranted, nonatomic) bool accessGranted;
@property (nonatomic, readonly, copy) NSString *adamID;
@property (nonatomic, retain) VSAppDescription *appDescription;
@property (nonatomic, readonly, copy) NSURL *appStoreURL;
@property (nonatomic) struct __CFBundle { }*bundle;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *buyParams;
@property (nonatomic, readonly) bool canChangePrivacyAccess;
@property (nonatomic, readonly) bool canRevokeVoucher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) long long installState;
@property (nonatomic, readonly, copy) NSString *installationTitle;
@property (nonatomic, readonly, copy) NSString *launchAppTitle;
@property (nonatomic, retain) VSPrivacyFacade *privacyFacade;
@property (nonatomic) long long privacyState;
@property (nonatomic) int registrationToken;
@property (nonatomic, retain) VSRestrictionsCenter *restrictionsCenter;
@property (nonatomic, readonly, copy) NSString *storeName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unavailableTitle;
@property (nonatomic, retain) VSOptional *voucher;
@property (nonatomic, retain) LSApplicationWorkspace *workspace;

+ (id)keyPathsForValuesAffectingAccessGranted;

- (void).cxx_destruct;
- (void)_denyPrivacyAccess;
- (void)_grantPrivacyAccess;
- (void)_updatePrivacyState;
- (id)adamID;
- (id)appDescription;
- (id)appStoreURL;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (struct __CFBundle { }*)bundle;
- (id)bundleID;
- (id)buyParams;
- (bool)canChangePrivacyAccess;
- (bool)canRevokeVoucher;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)icon;
- (id)iconURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithAppDescription:(id)arg1 privacyVoucher:(id)arg2 restrictionsCenter:(id)arg3 privacyFacade:(id)arg4;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)initWithBundle:(struct __CFBundle { }*)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3;
- (void)installApp;
- (long long)installState;
- (id)installationTitle;
- (bool)isAccessGranted;
- (void)launchApp;
- (id)launchAppTitle;
- (id)privacyFacade;
- (long long)privacyState;
- (int)registrationToken;
- (id)restrictionsCenter;
- (void)revokeVoucher;
- (void)setAccessGranted:(bool)arg1;
- (void)setAppDescription:(id)arg1;
- (void)setBundle:(struct __CFBundle { }*)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInstallState:(long long)arg1;
- (void)setPrivacyFacade:(id)arg1;
- (void)setPrivacyState:(long long)arg1;
- (void)setRegistrationToken:(int)arg1;
- (void)setRestrictionsCenter:(id)arg1;
- (void)setVoucher:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (id)storeName;
- (id)unavailableTitle;
- (id)voucher;
- (id)workspace;

@end
