/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETEventEnumMappedProperty : PETEventProperty {
    bool  _autoSanitizeValues;
    NSDictionary * _enumMap;
}

- (void).cxx_destruct;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)description;
- (id)initWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(bool)arg3;
- (bool)isValidValue:(id)arg1;
- (id)longestValueString;
- (id)possibleValues;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validRange;

@end
