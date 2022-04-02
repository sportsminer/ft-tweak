/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTConfiguration : NSObject {
    bool  _allowsFullyFilteredTables;
    bool  _cellEditorsCanScrollToNonLocalTableSelection;
    bool  _disableImplicitNaming;
    bool  _formulaCellEditorSupportsTextTokenEditor;
    bool  _formulaEditorEvaluatesFormulas;
    bool  _pasteFilterHidingAsUserHiding;
    bool  _showReferenceHighlightsOnFormulaCellSelection;
    bool  _supportsComplexFilterUI;
    bool  _supportsQuickFilterUI;
    bool  _tokenizeFormulaStringLiterals;
    bool  mAllowFreeformFormulaText;
    bool  mAllowHorizontalAutoresize;
    bool  mAllowWhitespaceInFormulas;
    bool  mArrowKeyAtEdgeWhileEditingNavigates;
    bool  mArrowKeysNavigateWhenEditingBeganByTyping;
    bool  mArrowKeysWrap;
    bool  mBackTabWraps;
    bool  mBeginEditingOnSingleTap;
    bool  mCornersCanDragResize;
    bool  mCreateLargeDefaultTables;
    bool  mDragByHandleOnly;
    bool  mExportPermanentHidingState;
    bool  mExportsCellAnnotations;
    bool  mExportsCellComments;
    bool  mFormulaEqualsTokenIsSelectable;
    bool  mHasLargerFonts;
    bool  mHeadersFrozenByDefault;
    unsigned int  mMaxNumberOfColumns;
    unsigned int  mMaxNumberOfPopulatedCells;
    unsigned int  mMaxNumberOfRows;
    bool  mPastesTile;
    bool  mRequireMatchedFunctionTokens;
    bool  mReturnWhileEditingNavigates;
    bool  mSelectionUsesBezierPath;
    bool  mSelectsCellOnInitialTap;
    bool  mShowsAddressBarAlways;
    bool  mShowsAddressBarHighlights;
    bool  mShowsAddressBarLetteringAndNumbering;
    bool  mShowsCellOverflowIndicator;
    bool  mShowsHideUnhideUI;
    bool  mSupportsAutoResizedTables;
    bool  mSupportsAutofill;
    bool  mSupportsCanvasReferenceEditing;
    bool  mSupportsContainedTextEditing;
    bool  mSupportsControlCells;
    bool  mSupportsCreateChartFromSelection;
    bool  mSupportsDragDropMoveMode;
    bool  mSupportsFormulaEditing;
    bool  mSupportsFrozenHeaders;
    bool  mSupportsHiddenCells;
    bool  mSupportsImplicitEditing;
    bool  mSupportsMergedCells;
    bool  mSupportsRepeatHeaderRowsOnEachPage;
    bool  mSupportsResumingTextEditing;
    bool  mSupportsRowColumnAdderKnob;
    bool  mTabAtEdgeAddsColumn;
    bool  mTabAtEdgeAddsRow;
    bool  mTabWhileEditingNavigates;
    bool  mTableNameEnabledInNewTables;
    bool  mUsesLimitedAutomaticFormatParsing;
    bool  mUsesLimitedNumberFormatInspector;
    bool  mUsesWholeChromeResizer;
}

@property (nonatomic) bool allowFreeformFormulaText;
@property (nonatomic) bool allowHorizontalAutoresize;
@property (nonatomic) bool allowWhitespaceInFormulas;
@property (nonatomic) bool allowsFullyFilteredTables;
@property (nonatomic) bool arrowKeyAtEdgeWhileEditingNavigates;
@property (nonatomic) bool arrowKeysNavigateWhenEditingBeganByTyping;
@property (nonatomic) bool arrowKeysWrap;
@property (nonatomic) bool backTabWraps;
@property (nonatomic) bool beginEditingOnSingleTap;
@property (nonatomic) bool cellEditorsCanScrollToNonLocalTableSelection;
@property (nonatomic) bool cornersCanDragResize;
@property (nonatomic) bool createLargeDefaultTables;
@property (nonatomic) bool disableImplicitNaming;
@property (nonatomic) bool dragByHandleOnly;
@property (nonatomic) bool exportPermanentHidingState;
@property (nonatomic) bool exportsCellAnnotations;
@property (nonatomic) bool exportsCellComments;
@property (nonatomic) bool formulaCellEditorSupportsTextTokenEditor;
@property (nonatomic) bool formulaEditorEvaluatesFormulas;
@property (nonatomic) bool formulaEqualsTokenIsSelectable;
@property (nonatomic) bool hasLargerFonts;
@property (nonatomic) bool headersFrozenByDefault;
@property (nonatomic) unsigned int maxNumberOfColumns;
@property (nonatomic) unsigned int maxNumberOfPopulatedCells;
@property (nonatomic) unsigned int maxNumberOfRows;
@property (nonatomic) bool pasteFilterHidingAsUserHiding;
@property (nonatomic) bool pastesTile;
@property (nonatomic) bool requireMatchedFunctionTokens;
@property (nonatomic) bool returnWhileEditingNavigates;
@property (nonatomic) bool selectionUsesBezierPath;
@property (nonatomic) bool selectsCellOnInitialTap;
@property (nonatomic) bool showReferenceHighlightsOnFormulaCellSelection;
@property (nonatomic) bool showsAddressBarAlways;
@property (nonatomic) bool showsAddressBarHighlights;
@property (nonatomic) bool showsAddressBarLetteringAndNumbering;
@property (nonatomic) bool showsCellOverflowIndicator;
@property (nonatomic) bool showsHideUnhideUI;
@property (nonatomic) bool supportsAutoResizedTables;
@property (nonatomic) bool supportsAutofill;
@property (nonatomic) bool supportsCanvasReferenceEditing;
@property (nonatomic) bool supportsComplexFilterUI;
@property (nonatomic) bool supportsContainedTextEditing;
@property (nonatomic) bool supportsControlCells;
@property (nonatomic) bool supportsCreateChartFromSelection;
@property (nonatomic) bool supportsDragDropMoveMode;
@property (nonatomic) bool supportsFormulaEditing;
@property (nonatomic) bool supportsFrozenHeaders;
@property (nonatomic) bool supportsHiddenCells;
@property (nonatomic) bool supportsImplicitEditing;
@property (nonatomic) bool supportsMergedCells;
@property (nonatomic) bool supportsQuickFilterUI;
@property (nonatomic) bool supportsRepeatHeaderRowsOnEachPage;
@property (nonatomic) bool supportsResumingTextEditing;
@property (nonatomic) bool supportsRowColumnAdderKnob;
@property (nonatomic) bool tabAtEdgeAddsColumn;
@property (nonatomic) bool tabAtEdgeAddsRow;
@property (nonatomic) bool tabWhileEditingNavigates;
@property (nonatomic) bool tableNameEnabledInNewTables;
@property (nonatomic) bool tokenizeFormulaStringLiterals;
@property (nonatomic) bool usesLimitedAutomaticFormatParsing;
@property (nonatomic) bool usesLimitedNumberFormatInspector;
@property (nonatomic) bool usesWholeChromeResizer;

+ (void)resetSharedTableConfiguration;
+ (id)sharedTableConfiguration;

- (bool)allowFreeformFormulaText;
- (bool)allowHorizontalAutoresize;
- (bool)allowWhitespaceInFormulas;
- (bool)allowsFullyFilteredTables;
- (bool)arrowKeyAtEdgeWhileEditingNavigates;
- (bool)arrowKeysNavigateWhenEditingBeganByTyping;
- (bool)arrowKeysWrap;
- (bool)backTabWraps;
- (bool)beginEditingOnSingleTap;
- (bool)cellEditorsCanScrollToNonLocalTableSelection;
- (bool)cornersCanDragResize;
- (bool)createLargeDefaultTables;
- (bool)disableImplicitNaming;
- (bool)dragByHandleOnly;
- (bool)exportPermanentHidingState;
- (bool)exportsCellAnnotations;
- (bool)exportsCellComments;
- (bool)formulaCellEditorSupportsTextTokenEditor;
- (bool)formulaEditorEvaluatesFormulas;
- (bool)formulaEqualsTokenIsSelectable;
- (bool)hasLargerFonts;
- (bool)headersFrozenByDefault;
- (id)init;
- (unsigned int)maxNumberOfColumns;
- (unsigned int)maxNumberOfPopulatedCells;
- (unsigned int)maxNumberOfRows;
- (bool)pasteFilterHidingAsUserHiding;
- (bool)pastesTile;
- (bool)requireMatchedFunctionTokens;
- (bool)returnWhileEditingNavigates;
- (bool)selectionUsesBezierPath;
- (bool)selectsCellOnInitialTap;
- (void)setAllowFreeformFormulaText:(bool)arg1;
- (void)setAllowHorizontalAutoresize:(bool)arg1;
- (void)setAllowWhitespaceInFormulas:(bool)arg1;
- (void)setAllowsFullyFilteredTables:(bool)arg1;
- (void)setArrowKeyAtEdgeWhileEditingNavigates:(bool)arg1;
- (void)setArrowKeysNavigateWhenEditingBeganByTyping:(bool)arg1;
- (void)setArrowKeysWrap:(bool)arg1;
- (void)setBackTabWraps:(bool)arg1;
- (void)setBeginEditingOnSingleTap:(bool)arg1;
- (void)setCellEditorsCanScrollToNonLocalTableSelection:(bool)arg1;
- (void)setCornersCanDragResize:(bool)arg1;
- (void)setCreateLargeDefaultTables:(bool)arg1;
- (void)setDisableImplicitNaming:(bool)arg1;
- (void)setDragByHandleOnly:(bool)arg1;
- (void)setExportPermanentHidingState:(bool)arg1;
- (void)setExportsCellAnnotations:(bool)arg1;
- (void)setExportsCellComments:(bool)arg1;
- (void)setFormulaCellEditorSupportsTextTokenEditor:(bool)arg1;
- (void)setFormulaEditorEvaluatesFormulas:(bool)arg1;
- (void)setFormulaEqualsTokenIsSelectable:(bool)arg1;
- (void)setHasLargerFonts:(bool)arg1;
- (void)setHeadersFrozenByDefault:(bool)arg1;
- (void)setMaxNumberOfColumns:(unsigned int)arg1;
- (void)setMaxNumberOfPopulatedCells:(unsigned int)arg1;
- (void)setMaxNumberOfRows:(unsigned int)arg1;
- (void)setPasteFilterHidingAsUserHiding:(bool)arg1;
- (void)setPastesTile:(bool)arg1;
- (void)setRequireMatchedFunctionTokens:(bool)arg1;
- (void)setReturnWhileEditingNavigates:(bool)arg1;
- (void)setSelectionUsesBezierPath:(bool)arg1;
- (void)setSelectsCellOnInitialTap:(bool)arg1;
- (void)setShowReferenceHighlightsOnFormulaCellSelection:(bool)arg1;
- (void)setShowsAddressBarAlways:(bool)arg1;
- (void)setShowsAddressBarHighlights:(bool)arg1;
- (void)setShowsAddressBarLetteringAndNumbering:(bool)arg1;
- (void)setShowsCellOverflowIndicator:(bool)arg1;
- (void)setShowsHideUnhideUI:(bool)arg1;
- (void)setSupportsAutoResizedTables:(bool)arg1;
- (void)setSupportsAutofill:(bool)arg1;
- (void)setSupportsCanvasReferenceEditing:(bool)arg1;
- (void)setSupportsComplexFilterUI:(bool)arg1;
- (void)setSupportsContainedTextEditing:(bool)arg1;
- (void)setSupportsControlCells:(bool)arg1;
- (void)setSupportsCreateChartFromSelection:(bool)arg1;
- (void)setSupportsDragDropMoveMode:(bool)arg1;
- (void)setSupportsFormulaEditing:(bool)arg1;
- (void)setSupportsFrozenHeaders:(bool)arg1;
- (void)setSupportsHiddenCells:(bool)arg1;
- (void)setSupportsImplicitEditing:(bool)arg1;
- (void)setSupportsMergedCells:(bool)arg1;
- (void)setSupportsQuickFilterUI:(bool)arg1;
- (void)setSupportsRepeatHeaderRowsOnEachPage:(bool)arg1;
- (void)setSupportsResumingTextEditing:(bool)arg1;
- (void)setSupportsRowColumnAdderKnob:(bool)arg1;
- (void)setTabAtEdgeAddsColumn:(bool)arg1;
- (void)setTabAtEdgeAddsRow:(bool)arg1;
- (void)setTabWhileEditingNavigates:(bool)arg1;
- (void)setTableNameEnabledInNewTables:(bool)arg1;
- (void)setTokenizeFormulaStringLiterals:(bool)arg1;
- (void)setUsesLimitedAutomaticFormatParsing:(bool)arg1;
- (void)setUsesLimitedNumberFormatInspector:(bool)arg1;
- (void)setUsesWholeChromeResizer:(bool)arg1;
- (bool)showReferenceHighlightsOnFormulaCellSelection;
- (bool)showsAddressBarAlways;
- (bool)showsAddressBarHighlights;
- (bool)showsAddressBarLetteringAndNumbering;
- (bool)showsCellOverflowIndicator;
- (bool)showsHideUnhideUI;
- (bool)supportsAutoResizedTables;
- (bool)supportsAutofill;
- (bool)supportsCanvasReferenceEditing;
- (bool)supportsComplexFilterUI;
- (bool)supportsContainedTextEditing;
- (bool)supportsControlCells;
- (bool)supportsCreateChartFromSelection;
- (bool)supportsDragDropMoveMode;
- (bool)supportsFormulaEditing;
- (bool)supportsFrozenHeaders;
- (bool)supportsHiddenCells;
- (bool)supportsImplicitEditing;
- (bool)supportsMergedCells;
- (bool)supportsQuickFilterUI;
- (bool)supportsRepeatHeaderRowsOnEachPage;
- (bool)supportsResumingTextEditing;
- (bool)supportsRowColumnAdderKnob;
- (bool)tabAtEdgeAddsColumn;
- (bool)tabAtEdgeAddsRow;
- (bool)tabWhileEditingNavigates;
- (bool)tableNameEnabledInNewTables;
- (bool)tokenizeFormulaStringLiterals;
- (bool)usesLimitedAutomaticFormatParsing;
- (bool)usesLimitedNumberFormatInspector;
- (bool)usesWholeChromeResizer;

@end
