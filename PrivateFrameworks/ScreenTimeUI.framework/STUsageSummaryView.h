/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageSummaryView : UIView {
    STUsageGraphView * _graphView;
    STScreenTimeSummaryView * _summaryView;
    STHorizontallySegmentedView * _topItemsView;
    STUsageReport * _usageReport;
}

@property (readonly) STUsageGraphView *graphView;
@property (readonly) STScreenTimeSummaryView *summaryView;
@property (readonly) STHorizontallySegmentedView *topItemsView;
@property (nonatomic, retain) STUsageReport *usageReport;

- (void).cxx_destruct;
- (id)graphView;
- (id)initWithDailyAverageLabel:(bool)arg1;
- (void)setUsageReport:(id)arg1;
- (id)summaryView;
- (id)topItemsView;
- (id)usageReport;

@end
