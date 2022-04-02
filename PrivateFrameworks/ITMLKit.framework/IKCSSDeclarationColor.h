/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSDeclarationColor : IKCSSDeclaration {
    IKColor * _color;
    long long  _sourceType;
}

@property (nonatomic, retain) IKColor *color;
@property long long sourceType;

+ (id)_stringForColor:(id)arg1 sourceType:(long long)arg2;

- (void).cxx_destruct;
- (id)_colorFromParseObject:(id)arg1 sourceType:(long long*)arg2;
- (id)_keywordKolorFromParseToken:(id)arg1;
- (id)_kolorFromParseObject:(id)arg1 sourceType:(long long*)arg2;
- (id)_linearGradientKolorFromParseFunction:(id)arg1;
- (id)color;
- (id)description;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (void)setColor:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (long long)sourceType;
- (id)stringValue;

@end
