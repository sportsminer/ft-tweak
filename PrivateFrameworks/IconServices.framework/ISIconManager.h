/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISIconManager : NSObject {
    id  _iconCache;
    id  _iconRegistry;
    id  _internalQueue;
    id  _notificationIconsInvalidatedToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    id  _observers;
}

@property (readonly) ISIconCache *iconCache;
@property (retain) NSHashTable *iconRegistry;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) id notificationIconsInvalidatedToken;
@property (retain) NSHashTable *observers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleIconsInvalidatedNotification:(id)arg1;
- (id)_init;
- (void)_notifyObserversDidInvalidateIcons:(id)arg1;
- (void)_validateIcons:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)findOrRegisterIcon:(id)arg1;
- (id)iconCache;
- (id)iconRegistry;
- (id)internalQueue;
- (void)invalidateIcons:(id)arg1;
- (id)notificationIconsInvalidatedToken;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setIconRegistry:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setNotificationIconsInvalidatedToken:(id)arg1;
- (void)setObservers:(id)arg1;

@end
