/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTAccumulator : NSObject <NSCopying> {
    unsigned int  _boolCount;
    unsigned int  _boolTrueCount;
    unsigned int  _dateCount;
    unsigned int  _durationCount;
    unsigned int  _errorCount;
    struct TSCEDateValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        NSDate *mDate; 
        struct TSCEFormat { 
            struct TSCEFormatStruct { 
                int mFormatType; 
                union { 
                    struct { 
                        unsigned int mCurrencyCodeIndex : 16; 
                        unsigned int mDecimalPlaces : 8; 
                        unsigned int mNegativeStyle : 3; 
                        unsigned int mShowThousandsSeparator : 1; 
                        unsigned int mUseAccountingStyle : 1; 
                    } mNumberStruct; 
                    struct { 
                        unsigned int mFractionAccuracy : 8; 
                    } mFractionFormatStruct; 
                    struct { 
                        unsigned int mBase : 8; 
                        unsigned int mBasePlaces : 8; 
                        unsigned int mBaseUseMinusSign : 1; 
                    } mBaseFormatStruct; 
                    struct { 
                        unsigned int mUseAutomaticUnits : 1; 
                        int mDurationUnitSmallest; 
                        int mDurationUnitLargest; 
                        int mDurationStyle; 
                    } mDurationFormatStruct; 
                } ; 
                TSKDateTimeFormat *_dateTimeFormat; 
                TSKCustomFormatWrapper *_customFormatWrapper; 
                TSKBooleanFormat *_booleanFormat; 
            } _formatStruct; 
            unsigned char _formatState; 
        } mFormat; 
    }  _firstDateSeen;
    bool  _isCircularReference;
    TSULocale * _locale;
    struct TSCEValue { 
        unsigned long long mBuff[18]; 
        int mType; 
    }  _maxValue;
    struct TSCEValue { 
        unsigned long long mBuff[18]; 
        int mType; 
    }  _minValue;
    unsigned int  _numberCount;
    struct TSCENumberValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        double _double; 
        int _baseUnits[1]; 
        struct TSCEFormat { 
            struct TSCEFormatStruct { 
                int mFormatType; 
                union { 
                    struct { 
                        unsigned int mCurrencyCodeIndex : 16; 
                        unsigned int mDecimalPlaces : 8; 
                        unsigned int mNegativeStyle : 3; 
                        unsigned int mShowThousandsSeparator : 1; 
                        unsigned int mUseAccountingStyle : 1; 
                    } mNumberStruct; 
                    struct { 
                        unsigned int mFractionAccuracy : 8; 
                    } mFractionFormatStruct; 
                    struct { 
                        unsigned int mBase : 8; 
                        unsigned int mBasePlaces : 8; 
                        unsigned int mBaseUseMinusSign : 1; 
                    } mBaseFormatStruct; 
                    struct { 
                        unsigned int mUseAutomaticUnits : 1; 
                        int mDurationUnitSmallest; 
                        int mDurationUnitLargest; 
                        int mDurationStyle; 
                    } mDurationFormatStruct; 
                } ; 
                TSKDateTimeFormat *_dateTimeFormat; 
                TSKCustomFormatWrapper *_customFormatWrapper; 
                TSKBooleanFormat *_booleanFormat; 
            } _formatStruct; 
            unsigned char _formatState; 
        } _format; 
        bool _isUnitlessZero; 
    }  _numberTotalValue;
    double  _secondsToAdd;
    unsigned int  _stringCount;
    double  _totalSecsSinceReferenceDate;
}

@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } avgValue;
@property (nonatomic, readonly) unsigned int boolCount;
@property (nonatomic, readonly) unsigned int boolTrueCount;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } countValue;
@property (nonatomic, readonly) unsigned int dateCount;
@property (nonatomic, readonly) unsigned int durationCount;
@property (nonatomic, readonly) unsigned int errorCount;
@property (nonatomic) bool isCircularReference;
@property (nonatomic, retain) TSULocale *locale;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } maxValue;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } minValue;
@property (nonatomic, readonly) unsigned int numberCount;
@property (nonatomic, readonly) unsigned int stringCount;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } totalValue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accumulate:(id)arg1;
- (void)accumulateValue:(const struct TSCEValue { unsigned long long x1[18]; int x2; }*)arg1;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })avgValue;
- (unsigned int)boolCount;
- (unsigned int)boolTrueCount;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })countValue;
- (unsigned int)dateCount;
- (unsigned int)durationCount;
- (unsigned int)errorCount;
- (id)initWithArchive:(const struct AccumulatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; bool x12; struct CellValueArchive {} *x13; struct CellValueArchive {} *x14; struct CellValueArchive {} *x15; struct CellValueArchive {} *x16; double x17; double x18; }*)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)isCircularReference;
- (id)locale;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })maxValue;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })minValue;
- (unsigned int)numberCount;
- (void)saveToArchive:(struct AccumulatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; bool x12; struct CellValueArchive {} *x13; struct CellValueArchive {} *x14; struct CellValueArchive {} *x15; struct CellValueArchive {} *x16; double x17; double x18; }*)arg1;
- (void)setIsCircularReference:(bool)arg1;
- (void)setLocale:(id)arg1;
- (unsigned int)stringCount;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })totalValue;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })valueForType:(unsigned char)arg1;

@end
