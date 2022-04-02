/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface AXWaveformSelectionBarElement : UIAccessibilityElement {
    bool  _adjustsStartTime;
}

@property (nonatomic) bool adjustsStartTime;

- (void)_accessibilityIncreaseValue:(bool)arg1 isThreeFingerScroll:(bool)arg2;
- (void)accessibilityDecrement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)adjustsStartTime;
- (bool)isWaveformOverview;
- (void)setAdjustsStartTime:(bool)arg1;

@end
