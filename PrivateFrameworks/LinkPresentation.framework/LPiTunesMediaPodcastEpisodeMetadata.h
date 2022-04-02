/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaPodcastEpisodeMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor, LPLinkMetadataStoreTransformerAdaptor> {
    NSString * _artist;
    LPImage * _artwork;
    LPArtworkMetadata * _artworkMetadata;
    NSString * _episodeName;
    NSArray * _offers;
    NSString * _podcastName;
    NSDate * _releaseDate;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) LPImage *artwork;
@property (nonatomic, copy) LPArtworkMetadata *artworkMetadata;
@property (nonatomic, copy) NSString *episodeName;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSString *podcastName;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artist;
- (id)artwork;
- (id)artworkMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)episodeName;
- (id)initWithCoder:(id)arg1;
- (id)offers;
- (id)podcastName;
- (void)populateLinkMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)releaseDate;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setEpisodeName:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPodcastName:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;
- (id)storeIdentifierForTransformer:(id)arg1;

@end
