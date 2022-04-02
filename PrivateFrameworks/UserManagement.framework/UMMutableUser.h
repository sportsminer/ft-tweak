/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMMutableUser : UMUser

@property (nonatomic, copy) NSString *alternateDSID;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) unsigned long long dataQuota;
@property (nonatomic) unsigned long long dataUsed;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSError *errorCausingLogout;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic) unsigned int gid;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic) bool hasDataToSync;
@property (nonatomic) bool hasManagedCredentials;
@property (nonatomic, copy) NSURL *homeDirectoryURL;
@property (nonatomic) bool isAuditor;
@property (nonatomic) bool isDisabled;
@property (nonatomic) bool isLoginUser;
@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSDate *lastLoginDate;
@property (nonatomic, copy) NSDate *lastRemoteAuthDate;
@property (nonatomic) unsigned long long passcodeLockGracePeriod;
@property (nonatomic) unsigned long long passcodeType;
@property (nonatomic, copy) NSURL *photoURL;
@property (nonatomic) unsigned int uid;
@property (nonatomic, copy) NSString *userAuxiliaryString;
@property (nonatomic, copy) NSString *username;

- (bool)commitChanges;
- (bool)commitChangesWithError:(id*)arg1;

@end
