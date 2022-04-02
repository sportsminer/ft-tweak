/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoReceiverDefault : VCVideoReceiverBase {
    void * _controlInfoGenerator;
    unsigned short  _lastKeyFrameRequestStreamID;
    double  _lastKeyFrameRequestTime;
    bool  _shouldEnableFaceZoom;
    long long  _streamToken;
    struct tagHANDLE { int x1; } * _videoReceiverHandle;
    bool  receivedFirstRemoteFrame;
    unsigned int  remoteFrameHeight;
    unsigned int  remoteFrameWidth;
    VideoAttributes * remoteVideoAttributes;
}

@property (retain) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) bool shouldEnableFaceZoom;

- (void)collectChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1 interval:(float)arg2;
- (void)dealloc;
- (void)didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short*)arg1 count:(int)arg2 didReceiveRTCPFB:(bool)arg3 didReceiveFIR:(bool)arg4;
- (void)handleRemoteFrame:(struct __CVBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraStatusBits:(unsigned char)arg3;
- (void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg1;
- (id)initWithConfig:(struct tagVCVideoReceiverConfig { unsigned int x1; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; bool x_2_1_4; unsigned int x_2_1_5; unsigned short x_2_1_6[4]; unsigned short x_2_1_7[4]; unsigned short x_2_1_8; } x2[4]; bool x3; long long x4; int x5; int x6; int x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; int x14; bool x15; void *x16; int (*x17)(); int (*x18)(); int (*x19)(); unsigned long long x20; }*)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting { }*)arg3 statisticsCollector:(id)arg4;
- (double)lastReceivedVideoRTCPPacketTime;
- (double)lastReceivedVideoRTPPacketTime;
- (void)pauseVideo;
- (id)remoteVideoAttributes;
- (double)roundTripTime;
- (void)rtcpSendIntervalElapsed;
- (void)setEnableCVO:(bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setRemoteVideoAttributes:(id)arg1;
- (void)setRoundTripTime:(double)arg1;
- (void)setShouldEnableFaceZoom:(bool)arg1;
- (void)setTargetStreamID:(unsigned short)arg1;
- (bool)shouldEnableFaceZoom;
- (void)startVideo;
- (void)stopVideo;
- (void)updateSourcePlayoutTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;

@end
