/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy> {
    GEOSearchAttributionManifest * _attributionManifest;
    NSLock * _attributionManifestLock;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMapTable * _listeners;
    NSLock * _listenersLock;
    NSMutableArray * _updateManifestCompletionHandlers;
    NSMutableArray * _updateManifestErrorHandlers;
    bool  _updatingManifest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributionManifest;
- (void)_loadAttributionInfoForListener:(id)arg1;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_sendInfo:(id)arg1 toListener:(id)arg2;
- (id)init;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;

@end
