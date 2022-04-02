/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding> {
    long long  _allowedAccess;
    bool  _hasActiveAccessAssertion;
    FPSandboxingURLWrapper * _sandboxExtensionWrapper;
    long long  _underlyingSandboxAssertionHandle;
    NSURL * _url;
}

@property (nonatomic) long long allowedAccess;
@property (nonatomic) bool hasActiveAccessAssertion;
@property (nonatomic, retain) FPSandboxingURLWrapper *sandboxExtensionWrapper;
@property (nonatomic, readonly) bool sourceIsManaged;
@property (nonatomic) long long underlyingSandboxAssertionHandle;
@property (nonatomic, readonly) NSURL *url;

+ (bool)_isValidURLForIssuingSandboxExtension:(id)arg1;
+ (id)_sandboxExtensionClassForAllowedAccess:(long long)arg1;
+ (id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (id)readonlySandboxExtensionClassString;
+ (id)readwriteSandboxExtensionClassString;
+ (id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (bool)supportsSecureCoding;
+ (id)uniquedSecurityScopedResources:(id)arg1;

- (void).cxx_destruct;
- (bool)_isEqualAccessToSecurityScopedResource:(id)arg1;
- (long long)allowedAccess;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasActiveAccessAssertion;
- (id)initWithAbsoluteURL:(id)arg1 sandboxExtensionWrapper:(id)arg2 allowedAccess:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)sandboxExtensionWrapper;
- (void)setAllowedAccess:(long long)arg1;
- (void)setHasActiveAccessAssertion:(bool)arg1;
- (void)setSandboxExtensionWrapper:(id)arg1;
- (void)setUnderlyingSandboxAssertionHandle:(long long)arg1;
- (bool)sourceIsManaged;
- (void)startAccessing;
- (void)stopAccessing;
- (long long)underlyingSandboxAssertionHandle;
- (id)url;

@end
