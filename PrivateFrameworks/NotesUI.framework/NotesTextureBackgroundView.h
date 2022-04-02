/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface NotesTextureBackgroundView : UIView {
    bool  _scrollsTexture;
    NSLayoutConstraint * _textureHeightConstraint;
    NotesTextureView * _textureView;
    NSLayoutConstraint * _textureYConstraint;
}

@property bool scrollsTexture;
@property (nonatomic, retain) NSLayoutConstraint *textureHeightConstraint;
@property (nonatomic, readonly) NotesTextureView *textureView;
@property (nonatomic, retain) NSLayoutConstraint *textureYConstraint;

+ (id)colorWithPaperTexturePatternImage;
+ (id)textureImage;

- (void).cxx_destruct;
- (void)commonInitWithScrollingTextures:(bool)arg1 hasAlpha:(bool)arg2;
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scrollingTextures:(bool)arg2 hasAlpha:(bool)arg3;
- (bool)scrollsTexture;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollsTexture:(bool)arg1;
- (void)setTextureHeightConstraint:(id)arg1;
- (void)setTextureYConstraint:(id)arg1;
- (id)textureHeightConstraint;
- (id)textureView;
- (id)textureYConstraint;

@end
