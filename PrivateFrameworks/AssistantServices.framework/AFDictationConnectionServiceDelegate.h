/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate> {
    AFDictationConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDictationConnection:(id)arg1;
- (oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2;
- (oneway void)speechDidProcessAudioDuration:(double)arg1;
- (oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(bool)arg3 final:(bool)arg4;
- (oneway void)speechDidRecognizePackage:(id)arg1;
- (oneway void)speechDidRecognizePhrases:(id)arg1 usingSpeechModel:(id)arg2 correctionContext:(id)arg3;
- (oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechRecognitionDidFinishWithError:(id)arg1;
- (oneway void)speechRecordingDidBegin;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;

@end
