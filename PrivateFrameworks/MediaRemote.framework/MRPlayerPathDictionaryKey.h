/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlayerPathDictionaryKey : NSObject <NSCopying> {
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (id)dictionaryKeyWithPlayerPath:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPlayerPath:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)playerPath;

@end