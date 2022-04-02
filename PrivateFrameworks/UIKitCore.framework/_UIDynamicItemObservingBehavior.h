/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior {
    id /* block */  _completionHandler;
    double  _completionHandlerInvocationDelay;
    bool  _enabled;
    long long  _frameCount;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _targetVelocity;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double completionHandlerInvocationDelay;
@property (nonatomic) bool enabled;
@property (nonatomic) long long frameCount;
@property (nonatomic) struct CGVector { double x1; double x2; } targetVelocity;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (double)completionHandlerInvocationDelay;
- (bool)enabled;
- (long long)frameCount;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlerInvocationDelay:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrameCount:(long long)arg1;
- (void)setTargetVelocity:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })targetVelocity;
- (void)willMoveToAnimator:(id)arg1;

@end