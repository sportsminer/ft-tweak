/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORouteMatchUpdater : NSObject {
    GEOMapFeatureAccess * _mapFeatureAccess;
    GEOMotionContext * _motionContext;
    GEOComposedRoute * _route;
    GEOTransitRouteMatcher * _routeMatcher;
    double  _stationRadius;
}

- (void).cxx_destruct;
- (bool)_isLocation:(id)arg1 nearStation:(id)arg2;
- (bool)_isLocation:(id)arg1 nearStop:(id)arg2;
- (bool)_isLocation:(id)arg1 nearTransitPoint:(struct { double x1; double x2; })arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4;
- (double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(struct { double x1; double x2; })arg3;
- (id)initWithTransitRouteMatcher:(id)arg1;
- (unsigned long long)priority;
- (bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
