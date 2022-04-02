/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionManagerIDS : VCConnectionManager {
    VCSessionBitrateArbiter * _bitrateArbiter;
    NSMutableArray * _connectionArray;
    bool  _isMultiwaySession;
    double  _lastTimestampForRemoteSendingFromNonPrimary;
    double  _lastTimestampPreferredRemoteInterfaceUpdated;
    unsigned int  _receivedByteCount;
    unsigned int  _receivedPacketCount;
    unsigned int  _sentByteCount;
    unsigned int  _sentPacketCount;
}

- (int)addConnection:(id)arg1;
- (bool)addConnectionToConnectionArray:(id)arg1;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1 isPrimary:(bool*)arg2;
- (void)dealloc;
- (unsigned int)downlinkBitrateCapForConnectionType:(int)arg1;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(bool)arg2;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(bool)arg2;
- (id)getPrimaryConnectionToBeCompared;
- (id)getSecondaryConnectionToBeCompared;
- (void)handlePrimaryConnectionRemoved;
- (void)handleSecondaryConnectionRemoved;
- (void)handoverWithWRMSuggestion:(bool)arg1;
- (id)initWithMultiwayEnabled:(bool)arg1;
- (bool)isPrimaryConnectionSameAsConnection:(id)arg1;
- (void)optOutAllStreamsForNonPrimaryConnections;
- (int)removeConnection:(id)arg1;
- (void)reportConnection:(id)arg1 isInitialConnection:(bool)arg2;
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;
- (void)resetParticipantGenerationCounter;
- (bool)selectPrimaryAndSecondaryWithConnection:(id)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(int)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(int)arg1;
- (bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (bool)shouldHandoverWhenUpdateWRMDuplication:(int)arg1;
- (bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1 isSourceOnCellular:(bool*)arg2 isSourceIPv6:(bool*)arg3;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (void)updateCellularMTU:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(bool)arg2;
- (void)updateConnectionForDuplication;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(bool)arg4 isOutgoing:(bool)arg5;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)updateSecondaryWithConnection:(id)arg1;
- (void)updateSessionStats:(unsigned short)arg1;
- (unsigned int)uplinkBitrateCapForConnectionType:(int)arg1;

@end
