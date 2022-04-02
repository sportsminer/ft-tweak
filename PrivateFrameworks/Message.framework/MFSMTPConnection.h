/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSMTPConnection : MFConnection {
    id  _delegate;
    bool  _dislikesSaveSentMbox;
    NSString * _domainName;
    bool  _hideLoggedData;
    long long  _lastCommandTimestamp;
    MFSMTPResponse * _lastResponse;
    NSMutableData * _mdata;
    int  _originalSocketTimeout;
    NSString * _saveSentMbox;
    NSMutableArray * _serviceExtensions;
    bool  _useSaveSent;
}

- (bool)_connectUsingAccount:(id)arg1;
- (id)_dataForCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (int)_doHandshakeUsingAccount:(id)arg1;
- (int)_getReply;
- (bool)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (int)_readResponseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 isContinuation:(bool*)arg2;
- (int)_sendBytes:(const char *)arg1 length:(unsigned long long)arg2 progressHandler:(id /* block */)arg3;
- (int)_sendCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (int)_sendData:(id)arg1;
- (int)_sendData:(id)arg1 progressHandler:(id /* block */)arg2;
- (void)_setLastResponse:(id)arg1;
- (bool)_supportsExtension:(id)arg1;
- (bool)_supportsSaveSentExtension;
- (void)abort;
- (bool)authenticateUsingAccount:(id)arg1;
- (bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (bool)connectUsingAccount:(id)arg1;
- (id)dataForDataCmd;
- (id)dataForMailFrom:(id)arg1;
- (id)dataForRcptTo:(id)arg1;
- (void)dealloc;
- (id)domainName;
- (id)init;
- (id)lastResponse;
- (id)lastResponseLine;
- (int)mailFrom:(id)arg1;
- (long long)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 errorTitle:(id*)arg5 errorMessage:(id*)arg6 serverResponse:(id*)arg7 displayError:(bool*)arg8 errorCode:(int*)arg9 errorUserInfo:(id*)arg10;
- (unsigned long long)maximumMessageBytes;
- (int)noop;
- (int)quit;
- (int)rcptTo:(id)arg1;
- (int)sendBData:(id)arg1;
- (int)sendData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setUseSaveSent:(bool)arg1 toFolder:(id)arg2;
- (int)state;
- (bool)supports8BitMime;
- (bool)supportsBinaryMime;
- (bool)supportsChunking;
- (bool)supportsEnhancedStatusCodes;
- (bool)supportsOutboxCopy;
- (bool)supportsPipelining;
- (long long)timeLastCommandWasSent;

@end
