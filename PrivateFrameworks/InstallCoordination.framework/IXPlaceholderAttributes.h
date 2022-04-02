/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPlaceholderAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleVersion;
    NSDictionary * _extensionDictionary;
    bool  _launchProhibited;
    NSArray * _lsCounterpartIdentifiers;
    NSString * _minimumOSVersion;
    NSDictionary * _requiredDeviceCapabilities;
    NSArray * _sbAppTags;
    NSString * _sbIconMasqueradeIdentifier;
}

@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSDictionary *extensionDictionary;
@property (nonatomic) bool launchProhibited;
@property (nonatomic, copy) NSArray *lsCounterpartIdentifiers;
@property (nonatomic, copy) NSString *minimumOSVersion;
@property (nonatomic, copy) NSDictionary *requiredDeviceCapabilities;
@property (nonatomic, copy) NSArray *sbAppTags;
@property (nonatomic, copy) NSString *sbIconMasqueradeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_plistKeys;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionDictionary;
- (unsigned long long)hash;
- (id)infoPlistContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfoPlistDictionary:(id)arg1;
- (id)initWithInfoPlistFromBundle:(struct __CFBundle { }*)arg1 error:(id*)arg2;
- (id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)launchProhibited;
- (id)lsCounterpartIdentifiers;
- (id)minimumOSVersion;
- (id)requiredDeviceCapabilities;
- (id)sbAppTags;
- (id)sbIconMasqueradeIdentifier;
- (void)setBundleVersion:(id)arg1;
- (void)setExtensionDictionary:(id)arg1;
- (void)setLaunchProhibited:(bool)arg1;
- (void)setLsCounterpartIdentifiers:(id)arg1;
- (void)setMinimumOSVersion:(id)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)arg1;
- (void)setSbAppTags:(id)arg1;
- (void)setSbIconMasqueradeIdentifier:(id)arg1;

@end
