/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconImageCache : NSObject {
    NSCache * _imageCache;
}

@property (retain) NSCache *imageCache;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (id)cacheKeyForVariant:(unsigned long long)arg1;
- (id)cachedImageForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1;
- (void)dateDidChange;
- (id)imageCache;
- (id)init;
- (void)setImageCache:(id)arg1;
- (void)updateImage:(id)arg1 forBundleIdentifier:(id)arg2 variant:(unsigned long long)arg3;

@end
