/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXFileUtil : NSObject

+ (double)_cacheAgeForCache:(id)arg1 withCurrentTime:(double)arg2;
+ (bool)_shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 currentTime:(double)arg3;
+ (double)cacheAgeForConsumerType:(unsigned char)arg1;
+ (double)cacheAgeForConsumerType:(unsigned char)arg1 basePath:(id)arg2;
+ (bool)cachesAreValidForBasePath:(id)arg1 consumerSubTypes:(id)arg2;
+ (bool)cachesAreValidForConsumerSubTypes:(id)arg1;
+ (bool)shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2;

@end
