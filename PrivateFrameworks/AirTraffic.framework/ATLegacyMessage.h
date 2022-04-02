/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATLegacyMessage : NSObject {
    NSString * _dataClass;
    unsigned int  _messageId;
    unsigned long long  _messageType;
    NSString * _name;
    NSDictionary * _params;
    NSData * _payload;
    NSError * _result;
    unsigned int  _session;
    NSData * _sig;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *dataClass;
@property (nonatomic) unsigned int messageId;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSError *result;
@property (nonatomic) unsigned int sessionNumber;
@property (nonatomic, retain) NSData *sig;
@property (nonatomic) double timestamp;

// Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic

+ (id)_messageTypeString:(unsigned long long)arg1;
+ (unsigned int)currentSessionNumber;
+ (id)messageFromData:(id)arg1;
+ (id)messageFromDictionary:(id)arg1;
+ (id)messageFromHeader:(id)arg1 withParams:(id)arg2 andPayload:(id)arg3;
+ (id)messageWithName:(id)arg1 parameters:(id)arg2;
+ (id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned int)arg3;
+ (unsigned int)nextSessionNumber;
+ (void)setSessionNumber:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)dataClass;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)messageId;
- (unsigned long long)messageType;
- (id)name;
- (id)parameterForKey:(id)arg1;
- (id)parameters;
- (id)partialResponseWithParameters:(id)arg1;
- (id)payload;
- (id)responseWithResultError:(id)arg1 parameters:(id)arg2;
- (id)result;
- (unsigned int)sessionNumber;
- (void)setDataClass:(id)arg1;
- (void)setMessageId:(unsigned int)arg1;
- (void)setMessageType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSessionNumber:(unsigned int)arg1;
- (void)setSig:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sig;
- (double)timestamp;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

+ (id)signedMessageWithName:(id)arg1 parameters:(id)arg2 sesssion:(unsigned int)arg3;

@end
