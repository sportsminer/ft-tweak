/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenPluginPresentation : NSObject <NSCopying> {
    _UILegibilitySettings * legibilitySettings;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  suggestedContentInsets;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } suggestedContentInsets;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)legibilitySettings;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSuggestedContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })suggestedContentInsets;

@end
