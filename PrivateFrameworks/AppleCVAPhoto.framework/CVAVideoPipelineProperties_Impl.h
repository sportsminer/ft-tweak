/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAVideoPipelineProperties_Impl : NSObject <CVAVideoPipelinePropertiesSPI> {
    float  _alphaCoeffFilterColorStd;
    float  _alphaCoeffFilterColorStdFast;
    float  _alphaContrastExponent;
    float  _alphaGammaExponent;
    float  _alphaGuidedFilterEps;
    unsigned long long  _alphaMattePixelBufferHeight;
    unsigned int  _alphaMattePixelBufferPixelFormat;
    unsigned long long  _alphaMattePixelBufferWidth;
    float  _alphaMaxLaplacian;
    int  _backgroundDisparityStatsWindowSize;
    float  _backgroundDisparityUpdateRate;
    float  _backgroundSeparationLikelihoodHigh;
    float  _backgroundSeparationLikelihoodLow;
    float  _centerDeltaCanonicalDisparity;
    float  _closeDisparityPercentile;
    float  _colorPixelBufferFocalLength_mm;
    float  _colorPixelBufferFocalRatio;
    unsigned long long  _colorPixelBufferHeight;
    unsigned int  _colorPixelBufferPixelFormat;
    float  _colorPixelBufferPixelSize_um;
    unsigned long long  _colorPixelBufferWidth;
    float  _deltaCanonicalDisparity;
    float  _deltaDepth;
    float  _depthPixelBufferMaxLeftOcclusionDisparityChange;
    float  _depthPixelBufferMaxRightOcclusionDisparityChange;
    float  _depthPixelBufferOffset;
    float  _depthPixelBufferScale;
    int  _depthPixelBufferXPadding;
    int  _depthPixelBufferXReplication;
    int  _depthPixelBufferYPadding;
    int  _depthPixelBufferYReplication;
    float  _depthQualityMetricFocalPlaneOffsetMeters;
    float  _disparityFilterColorStd;
    float  _disparityFilterUpdateRate;
    int  _disparityPushingBackgroundToForegroundDisparityDifference;
    float  _disparityStereoBaselineMeters;
    float  _disparityStereoFocalLengthPixels;
    float  _dsCanonicalHighScale;
    float  _dsCanonicalHighThld;
    float  _dsCanonicalLowScale;
    float  _dsCanonicalLowThld;
    NSDictionary * _faceKitProcessOutputOverride;
    float  _faceSizeRatioInFocus;
    unsigned long long  _focusStatisticsXTileCount;
    unsigned long long  _focusStatisticsYTileCount;
    float  _focusThresholdHardness;
    float  _focusUpdateRateFast;
    float  _focusUpdateRateSlow;
    float  _foregroundMaskDilationRadius;
    float  _foregroundPercentile;
    float  _gainMultiplierNoiseBitCalculation;
    int  _guidedFilterHeight;
    float  _guidedFilterMinDistToDeweight;
    float  _guidedFilterUnconfidentWeight;
    int  _guidedFilterWidth;
    unsigned long long  _inputDisparityPixelBufferHeight;
    unsigned int  _inputDisparityPixelBufferPixelFormat;
    unsigned long long  _inputDisparityPixelBufferWidth;
    unsigned int  _inputSegmentationPixelBufferPixelFormat;
    unsigned long long  _inputToOutputDisparityPixelBufferRotation;
    int  _invalidDisparityRatioStatsWindowSize;
    float  _invalidDisparityRatioUpdateRate;
    float  _linearDeltaDepthMultiplier;
    float  _linearDeltaDepthOffset;
    float  _lowResolutionMatteDownsamplingScale;
    float  _luxMultiplierNoiseBitCalculation;
    float  _mattingUpdateRate;
    float  _mattingUpdateRateFast;
    float  _maxDeltaCanonicalDisparity;
    float  _maxDisparityFillingDistFromForeground;
    float  _maxDisparityFillingInconsistency;
    int  _maxDistToPushDisparityEdgesFwd;
    int  _maxDistToPushDisparityEdgesRev;
    int  _maxFramesWithoutFace;
    float  _maximumSimilarityToKeepDisparity;
    float  _minDeltaCanonicalDisparity;
    float  _minimumConfidenceToKeepDisparity;
    bool  _modulateFocalRatio;
    float  _offsetNoiseBitCalculation;
    unsigned long long  _outputDisparityPixelBufferHeight;
    unsigned int  _outputDisparityPixelBufferPixelFormat;
    unsigned long long  _outputDisparityPixelBufferWidth;
    unsigned long long  _proxyToFaceEffectLerpNumFrames;
    float  _referenceDisparity;
    int  _relightDisplayMode;
    float  _relightEffectStrength;
    float  _renderingDisparityBlurRadius;
    float  _renderingDisparityUpdateRate;
    float  _renderingLensFocalLength;
    float  _sdofStateMachineIntensityIncrement;
    double  _sdofStateMachineMaxOrientationDifference;
    float  _stableBackgroundDisparitySumVariance;
    float  _stableInvalidDisparityRatio;
    double  _stageLightStageMachineMaxOrientationDifference;
    float  _stageLightStateMachineIntensityIncrement;
    float  _unstableBackgroundDisparitySumVariance;
    float  _unstableInvalidDisparityRatio;
    unsigned long long  _videoPipelineDevice;
}

@property float alphaCoeffFilterColorStd;
@property float alphaCoeffFilterColorStdFast;
@property float alphaContrastExponent;
@property float alphaGammaExponent;
@property float alphaGuidedFilterEps;
@property unsigned long long alphaMattePixelBufferHeight;
@property (readonly) unsigned int alphaMattePixelBufferPixelFormat;
@property unsigned long long alphaMattePixelBufferWidth;
@property float alphaMaxLaplacian;
@property int backgroundDisparityStatsWindowSize;
@property float backgroundDisparityUpdateRate;
@property float backgroundSeparationLikelihoodHigh;
@property float backgroundSeparationLikelihoodLow;
@property float centerDeltaCanonicalDisparity;
@property float closeDisparityPercentile;
@property float colorPixelBufferFocalLength_mm;
@property float colorPixelBufferFocalRatio;
@property unsigned long long colorPixelBufferHeight;
@property (readonly) unsigned int colorPixelBufferPixelFormat;
@property float colorPixelBufferPixelSize_um;
@property unsigned long long colorPixelBufferWidth;
@property (readonly, copy) NSString *debugDescription;
@property float deltaCanonicalDisparity;
@property float deltaDepth;
@property float depthPixelBufferMaxLeftOcclusionDisparityChange;
@property float depthPixelBufferMaxRightOcclusionDisparityChange;
@property float depthPixelBufferOffset;
@property float depthPixelBufferScale;
@property int depthPixelBufferXPadding;
@property int depthPixelBufferXReplication;
@property int depthPixelBufferYPadding;
@property int depthPixelBufferYReplication;
@property float depthQualityMetricFocalPlaneOffsetMeters;
@property (readonly, copy) NSString *description;
@property float disparityFilterColorStd;
@property float disparityFilterUpdateRate;
@property int disparityPushingBackgroundToForegroundDisparityDifference;
@property float disparityStereoBaselineMeters;
@property float disparityStereoFocalLengthPixels;
@property float dsCanonicalHighScale;
@property float dsCanonicalHighThld;
@property float dsCanonicalLowScale;
@property float dsCanonicalLowThld;
@property (retain) NSDictionary *faceKitProcessOutputOverride;
@property float faceSizeRatioInFocus;
@property unsigned long long focusStatisticsXTileCount;
@property unsigned long long focusStatisticsYTileCount;
@property float focusThresholdHardness;
@property float focusUpdateRateFast;
@property float focusUpdateRateSlow;
@property float foregroundMaskDilationRadius;
@property float foregroundPercentile;
@property float gainMultiplierNoiseBitCalculation;
@property int guidedFilterHeight;
@property float guidedFilterMinDistToDeweight;
@property float guidedFilterUnconfidentWeight;
@property int guidedFilterWidth;
@property (readonly) unsigned long long hash;
@property unsigned long long inputDisparityPixelBufferHeight;
@property (readonly) unsigned int inputDisparityPixelBufferPixelFormat;
@property unsigned long long inputDisparityPixelBufferWidth;
@property (readonly) unsigned int inputSegmentationPixelBufferPixelFormat;
@property unsigned long long inputToOutputDisparityPixelBufferRotation;
@property int invalidDisparityRatioStatsWindowSize;
@property float invalidDisparityRatioUpdateRate;
@property float linearDeltaDepthMultiplier;
@property float linearDeltaDepthOffset;
@property float lowResolutionMatteDownsamplingScale;
@property float luxMultiplierNoiseBitCalculation;
@property float mattingUpdateRate;
@property float mattingUpdateRateFast;
@property float maxDeltaCanonicalDisparity;
@property float maxDisparityFillingDistFromForeground;
@property float maxDisparityFillingInconsistency;
@property int maxDistToPushDisparityEdgesFwd;
@property int maxDistToPushDisparityEdgesRev;
@property int maxFramesWithoutFace;
@property float maximumSimilarityToKeepDisparity;
@property float minDeltaCanonicalDisparity;
@property float minimumConfidenceToKeepDisparity;
@property bool modulateFocalRatio;
@property float offsetNoiseBitCalculation;
@property unsigned long long outputDisparityPixelBufferHeight;
@property (readonly) unsigned int outputDisparityPixelBufferPixelFormat;
@property unsigned long long outputDisparityPixelBufferWidth;
@property unsigned long long proxyToFaceEffectLerpNumFrames;
@property float referenceDisparity;
@property int relightDisplayMode;
@property float relightEffectStrength;
@property float renderingDisparityBlurRadius;
@property float renderingDisparityUpdateRate;
@property float renderingLensFocalLength;
@property float sdofStateMachineIntensityIncrement;
@property double sdofStateMachineMaxOrientationDifference;
@property float stableBackgroundDisparitySumVariance;
@property float stableInvalidDisparityRatio;
@property double stageLightStageMachineMaxOrientationDifference;
@property float stageLightStateMachineIntensityIncrement;
@property (readonly) Class superclass;
@property float unstableBackgroundDisparitySumVariance;
@property float unstableInvalidDisparityRatio;
@property (readonly) unsigned long long videoPipelineDevice;

- (void).cxx_destruct;
- (float)alphaCoeffFilterColorStd;
- (float)alphaCoeffFilterColorStdFast;
- (float)alphaContrastExponent;
- (float)alphaGammaExponent;
- (float)alphaGuidedFilterEps;
- (unsigned long long)alphaMattePixelBufferHeight;
- (unsigned int)alphaMattePixelBufferPixelFormat;
- (unsigned long long)alphaMattePixelBufferWidth;
- (float)alphaMaxLaplacian;
- (int)backgroundDisparityStatsWindowSize;
- (float)backgroundDisparityUpdateRate;
- (float)backgroundSeparationLikelihoodHigh;
- (float)backgroundSeparationLikelihoodLow;
- (float)centerDeltaCanonicalDisparity;
- (float)closeDisparityPercentile;
- (float)colorPixelBufferFocalLength_mm;
- (float)colorPixelBufferFocalRatio;
- (unsigned long long)colorPixelBufferHeight;
- (unsigned int)colorPixelBufferPixelFormat;
- (float)colorPixelBufferPixelSize_um;
- (unsigned long long)colorPixelBufferWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)deltaCanonicalDisparity;
- (float)deltaDepth;
- (float)depthPixelBufferMaxLeftOcclusionDisparityChange;
- (float)depthPixelBufferMaxRightOcclusionDisparityChange;
- (float)depthPixelBufferOffset;
- (float)depthPixelBufferScale;
- (int)depthPixelBufferXPadding;
- (int)depthPixelBufferXReplication;
- (int)depthPixelBufferYPadding;
- (int)depthPixelBufferYReplication;
- (float)depthQualityMetricFocalPlaneOffsetMeters;
- (float)disparityFilterColorStd;
- (float)disparityFilterUpdateRate;
- (int)disparityPushingBackgroundToForegroundDisparityDifference;
- (float)disparityStereoBaselineMeters;
- (float)disparityStereoFocalLengthPixels;
- (float)dsCanonicalHighScale;
- (float)dsCanonicalHighThld;
- (float)dsCanonicalLowScale;
- (float)dsCanonicalLowThld;
- (id)faceKitProcessOutputOverride;
- (float)faceSizeRatioInFocus;
- (unsigned long long)focusStatisticsXTileCount;
- (unsigned long long)focusStatisticsYTileCount;
- (float)focusThresholdHardness;
- (float)focusUpdateRateFast;
- (float)focusUpdateRateSlow;
- (float)foregroundMaskDilationRadius;
- (float)foregroundPercentile;
- (float)gainMultiplierNoiseBitCalculation;
- (int)guidedFilterHeight;
- (float)guidedFilterMinDistToDeweight;
- (float)guidedFilterUnconfidentWeight;
- (int)guidedFilterWidth;
- (id)initForVideoPipelineDevice:(unsigned long long)arg1;
- (unsigned long long)inputDisparityPixelBufferHeight;
- (unsigned int)inputDisparityPixelBufferPixelFormat;
- (unsigned long long)inputDisparityPixelBufferWidth;
- (unsigned int)inputSegmentationPixelBufferPixelFormat;
- (unsigned long long)inputToOutputDisparityPixelBufferRotation;
- (int)invalidDisparityRatioStatsWindowSize;
- (float)invalidDisparityRatioUpdateRate;
- (float)linearDeltaDepthMultiplier;
- (float)linearDeltaDepthOffset;
- (float)lowResolutionMatteDownsamplingScale;
- (float)luxMultiplierNoiseBitCalculation;
- (float)mattingUpdateRate;
- (float)mattingUpdateRateFast;
- (float)maxDeltaCanonicalDisparity;
- (float)maxDisparityFillingDistFromForeground;
- (float)maxDisparityFillingInconsistency;
- (int)maxDistToPushDisparityEdgesFwd;
- (int)maxDistToPushDisparityEdgesRev;
- (int)maxFramesWithoutFace;
- (float)maximumSimilarityToKeepDisparity;
- (float)minDeltaCanonicalDisparity;
- (float)minimumConfidenceToKeepDisparity;
- (bool)modulateFocalRatio;
- (float)offsetNoiseBitCalculation;
- (unsigned long long)outputDisparityPixelBufferHeight;
- (unsigned int)outputDisparityPixelBufferPixelFormat;
- (unsigned long long)outputDisparityPixelBufferWidth;
- (unsigned long long)proxyToFaceEffectLerpNumFrames;
- (float)referenceDisparity;
- (int)relightDisplayMode;
- (float)relightEffectStrength;
- (float)renderingDisparityBlurRadius;
- (float)renderingDisparityUpdateRate;
- (float)renderingLensFocalLength;
- (float)sdofStateMachineIntensityIncrement;
- (double)sdofStateMachineMaxOrientationDifference;
- (void)setAlphaCoeffFilterColorStd:(float)arg1;
- (void)setAlphaCoeffFilterColorStdFast:(float)arg1;
- (void)setAlphaContrastExponent:(float)arg1;
- (void)setAlphaGammaExponent:(float)arg1;
- (void)setAlphaGuidedFilterEps:(float)arg1;
- (void)setAlphaMattePixelBufferHeight:(unsigned long long)arg1;
- (void)setAlphaMattePixelBufferWidth:(unsigned long long)arg1;
- (void)setAlphaMaxLaplacian:(float)arg1;
- (void)setBackgroundDisparityStatsWindowSize:(int)arg1;
- (void)setBackgroundDisparityUpdateRate:(float)arg1;
- (void)setBackgroundSeparationLikelihoodHigh:(float)arg1;
- (void)setBackgroundSeparationLikelihoodLow:(float)arg1;
- (void)setCenterDeltaCanonicalDisparity:(float)arg1;
- (void)setCloseDisparityPercentile:(float)arg1;
- (void)setColorPixelBufferFocalLength_mm:(float)arg1;
- (void)setColorPixelBufferFocalRatio:(float)arg1;
- (void)setColorPixelBufferHeight:(unsigned long long)arg1;
- (void)setColorPixelBufferPixelSize_um:(float)arg1;
- (void)setColorPixelBufferWidth:(unsigned long long)arg1;
- (void)setDeltaCanonicalDisparity:(float)arg1;
- (void)setDeltaDepth:(float)arg1;
- (void)setDepthPixelBufferMaxLeftOcclusionDisparityChange:(float)arg1;
- (void)setDepthPixelBufferMaxRightOcclusionDisparityChange:(float)arg1;
- (void)setDepthPixelBufferOffset:(float)arg1;
- (void)setDepthPixelBufferScale:(float)arg1;
- (void)setDepthPixelBufferXPadding:(int)arg1;
- (void)setDepthPixelBufferXReplication:(int)arg1;
- (void)setDepthPixelBufferYPadding:(int)arg1;
- (void)setDepthPixelBufferYReplication:(int)arg1;
- (void)setDepthQualityMetricFocalPlaneOffsetMeters:(float)arg1;
- (void)setDisparityFilterColorStd:(float)arg1;
- (void)setDisparityFilterUpdateRate:(float)arg1;
- (void)setDisparityPushingBackgroundToForegroundDisparityDifference:(int)arg1;
- (void)setDisparityStereoBaselineMeters:(float)arg1;
- (void)setDisparityStereoFocalLengthPixels:(float)arg1;
- (void)setDsCanonicalHighScale:(float)arg1;
- (void)setDsCanonicalHighThld:(float)arg1;
- (void)setDsCanonicalLowScale:(float)arg1;
- (void)setDsCanonicalLowThld:(float)arg1;
- (void)setFaceKitProcessOutputOverride:(id)arg1;
- (void)setFaceSizeRatioInFocus:(float)arg1;
- (void)setFocusStatisticsXTileCount:(unsigned long long)arg1;
- (void)setFocusStatisticsYTileCount:(unsigned long long)arg1;
- (void)setFocusThresholdHardness:(float)arg1;
- (void)setFocusUpdateRateFast:(float)arg1;
- (void)setFocusUpdateRateSlow:(float)arg1;
- (void)setForegroundMaskDilationRadius:(float)arg1;
- (void)setForegroundPercentile:(float)arg1;
- (void)setGainMultiplierNoiseBitCalculation:(float)arg1;
- (void)setGuidedFilterHeight:(int)arg1;
- (void)setGuidedFilterMinDistToDeweight:(float)arg1;
- (void)setGuidedFilterUnconfidentWeight:(float)arg1;
- (void)setGuidedFilterWidth:(int)arg1;
- (void)setInputDisparityPixelBufferHeight:(unsigned long long)arg1;
- (void)setInputDisparityPixelBufferWidth:(unsigned long long)arg1;
- (void)setInputToOutputDisparityPixelBufferRotation:(unsigned long long)arg1;
- (void)setInvalidDisparityRatioStatsWindowSize:(int)arg1;
- (void)setInvalidDisparityRatioUpdateRate:(float)arg1;
- (void)setLinearDeltaDepthMultiplier:(float)arg1;
- (void)setLinearDeltaDepthOffset:(float)arg1;
- (void)setLowResolutionMatteDownsamplingScale:(float)arg1;
- (void)setLuxMultiplierNoiseBitCalculation:(float)arg1;
- (void)setMattingUpdateRate:(float)arg1;
- (void)setMattingUpdateRateFast:(float)arg1;
- (void)setMaxDeltaCanonicalDisparity:(float)arg1;
- (void)setMaxDisparityFillingDistFromForeground:(float)arg1;
- (void)setMaxDisparityFillingInconsistency:(float)arg1;
- (void)setMaxDistToPushDisparityEdgesFwd:(int)arg1;
- (void)setMaxDistToPushDisparityEdgesRev:(int)arg1;
- (void)setMaxFramesWithoutFace:(int)arg1;
- (void)setMaximumSimilarityToKeepDisparity:(float)arg1;
- (void)setMinDeltaCanonicalDisparity:(float)arg1;
- (void)setMinimumConfidenceToKeepDisparity:(float)arg1;
- (void)setModulateFocalRatio:(bool)arg1;
- (void)setOffsetNoiseBitCalculation:(float)arg1;
- (void)setOutputDisparityPixelBufferHeight:(unsigned long long)arg1;
- (void)setOutputDisparityPixelBufferWidth:(unsigned long long)arg1;
- (void)setProxyToFaceEffectLerpNumFrames:(unsigned long long)arg1;
- (void)setReferenceDisparity:(float)arg1;
- (void)setRelightDisplayMode:(int)arg1;
- (void)setRelightEffectStrength:(float)arg1;
- (void)setRenderingDisparityBlurRadius:(float)arg1;
- (void)setRenderingDisparityUpdateRate:(float)arg1;
- (void)setRenderingLensFocalLength:(float)arg1;
- (void)setSdofStateMachineIntensityIncrement:(float)arg1;
- (void)setSdofStateMachineMaxOrientationDifference:(double)arg1;
- (void)setStableBackgroundDisparitySumVariance:(float)arg1;
- (void)setStableInvalidDisparityRatio:(float)arg1;
- (void)setStageLightStageMachineMaxOrientationDifference:(double)arg1;
- (void)setStageLightStateMachineIntensityIncrement:(float)arg1;
- (void)setUnstableBackgroundDisparitySumVariance:(float)arg1;
- (void)setUnstableInvalidDisparityRatio:(float)arg1;
- (float)stableBackgroundDisparitySumVariance;
- (float)stableInvalidDisparityRatio;
- (double)stageLightStageMachineMaxOrientationDifference;
- (float)stageLightStateMachineIntensityIncrement;
- (float)unstableBackgroundDisparitySumVariance;
- (float)unstableInvalidDisparityRatio;
- (bool)validateWithError:(id*)arg1;
- (unsigned long long)videoPipelineDevice;

@end
