/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPShapeLayout : TSDShapeLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {
    TSDWrapPolygon * _cachedInteriorWrapPolygon;
    TSWPLayout * _containedLayout;
    <TSWPShapeLayoutDelegate> * _delegate;
    bool  _observingStorage;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } adjustedInsets;
@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) bool autosizes;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic, readonly) TSWPLayout *containedLayout;
@property <TSWPShapeLayoutDelegate> *delegate;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (nonatomic, readonly) double textScaleFactor;

- (void)addChild:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsets;
- (bool)allowsLastLineTruncation:(id)arg1;
- (bool)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })autosizePositionOffset;
- (struct CGPoint { double x1; double x2; })autosizePositionOffsetForFixedWidth:(bool)arg1 height:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })autosizedTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })autosizedTransformForInfoGeometry:(id)arg1;
- (bool)autosizes;
- (bool)canAspectRatioLockBeChangedByUser;
- (id)childSearchTargets;
- (id)children;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeLayoutTransform;
- (id)containedLayout;
- (void)createContainedLayoutForEditing;
- (void)createContainedLayoutForInstructionalText;
- (unsigned int)cropLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (void)destroyContainedLayoutForInstructionalText;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)initWithInfo:(id)arg1;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (id)instructionalStorageForContainedStorage:(id)arg1 storageKind:(int)arg2;
- (id)interiorClippingPath;
- (id)interiorWrapPath;
- (id)interiorWrapPolygon;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidatePath;
- (void)invalidateSize;
- (bool)isInvisibleAutosizingShape;
- (id)layoutMargins;
- (unsigned int)maxLineCountForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)pathSource;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4;
- (void)processChangedProperty:(int)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (bool)resizeMayChangeAspectRatio;
- (void)setChildren:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeometry:(id)arg1;
- (bool)shrinkTextToFit;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (bool)supportsRotation;
- (bool)textLayoutShouldLayoutVertically:(id)arg1;
- (bool)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (id)textWrapper;
- (void)updateChildrenFromInfo;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
