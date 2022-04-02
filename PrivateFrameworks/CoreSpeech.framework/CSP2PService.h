/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSP2PService : NSObject {
    <CSADCompanionServiceProvider> * _adCompanionServiceProvider;
    NSString * _lastCommunicatedPeer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CSADCompanionServiceProvider> *adCompanionServiceProvider;
@property (nonatomic, retain) NSString *lastCommunicatedPeer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(id /* block */)arg3;
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(bool)arg4;
- (void)_sendNearMissGradingDataToPeerId:(id)arg1;
- (void)_sendParallelRecordingsToPeerId:(id)arg1 voiceProfileRequestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_sendVoiceGradingDataToPeerId:(id)arg1;
- (id)adCompanionServiceProvider;
- (id)init;
- (id)lastCommunicatedPeer;
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(id /* block */)arg3;
- (id)queue;
- (void)sendNearMissGradingDataToNearbyPeer;
- (void)sendVoiceGradingDataToNearbyPeer;
- (void)setAdCompanionServiceProvider:(id)arg1;
- (void)setLastCommunicatedPeer:(id)arg1;
- (void)setQueue:(id)arg1;

@end
