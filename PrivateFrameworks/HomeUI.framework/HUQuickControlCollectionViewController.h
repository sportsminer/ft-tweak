/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController <HUQuickControlCollectionViewDelegateLayout, HUQuickControlContentCharacteristicWriting, HUQuickControlInteractiveContentContaining, HUQuickControlItemUpdating> {
    HUQuickControlContentCharacteristicWritingUpdateAdapter * _characteristicWritingAdapter;
    <HUQuickControlContentCharacteristicWritingDelegate> * _characteristicWritingDelegate;
    bool  _disableItemUpdatesForOverrideCharacteristicValueChanges;
    HUQuickControlCollectionViewControllerLayoutOptions * _layoutOptions;
    NSArray * _preferredFrameConstraints;
    <HULayoutAnchorProviding> * _preferredFrameLayoutGuide;
    HULayoutContainerView * _preferredFrameLayoutObservingView;
    <HUQuickControlContentHosting> * _quickControlHost;
    bool  _userInteractionEnabled;
    NSMapTable * _viewControllersKeyedByItem;
}

@property (nonatomic, readonly, copy) NSSet *affectedCharacteristics;
@property (nonatomic, readonly) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (nonatomic) <HUQuickControlContentCharacteristicWritingDelegate> *characteristicWritingDelegate;
@property (nonatomic, retain) HUQuickControlCollectionViewLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableItemUpdatesForOverrideCharacteristicValueChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUQuickControlCollectionItemManager *itemManager;
@property (nonatomic, retain) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (nonatomic, copy) NSArray *preferredFrameConstraints;
@property (nonatomic, retain) <HULayoutAnchorProviding> *preferredFrameLayoutGuide;
@property (nonatomic, retain) HULayoutContainerView *preferredFrameLayoutObservingView;
@property (nonatomic) <HUQuickControlContentHosting> *quickControlHost;
@property (readonly) Class superclass;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) NSMapTable *viewControllersKeyedByItem;

- (void).cxx_destruct;
- (id)_allContentViewControllers;
- (id)_allViewControllers;
- (id)_controlItemsForItem:(id)arg1;
- (id)_gridSectionSettingsForItemSize:(unsigned long long)arg1;
- (void)_propagateInteractiveContentStateForChildViewControllers:(id)arg1;
- (void)_reconfigureLayoutOptions;
- (void)_reconfigurePreferredFrameConstraints;
- (id)_supplementarySectionSettingsForItemSize:(unsigned long long)arg1;
- (unsigned long long)_titlePositionForItem:(id)arg1;
- (void)_updatePreferredLayoutAreaInset;
- (id)_viewControllerForItem:(id)arg1;
- (id)affectedCharacteristics;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)characteristicWritingAdapter;
- (id)characteristicWritingDelegate;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (bool)disableItemUpdatesForOverrideCharacteristicValueChanges;
- (id)initWithItemManager:(id)arg1;
- (id)intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2;
- (bool)isUserInteractionEnabled;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)layoutOptions;
- (void)loadView;
- (id)overrideValueForCharacteristic:(id)arg1;
- (id)preferredFrameConstraints;
- (id)preferredFrameLayoutGuide;
- (id)preferredFrameLayoutObservingView;
- (id)quickControlHost;
- (void)quickControlItemHost:(id)arg1 didUpdateVisibility:(bool)arg2;
- (void)setCharacteristicWritingDelegate:(id)arg1;
- (void)setDisableItemUpdatesForOverrideCharacteristicValueChanges:(bool)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setPreferredFrameConstraints:(id)arg1;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (void)setPreferredFrameLayoutObservingView:(id)arg1;
- (void)setQuickControlHost:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)viewControllersKeyedByItem;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;

@end
