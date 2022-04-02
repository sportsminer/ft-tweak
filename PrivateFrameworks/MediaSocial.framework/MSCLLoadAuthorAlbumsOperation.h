/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLLoadAuthorAlbumsOperation : NSOperation {
    NSString * _authorIdentifier;
    SKUIClientContext * _clientContext;
    NSLock * _lock;
    id /* block */  _outputBlock;
}

@property (nonatomic, readonly, copy) NSString *authorIdentifier;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_loadAlbumsWithItemIdentifiers:(id)arg1 platformContext:(id)arg2;
- (id)_loadAlbumsWithLookupResponse:(id)arg1 platformContext:(id)arg2 error:(id*)arg3;
- (id)_loadArtistContentWithPlatformContext:(id)arg1 error:(id*)arg2;
- (id)authorIdentifier;
- (id)init;
- (id)initWithAuthorIdentifier:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
