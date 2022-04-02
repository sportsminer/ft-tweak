/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader * _tileLoader;
}

- (void).cxx_destruct;
- (id)findBuildingsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTileLoader:(id)arg1;

@end
