/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTUIEnvironment : NSObject {
    double  _actionAnimationsMultiplier;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<OS_dispatch_queue> * _backgroundRenderingQueue;
    AVTCoreEnvironment * _coreEnvironment;
    bool  _deviceIsSunflower;
    AVTDeviceResourceManager * _deviceResourceManager;
    AVTCoreModel * _editorCoreModel;
    AVTInMemoryImageCache * _inMemoryImageCache;
    double  _mainScreenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _mainScreenSize;
    AVTAvatarConfigurationImageRenderer * _renderer;
    <AVTUsageTrackingSession> * _usageTrackingSession;
    long long  _userInterfaceLayoutDirection;
}

@property (nonatomic) double actionAnimationsMultiplier;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *backgroundRenderingQueue;
@property (nonatomic, readonly) AVTCoreEnvironment *coreEnvironment;
@property (nonatomic, readonly) bool deviceIsSunflower;
@property (nonatomic, readonly) AVTDeviceResourceManager *deviceResourceManager;
@property (nonatomic, readonly) AVTCoreModel *editorCoreModel;
@property (nonatomic, readonly, copy) NSURL *imageCacheStoreLocation;
@property (nonatomic, readonly, copy) NSURL *imageStoreLocation;
@property (nonatomic, readonly) AVTInMemoryImageCache *inMemoryImageCache;
@property (nonatomic, readonly, copy) id /* block */ lockProvider;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) double mainScreenScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mainScreenSize;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly, copy) id /* block */ serialQueueProvider;
@property (nonatomic, readonly, copy) NSURL *storeLocation;
@property (nonatomic, readonly) <AVTUsageTrackingSession> *usageTrackingSession;
@property (nonatomic, readonly) long long userInterfaceLayoutDirection;

+ (id)createEditorCoreModelWithLogger:(id)arg1;
+ (id)createFunCamEnvironment;
+ (id)createQueueWithQoSClass:(unsigned int)arg1 label:(const char *)arg2;
+ (id)createUsageTrackingSessionWithCoreModel:(id)arg1 serialQueueProvider:(id /* block */)arg2 logger:(id)arg3;
+ (id)defaultEnvironment;

- (void).cxx_destruct;
- (double)actionAnimationsMultiplier;
- (id)backgroundQueue;
- (id)backgroundRenderingQueue;
- (id)coreEnvironment;
- (bool)deviceIsSunflower;
- (id)deviceResourceManager;
- (id)editorCoreModel;
- (id)imageCacheStoreLocation;
- (id)imageStoreLocation;
- (id)inMemoryImageCache;
- (id)initWithCoreEnvironment:(id)arg1;
- (id /* block */)lockProvider;
- (id)logger;
- (double)mainScreenScale;
- (struct CGSize { double x1; double x2; })mainScreenSize;
- (id)notificationCenter;
- (id)renderer;
- (id /* block */)serialQueueProvider;
- (void)setActionAnimationsMultiplier:(double)arg1;
- (id)storeLocation;
- (id)usageTrackingSession;
- (long long)userInterfaceLayoutDirection;

@end
