/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStatsCalculator : NSObject {
    long long  _count;
    double  _max;
    double  _min;
    double  _squareSum;
    double  _sum;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double standardDeviation;

- (void)addValue:(double)arg1;
- (long long)count;
- (double)max;
- (double)mean;
- (double)min;
- (double)standardDeviation;

@end
