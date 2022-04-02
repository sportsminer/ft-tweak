/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSelectedAudioStreamConfiguration : NSObject <NSCopying> {
    HMDAudioStreamCodecConfiguration * _configuration;
}

@property (nonatomic, retain) HMDAudioStreamCodecConfiguration *configuration;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setConfiguration:(id)arg1;

@end
