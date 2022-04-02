/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFBOLoader : TSCH3DResourceLoader {
    <TSCH3DRenderBufferAllocator> * mColorAllocator;
    <TSCH3DRenderBufferAllocator> * mDepthAllocator;
    struct FramebufferAttributes { 
        int type; 
        long long samples; 
        int colorDataType; 
        int colorFormat; 
        int depthDataType; 
        bool linearFilter; 
        bool discardHint; 
    }  mFramebufferAttributes;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mSize;
}

@property (nonatomic, readonly) <TSCH3DRenderBufferAllocator> *colorAllocator;
@property (nonatomic, readonly) <TSCH3DRenderBufferAllocator> *depthAllocator;
@property (nonatomic, readonly) struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; } framebufferAttributes;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

+ (unsigned long long)estimatedMemoryInBytesForSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 samples:(unsigned long long)arg2 hasColorbuffer:(bool)arg3 hasDepthbuffer:(bool)arg4;
+ (id)loaderWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;

- (id).cxx_construct;
- (void)bindHandle:(id)arg1 config:(void*)arg2;
- (id)colorAllocator;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (void)dealloc;
- (id)depthAllocator;
- (id)description;
- (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; })framebufferAttributes;
- (id)generateHandleWithConfig:(void*)arg1;
- (unsigned long long)hash;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct SessionLoadResourceResult { bool x1; bool x2; bool x3; id x4; })loadResource:(id)arg1 insideSession:(id)arg2;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;

@end
