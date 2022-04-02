/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate> {
    unsigned long long  _bufferSize;
    double  _connectionTimeoutInterval;
    <CATRemoteConnectionDelegate> * _delegate;
    NSInputStream * _inputStream;
    NSString * _name;
    NSOutputStream * _outputStream;
    CATRemoteConnectionSocketOptions * _socketOptions;
    bool  _usesSSL;
    NSObject<OS_dispatch_source> * mConnectionTimeoutTimer;
    NSError * mInterruptionError;
    CATHTTPMessageParser * mMessageParser;
    long long  mPeerTrustState;
    NSMutableArray * mPendingSendContexts;
    NSMutableData * mReadBuffer;
    long long  mState;
    CATSerialOperationQueue * mStreamEventQueue;
    NSArray * mTrustedCertificates;
}

@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) double connectionTimeoutInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CATRemoteConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (nonatomic, readonly) struct __SecTrust { }*peerTrust;
@property (nonatomic, copy) CATRemoteConnectionSocketOptions *socketOptions;
@property (readonly) Class superclass;
@property (nonatomic) bool usesSSL;

+ (void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2;
+ (void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2 bufferSize:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (unsigned long long)bufferSize;
- (void)close;
- (void)configureStreamSocketOptions;
- (void)connectionDidInterruptWithError:(id)arg1;
- (void)connectionDidReceiveData;
- (void)connectionShouldSendData;
- (void)connectionTimedOut;
- (double)connectionTimeoutInterval;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidClose;
- (void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidOpen;
- (void)delegateDidReceiveData:(id)arg1;
- (void)delegateDidReceiveDataRequestWithURL:(id)arg1;
- (void)delegateDidReceiveStreamData:(id)arg1 moreComing:(bool)arg2;
- (void)delegateDidSecure;
- (void)delegateDidSendData:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidSendDataWithStream:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidWriteDataForContextIfNeeded:(id)arg1;
- (void)delegateDidWriteDataFromStream:(id)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)delegateWillSecure;
- (id)description;
- (void)enqueueSendContext:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 bufferSize:(unsigned long long)arg3;
- (id)initWithNetService:(id)arg1;
- (id)inputStream;
- (void)messageParser:(id)arg1 didParseRequestData:(id)arg2;
- (void)messageParser:(id)arg1 didParseRequestWithURL:(id)arg2;
- (void)messageParser:(id)arg1 didParseResponseData:(id)arg2 moreComing:(bool)arg3;
- (id)name;
- (void)open;
- (id)outputStream;
- (struct __SecTrust { }*)peerTrust;
- (void)scheduleStreams;
- (void)secureUsingClientIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (bool)secureUsingIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2 isServer:(bool)arg3;
- (void)secureUsingServerIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (void)sendData:(id)arg1 userInfo:(id)arg2;
- (void)sendDataWithStream:(id)arg1 length:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)sendDidFail:(id)arg1 withError:(id)arg2;
- (void)sendDidSucceed:(id)arg1;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setConnectionTimeoutInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setSocketOptions:(id)arg1;
- (void)setUsesSSL:(bool)arg1;
- (id)socketOptions;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(bool)arg1;
- (void)tryEvaluatingPeerTrustWithStream:(id)arg1;
- (bool)trySendingDataWithContext:(id)arg1 error:(id*)arg2;
- (void)unscheduleStreams;
- (bool)usesSSL;

@end
