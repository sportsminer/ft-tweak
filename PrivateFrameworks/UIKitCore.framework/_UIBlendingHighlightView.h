/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBlendingHighlightView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    NSMutableArray * _blendingViews;
    double  _cornerRadius;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)cornerRadius;
- (id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPressed:(bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;

@end
