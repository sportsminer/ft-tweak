/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder {
    bool  canDealloc;
    bool  canEndEncoding;
    bool  hasEndEncoding;
    struct deque<id, std::__1::allocator<id> > { 
        /* Warning: unhandled struct encoding: '{__split_buffer<id *, std::__1::allocator<id *> >="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<id **, std::__1::allocator<id *> >="__value_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::__1::allocator<id> >="__value_"Q}}' */ struct __split_buffer<id *, std::__1::allocator<id *> > { 
            __begin_ ***__first_; 
        } __map_; 
    }  updatedFences;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resourceTrackingRecordBlitFromBuf:(id)arg1 toBuf:(id)arg2;
- (void)_resourceTrackingRecordBlitFromBuf:(id)arg1 toTex:(id)arg2;
- (void)_resourceTrackingRecordBlitFromTex:(id)arg1 toBuf:(id)arg2;
- (void)_resourceTrackingRecordBlitFromTex:(id)arg1 toTex:(id)arg2;
- (void)_setDefaults;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
- (void)dealloc;
- (void)endEncoding;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 value:(unsigned char)arg3;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)generateMipmapsForTexture:(id)arg1;
- (id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)optimizeContentsForCPUAccess:(id)arg1;
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForGPUAccess:(id)arg1;
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)updateFence:(id)arg1;
- (void)validateCopyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)waitForFence:(id)arg1;

@end
