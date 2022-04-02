/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTImportWarningSet : NSObject <TSSPropertyCommandSerializing> {
    struct TSTImportWarningSetCellWarningFlags { 
        unsigned int mCondFormatAboveAvgEqualAverageImportWarning : 1; 
        unsigned int mCondFormatAboveAvgStdDevImportWarning : 1; 
        unsigned int mCondFormatComplexFormulaImportWarning : 1; 
        unsigned int mCondFormatContainsErrorsImportWarning : 1; 
        unsigned int mCondFormatExprImportWarning : 1; 
        unsigned int mCondFormatNotContainsErrorsImportWarning : 1; 
        unsigned int mCondFormatParametersNotAllTheSameTypeImportWarning : 1; 
        unsigned int mCondFormatStopIfTrueImportWarning : 1; 
        unsigned int mCondFormatUnsupportedOperatorImportWarning : 1; 
        unsigned int mCondFormatUnsupportedStylingImportWarning : 1; 
        unsigned int mCondFormatUnsupportedTimePeriodImportWarning : 1; 
        unsigned int mUnsupportedConditionalFormatImportWarning : 1; 
        unsigned int mUnsupportedDataFormatImportWarning : 1; 
    }  mCellWarning;
    struct TSTImportFormulaWarning { 
        long long mType; 
        NSString *mOriginalFormula; 
        NSString *mSupplementaryText; 
    }  mFormulaWarning;
    NSString * mOriginalDataFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellDiffClearingAllWarningsWithContext:(id)arg1;
+ (id)emptyWarningSet;
+ (id)p_warningSetForFormulaWarningType:(long long)arg1 originalFormula:(id)arg2 supplementaryText:(id)arg3;
+ (id)warningSetFor3DReferenceFormula:(id)arg1;
+ (id)warningSetForArrayedFormula:(id)arg1;
+ (id)warningSetForCondFormatAboveAvgEqualAvg;
+ (id)warningSetForCondFormatAboveAvgStdDev;
+ (id)warningSetForCondFormatComplexFormula;
+ (id)warningSetForCondFormatContainsErrors;
+ (id)warningSetForCondFormatExpr;
+ (id)warningSetForCondFormatNotContainsErrors;
+ (id)warningSetForCondFormatParamatersNotAllTheSame;
+ (id)warningSetForCondFormatStopIfTrue;
+ (id)warningSetForCondFormatUnsupportedOperator;
+ (id)warningSetForCondFormatUnsupportedStyling;
+ (id)warningSetForCondFormatUnsupportedTimePeriod;
+ (id)warningSetForDifferentBehaviorForFunctionFormula:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForErrorTokenFormula:(id)arg1;
+ (id)warningSetForExternalReferenceFormula:(id)arg1;
+ (id)warningSetForNaturalLanguageFormula:(id)arg1;
+ (id)warningSetForReferenceOutOfBoundsFormula:(id)arg1;
+ (id)warningSetForSharedFormulaBaseNotFoundFormula:(id)arg1;
+ (id)warningSetForTransposeUnmodifiedWithIssues;
+ (id)warningSetForTransposedWithIssues:(id)arg1;
+ (id)warningSetForTransposedWithoutIssues:(id)arg1;
+ (id)warningSetForUnknownName:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForUnsupportedCondFormat;
+ (id)warningSetForUnsupportedDataFormat:(id)arg1;
+ (id)warningSetForUnsupportedFormula:(id)arg1;
+ (id)warningSetForUnsupportedFunction:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForUnsupportedNameFormula:(id)arg1 originalFormula:(id)arg2;

- (bool)areAnySet;
- (id)cellDiffClearingWarningsWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)individualWarnings;
- (id)init;
- (id)initFromArchive:(const struct ImportWarningSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ImportWarningSetArchive_FormulaImportWarning {} *x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x19; }*)arg1;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTransposeWarning;
- (id)localizedWarningStrings;
- (void)saveToArchive:(struct ImportWarningSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ImportWarningSetArchive_FormulaImportWarning {} *x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x19; }*)arg1;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (id)warningSetByAddingWarningsFromSet:(id)arg1;
- (id)warningSetByRemovingWarningsFromSet:(id)arg1;

@end
