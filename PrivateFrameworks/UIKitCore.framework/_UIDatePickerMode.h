/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerMode : NSObject {
    UIFont * _amPmFont;
    NSString * _amString;
    NSDate * _baseDate;
    NSDateComponents * _baseDateComponents;
    NSArray * _dateFormatters;
    _UIDatePickerView * _datePickerView;
    UIFont * _defaultTimeFont;
    unsigned long long * _elements;
    UIFont * _font;
    NSNumberFormatter * _formatter;
    bool  _isUsingJapaneseCalendar;
    NSString * _localizedFormatString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _maxDayRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _maxMonthRange;
    NSDate * _maximumDate;
    NSDateComponents * _maximumDateComponents;
    NSDate * _minimumDate;
    NSDateComponents * _minimumDateComponents;
    long long  _minuteInterval;
    unsigned long long  _numberOfComponents;
    NSDate * _originatingDate;
    NSString * _pmString;
    NSDateComponents * _selectedDateComponents;
    NSDateComponents * _todayDateComponents;
    double  _todaySinceReferenceDate;
    UIColor * _todayTextColor;
    long long  _yearsSinceBaseDate;
}

@property (nonatomic, readonly) UIFont *amPmFont;
@property (nonatomic, readonly) NSString *amString;
@property (nonatomic, retain) NSDate *baseDate;
@property (nonatomic, retain) NSDateComponents *baseDateComponents;
@property (nonatomic, readonly) long long datePickerMode;
@property (nonatomic) _UIDatePickerView *datePickerView;
@property (nonatomic, readonly) UIFont *defaultTimeFont;
@property (nonatomic, readonly) long long displayedCalendarUnits;
@property (nonatomic) unsigned long long*elements;
@property (nonatomic, readonly) UIFont *font;
@property (getter=is24Hour, nonatomic, readonly) bool is24Hour;
@property (getter=isTimeIntervalMode, nonatomic, readonly) bool isTimeIntervalMode;
@property (nonatomic, retain) NSString *localizedFormatString;
@property (nonatomic, readonly) NSDate *maximumDate;
@property (nonatomic, readonly) NSDateComponents *maximumDateComponents;
@property (nonatomic, readonly) NSDate *minimumDate;
@property (nonatomic, readonly) NSDateComponents *minimumDateComponents;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) unsigned long long numberOfComponents;
@property (nonatomic, retain) NSDate *originatingDate;
@property (nonatomic, readonly) NSString *pmString;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic, retain) NSDateComponents *selectedDateComponents;
@property (nonatomic, readonly) UIFont *sizedFont;
@property (nonatomic, retain) NSDateComponents *todayDateComponents;
@property (nonatomic) double todaySinceReferenceDate;
@property (nonatomic, readonly) UIColor *todayTextColor;
@property (nonatomic, readonly) double totalComponentWidth;
@property (nonatomic) long long yearsSinceBaseDate;

+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)_datePickerModeWithMode:(long long)arg1 datePickerView:(id)arg2;
+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;
+ (void)initialize;
+ (id)newDateFromGregorianYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4;

- (void).cxx_destruct;
- (id)_dateByEnsuringValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (id)_dateForYearRow:(long long)arg1;
- (long long)_incrementForStaggeredTimeIntervals;
- (bool)_isComponentScrolling:(long long)arg1;
- (bool)_monthExists:(long long)arg1 inYear:(long long)arg2;
- (long long)_numberOfDaysInDateComponents:(id)arg1;
- (bool)_scrollingAnyColumnExcept:(int)arg1;
- (bool)_shouldEnableValueForRow:(long long)arg1 column:(long long)arg2;
- (bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (void)_shouldReset:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(bool)arg2;
- (long long)_yearlessYearForMonth:(long long)arg1;
- (id)amPmFont;
- (id)amString;
- (bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (id)baseDate;
- (id)baseDateComponents;
- (id)calendar;
- (id)calendarForFormatters;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
- (void)clearBaseDate;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (double)componentWidthForTwoDigitCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)dateFormatterForCalendarUnit:(unsigned long long)arg1;
- (long long)datePickerMode;
- (id)datePickerView;
- (long long)dayForRow:(long long)arg1;
- (void)dealloc;
- (id)defaultTimeFont;
- (long long)displayedCalendarUnits;
- (unsigned long long*)elements;
- (long long)eraForYearRow:(long long)arg1;
- (void)fixUpElementsForRTL;
- (id)font;
- (id)fontForCalendarUnit:(unsigned long long)arg1;
- (long long)hourForRow:(long long)arg1;
- (id)init;
- (bool)is24Hour;
- (bool)isTimeIntervalMode;
- (void)loadDate:(id)arg1 animated:(bool)arg2;
- (id)locale;
- (id)localizedFormatString;
- (id)maximumDate;
- (id)maximumDateComponents;
- (id)minimumDate;
- (id)minimumDateComponents;
- (long long)minuteForRow:(long long)arg1;
- (long long)minuteInterval;
- (long long)monthForRow:(long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (unsigned long long)numberOfComponents;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)originatingDate;
- (id)pmString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForCalendarUnit:(unsigned long long)arg1;
- (void)resetComponentWidths;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (long long)rowForValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 currentRow:(long long)arg3;
- (double)rowHeight;
- (long long)secondForRow:(long long)arg1;
- (id)selectedDateComponents;
- (void)setBaseDate:(id)arg1;
- (void)setBaseDateComponents:(id)arg1;
- (void)setDatePickerView:(id)arg1;
- (void)setElements:(unsigned long long*)arg1;
- (void)setLocalizedFormatString:(id)arg1;
- (void)setMinuteInterval:(long long)arg1;
- (void)setNumberOfComponents:(unsigned long long)arg1;
- (void)setOriginatingDate:(id)arg1;
- (void)setSelectedDateComponents:(id)arg1;
- (void)setTodayDateComponents:(id)arg1;
- (void)setTodaySinceReferenceDate:(double)arg1;
- (void)setYearsSinceBaseDate:(long long)arg1;
- (id)sizedFont;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)timeZone;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (id)todayDateComponents;
- (double)todaySinceReferenceDate;
- (id)todayTextColor;
- (double)totalComponentWidth;
- (double)totalComponentWidthWithFont:(id)arg1;
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1;
- (long long)validateValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)widthForComponent:(long long)arg1 maxWidth:(double)arg2;
- (long long)yearForRow:(long long)arg1;
- (long long)yearsSinceBaseDate;

@end
