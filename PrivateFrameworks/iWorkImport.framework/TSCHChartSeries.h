/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeries : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent> {
    TSUIntegerKeyDictionary * mAxisTable;
    unsigned long long  mBarGapIndex;
    TSCHChartModel * mChartModel;
    TSCHErrorBarData * mErrorBarData;
    bool  mIsFakeSeriesForHiddenDataExport;
    TSCHChartGridAdapter * mNameAdapter;
    <TSCHStyleActAlike> * mNonStyle;
    unsigned long long  mSeriesIndex;
    NSObject<TSCHUnretainedParent> * mSeriesStorage;
    TSCHChartSeriesType * mSeriesType;
    <TSCHStyleActAlike> * mStyle;
    bool  mStyleIsPrivate;
    TSCHTrendLineData * mTrendLineData;
}

@property (nonatomic) unsigned long long barGapIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSCHErrorBarData *errorBarData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFakeSeriesForHiddenDataExport;
@property (nonatomic, readonly) TSCHChartModel *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) unsigned long long seriesIndex;
@property (nonatomic, readonly) NSObject<TSCHUnretainedParent> *seriesStorage;
@property (nonatomic) TSCHChartSeriesType *seriesType;
@property (nonatomic, readonly) bool showTrendLineLegendText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSCHTrendLineData *trendLineData;
@property (nonatomic, readonly) NSString *trendLineLegendText;

+ (id)computableProperties;
+ (id)computedFillOrStroke:(id)arg1 forSeriesIndex:(unsigned long long)arg2 numberOfThemeSeries:(unsigned long long)arg3;
+ (id)defaultNumberFormat;
+ (id)stackedPercentageNumberFormat;
+ (unsigned char)styleOwnerPathType;

- (void).cxx_destruct;
- (int)adjustedNumberFormatType;
- (id)axisForAxisType:(int)arg1;
- (id)axisIDForAxisType:(int)arg1;
- (id)axisTypesForValueLabelString;
- (unsigned long long)barGapIndex;
- (id)chartInfo;
- (void)clearAxisIDs;
- (void)clearParent;
- (id)context;
- (id)customFormatForGridValueType:(int)arg1;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (id)drawableInfo;
- (double)effectiveLabelExplosion;
- (id)errorBarData;
- (bool)floatValueForLabelExplosion:(float*)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)formattedValueLabelStringForValueIndex:(unsigned long long)arg1;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (int)gridValueType;
- (bool)hasCustomFormatForGridValueType:(int)arg1;
- (bool)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (bool)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (bool)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (id)initWithChartModel:(id)arg1 index:(unsigned long long)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (void)invalidateCacheDataForSynchronization;
- (bool)isFakeSeriesForHiddenDataExport;
- (bool)isMultiData;
- (id)model;
- (void)modelSyncSetNonStyle:(id)arg1;
- (void)modelSyncSetStyle:(id)arg1;
- (unsigned long long)multiDataSetIndex;
- (unsigned long long)multiDataSetIndexForAxis:(id)arg1;
- (unsigned long long)multiDataSetIndexForAxisID:(id)arg1;
- (id)multiDataValueEnumeratorForAxisID:(id)arg1;
- (id)name;
- (id)nonstyle;
- (unsigned long long)numberOfValues;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_axisStorageForType:(int)arg1 create:(bool)arg2;
- (void)p_generateComputedProperty:(int)arg1 objectValue:(id*)arg2 intValue:(int*)arg3 floatValue:(float*)arg4;
- (id)p_genericToDefaultPropertyMap;
- (id)p_representativeThemeSeries;
- (bool)p_seriesIndexWithinThemeStyleCount;
- (id)p_seriesNonStyleOrDefaultNonStyle;
- (bool)renderSeriesForClass:(Class)arg1;
- (void)resetSeriesStorage;
- (unsigned long long)seriesIndex;
- (id)seriesNameStringForValueIndex:(unsigned long long)arg1;
- (id)seriesStorage;
- (id)seriesType;
- (void)setAxisID:(id)arg1 forAxisType:(int)arg2;
- (void)setBarGapIndex:(unsigned long long)arg1;
- (void)setGridAdapter:(id)arg1 forAxisType:(int)arg2;
- (void)setGridAdapterForName:(id)arg1;
- (void)setIsFakeSeriesForHiddenDataExport:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNonStyle:(id)arg1;
- (void)setSeriesStorage:(id)arg1;
- (void)setSeriesType:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setValue:(id)arg1 forAxisID:(id)arg2 index:(unsigned long long)arg3;
- (bool)showTrendLineLegendText;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (id)swapTuplesForMutations:(id)arg1 forImport:(bool)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)trendLineData;
- (id)trendLineLegendText;
- (id)valueForAxis:(id)arg1 index:(unsigned long long)arg2;
- (id)valueForAxis:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)valueForAxisID:(id)arg1 index:(unsigned long long)arg2;
- (id)valueForAxisID:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)valueForProperty:(int)arg1;
- (unsigned int)valueLabelPosition;
- (id)valueLabelStringForValueIndex:(unsigned long long)arg1;
- (id*)valuesForAxis:(id)arg1 indexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id*)valuesForAxis:(id)arg1 indexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 multiDataSetIndex:(unsigned long long)arg3;

@end
