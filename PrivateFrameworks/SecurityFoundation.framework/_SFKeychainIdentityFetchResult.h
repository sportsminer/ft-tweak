/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFKeychainIdentityFetchResult : _SFKeychainFetchResult {
    id  _identityFetchResult;
}

@property (readonly) _SFIdentity *value;

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(id /* block */)arg2;

@end
