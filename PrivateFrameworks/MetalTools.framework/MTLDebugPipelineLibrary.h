/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary {
    NSString * _filePath;
}

@property (nonatomic, copy) NSString *filePath;

- (void)dealloc;
- (id)filePath;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 filePath:(id)arg3;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)setFilePath:(id)arg1;

@end
