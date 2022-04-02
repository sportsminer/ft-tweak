/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDataSourceElement : IKViewElement {
    bool  _areItemsBound;
    long long  _autoHighlightIndex;
    NSArray * _autoHighlightedChildElements;
    <IKDataSourceElementImplementing> * _impl;
    struct { 
        bool hasDidLoadBinding; 
        bool hasDoKeysAffectingChildren; 
        bool hasDoKeysAffectingSubtree; 
        bool hasAdditionalKeysToResolve; 
        bool hasApplyValueForKey; 
        bool hasDidResolveKeys; 
    }  _implFlags;
}

@property (nonatomic) long long autoHighlightIndex;
@property (nonatomic, copy) NSArray *autoHighlightedChildElements;
@property (nonatomic, readonly) <IKDataSourceElementImplementing> *impl;
@property (nonatomic, readonly) IKElementChangeSet *itemsChangeset;
@property (nonatomic, readonly) NSArray *prototypes;

+ (unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;

- (void).cxx_destruct;
- (id)actualElementForProxyElement:(id)arg1 jsContext:(id)arg2;
- (id)additionalKeysToResolveForDOMBindingController:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (bool)areItemsBound;
- (long long)autoHighlightIndex;
- (id)autoHighlightedChildElements;
- (void)configureUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (bool)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
- (void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
- (void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;
- (bool)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
- (bool)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
- (id)elementForItemAtIndex:(long long)arg1;
- (void)enumerateItemElementsUsingBlock:(id /* block */)arg1;
- (id)firstItemElement;
- (id)impl;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)itemsChangeset;
- (id)lastItemElement;
- (void)loadIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (id)prototypes;
- (void)resetProperty:(unsigned long long)arg1;
- (void)resetUpdates;
- (void)setAutoHighlightIndex:(long long)arg1;
- (void)setAutoHighlightedChildElements:(id)arg1;
- (void)unloadIndex:(long long)arg1;

@end