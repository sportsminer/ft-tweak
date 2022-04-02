/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerCollectionViewCell : UICollectionViewCell {
    <MusicVerticalScrollingContainerCollectionViewCellDelegate> * _delegate;
    struct { 
        unsigned int didUpdateBounds : 1; 
    }  _delegateRespondsToSelector;
    MusicVerticalScrollingContainerItem * _verticalScrollingContainerItem;
}

@property (nonatomic) <MusicVerticalScrollingContainerCollectionViewCellDelegate> *delegate;
@property (nonatomic, retain) MusicVerticalScrollingContainerItem *verticalScrollingContainerItem;

- (void).cxx_destruct;
- (void)_performBlockAffectingBounds:(id /* block */)arg1;
- (id)delegate;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreservesSuperviewLayoutMargins:(bool)arg1;
- (void)setVerticalScrollingContainerItem:(id)arg1;
- (id)verticalScrollingContainerItem;

@end
