/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

@interface _ANERequest : NSObject {
    id /* block */  _completionHandler;
    NSArray * _inputArray;
    NSArray * _inputNameArray;
    NSArray * _outputArray;
    NSArray * _outputNameArray;
    NSString * _procedureName;
}

@property (copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSArray *inputArray;
@property (nonatomic, readonly) NSArray *inputNameArray;
@property (nonatomic, readonly) NSArray *outputArray;
@property (nonatomic, readonly) NSArray *outputNameArray;
@property (nonatomic, readonly, copy) NSString *procedureName;

+ (id)requestWithInputs:(id)arg1 inputNames:(id)arg2 outputs:(id)arg3 outputNames:(id)arg4 procedureName:(id)arg5;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)initWithInputs:(id)arg1 inputNames:(id)arg2 outputs:(id)arg3 outputNames:(id)arg4 procedureName:(id)arg5;
- (id)inputArray;
- (id)inputNameArray;
- (id)outputArray;
- (id)outputNameArray;
- (id)procedureName;
- (void)setCompletionHandler:(id /* block */)arg1;
- (bool)validate;

@end
