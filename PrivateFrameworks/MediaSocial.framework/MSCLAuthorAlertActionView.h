/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAuthorAlertActionView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _finalLayoutMargins;
    UIImageView * _imageView;
    UILabel * _label;
}

@property (nonatomic, copy) NSString *authorName;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)authorName;
- (void)didMoveToSuperview;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (void)setAuthorName:(id)arg1;
- (void)setFinalLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImage:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
