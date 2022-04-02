/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetAirPlayRouteRequest : DMFTaskRequest {
    NSString * _password;
    NSString * _routeUID;
    bool  _suppressPasscodePrompt;
}

@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *routeUID;
@property (nonatomic) bool suppressPasscodePrompt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)password;
- (id)routeUID;
- (void)setPassword:(id)arg1;
- (void)setRouteUID:(id)arg1;
- (void)setSuppressPasscodePrompt:(bool)arg1;
- (bool)suppressPasscodePrompt;

@end
