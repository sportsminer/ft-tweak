/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob {
    NSDictionary * _metadata;
}

@property (nonatomic, retain) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)arg1;

- (id)_argumentsDictionaryAsData:(id)arg1;
- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)metadata;
- (void)run;
- (void)runDaemonSide;
- (void)setMetadata:(id)arg1;

@end
