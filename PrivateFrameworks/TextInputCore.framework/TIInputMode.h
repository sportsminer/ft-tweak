/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIInputMode : NSObject <NSCopying> {
    Class  _inputManagerClass;
    Class  _keyboardFeatureSpecializationClass;
    NSString * _languageWithRegion;
    NSLocale * _locale;
    Class  _multilingualInputManagerClass;
    NSString * _normalizedIdentifier;
    NSString * _variant;
}

@property (nonatomic, readonly) Class inputManagerClass;
@property (nonatomic, readonly) Class keyboardFeatureSpecializationClass;
@property (nonatomic, readonly) NSString *languageWithRegion;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) Class multilingualInputManagerClass;
@property (nonatomic, readonly) NSString *nonstopPunctuationCharacters;
@property (nonatomic, readonly) NSString *normalizedIdentifier;
@property (nonatomic, readonly) NSString *replacementForDoubleSpace;
@property (nonatomic, readonly) NSString *sentenceDelimitingCharacters;
@property (nonatomic, readonly) NSString *sentencePrefixingCharacters;
@property (nonatomic, readonly) NSString *sentenceTrailingCharacters;
@property (nonatomic, readonly) bool spaceAutocorrectionEnabled;
@property (nonatomic, readonly) bool supportsMultilingualKeyboard;
@property (nonatomic, readonly) bool supportsPrediction;
@property (nonatomic, readonly) NSString *variant;

+ (id)inputModeWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNormalizedIdentifier:(id)arg1;
- (Class)inputManagerClass;
- (bool)isEqual:(id)arg1;
- (Class)keyboardFeatureSpecializationClass;
- (id)languageWithRegion;
- (id)locale;
- (Class)multilingualInputManagerClass;
- (id)nonstopPunctuationCharacters;
- (id)normalizedIdentifier;
- (id)replacementForDoubleSpace;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (bool)spaceAutocorrectionEnabled;
- (bool)supportsMultilingualKeyboard;
- (bool)supportsPrediction;
- (id)variant;

@end