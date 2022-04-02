/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAGenealogyTimestampedMessage : NSObject {
    unsigned long long  _activityId;
    double  _machTime;
}

@property (readonly) unsigned long long activityId;
@property (readonly) double machTime;
@property (readonly) NSString *message;

- (unsigned long long)activityId;
- (long long)compareToOtherMessage:(id)arg1;
- (id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)machTime;
- (id)message;

@end
