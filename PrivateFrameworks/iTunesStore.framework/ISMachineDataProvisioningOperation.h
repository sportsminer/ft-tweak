/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISMachineDataProvisioningOperation : ISOperation {
    unsigned long long  _accountID;
    bool  _allowsBootstrapCellularData;
    bool  _hidesServerDrivenDialogs;
    NSData * _inputData;
    long long  _protocolVersion;
    NSString * _userAgent;
}

@property bool allowsBootstrapCellularData;
@property bool hidesServerDrivenDialogs;
@property long long protocolVersion;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (bool)_finishProvisioningWithResponse:(id)arg1 sessionID:(unsigned int)arg2 error:(id*)arg3;
- (id)_newFinishProvisioningOperationWithData:(id)arg1;
- (bool)allowsBootstrapCellularData;
- (bool)hidesServerDrivenDialogs;
- (id)initWithAccountIdentifier:(unsigned long long)arg1 provisioningData:(id)arg2;
- (long long)protocolVersion;
- (void)run;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setHidesServerDrivenDialogs:(bool)arg1;
- (void)setProtocolVersion:(long long)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end
