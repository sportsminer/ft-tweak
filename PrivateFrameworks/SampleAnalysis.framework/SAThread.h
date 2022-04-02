/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAThread : NSObject <SASerializable> {
    SATimestamp * _creationTimestamp;
    SATimestamp * _exitTimestamp;
    bool  _isGlobalForcedIdle;
    bool  _isMainThread;
    unsigned long long  _threadId;
    NSMutableArray * _threadStates;
}

@property (retain) SATimestamp *creationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) SATimestamp *exitTimestamp;
@property (readonly) unsigned long long hash;
@property bool isGlobalForcedIdle;
@property bool isMainThread;
@property (readonly) bool isProcessorIdleThread;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadId;
@property (readonly) NSArray *threadStates;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; union { unsigned short x_7_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)threadWithId:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; union { unsigned short x_7_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (unsigned long long)addState:(id)arg1;
- (id)creationTimestamp;
- (id)debugDescription;
- (void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(bool)arg3 withSampleIndex:(bool)arg4 block:(id /* block */)arg5;
- (id)exitTimestamp;
- (id)firstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (void)forwardFillMonotonicallyIncreasingData;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (id)initWithId:(unsigned long long)arg1;
- (bool)isGlobalForcedIdle;
- (bool)isMainThread;
- (bool)isProcessorIdleThread;
- (id)lastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; union { unsigned short x_7_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2;
- (void)setCreationTimestamp:(id)arg1;
- (void)setExitTimestamp:(id)arg1;
- (void)setIsGlobalForcedIdle:(bool)arg1;
- (void)setIsMainThread:(bool)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)threadId;
- (id)threadStates;

@end
