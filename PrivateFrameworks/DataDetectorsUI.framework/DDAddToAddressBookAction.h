/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDAddToAddressBookAction : DDAddressAction

@property (nonatomic, retain) DDRemoteActionViewController *viewController;

+ (bool)actionAvailableForContact:(id)arg1;

- (void)adaptForPresentationInPopover:(bool)arg1;
- (id)contact;
- (int)interactionType;
- (void)invalidate;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)prepareViewControllerForActionController:(id)arg1;

@end