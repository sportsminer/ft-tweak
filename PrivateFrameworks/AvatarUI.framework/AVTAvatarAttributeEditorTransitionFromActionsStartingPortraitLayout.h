/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout {
    double  _attributesContentViewExtraHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avatarContainerFrame;
}

@property (nonatomic, readonly) double attributesContentViewExtraHeight;

- (double)attributesContentViewExtraHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributesContentViewFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewScrollIndicatorInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarContainerFrame;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })groupDialContainerFrame;
- (double)headerMaskingViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerMaskingViewFrame;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 screenScale:(double)arg3 avatarViewContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 attributesContentViewFrameExtraHeight:(double)arg5;
- (unsigned long long)supportedLayoutOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userInfoFrame;
- (double)verticalRuleAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalRuleFrame;

@end
