/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSModeAssertion : DNDModeAssertion {
    NSString * _clientIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;

+ (id)modeAssertionForRecord:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 UUID:(id)arg2 startDate:(id)arg3 details:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)makeRecord;
- (id)replacementObjectForCoder:(id)arg1;

@end
