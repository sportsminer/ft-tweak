/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionSource : NSObject {
    <MRTransactionSourceDelegate> * _delegate;
    unsigned long long  _name;
    MRTransactionPacketizer * _packetizer;
    NSMutableArray * _packets;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (void)_begin;
- (void)_processMessage:(id)arg1;
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 packets:(id)arg3 delegate:(id)arg4;
- (unsigned long long)name;
- (id)playerPath;

@end
