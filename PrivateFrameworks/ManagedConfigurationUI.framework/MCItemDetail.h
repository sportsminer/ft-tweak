/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCItemDetail : NSObject {
    UIColor * _checkmarkHighlightColor;
    NSString * _checkmarkText;
    NSString * _detail;
    UIColor * _detailHighlightColor;
    NSString * _detailTitle;
    bool  _showCheckmark;
    bool  _showCheckmarkView;
}

@property (nonatomic, retain) UIColor *checkmarkHighlightColor;
@property (nonatomic, retain) NSString *checkmarkText;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic, retain) UIColor *detailHighlightColor;
@property (nonatomic, retain) NSString *detailTitle;
@property (nonatomic) bool showCheckmark;
@property (nonatomic) bool showCheckmarkView;

+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(bool)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(bool)arg7;

- (void).cxx_destruct;
- (id)checkmarkHighlightColor;
- (id)checkmarkText;
- (id)detail;
- (id)detailHighlightColor;
- (id)detailTitle;
- (id)initWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(bool)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(bool)arg7;
- (void)setCheckmarkHighlightColor:(id)arg1;
- (void)setCheckmarkText:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setDetailHighlightColor:(id)arg1;
- (void)setDetailTitle:(id)arg1;
- (void)setShowCheckmark:(bool)arg1;
- (void)setShowCheckmarkView:(bool)arg1;
- (bool)showCheckmark;
- (bool)showCheckmarkView;

@end
