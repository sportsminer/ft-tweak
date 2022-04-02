/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperationStatistics : NSObject <NSCopying> {
    CKDOperationMetrics * _aggregateCKMetrics;
    CKDOperationMetrics * _aggregateMMCSMetrics;
    NSString * _operationClassName;
    unsigned long long  _operationCount;
    NSMutableDictionary * _recentErrorsByDate;
}

@property (nonatomic, readonly) CKDOperationMetrics *aggregateCKMetrics;
@property (nonatomic, readonly) CKDOperationMetrics *aggregateMMCSMetrics;
@property (nonatomic, readonly) NSString *operationClassName;
@property (readonly) unsigned long long operationCount;
@property (nonatomic, readonly) NSMutableDictionary *recentErrorsByDate;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_addMetrics:(id)arg1 toAggregate:(id)arg2;
- (id)_trimmedError:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)aggregateCKMetrics;
- (id)aggregateMMCSMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOperationClassName:(id)arg1;
- (void)merge:(id)arg1;
- (id)operationClassName;
- (unsigned long long)operationCount;
- (id)recentErrorsByDate;

@end
