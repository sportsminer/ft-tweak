/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler {
    unsigned long long  _attachmentType;
    SXContainerComponentView * _headerComponent;
}

@property (nonatomic) unsigned long long attachmentType;
@property (nonatomic) SXContainerComponentView *headerComponent;

- (void).cxx_destruct;
- (unsigned long long)attachmentType;
- (void)ensureScalabilityOfHeaderComponentFill;
- (double)factorForVisibileBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andAbsoluteComponentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fillContentFrameForScale:(double)arg1 andTranslation:(double)arg2;
- (id)headerComponent;
- (void)prepareAnimation;
- (void)setAttachmentType:(unsigned long long)arg1;
- (void)setHeaderComponent:(id)arg1;
- (bool)shouldFinishAtEndOfScrollView;
- (void)updateAnimationWithFactor:(double)arg1;

@end