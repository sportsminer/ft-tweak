/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXInfoUpdater : NSObject {
    long long  _currentUpdateGeneration;
    long long  _currentUpdatePriority;
    NSProgress * _currentUpdateProgress;
    id  _info;
    NSString * _infoKind;
    <PXInfoProvider> * _infoProvider;
    struct { 
        bool priorityForInfoRequestOfKind; 
    }  _infoProviderRespondsTo;
    <PXInfoUpdaterObserver> * _observer;
    struct { 
        bool shouldUpdate; 
    }  _observerRespondsTo;
    bool  _shouldUpdateInfo;
    bool  _updatingInfo;
}

@property (nonatomic) long long currentUpdateGeneration;
@property (nonatomic) long long currentUpdatePriority;
@property (nonatomic, retain) NSProgress *currentUpdateProgress;
@property (nonatomic, retain) id info;
@property (nonatomic, readonly, copy) NSString *infoKind;
@property (nonatomic, readonly) <PXInfoProvider> *infoProvider;
@property (nonatomic) <PXInfoUpdaterObserver> *observer;
@property (nonatomic) bool shouldUpdateInfo;
@property (getter=isUpdatingInfo, nonatomic) bool updatingInfo;

- (void).cxx_destruct;
- (void)_handleCurrentUpdateWithInfo:(id)arg1 generation:(long long)arg2;
- (void)_updateInfo;
- (void)_updateInfoIfNeeded;
- (long long)currentUpdateGeneration;
- (long long)currentUpdatePriority;
- (id)currentUpdateProgress;
- (id)info;
- (id)infoKind;
- (id)infoProvider;
- (id)init;
- (id)initWithInfoProvider:(id)arg1 infoKind:(id)arg2;
- (void)invalidateInfo;
- (bool)isUpdatingInfo;
- (id)observer;
- (void)setCurrentUpdateGeneration:(long long)arg1;
- (void)setCurrentUpdatePriority:(long long)arg1;
- (void)setCurrentUpdateProgress:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setShouldUpdateInfo:(bool)arg1;
- (void)setUpdatingInfo:(bool)arg1;
- (bool)shouldUpdateInfo;

@end
