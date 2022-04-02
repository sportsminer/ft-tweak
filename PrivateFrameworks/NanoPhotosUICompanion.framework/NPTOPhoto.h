/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOPhoto : NSObject {
    PHAsset * _asset;
    unsigned long long  _contentsIndex;
    NSArray * _faceRegions;
    NSURL * _irisURL;
    bool  _irisURLAlreadyRequested;
    bool  _isPhotoIris;
    NSArray * _thumbnailFacesRegions;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) unsigned long long contentsIndex;
@property (nonatomic, readonly) UIImage *eagerlyDecodedFullImage;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double irisDuration;
@property (nonatomic, readonly) double irisStillDisplayTime;
@property (nonatomic, readonly) NSURL *irisURL;
@property (nonatomic, readonly) bool isIrisVideoHidden;
@property (nonatomic, readonly) bool isPhotoIris;
@property (nonatomic, readonly) UIImage *lazilyDecodedFullImage;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSArray *thumbnailFacesRegions;

// Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion

- (void).cxx_destruct;
- (id)_fullImageData;
- (id)_imageWithFormat:(int)arg1;
- (id)asset;
- (unsigned long long)contentsIndex;
- (id)eagerlyDecodedFullImage;
- (id)faceRegions;
- (id)identifier;
- (id)initWithAsset:(id)arg1;
- (double)irisDuration;
- (double)irisStillDisplayTime;
- (id)irisURL;
- (bool)isIrisVideoHidden;
- (bool)isPhotoIris;
- (id)lazilyDecodedFullImage;
- (id)modificationDate;
- (void)setAsset:(id)arg1;
- (void)setContentsIndex:(unsigned long long)arg1;
- (id)thumbnail:(long long)arg1;
- (id)thumbnailFacesRegions;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (id)imageDataForWatch;
- (id)temporaryIrisURLForWatch;

@end