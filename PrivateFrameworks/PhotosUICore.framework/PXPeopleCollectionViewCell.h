/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXUIAssetBadgeViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _avatarSize;
    UIImageView * _avatarView;
    bool  _blurApplied;
    UIVisualEffectView * _blurView;
    UIImage * _checkMarkImage;
    <PXPeopleCollectionViewCellDelegate> * _delegate;
    bool  _favorite;
    UIButton * _favoriteBadge;
    UIImage * _favoriteOffImage;
    UIImage * _favoriteOnImage;
    UIImage * _favoriteOverlay;
    UIView * _gradientView;
    UIView * _highlightOverlayView;
    bool  _isReordering;
    UIImageView * _mirrorView;
    NSString * _name;
    UILabel * _nameLabel;
    PXRoundedCornerOverlayView * _roundCornerOverlay;
    unsigned long long  _selectionStyle;
    UIImageView * _selectionView;
    double  _textAlpha;
    bool  _titleUsesAllCaps;
    UIImage * _unFavoriteOverlay;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unitRect;
}

@property (nonatomic) struct CGSize { double x1; double x2; } avatarSize;
@property (nonatomic, readonly) UIImageView *avatarView;
@property (nonatomic) bool blurApplied;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic, retain) UIImage *checkMarkImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (nonatomic, retain) UIButton *favoriteBadge;
@property (nonatomic, retain) UIImage *favoriteOffImage;
@property (nonatomic, retain) UIImage *favoriteOnImage;
@property (nonatomic, retain) UIImage *favoriteOverlay;
@property (nonatomic, retain) UIView *gradientView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightOverlayView;
@property (nonatomic, retain) UIImage *image;
@property (setter=setReordering:, nonatomic) bool isReordering;
@property (nonatomic, retain) UIImageView *mirrorView;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (nonatomic) unsigned long long selectionStyle;
@property (nonatomic, retain) UIImageView *selectionView;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha;
@property (nonatomic) bool titleUsesAllCaps;
@property (nonatomic, retain) UIImage *unFavoriteOverlay;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_avatarSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_favoriteBadgePressed:(id)arg1;
- (struct UIColor { Class x1; }*)_placeHolderColor;
- (long long)_preferredSizeClass;
- (id)_stretchableGradientImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 gradientColor:(id)arg3;
- (void)_updateSelection;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (void)_updateType;
- (struct CGSize { double x1; double x2; })avatarSize;
- (id)avatarView;
- (bool)blurApplied;
- (id)blurView;
- (id)checkMarkImage;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)favoriteBadge;
- (id)favoriteOffImage;
- (id)favoriteOnImage;
- (id)favoriteOverlay;
- (id)gradientView;
- (id)highlightOverlayView;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFavorite;
- (bool)isReordering;
- (void)layoutSubviews;
- (id)mirrorView;
- (id)name;
- (id)nameLabel;
- (void)prepareForReuse;
- (id)roundCornerOverlay;
- (unsigned long long)selectionStyle;
- (id)selectionView;
- (void)setAvatarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBlurApplied:(bool)arg1;
- (void)setBlurView:(id)arg1;
- (void)setCheckMarkImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setFavoriteBadge:(id)arg1;
- (void)setFavoriteOffImage:(id)arg1;
- (void)setFavoriteOnImage:(id)arg1;
- (void)setFavoriteOverlay:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setHighlightOverlayView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setMirrorView:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setReordering:(bool)arg1;
- (void)setRoundCornerOverlay:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionStyle:(unsigned long long)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setTitleUsesAllCaps:(bool)arg1;
- (void)setUnFavoriteOverlay:(id)arg1;
- (double)textAlpha;
- (bool)titleUsesAllCaps;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unFavoriteOverlay;

@end
