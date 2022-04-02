/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassPreviewImageSet : PKPassImageSet {
    PKImage * _iconImage;
    PKImage * _notificationIconImage;
}

@property (nonatomic, retain) PKImage *iconImage;
@property (nonatomic, retain) PKImage *notificationIconImage;

+ (id)archiveName;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iconImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)notificationIconImage;
- (void)preheatImages;
- (void)setIconImage:(id)arg1;
- (void)setNotificationIconImage:(id)arg1;

@end
