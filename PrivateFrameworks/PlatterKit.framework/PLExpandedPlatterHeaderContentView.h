/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView {
    NSArray * _iconButtonShadows;
}

- (void).cxx_destruct;
- (void)_configureDateLabel;
- (void)_configureIconButtonsForIcons:(id)arg1;
- (void)_configureUtilityButton;
- (id)_ellipsisHighlightedBackgroundImage;
- (double)_headerHeightForWidth:(double)arg1;
- (double)_iconDimension;
- (double)_iconLeadingPadding;
- (id)_iconShadowImageForIcon:(id)arg1;
- (double)_iconTrailingPadding;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextTitleLabelBaselineOffset;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutIconButtonsWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (double)_titleFirstLineCenterY;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)_updateUtilityButtonFont;
- (void)_updateUtilityButtonVibrantStyling;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
