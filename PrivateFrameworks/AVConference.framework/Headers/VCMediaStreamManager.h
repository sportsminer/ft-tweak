/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate> {
    NSMutableDictionary * _vcMomentsCollectorDictionary;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  stateLock;
    NSMutableArray * streamArray;
    NSObject<OS_dispatch_queue> * xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (id)defaultManager;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)init;
- (void)pauseStreams:(bool)arg1;
- (void)registerBlocksForService;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)textStreamWithStreamToken:(long long)arg1;
- (void)vcMediaStream:(id)arg1 didPauseStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveText:(struct NSString { Class x1; }*)arg2;
- (void)vcMediaStream:(id)arg1 didResumeStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didStartStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(bool)arg2 error:(id)arg3 dictionary:(id)arg4;
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(bool)arg3;
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
- (void)vcMediaStreamDidInterruptionBegin:(id)arg1;
- (void)vcMediaStreamDidInterruptionEnd:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidStop:(id)arg1;

@end
