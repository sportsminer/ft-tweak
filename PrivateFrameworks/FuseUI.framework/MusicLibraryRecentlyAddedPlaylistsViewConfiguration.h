/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedPlaylistsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {
    MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration * _collectionViewConfiguration;
    bool  _shouldForwardBasePropertyValues;
}

@property (nonatomic, readonly) unsigned long long entityLimit;

+ (unsigned long long)defaultEntityLimit;

- (void).cxx_destruct;
- (unsigned long long)entityLimit;
- (id)entityViewDescriptor;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)loadCompactWidthConfiguration;
- (id)loadRegularWidthConfiguration;
- (void)setIconName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserActivityItemTypes:(id)arg1;

@end
