/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERankingRule : RERule <REIndentedDescription> {
    REComparisonCondition * _comparison;
    REConditionEvaluator * _comparisonConditionEvaluator;
    RECondition * _leftCondition;
    REConditionEvaluator * _leftConditionEvaluator;
    long long  _order;
    RECondition * _rightCondition;
    REConditionEvaluator * _rightConditionEvaluator;
}

@property (nonatomic, readonly) REComparisonCondition *comparison;
@property (nonatomic, readonly) REConditionEvaluator *comparisonConditionEvaluator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RECondition *leftCondition;
@property (nonatomic, readonly) REConditionEvaluator *leftConditionEvaluator;
@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly) RECondition *rightCondition;
@property (nonatomic, readonly) REConditionEvaluator *rightConditionEvaluator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)comparison;
- (id)comparisonConditionEvaluator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithLeftCondition:(id)arg1 rightCondition:(id)arg2 comparisonCondition:(id)arg3 order:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)leftCondition;
- (id)leftConditionEvaluator;
- (long long)order;
- (id)rightCondition;
- (id)rightConditionEvaluator;

@end
