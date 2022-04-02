/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIInternalDragObject : NSObject <UIItemProviderWriting> {
    <SearchUIDragObject> * _dragObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) <SearchUIDragObject> *dragObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)dragObject;
- (id)initWithDragObject:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)setDragObject:(id)arg1;
- (bool)shouldShareDragURL;
- (id)writableTypeIdentifiersForItemProvider;

@end
