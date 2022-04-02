/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXPhotoKitAdjustedImageURLRequest : _PXPhotoKitAdjustedUIMediaRequest {
    PHImageRequestOptions * _options;
    NSString * _pairingIdentifier;
    PLPhotoEditRenderer * _renderer;
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) PHImageRequestOptions *options;
@property (nonatomic, readonly, copy) NSString *pairingIdentifier;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)_handleExportFinished:(id)arg1;
- (void)_renderIfNeeded;
- (void)editSourceDidChange;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)options;
- (id)pairingIdentifier;
- (void)progressDidChange;
- (id /* block */)resultHandler;
- (void)start;

@end
