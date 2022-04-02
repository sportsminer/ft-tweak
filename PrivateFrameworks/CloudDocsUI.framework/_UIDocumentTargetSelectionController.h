/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentTargetSelectionController : UIViewController <_UIDocumentPickerServiceInvalidating, _UIDocumentPickerServiceViewController> {
    bool  _completedInitialDisplay;
    UINavigationController * _containedNavigationController;
    NSString * _containerName;
    _UIDocumentPickerContainerViewController * _containerViewController;
    <_UIDocumentTargetSelectionControllerDelegate> * _delegate;
    UILabel * _filesLabel;
    id  _firstFileThumbnailObservation;
    UIImageView * _iconView;
    NSArray * _itemsToMove;
    _UINavigationControllerPalette * _palette;
    unsigned long long  _targetSelectionType;
    <_UIDocumentTargetSelectionControllerDelegate> * _weak_delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDocumentTargetSelectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *itemsToMove;
@property (readonly) Class superclass;

+ (id)_loadDocumentIconForURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_loadThumbnailForURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 wantsBorder:(bool*)arg4 generatedThumbnail:(bool*)arg5;

- (void).cxx_destruct;
- (void)_commonInitItems:(id)arg1 crossContainer:(bool)arg2 sourceContainer:(id)arg3;
- (void)_setContainerViewController:(id)arg1;
- (void)_setIconViewImage:(id)arg1 border:(bool)arg2;
- (void)_setupNavigationItem;
- (void)_setupPalette;
- (void)_updatePalette;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (void)dismiss:(id)arg1;
- (long long)displayMode;
- (id)initForCopyWithItems:(id)arg1;
- (id)initForCrossContainerMoveWithItemsToMove:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemsToMove:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidate;
- (id)itemsToMove;
- (id)navControllerForPalette;
- (id)pickableTypes;
- (unsigned long long)pickerMode;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setItemsToMove:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (int)sortOrder;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end