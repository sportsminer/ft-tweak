/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLPlanSimulator : NSObject {
    _PASRng * _rng;
    PMLSessionDescriptor * _sessionDescriptor;
    NSArray * _stores;
}

+ (id)simulatorWithDbPaths:(id)arg1 sessionDescriptor:(id)arg2 sessionsInBatch:(unsigned long long)arg3 maxSessionsLimit:(unsigned long long)arg4 seed:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)_randomStore;
- (id)_randomStores:(unsigned long long)arg1;
- (id)init;
- (id)initWithStores:(id)arg1 sessionDescriptor:(id)arg2 seed:(unsigned long long)arg3;
- (id)runParallelPlansWithPlanId:(id)arg1 tracker:(id)arg2 noiseScaleFactor:(float)arg3 noiseMinimumMagnitude:(float)arg4 weights:(id)arg5 serverIteration:(unsigned long long)arg6 useIntercept:(bool)arg7 beforeNoiseScaling:(long long)arg8 constantScaleFactor:(float)arg9 usingRandomlySelected:(unsigned long long)arg10;

@end
