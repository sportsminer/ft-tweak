/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLCoverArticlesWidgetLayout : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _bounds;
    double  _focusedShadowOffset;
    double  _focusedShadowRadius;
    double  _footerHeight;
    bool  _isCompact;
    double  _landscapeCoverMargin;
    double  _portraitCoverMargin;
    double  _sideCoverBleed;
    double  _sideCoverMargin;
    double  _sideCoverShadowOffset;
    double  _sideCoverShadowRadius;
    double  _widgetHeight;
    double  _widgetWidth;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } bounds;
@property (nonatomic) double focusedShadowOffset;
@property (nonatomic) double focusedShadowRadius;
@property (nonatomic) double footerHeight;
@property (nonatomic, readonly) bool isCompact;
@property (nonatomic) double landscapeCoverMargin;
@property (nonatomic) double portraitCoverMargin;
@property (nonatomic) double sideCoverBleed;
@property (nonatomic) double sideCoverMargin;
@property (nonatomic) double sideCoverShadowOffset;
@property (nonatomic) double sideCoverShadowRadius;
@property (nonatomic) double widgetHeight;
@property (nonatomic) double widgetWidth;

+ (id)layoutForDevice;
+ (id)layoutForFeedSettings:(id)arg1;

- (struct CGSize { double x1; double x2; })bounds;
- (double)calculateWidgetHeight;
- (struct CGSize { double x1; double x2; })coverBoundsConstrainedToSize:(struct CGSize { double x1; double x2; })arg1;
- (double)focusedShadowOffset;
- (double)focusedShadowRadius;
- (double)footerHeight;
- (id)initWithBounds:(struct CGSize { double x1; double x2; })arg1 compactLayout:(bool)arg2;
- (bool)isCompact;
- (double)landscapeCoverMargin;
- (double)portraitCoverMargin;
- (void)setFocusedShadowOffset:(double)arg1;
- (void)setFocusedShadowRadius:(double)arg1;
- (void)setFooterHeight:(double)arg1;
- (void)setLandscapeCoverMargin:(double)arg1;
- (void)setPortraitCoverMargin:(double)arg1;
- (void)setSideCoverBleed:(double)arg1;
- (void)setSideCoverMargin:(double)arg1;
- (void)setSideCoverShadowOffset:(double)arg1;
- (void)setSideCoverShadowRadius:(double)arg1;
- (void)setWidgetHeight:(double)arg1;
- (void)setWidgetWidth:(double)arg1;
- (void)setupCompactLayout;
- (void)setupRegularLayout;
- (double)sideCoverBleed;
- (double)sideCoverMargin;
- (double)sideCoverShadowOffset;
- (double)sideCoverShadowRadius;
- (double)widgetHeight;
- (double)widgetWidth;

@end
