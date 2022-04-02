/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewInAppRatingHeaderView : UIView {
    bool  _completed;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIImageView * _imageView;
    NSString * _message;
    UILabel * _messageLabel;
    SKUIStarRatingControl * _ratingView;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) bool completed;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) SKUIStarRatingControl *ratingView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_messageLabelFont;
- (id)_titleLabelFont;
- (bool)completed;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)imageView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)message;
- (id)messageLabel;
- (id)ratingView;
- (void)setCompleted:(bool)arg1;
- (void)setCompletedWithRating:(long long)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setRatingView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;

@end
