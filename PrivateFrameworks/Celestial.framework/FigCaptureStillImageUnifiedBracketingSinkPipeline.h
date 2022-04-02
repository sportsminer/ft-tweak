/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCapturePipeline <FigCaptureStillImageSinkPipeline> {
    BWFigVideoCaptureDevice * _captureDevice;
    BWPortraitHDRStagingNode * _portraitHDRStagingNode;
    NSString * _sinkID;
    BWStillImageCoordinatorNode * _stillImageCoordinatorNode;
    BWDepthConverterNode * _stillImageDepthConverterNode;
    BWStillImageBravoDisparityNode * _stillImageDisparityNode;
    BWStillImageSampleBufferSinkNode * _stillImageSinkNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, readonly) BWPortraitHDRStagingNode *portraitHDRStagingNode;
@property (nonatomic, readonly) NSString *sinkID;
@property (nonatomic, readonly) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (nonatomic, readonly) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (readonly) Class superclass;

+ (void)initialize;

- (int)_buildStillImageSinkPipelineWithConfiguration:(id)arg1 sourceStillImageOutput:(id)arg2 telephotoSourceStillImageOutput:(id)arg3 infraredOutput:(id)arg4 captureStatusDelegate:(id)arg5 inferenceScheduler:(id)arg6 graph:(id)arg7 clientIsCameraOrDerivative:(bool)arg8;
- (void)dealloc;
- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceStillImageOutput:(id)arg3 telephotoSourceStillImageOutput:(id)arg4 infraredOutput:(id)arg5 captureStatusDelegate:(id)arg6 inferenceScheduler:(id)arg7 graph:(id)arg8 clientIsCameraOrDerivative:(bool)arg9;
- (id)portraitHDRStagingNode;
- (id)sinkID;
- (id)stillImageCoordinatorNode;
- (id)stillImageSinkNode;

@end
