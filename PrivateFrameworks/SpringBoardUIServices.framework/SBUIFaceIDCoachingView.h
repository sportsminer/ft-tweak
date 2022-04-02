/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIFaceIDCoachingView : UIView {
    unsigned long long  _coachingCondition;
    NSString * _currentSizeCategory;
    UIMorphingLabel * _label;
    NSString * _labelText;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic) unsigned long long coachingCondition;
@property (nonatomic, retain) NSString *currentSizeCategory;
@property (getter=_label, nonatomic, retain) UIMorphingLabel *label;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) double stringWidth;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged;
- (id)_label;
- (void)_resizeLabelToFirstSizeCategoryThatFits;
- (void)_updateLabelTextForCurrentCoachingConditionAnimated:(bool)arg1;
- (unsigned long long)coachingCondition;
- (id)currentSizeCategory;
- (id)init;
- (id)labelText;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setCoachingCondition:(unsigned long long)arg1;
- (void)setCoachingCondition:(unsigned long long)arg1 animated:(bool)arg2 delay:(double)arg3;
- (void)setCurrentSizeCategory:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (double)stringWidth;

@end
