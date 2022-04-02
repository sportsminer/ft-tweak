/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {
    int (* _attributePresent;
    NSString * _bundleID;
    NSMutableDictionary * _cache;
    NSLock * _cacheLock;
    NSCache * _namedRenditionKeyCache;
    CUICommonAssetStorage * _store;
    NSLock * _storeLock;
    unsigned long long  _themeIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long themeIndex;

- (bool)_canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(bool*)arg2 lookForSubstitutions:(bool)arg3;
- (void)_commonInit;
- (bool)_formatStorageKeyArrayBytes:(void*)arg1 length:(unsigned long long)arg2 fromKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg3;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 foundAsset:(bool*)arg2;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)allImageNames;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)appearances;
- (bool)assetExistsForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)authoredWithSchemaVersion;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)bundleID;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(bool*)arg2;
- (id)catalogGlobals;
- (void)clearRenditionCache;
- (unsigned long long)colorSpaceID;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (double)fontSizeForFontSizeType:(id)arg1;
- (bool)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
- (bool)getPhysicalColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 withName:(id)arg2;
- (bool)hasPhysicalColorWithName:(id)arg1;
- (id)imagesWithName:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (id)keySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (long long)maximumRenditionKeyTokenCount;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)renditionKeyFormat;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(id)arg2;
- (void)setThemeIndex:(unsigned long long)arg1;
- (id)store;
- (unsigned long long)themeIndex;
- (id)themeStore;
- (bool)usesCUISystemThemeRenditionKey;
- (id)zeroCodeGlyphList;

@end
