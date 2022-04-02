/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionMenuController : NSObject <PXActionPerformerDelegate, PXChangeObserver> {
    NSArray * _actions;
    PXPhotoKitAssetActionManager * _assetActionManager;
    PXPhotoKitAssetCollectionActionManager * _assetCollectionActionManager;
    <PXActionMenuDelegate> * _delegate;
    NSSet * _disabledActionTypes;
    NSSet * _excludedActionTypes;
    struct { 
        bool action; 
    }  _needsUpdateFlags;
    PHFetchResult * _people;
    PXCMMSendBackSuggestionSource * _sendBackSuggestionSource;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, readonly) PXPhotoKitAssetActionManager *assetActionManager;
@property (nonatomic, readonly) PXPhotoKitAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXActionMenuDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *disabledActionTypes;
@property (nonatomic, copy) NSSet *excludedActionTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *people;
@property (nonatomic, retain) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableActionTypes;
- (void)_invalidateActions;
- (void)_updateActionsIfNeeded;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (id)actions;
- (id)assetActionManager;
- (id)assetCollectionActionManager;
- (id)delegate;
- (id)disabledActionTypes;
- (id)excludedActionTypes;
- (id)init;
- (id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)people;
- (id)sendBackSuggestionSource;
- (void)setActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledActionTypes:(id)arg1;
- (void)setExcludedActionTypes:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setSendBackSuggestionSource:(id)arg1;

@end
