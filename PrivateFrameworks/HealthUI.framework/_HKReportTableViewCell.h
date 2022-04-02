/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKReportTableViewCell : UITableViewCell {
    double  _minimumHeight;
    UIImageView * _reportImageView;
    UILabel * _reportLabel;
}

@property (nonatomic, readonly) double minimumHeight;
@property (nonatomic, readonly) UIImageView *reportImageView;
@property (nonatomic, readonly) UILabel *reportLabel;

- (void).cxx_destruct;
- (void)_buildCellStructureWithWidth:(double)arg1;
- (id)initWithWidth:(double)arg1 minimumHeight:(double)arg2;
- (double)minimumHeight;
- (id)reportImageView;
- (id)reportLabel;
- (void)setReportName:(id)arg1 reportImage:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
