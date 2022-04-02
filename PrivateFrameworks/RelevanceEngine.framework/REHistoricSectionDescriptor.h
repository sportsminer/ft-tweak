/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REHistoricSectionDescriptor : NSObject <NSCopying, REIndentedDescription> {
    bool  _invertsRanking;
    long long  _maxElementCount;
    RESectionDescriptor * _parentDescriptor;
    NSOrderedSet * _rules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invertsRanking;
@property (nonatomic) long long maxElementCount;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSArray *orderedRules;
@property (nonatomic) RESectionDescriptor *parentDescriptor;
@property (nonatomic, copy) NSSet *rules;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)invertsRanking;
- (bool)isEqual:(id)arg1;
- (long long)maxElementCount;
- (id)name;
- (id)orderedRules;
- (id)parentDescriptor;
- (id)rules;
- (void)setInvertsRanking:(bool)arg1;
- (void)setMaxElementCount:(long long)arg1;
- (void)setOrderedRules:(id)arg1;
- (void)setParentDescriptor:(id)arg1;
- (void)setRules:(id)arg1;

@end