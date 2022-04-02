/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    <PageRangeDelegate> * _delegate;
    UIView * _dimmingView;
    UIImageView * _imageView;
    bool  _inRange;
    UILongPressGestureRecognizer * _longPressRecognizer;
    bool  _menuHiddenByTapInThisCell;
    bool  _menuPresented;
    long long  _pageIndex;
    UITapGestureRecognizer * _tapRecognizer;
    bool  _thisCellIsPresentingMenu;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PageRangeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) long long pageIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1;
- (bool)canModifyPageRange;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dimmingView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)gestureRecognizers;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)menuDidHide:(id)arg1;
- (long long)pageIndex;
- (void)prepareForReuse;
- (void)removePage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setEndPage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInRange:(bool)arg1 animated:(bool)arg2;
- (void)setPageIndex:(long long)arg1;
- (void)setStartPage:(id)arg1;
- (void)showMenu;

@end
