/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *data;
@property (nonatomic) int identifier;
@property (nonatomic) long long type;

- (id)data;
- (int)identifier;
- (id)initWithType:(long long)arg1;
- (void)setData:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
