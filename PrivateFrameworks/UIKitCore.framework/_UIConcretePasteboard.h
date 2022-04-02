/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIConcretePasteboard : UIPasteboard {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

+ (id)_pasteboardNamed:(id)arg1 createIfNotFound:(bool)arg2;
+ (id)_pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)_pasteboardWithUniqueName;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLs;
- (id)_initWithName:(id)arg1;
- (id)_itemsCoercibleToClass:(Class)arg1;
- (bool)_pasteboardCacheQueue_isPersistent;
- (bool)_pasteboardCacheQueue_saveItemCollection:(id)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long*)arg3;
- (bool)_pasteboardCacheQueue_setPersistent:(bool)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long*)arg3;
- (void)_saveItemCollection:(id)arg1;
- (void)_sendPasteboardTypesChangedNotificationOldTypes:(id)arg1 newTypes:(id)arg2;
- (void)_setItemsAndSave:(id)arg1 options:(id)arg2;
- (void)_setItemsAndSave:(id)arg1 options:(id)arg2 coerceStringsToURLs:(bool)arg3;
- (void)_setItemsAndSaveFromObjects:(id)arg1 ofClass:(Class)arg2;
- (void)_setPersistent:(bool)arg1;
- (void)addItems:(id)arg1;
- (id)availableTypes;
- (bool)canInstantiateObjectsOfClass:(Class)arg1;
- (long long)changeCount;
- (id)color;
- (id)colors;
- (bool)containsPasteboardTypes:(id)arg1;
- (bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (bool)hasColors;
- (bool)hasImages;
- (bool)hasStrings;
- (bool)hasURLs;
- (id)image;
- (id)images;
- (bool)isPersistent;
- (id)itemProviders;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)items;
- (id)name;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setItemProviders:(id)arg1 localOnly:(bool)arg2 expirationDate:(id)arg3;
- (void)setItemProviders:(id)arg1 options:(id)arg2;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 options:(id)arg2;
- (void)setName:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setObjects:(id)arg1 localOnly:(bool)arg2 expirationDate:(id)arg3;
- (void)setObjects:(id)arg1 options:(id)arg2;
- (void)setPersistent:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
