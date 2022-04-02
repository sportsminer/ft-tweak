/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAskForTimeRequest : NSObject <NSSecureCoding> {
    NSUUID * _requestIdentifier;
    NSString * _requestedResourceIdentifier;
    NSNumber * _requestingUserDSID;
    NSString * _requestingUserDisplayName;
    NSString * _resourceDisplayName;
    NSNumber * _timeRequested;
    NSDate * _timeStamp;
    long long  _usageType;
}

@property (nonatomic, readonly, copy) NSDictionary *payload;
@property (nonatomic, retain) NSUUID *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requestedResourceIdentifier;
@property (nonatomic, retain) NSNumber *requestingUserDSID;
@property (nonatomic, copy) NSString *requestingUserDisplayName;
@property (nonatomic, copy) NSString *resourceDisplayName;
@property (nonatomic, retain) NSNumber *timeRequested;
@property (nonatomic, retain) NSDate *timeStamp;
@property (nonatomic, readonly) long long usageType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithUsageType:(long long)arg1 requestedResourceIdentifier:(id)arg2;
- (id)payload;
- (id)requestIdentifier;
- (id)requestedResourceIdentifier;
- (id)requestingUserDSID;
- (id)requestingUserDisplayName;
- (id)resourceDisplayName;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestingUserDSID:(id)arg1;
- (void)setRequestingUserDisplayName:(id)arg1;
- (void)setResourceDisplayName:(id)arg1;
- (void)setTimeRequested:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)timeRequested;
- (id)timeStamp;
- (long long)usageType;

@end
