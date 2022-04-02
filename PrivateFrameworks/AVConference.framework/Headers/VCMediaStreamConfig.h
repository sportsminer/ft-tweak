/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaStreamConfig : NSObject {
    long long  _SRTCPCipherSuite;
    long long  _SRTPCipherSuite;
    NSString * _cName;
    unsigned int  _cellularUniqueTag;
    bool  _decryptionTimeOutEnabled;
    double  _decryptionTimeOutInterval;
    long long  _direction;
    VCNetworkAddress * _localAddress;
    VCMediaStreamMultiwayConfig * _multiwayConfig;
    bool  _rateAdaptationEnabled;
    NSData * _receiveMasterKey;
    unsigned long long  _recommendedMTU;
    VCNetworkAddress * _remoteAddress;
    unsigned int  _remoteSSRC;
    bool  _rtcpEnabled;
    unsigned short  _rtcpRemotePort;
    double  _rtcpSendInterval;
    bool  _rtcpTimeOutEnabled;
    double  _rtcpTimeOutInterval;
    bool  _rtpTimeOutEnabled;
    double  _rtpTimeOutInterval;
    NSMutableDictionary * _rxPayloadMap;
    NSData * _sendMasterKey;
    NSMutableDictionary * _txPayloadMap;
}

@property (nonatomic) long long SRTCPCipherSuite;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic, copy) NSString *cName;
@property (nonatomic) unsigned int cellularUniqueTag;
@property (getter=isDecryptionTimeOutEnabled, nonatomic) bool decryptionTimeOutEnabled;
@property (nonatomic) double decryptionTimeOutInterval;
@property (nonatomic) long long direction;
@property (nonatomic, retain) VCNetworkAddress *localAddress;
@property (nonatomic, retain) VCMediaStreamMultiwayConfig *multiwayConfig;
@property (nonatomic, readonly) long long primaryTxCodecType;
@property (getter=isRateAdaptationEnabled, nonatomic) bool rateAdaptationEnabled;
@property (nonatomic, retain) NSData *receiveMasterKey;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic, retain) VCNetworkAddress *remoteAddress;
@property (nonatomic) unsigned int remoteSSRC;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (nonatomic) double rtcpSendInterval;
@property (getter=isRTCPTimeOutEnabled, nonatomic) bool rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutInterval;
@property (getter=isRTPTimeOutEnabled, nonatomic) bool rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic, readonly) NSDictionary *rxPayloadMap;
@property (nonatomic, retain) NSData *sendMasterKey;
@property (nonatomic, readonly) NSDictionary *txPayloadMap;

- (long long)SRTCPCipherSuite;
- (long long)SRTPCipherSuite;
- (void)addRxPayloadType:(int)arg1;
- (void)addRxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)addTxPayloadType:(int)arg1;
- (void)addTxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)applyMediaStreamClientDictionary:(id)arg1;
- (id)cName;
- (unsigned int)cellularUniqueTag;
- (void)dealloc;
- (double)decryptionTimeOutInterval;
- (id)description;
- (long long)direction;
- (id)init;
- (id)initWithClientDictionary:(id)arg1;
- (bool)isDecryptionTimeOutEnabled;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTPTimeOutEnabled;
- (bool)isRateAdaptationEnabled;
- (id)localAddress;
- (id)multiwayConfig;
- (long long)primaryTxCodecType;
- (id)receiveMasterKey;
- (unsigned long long)recommendedMTU;
- (id)remoteAddress;
- (unsigned int)remoteSSRC;
- (unsigned short)rtcpRemotePort;
- (double)rtcpSendInterval;
- (double)rtcpTimeOutInterval;
- (double)rtpTimeOutInterval;
- (id)rxPayloadMap;
- (id)sendMasterKey;
- (void)setCName:(id)arg1;
- (void)setCellularUniqueTag:(unsigned int)arg1;
- (void)setDecryptionTimeOutEnabled:(bool)arg1;
- (void)setDecryptionTimeOutInterval:(double)arg1;
- (void)setDirection:(long long)arg1;
- (void)setLocalAddress:(id)arg1;
- (void)setMultiwayConfig:(id)arg1;
- (void)setRateAdaptationEnabled:(bool)arg1;
- (void)setReceiveMasterKey:(id)arg1;
- (void)setRecommendedMTU:(unsigned long long)arg1;
- (void)setRemoteAddress:(id)arg1;
- (void)setRemoteSSRC:(unsigned int)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpRemotePort:(unsigned short)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setSRTCPCipherSuite:(long long)arg1;
- (void)setSRTPCipherSuite:(long long)arg1;
- (void)setSendMasterKey:(id)arg1;
- (void)setupMediaStreamConfig;
- (id)txPayloadMap;

@end
