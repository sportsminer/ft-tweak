/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet * _distinctRanges;
}

@property (nonatomic, copy) NSMutableSet *distinctRanges;

+ (id)disjointRangeWithDistinctRanges:(id)arg1;
+ (id)disjointRangeWithSingleRange:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addDisjointRange:(id)arg1;
- (id)addRange:(id)arg1;
- (bool)containsDate:(id)arg1;
- (bool)containsRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)distinctRanges;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistinctRanges:(id)arg1;
- (id)intersectionWithDisjointRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (bool)intersectsRange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDistinctRanges:(id)arg1;
- (id)sortedDistinctRanges;
- (id)subtractDisjointRange:(id)arg1;
- (id)subtractRange:(id)arg1;
- (double)totalDuration;

@end
