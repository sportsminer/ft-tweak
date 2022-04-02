/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerQuery : ML3Query {
    ML3Container * _container;
    ML3Predicate * _containerPredicate;
    NSArray * _limitedPersistentIDs;
}

@property (nonatomic, readonly) ML3Container *container;
@property (nonatomic, readonly) NSArray *limitedPersistentIDs;
@property (nonatomic, readonly) bool requiresSmartLimiting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;
- (unsigned long long)countOfEntities;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (bool)hasEntities;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;
- (id)limitedPersistentIDs;
- (bool)requiresSmartLimiting;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(bool)arg2;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(bool)arg2;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;

@end
