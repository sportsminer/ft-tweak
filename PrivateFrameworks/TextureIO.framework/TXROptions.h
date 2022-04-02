/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXROptions : NSObject <NSCopying> {
    unsigned long long  _colorSpaceHandling;
    bool  _cubemapFromVerticallyStackedImage;
    bool  _multiplyAlpha;
    unsigned long long  _originOperation;
}

@property (nonatomic) unsigned long long colorSpaceHandling;
@property (nonatomic) bool cubemapFromVerticallyStackedImage;
@property (nonatomic) bool multiplyAlpha;
@property (nonatomic) unsigned long long originOperation;

- (unsigned long long)colorSpaceHandling;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cubemapFromVerticallyStackedImage;
- (bool)multiplyAlpha;
- (unsigned long long)originOperation;
- (void)setColorSpaceHandling:(unsigned long long)arg1;
- (void)setCubemapFromVerticallyStackedImage:(bool)arg1;
- (void)setMultiplyAlpha:(bool)arg1;
- (void)setOriginOperation:(unsigned long long)arg1;

@end
