/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString * _accountName;
    NSArray * _emailAddresses;
    NSString * _facebookUserID;
    NSNumber * _iCloudUserID;
    unsigned long long  _loginStatus;
    unsigned short  _numberOfChallenges;
    unsigned short  _numberOfRequests;
    unsigned short  _numberOfTurns;
}

@property unsigned long long loginStatus;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (id)accountName;
- (void)dealloc;
- (int)defaultFamiliarity;
- (id)emailAddresses;
- (id)facebookUserID;
- (id)iCloudUserID;
- (bool)isFindable;
- (bool)isFriend;
- (bool)isLocalPlayer;
- (bool)isPhotoPending;
- (bool)isPurpleBuddyAccount;
- (bool)isUnderage;
- (unsigned long long)loginStatus;
- (id)minimalInternal;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfTurns;
- (void)setAccountName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFacebookUserID:(id)arg1;
- (void)setFindable:(bool)arg1;
- (void)setICloudUserID:(id)arg1;
- (void)setLoginStatus:(unsigned long long)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setPhotoPending:(bool)arg1;
- (void)setPurpleBuddyAccount:(bool)arg1;
- (void)setUnderage:(bool)arg1;

@end
