/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCVisualWaveformAmpSlice : NSObject {
    double  _amplitude;
    long long  _interpolatingVisualAmplitudeHeightFrameCount;
    double  _interpolatingvisualAmplitudeHeight;
    double  _interpolatingvisualAmplitudeHeightDiff;
    bool  _needsPathUpdate;
    NSMutableSet * _segments;
    double  _sliceIndex;
    CALayer * _sliceLayer;
    double  _visualAmplitudeHeight;
    long long  _visualAmplitudeHeightInterpolatingFrames;
}

@property (nonatomic) double amplitude;
@property (nonatomic) bool needsPathUpdate;
@property (nonatomic, readonly) bool segmentsAreRendered;
@property (nonatomic) double sliceIndex;
@property (nonatomic, retain) CALayer *sliceLayer;
@property (nonatomic) double visualAmplitudeHeight;
@property (nonatomic) long long visualAmplitudeHeightInterpolatingFrames;

- (void).cxx_destruct;
- (void)addSegment:(id)arg1;
- (double)amplitude;
- (void)clearSegments;
- (id)init;
- (id)initWithIndex:(double)arg1 amplitude:(double)arg2;
- (bool)needsPathUpdate;
- (bool)segmentsAreRendered;
- (void)setAmplitude:(double)arg1;
- (void)setNeedsPathUpdate:(bool)arg1;
- (void)setSliceIndex:(double)arg1;
- (void)setSliceLayer:(id)arg1;
- (void)setVisualAmplitudeHeight:(double)arg1;
- (void)setVisualAmplitudeHeightInterpolatingFrames:(long long)arg1;
- (double)sliceIndex;
- (id)sliceLayer;
- (double)visualAmplitudeHeight;
- (long long)visualAmplitudeHeightInterpolatingFrames;

@end
