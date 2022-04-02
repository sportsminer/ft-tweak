/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftDateTableViewCell : UITableViewCell {
    UIView * _bottomBorderView;
    bool  _checked;
    UIImageView * _checkmarkView;
    UILabel * _dateLabel;
    UILabel * _labelLabel;
    UILabel * _placeholderLabel;
    UIView * _topBorderView;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, copy) NSString *dateString;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *placeholder;

- (void).cxx_destruct;
- (id)_labelColor;
- (id)_newLabel;
- (id)dateString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (id)label;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setChecked:(bool)arg1;
- (void)setDateString:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPlaceholder:(id)arg1;

@end
