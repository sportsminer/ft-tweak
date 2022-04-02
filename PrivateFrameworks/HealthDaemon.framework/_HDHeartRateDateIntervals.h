/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHeartRateDateIntervals : NSObject {
    double  _currentEndInterval;
    long long  _currentPairIndex;
    double  _currentStartInterval;
    NSMutableArray * _intervalPairs;
}

- (void).cxx_destruct;
- (void)addDateRangeFrom:(double)arg1 to:(double)arg2;
- (id)init;
- (bool)insideRanges:(double)arg1;

@end
