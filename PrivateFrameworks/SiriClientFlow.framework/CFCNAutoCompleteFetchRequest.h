/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCNAutoCompleteFetchRequest : SADomainCommand <CFLocalAceHandling, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CFCNAutoCompleteFetchContext *fetchContext;
@property (nonatomic, copy) NSArray *fetchRequestOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *priorityDomainForSorting;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic, copy) NSString *searchType;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteFetchRequest;
+ (id)autoCompleteFetchRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)autoCompeleteFetchContext;
- (unsigned long long)autoCompleteSearchTypeWithError:(id*)arg1;
- (id)commandFailedWithError:(id)arg1;
- (id)encodedClassName;
- (id)errorWithReason:(id)arg1 code:(long long)arg2;
- (id)fetchContext;
- (id)fetchRequestOptions;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (id)priorityDomainForSorting;
- (bool)requiresResponse;
- (id)searchString;
- (id)searchType;
- (void)setFetchContext:(id)arg1;
- (void)setFetchRequestOptions:(id)arg1;
- (void)setPriorityDomainForSorting:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchType:(id)arg1;

@end
