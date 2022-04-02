/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDAddToContactsViewController : UINavigationController <CNContactViewControllerDelegate, DDRemoteActionViewService> {
    DDAction * _action;
    bool  _cancellable;
    CNContactViewController * _personViewController;
    <DDRemoteActionPresenter> * _proxy;
}

@property (retain) DDAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)alternateNameForContact:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (void)adaptForPresentationInPopover:(bool)arg1;
- (void)cancelPressed:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(id)arg1;
- (void)contactViewControllerForUnknownContactDidEndAddingToContacts:(id)arg1;
- (void)doneWithAddingContact;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)prepareForAction:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setCancelButtonVisible:(bool)arg1;
- (void)setCancellable:(bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
