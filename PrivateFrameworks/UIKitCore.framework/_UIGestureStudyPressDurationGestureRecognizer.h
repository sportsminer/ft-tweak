/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIGestureStudyPressDurationGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating> {
    double  _allowableMovement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCentroid;
    double  _startTimestamp;
}

@property (nonatomic) double allowableMovement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double movement;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCentroid;
@property (nonatomic) double startTimestamp;
@property (readonly) Class superclass;

- (double)allowableMovement;
- (double)duration;
- (id)eventName;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (double)movement;
- (struct CGPoint { double x1; double x2; })originalCentroid;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)setOriginalCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
