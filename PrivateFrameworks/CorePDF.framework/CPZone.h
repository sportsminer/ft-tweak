/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZone : CPRegion <CPGraphicUser> {
    double  area;
    NSMutableArray * backgroundGraphics;
    CPCharSequence * charactersInZone;
    NSArray * graphicsInZone;
    NSArray * gutters;
    bool  isStraddleZone;
    NSArray * leftGuides;
    struct CGPoint { double x1; double x2; } * outerVertices;
    NSArray * rightGuides;
    NSArray * spacers;
    struct CGPoint { double x1; double x2; } * swollenOuterVertices;
    NSMutableArray * textLinesInZone;
    unsigned int  usedGraphicCount;
    NSMutableArray * zoneBorders;
    CPZoneProfile * zoneProfile;
}

- (void)accept:(id)arg1;
- (void)addContentFrom:(id)arg1;
- (void)addPDFChar:(void*)arg1;
- (double)area;
- (id)backgroundGraphics;
- (long long)borderZOrder;
- (bool)bordersWindClockwise;
- (bool)canContain:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)charactersInZone;
- (long long)compareArea:(id)arg1;
- (bool)contains:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)graphicsInZone;
- (id)gutters;
- (bool)hasBorders;
- (bool)hasNeighborShape:(id)arg1;
- (void)incrementUsedGraphicCount;
- (id)init;
- (bool)isRectangular;
- (bool)isStraddleZone;
- (bool)isZone;
- (id)leftGuides;
- (bool)mapToWordPairs:(int (*)arg1 passing:(void*)arg2;
- (bool)mapToWordPairsWithIndex:(int (*)arg1 passing:(void*)arg2;
- (bool)mapToWords:(int (*)arg1 passing:(void*)arg2;
- (bool)mapToWordsWithIndex:(int (*)arg1 passing:(void*)arg2;
- (long long)neighborZOrder;
- (struct CGColor { }*)newBackgroundColor;
- (struct CGPoint { double x1; double x2; }*)outerVertices;
- (bool)rectangleBordersAtLeft:(id*)arg1 top:(id*)arg2 right:(id*)arg3 bottom:(id*)arg4;
- (void)removeUnfilledNeighborShapes;
- (id)rightGuides;
- (void)setCharactersInZone:(id)arg1;
- (void)setGutters:(id)arg1;
- (void)setIsStraddleZone:(bool)arg1;
- (void)setLeftGuides:(id)arg1;
- (void)setRightGuides:(id)arg1;
- (void)setSpacers:(id)arg1;
- (void)setZoneBorders:(id)arg1;
- (void)setZoneProfile:(id)arg1;
- (id)spacers;
- (struct CGPoint { double x1; double x2; }*)swollenOuterVertices;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swollenZoneBounds;
- (id)textLinesInZone;
- (unsigned int)usedGraphicCount;
- (unsigned int)vertexCount;
- (unsigned int)wordCount;
- (id)zoneBorders;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoneBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoneBoundsFromVertices:(struct CGPoint { double x1; double x2; }*)arg1 ofCount:(unsigned int)arg2;
- (id)zoneProfile;

@end
