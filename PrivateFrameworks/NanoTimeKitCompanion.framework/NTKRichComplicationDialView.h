/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationDialView : UIView {
    long long  _largeTickCount;
    CALayer * _largeTickLayer;
    double  _largeTickPositionY;
    CAReplicatorLayer * _largeTicksReplicatorLayer;
    float  _progress;
    CALayer * _smallTickLayer;
    double  _smallTickPositionY;
    CAReplicatorLayer * _smallTicksReplicatorLayer;
}

@property (nonatomic, readonly) CALayer *largeTickLayer;
@property (nonatomic) float progress;
@property (nonatomic, readonly) CALayer *smallTickLayer;

- (void).cxx_destruct;
- (id)initWithLargeTickCount:(long long)arg1 largeTickSize:(struct CGSize { double x1; double x2; })arg2 smallTickSize:(struct CGSize { double x1; double x2; })arg3 dialRange:(double)arg4 startAngle:(double)arg5;
- (id)initWithTickCount:(long long)arg1 tickSize:(struct CGSize { double x1; double x2; })arg2 dialRange:(double)arg3 startAngle:(double)arg4;
- (id)largeTickLayer;
- (void)layoutSubviews;
- (float)progress;
- (void)setProgress:(float)arg1;
- (id)smallTickLayer;

@end
