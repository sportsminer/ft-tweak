/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {
    NSString * _countryCode;
    bool  _hasURLAuthenticationTimeToLive;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    <_GEOCountryConfigurationServerProxy> * _serverProxy;
    NSMutableDictionary * _supportedFeatures;
    NSMutableArray * _updateCompletionHandlers;
    double  _urlAuthenticationTimeToLive;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly) bool currentCountrySupportsCarIntegration;
@property (nonatomic, readonly) bool currentCountrySupportsCommute;
@property (nonatomic, readonly) bool currentCountrySupportsDirections;
@property (nonatomic, readonly) bool currentCountrySupportsNavigation;
@property (nonatomic, readonly) bool currentCountrySupportsRouteGenius;
@property (nonatomic, readonly) bool currentCountrySupportsTraffic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double urlAuthenticationTimeToLive;

+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(bool)arg1;
+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)_countryCodeOnIsolationQueue;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long*)arg3 decoder:(id /* block */)arg4;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long*)arg4 decoder:(id /* block */)arg5;
- (void)_resetSupportedFeatures;
- (void)_updateCountryConfiguration:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)countryCode;
- (bool)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (bool)currentCountrySupportsCarIntegration;
- (bool)currentCountrySupportsCommute;
- (bool)currentCountrySupportsDirections;
- (bool)currentCountrySupportsFeature:(long long)arg1;
- (bool)currentCountrySupportsNavigation;
- (bool)currentCountrySupportsRouteGenius;
- (bool)currentCountrySupportsTraffic;
- (void)dealloc;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 decoder:(id /* block */)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 decoder:(id /* block */)arg4;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)updateCountryConfiguration:(id /* block */)arg1;
- (void)updateCountryConfiguration:(id /* block */)arg1 callbackQueue:(id)arg2;
- (void)updateProvidersForCurrentCountry;
- (double)urlAuthenticationTimeToLive;

@end
