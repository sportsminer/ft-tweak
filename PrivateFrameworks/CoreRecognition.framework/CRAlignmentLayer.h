/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRAlignmentLayer : CALayer {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cardNumberHorizontalDefaultBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cardNumberHorizontalDefaultPos;
    NSMutableArray * _cardNumberLayers;
    CATextLayer * _cardholderNameLayer;
    CATextLayer * _expirationDateLayer;
    CALayer * _infoLayer;
    CATextLayer * _instructionLayer;
    CAShapeLayer * _maskLayer;
    CAShapeLayer * _outlineLayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cardNumberHorizontalDefaultBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } cardNumberHorizontalDefaultPos;
@property (retain) NSMutableArray *cardNumberLayers;
@property (retain) CATextLayer *cardholderNameLayer;
@property (retain) CATextLayer *expirationDateLayer;
@property (retain) CALayer *infoLayer;
@property (retain) CATextLayer *instructionLayer;
@property (retain) CAShapeLayer *maskLayer;
@property (retain) CAShapeLayer *outlineLayer;

+ (id)layer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (void)animateFoundCardRect:(id)arg1;
- (void)animateFoundCodeParts:(id)arg1 codePartPositions:(id)arg2 codeFrameIndex:(unsigned long long)arg3 cardHolder:(id)arg4 cardholderPosition:(struct CGPoint { double x1; double x2; })arg5 cardholderFrameIndex:(unsigned long long)arg6 expDate:(id)arg7 expdatePosition:(struct CGPoint { double x1; double x2; })arg8 expDateFrameIndex:(unsigned long long)arg9 completionBlock:(id /* block */)arg10;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cardNumberHorizontalDefaultBounds;
- (struct CGPoint { double x1; double x2; })cardNumberHorizontalDefaultPos;
- (id)cardNumberLayers;
- (id)cardholderNameLayer;
- (id)expirationDateLayer;
- (void)fadePlacementImage;
- (id)infoLayer;
- (id)init;
- (id)instructionLayer;
- (void)layoutSublayers;
- (void)makeTextLayer:(id)arg1 matchWidthOfText:(id)arg2;
- (id)maskLayer;
- (id)outlineLayer;
- (struct CGPoint { double x1; double x2; })pointOnInfoLayerForPointOnCard:(struct CGPoint { double x1; double x2; })arg1;
- (void)propogateMaskColor:(id)arg1 outlineColor:(id)arg2 placementTextColor:(id)arg3 capturedTextColor:(id)arg4;
- (void)resetLayer;
- (void)setCardNumberHorizontalDefaultBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCardNumberHorizontalDefaultPos:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCardNumberLayers:(id)arg1;
- (void)setCardholderNameLayer:(id)arg1;
- (void)setExpirationDateLayer:(id)arg1;
- (void)setInfoLayer:(id)arg1;
- (void)setInstructionLayer:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setOutlineLayer:(id)arg1;

@end
