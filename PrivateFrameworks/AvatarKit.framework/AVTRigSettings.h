/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTRigSettings : NSObject {
    NSArray * _bones;
    NSArray * _bonesFactor;
    NSArray * _bonesSym;
    double  _defaultElevation;
    double  _defaultSpacing;
    double  _maxElevation;
    double  _maxRotation;
    double  _maxScale;
    double  _maxSpacing;
    double  _minElevation;
    double  _minRotation;
    double  _minScale;
    double  _minSpacing;
    double  _offsetRotation;
    NSArray * _radius;
    bool  _supportsElevation;
    bool  _supportsRotation;
    bool  _supportsScale;
    bool  _supportsSpacing;
}

@property (retain) NSArray *bones;
@property (retain) NSArray *bonesFactor;
@property (retain) NSArray *bonesSym;
@property double defaultElevation;
@property double defaultSpacing;
@property double maxElevation;
@property double maxRotation;
@property double maxScale;
@property double maxSpacing;
@property double minElevation;
@property double minRotation;
@property double minScale;
@property double minSpacing;
@property double offsetRotation;
@property (retain) NSArray *radius;
@property bool supportsElevation;
@property bool supportsRotation;
@property bool supportsScale;
@property bool supportsSpacing;

+ (id)rigSettingsWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)bones;
- (id)bonesFactor;
- (id)bonesSym;
- (double)defaultElevation;
- (double)defaultSpacing;
- (double)maxElevation;
- (double)maxRotation;
- (double)maxScale;
- (double)maxSpacing;
- (double)minElevation;
- (double)minRotation;
- (double)minScale;
- (double)minSpacing;
- (double)offsetRotation;
- (id)radius;
- (void)setBones:(id)arg1;
- (void)setBonesFactor:(id)arg1;
- (void)setBonesSym:(id)arg1;
- (void)setDefaultElevation:(double)arg1;
- (void)setDefaultSpacing:(double)arg1;
- (void)setMaxElevation:(double)arg1;
- (void)setMaxRotation:(double)arg1;
- (void)setMaxScale:(double)arg1;
- (void)setMaxSpacing:(double)arg1;
- (void)setMinElevation:(double)arg1;
- (void)setMinRotation:(double)arg1;
- (void)setMinScale:(double)arg1;
- (void)setMinSpacing:(double)arg1;
- (void)setOffsetRotation:(double)arg1;
- (void)setRadius:(id)arg1;
- (void)setSupportsElevation:(bool)arg1;
- (void)setSupportsRotation:(bool)arg1;
- (void)setSupportsScale:(bool)arg1;
- (void)setSupportsSpacing:(bool)arg1;
- (bool)supportsElevation;
- (bool)supportsRotation;
- (bool)supportsScale;
- (bool)supportsSpacing;

@end
