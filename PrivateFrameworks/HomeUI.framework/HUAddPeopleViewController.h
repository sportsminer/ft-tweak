/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAddPeopleViewController : UIViewController <CNContactPickerDelegate, HFContactControllerDelegate, IDSBatchIDQueryControllerDelegate, MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray * _additionalAutoCompleteResults;
    bool  _addressBookAccessDenied;
    NSArray * _autoCompleteResults;
    MFComposeRecipientTextView * _composeView;
    NSLayoutConstraint * _composeViewBottomConstraint;
    NSArray * _constraints;
    HFContactController * _contactsController;
    <HUAddPeopleViewControllerDelegate> * _delegate;
    UIColor * _effectiveTintColor;
    NSArray * _familyMembers;
    HMHome * _home;
    NSNumber * _lastSearchID;
    MFContactsSearchManager * _searchManager;
    UIView * _separatorView;
    bool  _showingAutoCompleteResults;
    UIActivityIndicatorView * _spinner;
    unsigned long long  _state;
    IDSBatchIDQueryController * _statusQueryController;
    NSTimer * _statusQueryDebounceTimer;
    UITableView * _tableView;
    NSString * _unatomizedAddress;
}

@property (nonatomic, retain) NSMutableArray *additionalAutoCompleteResults;
@property (nonatomic) bool addressBookAccessDenied;
@property (nonatomic, retain) NSArray *autoCompleteResults;
@property (nonatomic, retain) MFComposeRecipientTextView *composeView;
@property (nonatomic, retain) NSLayoutConstraint *composeViewBottomConstraint;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) HFContactController *contactsController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAddPeopleViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *effectiveTintColor;
@property (nonatomic, retain) NSArray *familyMembers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSNumber *lastSearchID;
@property (nonatomic, retain) MFContactsSearchManager *searchManager;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic) bool showingAutoCompleteResults;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) IDSBatchIDQueryController *statusQueryController;
@property (nonatomic, retain) NSTimer *statusQueryDebounceTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) NSString *unatomizedAddress;

- (void).cxx_destruct;
- (id)IDSDestinationForRecipient:(id)arg1;
- (id)additionalAutoCompleteResults;
- (bool)addressBookAccessDenied;
- (id)autoCompleteResults;
- (void)cancelButtonPressed:(id)arg1;
- (id)composeRecipientForAddress:(id)arg1;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (id)composeView;
- (id)composeViewBottomConstraint;
- (id)constraints;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)contactController:(id)arg1 didFinishDownloadingFamilyMemberAvatar:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactsController;
- (void)dealloc;
- (id)delegate;
- (id)effectiveTintColor;
- (id)familyMembers;
- (void)finishedSearchingForAutocompleteResults;
- (id)home;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)lastSearchID;
- (void)lookupIDSDestinations:(id)arg1;
- (void)lookupVisibleRecipients;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)recipientsWithStatusPassingTest:(id /* block */)arg1;
- (id)requiredKeyDescriptors;
- (void)scheduleDelayedLookupVisibleRecipients;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchManager;
- (void)sendButtonPressed:(id)arg1;
- (void)sendInvites;
- (id)separatorView;
- (void)setAdditionalAutoCompleteResults:(id)arg1;
- (void)setAddressBookAccessDenied:(bool)arg1;
- (void)setAutoCompleteResults:(id)arg1;
- (void)setComposeView:(id)arg1;
- (void)setComposeViewBottomConstraint:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContactsController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectiveTintColor:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLastSearchID:(id)arg1;
- (void)setSearchManager:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setShowingAutoCompleteResults:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStatusQueryController:(id)arg1;
- (void)setStatusQueryDebounceTimer:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setUnatomizedAddress:(id)arg1;
- (bool)showingAutoCompleteResults;
- (id)spinner;
- (unsigned long long)state;
- (id)statusQueryController;
- (id)statusQueryDebounceTimer;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tintColorForRecipient:(id)arg1;
- (id)unatomizedAddress;
- (void)updateStateDependentUI;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
