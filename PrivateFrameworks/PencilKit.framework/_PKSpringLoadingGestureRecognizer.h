/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer {
    UITouch * _gestureTouch;
    bool  _hasRecognized;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startLocation;
    double  _stationaryFingerTimeout;
}

@property (nonatomic, retain) UITouch *gestureTouch;
@property (nonatomic) bool hasRecognized;
@property (nonatomic) struct CGPoint { double x1; double x2; } startLocation;
@property (nonatomic) double stationaryFingerTimeout;

- (void).cxx_destruct;
- (bool)_pointInsideRecognitionPossibleArea:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_pointShouldBeRecognized:(struct CGPoint { double x1; double x2; })arg1;
- (void)_stationaryFingerTimerFired;
- (id)gestureTouch;
- (bool)hasRecognized;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setGestureTouch:(id)arg1;
- (void)setHasRecognized:(bool)arg1;
- (void)setStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStationaryFingerTimeout:(double)arg1;
- (struct CGPoint { double x1; double x2; })startLocation;
- (double)stationaryFingerTimeout;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
