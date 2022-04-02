/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitSystem : NSObject <GEOTransitSystem> {
    GEOPBTransitSystem * _system;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)initWithSystem:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (id)styleAttributes;

@end
