/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLPrivacy : NSObject {
    int  _authStatusFullAccess;
    int  _authStatusSaveOnly;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _isolationQueue;
}

+ (id)sharedInstance;

- (struct __CFString { }*)_TCCForScope:(long long)arg1;
- (int)_authStatusForScope:(long long)arg1;
- (bool)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(bool)arg2 accessAllowedHandler:(id /* block */)arg3;
- (void)_setAuthStatus:(int)arg1 scope:(long long)arg2;
- (void)_setPreflightStatusForScope:(long long)arg1;
- (void)dealloc;
- (id)init;
- (bool)isPhotoLibraryReadAccessAllowed;
- (bool)isPhotoLibrarySharingOrModificationAllowed;
- (void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(id /* block */)arg2;
- (bool)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(id /* block */)arg2;
- (bool)isPhotosTCCAccessAllowed;
- (bool)isPhotosTCCAccessNotAllowed;
- (bool)isPhotosTCCAccessRestricted;
- (void)photoAccessPowersActive;
- (int)photosTCCAccessStatus;

@end
