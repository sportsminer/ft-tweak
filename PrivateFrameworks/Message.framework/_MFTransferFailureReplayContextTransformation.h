/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFTransferFailureReplayContextTransformation : MFOfflineCacheReplayContextTransformation {
    MFOfflineTransferFailureSnapshot * _snapshot;
    NSString * _temporaryID;
}

+ (bool)supportsSecureCoding;

- (void)applyToReplayContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemporaryID:(id)arg1 transferFailureSnapshot:(id)arg2;

@end
