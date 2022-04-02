/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface STMSizeCacheEntry : NSObject {
    NSString * _itemPath;
    NSNumber * _itemSize;
    unsigned long long  _status;
}

@property (retain) NSString *itemPath;
@property (retain) NSNumber *itemSize;
@property unsigned long long status;

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (id)itemPath;
- (id)itemSize;
- (void)setItemPath:(id)arg1;
- (void)setItemSize:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id)sizeOperation;
- (unsigned long long)status;

@end
