/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYDevice : NSObject {
    bool  _hasHomeButton;
    long long  _size;
    long long  _type;
}

@property (nonatomic, readonly) bool hasHomeButton;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) long long type;

+ (id)currentDevice;

- (bool)hasHomeButton;
- (id)init;
- (long long)size;
- (long long)type;

@end
