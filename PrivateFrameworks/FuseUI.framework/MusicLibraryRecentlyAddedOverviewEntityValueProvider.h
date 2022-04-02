/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedOverviewEntityValueProvider : NSObject <MusicEntityValueProviding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasValidItemCount;
    unsigned long long  _itemCount;
    MPMediaQuery * _query;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) MPMediaQuery *query;
@property (readonly) Class superclass;

+ (bool)supportsConcurrentLoadingOfEntityProperties;

- (void).cxx_destruct;
- (id)entityUniqueIdentifier;
- (unsigned long long)hash;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)initWithQuery:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)query;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
