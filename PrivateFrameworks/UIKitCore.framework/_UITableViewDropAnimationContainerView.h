/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewDropAnimationContainerView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  __tableViewContainerOffsetFromTargetCenter;
    long long  _activeDropAnimationCount;
    double  _originalTargetCenterY;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } _tableViewContainerOffsetFromTargetCenter;
@property (nonatomic) long long activeDropAnimationCount;
@property (nonatomic, readonly) NSArray *cells;
@property (nonatomic, readonly) bool hasCompletedAllDropAnimations;
@property (nonatomic) double originalTargetCenterY;

- (struct CGPoint { double x1; double x2; })_tableViewContainerOffsetFromTargetCenter;
- (long long)activeDropAnimationCount;
- (void)beginDropAnimation;
- (id)cells;
- (void)endDropAnimation;
- (bool)hasCompletedAllDropAnimations;
- (id)init;
- (double)originalTargetCenterY;
- (void)setActiveDropAnimationCount:(long long)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOriginalTargetCenterY:(double)arg1;
- (void)set_tableViewContainerOffsetFromTargetCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateOffsetFromTargetCenterIfNeeded;

@end
