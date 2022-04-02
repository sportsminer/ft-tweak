/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REBundleDataSourceLoader : REDataSourceLoader {
    NSString * _key;
    NSArray * _urls;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSArray *urls;

- (void).cxx_destruct;
- (void)_enumerateBundles:(id /* block */)arg1;
- (void)_loadBundleConfigurationsUsingBlock:(id /* block */)arg1;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
