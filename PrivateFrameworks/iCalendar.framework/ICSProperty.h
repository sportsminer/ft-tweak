/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSProperty : NSObject <ICSWriting, NSSecureCoding> {
    NSMutableDictionary * _parameters;
    unsigned long long  _type;
    id  _value;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;
- (void)_appendDateTimeInDate:(id)arg1 asUTCToResult:(id)arg2;
- (void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2;
- (void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned long long)arg3;
- (void)addParametersFromDictionary:(id)arg1;
- (id)allParameters;
- (bool)alwaysHasParametersToSerialize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (bool)isMultiValued;
- (id)parameterValueForName:(id)arg1;
- (id)parameters;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)parametersToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToObscure;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (void)setValueAsProperty:(id)arg1 withRawValue:(const char *)arg2 options:(unsigned long long)arg3;
- (bool)shouldObscureValue;
- (id)stringValue;
- (unsigned long long)type;
- (id)value;

@end
