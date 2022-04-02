/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface MetalRANSACDispatcher : NSObject {
    <MTLBuffer> * _m_ModelScores;
    <MTLBuffer> * _m_RansacHomographies;
    <MTLBuffer> * _m_RansacParams;
    <MTLBuffer> * _m_ScoreBuffer;
    <MTLBuffer> * _m_mX;
    <MTLBuffer> * _m_mXhat;
    unsigned long long  _m_maxCorrespondences;
    unsigned long long  _m_numThreadsPerGroup;
    struct CGSize { 
        double width; 
        double height; 
    }  frameSize;
    float  inlierLimit;
    <MTLCommandQueue> * m_metalCommandQueue;
    <MTLDevice> * m_metalDevice;
    <MTLFunction> * m_metalKernelFunction;
    <MTLLibrary> * m_metalLibrary;
    <MTLComputePipelineState> * m_metalPipeline;
}

@property (nonatomic) struct CGSize { double x1; double x2; } frameSize;
@property (nonatomic) float inlierLimit;
@property (nonatomic, retain) <MTLBuffer> *m_ModelScores;
@property (nonatomic, retain) <MTLBuffer> *m_RansacHomographies;
@property (nonatomic, retain) <MTLBuffer> *m_RansacParams;
@property (nonatomic, retain) <MTLBuffer> *m_ScoreBuffer;
@property (nonatomic, retain) <MTLBuffer> *m_mX;
@property (nonatomic, retain) <MTLBuffer> *m_mXhat;
@property (nonatomic) unsigned long long m_maxCorrespondences;
@property (nonatomic, retain) <MTLCommandQueue> *m_metalCommandQueue;
@property (nonatomic, retain) <MTLDevice> *m_metalDevice;
@property (nonatomic, retain) <MTLFunction> *m_metalKernelFunction;
@property (nonatomic, retain) <MTLLibrary> *m_metalLibrary;
@property (nonatomic, retain) <MTLComputePipelineState> *m_metalPipeline;
@property (nonatomic) unsigned long long m_numThreadsPerGroup;

- (void).cxx_destruct;
- (void)assureSizeAndCopyToMetalBuffer:(id*)arg1 fromData:(const void*)arg2 dataSize:(unsigned long long)arg3 metalResourceOptions:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })frameSize;
- (id)initWithMaxCorrespondences:(unsigned long long)arg1;
- (float)inlierLimit;
- (id)m_ModelScores;
- (id)m_RansacHomographies;
- (id)m_RansacParams;
- (id)m_ScoreBuffer;
- (id)m_mX;
- (id)m_mXhat;
- (unsigned long long)m_maxCorrespondences;
- (id)m_metalCommandQueue;
- (id)m_metalDevice;
- (id)m_metalKernelFunction;
- (id)m_metalLibrary;
- (id)m_metalPipeline;
- (unsigned long long)m_numThreadsPerGroup;
- (void)performRansacOnData:(unsigned int)arg1 firstPointSet:(const float*)arg2 secondPointSet:(const float*)arg3 pointWeights:(const float*)arg4 homographies:(const struct ransac_homography_record { float x1[9]; }*)arg5 numHomographies:(unsigned int)arg6 homScores:(float*)arg7;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInlierLimit:(float)arg1;
- (void)setM_ModelScores:(id)arg1;
- (void)setM_RansacHomographies:(id)arg1;
- (void)setM_RansacParams:(id)arg1;
- (void)setM_ScoreBuffer:(id)arg1;
- (void)setM_mX:(id)arg1;
- (void)setM_mXhat:(id)arg1;
- (void)setM_maxCorrespondences:(unsigned long long)arg1;
- (void)setM_metalCommandQueue:(id)arg1;
- (void)setM_metalDevice:(id)arg1;
- (void)setM_metalKernelFunction:(id)arg1;
- (void)setM_metalLibrary:(id)arg1;
- (void)setM_metalPipeline:(id)arg1;
- (void)setM_numThreadsPerGroup:(unsigned long long)arg1;

@end
