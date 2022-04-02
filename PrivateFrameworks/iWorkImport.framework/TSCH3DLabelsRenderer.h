/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelsRenderer : NSObject {
    struct LabelRenderInfo { 
        struct tvec2<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
        } sampledLabelSize; 
        struct tvec2<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
        } sampledLabelFullSize; 
        struct tvec2<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
        } sampledLabelRenderOffset; 
        struct tvec2<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
        } sampledAlignmentPadding; 
    }  mInfo;
    TSCH3DLabelResource * mLabel;
    TSCH3DCamera * mLabelCamera;
    TSCH3DResource * mLabelQuad;
    TSCH3DDataBufferResource * mMesh;
    TSCH3DLabelsMeshRenderer * mMeshRenderer;
    TSCH3DSceneRenderPipeline * mPipeline;
    TSCH3DLabelResources * mResources;
    TSCH3DLabelsRendererTransforms * mTransforms;
    bool  mUseLabelBounds;
}

@property (nonatomic, retain) TSCH3DLabelResource *label;
@property (nonatomic, readonly) TSCH3DCamera *labelCamera;
@property (nonatomic, retain) TSCH3DDataBufferResource *mesh;
@property (nonatomic, retain) TSCH3DLabelsMeshRenderer *meshRenderer;
@property (nonatomic, retain) TSCH3DSceneRenderPipeline *pipeline;
@property (nonatomic, readonly) struct LabelRenderInfo { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_4_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_4_1_2; } x4; } renderInfo;
@property (nonatomic, retain) TSCH3DLabelResources *resources;
@property (nonatomic) bool useLabelBounds;

+ (id)renderCacheKey;
+ (id)renderer;

- (id).cxx_construct;
- (bool)beginResources:(id)arg1 expectedSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (bool)cacheEnabled;
- (void)dealloc;
- (void)delegateDidSubmitLabel;
- (id)effects;
- (void)endResources;
- (bool)hasCachedLabels;
- (id)init;
- (bool)isCacheValid;
- (id)label;
- (id)labelCamera;
- (id)labelQuad;
- (id)mesh;
- (id)meshRenderer;
- (id)p_renderCacheFromScene:(id)arg1 created:(bool*)arg2 createIfAbsent:(bool)arg3;
- (id)p_renderCacheID;
- (id)p_renderCacheKey;
- (id)pipeline;
- (void)postrender:(id)arg1;
- (void)prepareCachedIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 string:(id)arg2 alignmentPadding:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg3 width:(double)arg4 bitmapContextInfo:(id)arg5;
- (void)prerender:(id)arg1;
- (void)renderAtPosition:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 offset:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg2 alignment:(unsigned int)arg3 offset2D:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg4 rotation:(float)arg5 externalAttribute:(const struct ExternalLabelAttribute { id x1; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x2; void x3; void*x4; BOOL x5; void*x6; void*x7; float x8; long x9; out void*x10; void*x11; void*x12; void*x13; union { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; union { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; }*)arg6;
- (struct LabelRenderInfo { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_4_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_4_1_2; } x4; })renderInfo;
- (id)resources;
- (void)setLabel:(id)arg1;
- (void)setMesh:(id)arg1;
- (void)setMeshRenderer:(id)arg1;
- (void)setPipeline:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setUseLabelBounds:(bool)arg1;
- (const struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)unitToWorld;
- (bool)useLabelBounds;
- (const struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)worldToStage;

@end
