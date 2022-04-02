/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding> {
    unsigned int  _capacity;
    unsigned int  _count;
    struct { double x1; unsigned int x2; unsigned int x3; } * _entries;
    NSDictionary * _lastDates;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerate:(id /* block */)arg1;
- (id)getLastDatesByCategoryId;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
