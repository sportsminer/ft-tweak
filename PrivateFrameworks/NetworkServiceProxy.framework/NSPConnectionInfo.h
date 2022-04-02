/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPConnectionInfo : NSObject <NSSecureCoding> {
    long long  _IPType;
    NSDictionary * _TCPInfo;
    bool  _TFOSucceeded;
    double  _connectionDelay;
    NSString * _edgeAddress;
    long long  _edgeType;
    NSDictionary * _exceptions;
    double  _fallbackDelay;
    long long  _fallbackReason;
    long long  _fallbackReasonCategory;
    double  _firstTxByteDelay;
    NSDate * _firstTxByteTimeStamp;
    unsigned long long  _initialBytesLeftOver;
    NSString * _interfaceName;
    long long  _interfaceType;
    bool  _isMultipath;
    bool  _isTFOProbeSucceeded;
    unsigned long long  _minimumRTT;
    unsigned long long  _multipathConnectedSubflowCount;
    unsigned long long  _multipathPrimarySubflowInterfaceIndex;
    unsigned long long  _multipathSubflowCount;
    NSDictionary * _multipathSubflowSwitchCounts;
    long long  _pathType;
    <NSPConnectionInfoSource> * _source;
    double  _timeIntervalSinceLastUsage;
    double  _timeToFirstByte;
    NSArray * _timingIntervals;
    long long  _tunnelConnectionError;
}

@property long long IPType;
@property (retain) NSDictionary *TCPInfo;
@property bool TFOSucceeded;
@property double connectionDelay;
@property (retain) NSString *edgeAddress;
@property long long edgeType;
@property (retain) NSDictionary *exceptions;
@property double fallbackDelay;
@property long long fallbackReason;
@property (readonly) long long fallbackReasonCategory;
@property double firstTxByteDelay;
@property (retain) NSDate *firstTxByteTimeStamp;
@property unsigned long long initialBytesLeftOver;
@property (retain) NSString *interfaceName;
@property long long interfaceType;
@property bool isMultipath;
@property bool isTFOProbeSucceeded;
@property unsigned long long minimumRTT;
@property unsigned long long multipathConnectedSubflowCount;
@property unsigned long long multipathPrimarySubflowInterfaceIndex;
@property unsigned long long multipathSubflowCount;
@property (retain) NSDictionary *multipathSubflowSwitchCounts;
@property long long pathType;
@property <NSPConnectionInfoSource> *source;
@property double timeIntervalSinceLastUsage;
@property double timeToFirstByte;
@property (retain) NSArray *timingIntervals;
@property long long tunnelConnectionError;

+ (int)fallbackReasonToErrno:(long long)arg1;
+ (id)getFallbackReasonDescription:(long long)arg1;
+ (bool)shouldMoveToNextEdgeForFallbackReason:(long long)arg1;
+ (bool)shouldResolveForFallbackReason:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)IPType;
- (id)TCPInfo;
- (bool)TFOSucceeded;
- (double)connectionDelay;
- (id)copyDictionary;
- (id)edgeAddress;
- (long long)edgeType;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptions;
- (double)fallbackDelay;
- (long long)fallbackReason;
- (long long)fallbackReasonCategory;
- (double)firstTxByteDelay;
- (id)firstTxByteTimeStamp;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialBytesLeftOver;
- (id)interfaceName;
- (long long)interfaceType;
- (bool)isMultipath;
- (bool)isTFOProbeSucceeded;
- (unsigned long long)minimumRTT;
- (unsigned long long)multipathConnectedSubflowCount;
- (unsigned long long)multipathPrimarySubflowInterfaceIndex;
- (unsigned long long)multipathSubflowCount;
- (id)multipathSubflowSwitchCounts;
- (long long)pathType;
- (void)setConnectionDelay:(double)arg1;
- (void)setEdgeAddress:(id)arg1;
- (void)setEdgeType:(long long)arg1;
- (void)setExceptions:(id)arg1;
- (void)setFallbackDelay:(double)arg1;
- (void)setFallbackReason:(long long)arg1;
- (void)setFirstTxByteDelay:(double)arg1;
- (void)setFirstTxByteTimeStamp:(id)arg1;
- (void)setIPType:(long long)arg1;
- (void)setInitialBytesLeftOver:(unsigned long long)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInterfaceType:(long long)arg1;
- (void)setIsMultipath:(bool)arg1;
- (void)setIsTFOProbeSucceeded:(bool)arg1;
- (void)setMinimumRTT:(unsigned long long)arg1;
- (void)setMultipathConnectedSubflowCount:(unsigned long long)arg1;
- (void)setMultipathPrimarySubflowInterfaceIndex:(unsigned long long)arg1;
- (void)setMultipathSubflowCount:(unsigned long long)arg1;
- (void)setMultipathSubflowSwitchCounts:(id)arg1;
- (void)setPathType:(long long)arg1;
- (void)setSource:(id)arg1;
- (void)setTCPInfo:(id)arg1;
- (void)setTFOSucceeded:(bool)arg1;
- (void)setTimeIntervalSinceLastUsage:(double)arg1;
- (void)setTimeToFirstByte:(double)arg1;
- (void)setTimingIntervals:(id)arg1;
- (void)setTunnelConnectionError:(long long)arg1;
- (id)source;
- (double)timeIntervalSinceLastUsage;
- (double)timeToFirstByte;
- (id)timingIntervalAtIndex:(unsigned long long)arg1 forKey:(id)arg2;
- (id)timingIntervals;
- (long long)tunnelConnectionError;

@end