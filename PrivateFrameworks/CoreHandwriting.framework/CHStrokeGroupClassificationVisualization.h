/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupClassificationVisualization : CHStrokeGroupingVisualization

- (id)_attributedStringFromString:(id)arg1 withColor:(struct CGColor { }*)arg2 font:(struct __CTFont { }*)arg3 paragraphStyle:(struct __CTParagraphStyle { }*)arg4;
- (struct CGColor { }*)_newColorForStroke:(id)arg1 inGroup:(id)arg2;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)layeringPriority;

@end
