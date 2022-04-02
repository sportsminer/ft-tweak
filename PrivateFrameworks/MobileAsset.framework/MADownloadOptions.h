/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MADownloadOptions : NSObject <NSSecureCoding> {
    NSMutableDictionary * _additionalServerParams;
    bool  _allowsCellularAccess;
    bool  _canUseLocalCacheServer;
    bool  _discretionary;
    NSString * _sessionId;
    long long  _timeoutIntervalForResource;
}

@property (nonatomic, retain) NSMutableDictionary *additionalServerParams;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) bool canUseLocalCacheServer;
@property (nonatomic) bool discretionary;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) long long timeoutIntervalForResource;

+ (bool)supportsSecureCoding;

- (id)additionalServerParams;
- (bool)allowsCellularAccess;
- (bool)canUseLocalCacheServer;
- (void)dealloc;
- (id)description;
- (bool)discretionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)logOptions;
- (id)sessionId;
- (void)setAdditionalServerParams:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setCanUseLocalCacheServer:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimeoutIntervalForResource:(long long)arg1;
- (long long)timeoutIntervalForResource;

@end
