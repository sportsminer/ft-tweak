/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSessionSnapshot : NSObject {
    GEOUserSessionEntity * _cohortSessionEntity;
    GEOUserSessionEntity * _longSessionEntity;
    GEOUserSessionEntity * _navSessionEntity;
    GEOUserSessionEntity * _shortSessionEntity;
    double  _usageEventTime;
}

@property (nonatomic, retain) GEOUserSessionEntity *cohortSessionEntity;
@property (nonatomic, retain) GEOUserSessionEntity *longSessionEntity;
@property (nonatomic, retain) GEOUserSessionEntity *navSessionEntity;
@property (nonatomic, retain) GEOUserSessionEntity *shortSessionEntity;
@property (nonatomic) double usageEventTime;

- (void).cxx_destruct;
- (id)cohortSessionEntity;
- (id)initWithShortSessionEntity:(id)arg1 longSessionEntity:(id)arg2 navSessionEntity:(id)arg3 cohortSessionEntity:(id)arg4;
- (id)longSessionEntity;
- (id)navSessionEntity;
- (void)setCohortSessionEntity:(id)arg1;
- (void)setLongSessionEntity:(id)arg1;
- (void)setNavSessionEntity:(id)arg1;
- (void)setShortSessionEntity:(id)arg1;
- (void)setUsageEventTime:(double)arg1;
- (id)shortSessionEntity;
- (double)usageEventTime;

@end
