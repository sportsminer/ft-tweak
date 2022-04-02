/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASample : NSObject <PASerializable> {
    double  _machTimestamp;
    PASample * _previousSample;
    NSMutableDictionary * _tasks;
    double  _wallTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double machTimestamp;
@property (readonly) NSArray *sampleTasks;
@property (readonly) Class superclass;
@property (readonly) double wallTimestamp;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (id)_initWithSerializedData:(const struct { unsigned long long x1; double x2; double x3; unsigned long long x4; }*)arg1;
- (void)addSampleTask:(id)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)init;
- (id)initWithMachTime:(double)arg1 andWallTime:(double)arg2;
- (id)initWithStackshot:(id)arg1;
- (double)machTimestamp;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)sampleTaskForPid:(int)arg1;
- (id)sampleTasks;
- (void)setMachTime:(double)arg1;
- (void)setWallTime:(double)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (double)wallTimestamp;

@end
