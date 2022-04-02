/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

@interface C2MetricOptions : NSObject {
    bool  _anonymous;
    NSURL * _c2MetricsEndpoint;
    NSArray * _clientOperations;
    NSString * _clientProcessBundleId;
    NSString * _clientProcessVersion;
    NSString * _container;
    NSString * _environment;
    NSArray * _operationGroups;
    bool  _pushTrigger;
    unsigned long long  _reportClientOperationFrequency;
    unsigned long long  _reportClientOperationFrequencyBase;
    unsigned long long  _reportFrequency;
    unsigned long long  _reportFrequencyBase;
    unsigned long long  _reportOperationGroupFrequency;
    unsigned long long  _reportOperationGroupFrequencyBase;
    id /* block */  _testBehavior_reportMetric;
}

@property (nonatomic) bool anonymous;
@property (nonatomic, retain) NSURL *c2MetricsEndpoint;
@property (nonatomic, retain) NSArray *clientOperations;
@property (nonatomic, retain) NSString *clientProcessBundleId;
@property (nonatomic, retain) NSString *clientProcessVersion;
@property (nonatomic, retain) NSString *container;
@property (nonatomic, retain) NSString *environment;
@property (nonatomic, retain) NSArray *operationGroups;
@property (nonatomic) bool pushTrigger;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;
@property (nonatomic, copy) id /* block */ testBehavior_reportMetric;

// Image: /System/Library/PrivateFrameworks/C2.framework/C2

- (void).cxx_destruct;
- (bool)anonymous;
- (id)c2MetricsEndpoint;
- (bool)clientOperationTriggered:(id)arg1;
- (id)clientOperations;
- (id)clientProcessBundleId;
- (id)clientProcessVersion;
- (id)container;
- (id)environment;
- (id)generateCloudKitInfo;
- (int)generateTriggerWithResponseHeader:(unsigned char)arg1;
- (id)init;
- (bool)operationGroupTriggered:(id)arg1;
- (id)operationGroups;
- (bool)pushTrigger;
- (unsigned long long)reportClientOperationFrequency;
- (unsigned long long)reportClientOperationFrequencyBase;
- (unsigned long long)reportFrequency;
- (unsigned long long)reportFrequencyBase;
- (unsigned long long)reportOperationGroupFrequency;
- (unsigned long long)reportOperationGroupFrequencyBase;
- (void)setAnonymous:(bool)arg1;
- (void)setC2MetricsEndpoint:(id)arg1;
- (void)setClientOperations:(id)arg1;
- (void)setClientProcessBundleId:(id)arg1;
- (void)setClientProcessVersion:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setOperationGroups:(id)arg1;
- (void)setPushTrigger:(bool)arg1;
- (void)setReportClientOperationFrequency:(unsigned long long)arg1;
- (void)setReportClientOperationFrequencyBase:(unsigned long long)arg1;
- (void)setReportFrequency:(unsigned long long)arg1;
- (void)setReportFrequencyBase:(unsigned long long)arg1;
- (void)setReportOperationGroupFrequency:(unsigned long long)arg1;
- (void)setReportOperationGroupFrequencyBase:(unsigned long long)arg1;
- (void)setTestBehavior_reportMetric:(id /* block */)arg1;
- (id /* block */)testBehavior_reportMetric;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)metricOperationsForNetworkRequest:(id)arg1;
+ (id)metricOptionsForEventMetric:(id)arg1 metricType:(long long)arg2 proxy:(id)arg3 config:(id)arg4;

- (void)_attributeCurrentProxy:(id)arg1 config:(id)arg2;
- (void)_setupC2MetricsEndpointWithAccount:(id)arg1;

@end
