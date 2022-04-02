/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityStatisticsChartPointNode : NSObject {
    HKValueRange * _dateRange;
    long long  _type;
    NSNumber * _value;
}

@property (nonatomic, readonly) HKValueRange *dateRange;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)dateRange;
- (id)initWithRange:(id)arg1 type:(long long)arg2 value:(id)arg3;
- (long long)type;
- (id)value;

@end
