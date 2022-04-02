/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView {
    NTKCSeparatorView * _bottomSeparator;
    UILabel * _detailLabel;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (double)headerHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
