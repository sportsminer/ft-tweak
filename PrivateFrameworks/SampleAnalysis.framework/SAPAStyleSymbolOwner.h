/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleSymbolOwner : NSObject {
    bool  _hasTextExecSegment;
    unsigned long long  _textSegmentLength;
}

@property bool hasTextExecSegment;
@property unsigned long long textSegmentLength;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; bool x11; }*)arg1 bufferLength:(unsigned long long)arg2;

- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (bool)hasTextExecSegment;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; bool x11; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setHasTextExecSegment:(bool)arg1;
- (void)setTextSegmentLength:(unsigned long long)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)textSegmentLength;

@end
