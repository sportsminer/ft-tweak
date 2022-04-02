/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusContainerGuideMapEntry : _UIFocusRegionMapEntry {
    double  _axisAlignedDistanceFromFocusedRect;
    UIFocusContainerGuide * _focusContainerGuide;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _focusContainmentFrame;
}

@property (nonatomic) double axisAlignedDistanceFromFocusedRect;
@property (nonatomic) UIFocusContainerGuide *focusContainerGuide;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusContainmentFrame;

- (void).cxx_destruct;
- (double)axisAlignedDistanceFromFocusedRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)drawVisualRepresentationInContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)focusContainerGuide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusContainmentFrame;
- (void)setAxisAlignedDistanceFromFocusedRect:(double)arg1;
- (void)setFocusContainerGuide:(id)arg1;
- (void)setFocusContainmentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)visualRepresentationColor;

@end
