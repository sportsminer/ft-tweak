/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVURLAssetLoaderFactory : NSObject <SVURLAssetLoaderFactory> {
    <SVURLAssetFactory> * _URLAssetFactory;
    <SVVideoURLProviderFactory> * _URLProviderFactory;
    <SVURLAssetOptionsProviding> * _optionsProvider;
}

@property (nonatomic, readonly) <SVURLAssetFactory> *URLAssetFactory;
@property (nonatomic, readonly) <SVVideoURLProviderFactory> *URLProviderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVURLAssetOptionsProviding> *optionsProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAssetFactory;
- (id)URLProviderFactory;
- (id)createURLAssetLoaderForVideo:(id)arg1;
- (id)initWithURLAssetFactory:(id)arg1 URLProviderFactory:(id)arg2 optionsProvider:(id)arg3;
- (id)optionsProvider;

@end
