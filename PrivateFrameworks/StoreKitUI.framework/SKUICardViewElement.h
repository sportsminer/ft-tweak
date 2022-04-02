/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICardViewElement : SKUIViewElement {
    BOOL  _enabled;
}

@property (getter=isAdCard, nonatomic, readonly) bool adCard;
@property (nonatomic, readonly) long long cardType;

- (id)applyUpdatesWithElement:(id)arg1;
- (long long)cardType;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isAdCard;
- (bool)isEnabled;
- (long long)pageComponentType;

@end
