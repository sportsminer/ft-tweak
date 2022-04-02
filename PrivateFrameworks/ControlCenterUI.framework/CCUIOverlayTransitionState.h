/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIOverlayTransitionState : NSObject <NSCopying> {
    double  _clampedPresentationProgress;
    bool  _interactive;
    double  _nonZeroPresentationProgress;
    double  _presentationProgress;
    double  _progress;
    double  _snappedPresentationProgress;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double clampedPresentationProgress;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) double nonZeroPresentationProgress;
@property (nonatomic, readonly) double presentationProgress;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) double snappedPresentationProgress;
@property (nonatomic, readonly) unsigned long long type;

+ (id)fullyDismissedState;
+ (id)fullyPresentedState;
+ (bool)isSignificantStatusBarTransitionFrom:(id)arg1 to:(id)arg2;
+ (bool)isSignificantTransitionFrom:(id)arg1 to:(id)arg2;
+ (id)stateWithType:(unsigned long long)arg1 interactive:(bool)arg2 progress:(double)arg3;

- (id)_initWithType:(unsigned long long)arg1 interactive:(bool)arg2 progress:(double)arg3;
- (double)clampedPresentationProgress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isInteractive;
- (double)nonZeroPresentationProgress;
- (double)presentationProgress;
- (double)progress;
- (double)snappedPresentationProgress;
- (double)snappedStatusBarPresentationProgress;
- (unsigned long long)type;

@end
