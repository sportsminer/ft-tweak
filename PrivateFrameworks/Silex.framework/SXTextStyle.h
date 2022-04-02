/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextStyle : SXJSONObject <SXTextStyleFontDescribing>

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXTextStyleFontAttributes> *fontAttributes;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) long long fontSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SXJSONArray *listStyle;
@property (nonatomic, readonly) SXTextDecoration *strikethrough;
@property (nonatomic, readonly) SXTextStroke *stroke;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) SXShadow *textShadow;
@property (nonatomic, readonly) long long textTransform;
@property (nonatomic, readonly) double tracking;
@property (nonatomic, readonly) SXTextDecoration *underline;
@property (nonatomic, readonly) int verticalAlignment;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (long long)fontSizeWithValue:(id)arg1 withType:(int)arg2;
- (long long)textTransformWithValue:(id)arg1 withType:(int)arg2;
- (int)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end
