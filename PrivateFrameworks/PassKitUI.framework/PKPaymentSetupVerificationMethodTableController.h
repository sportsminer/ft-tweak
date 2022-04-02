/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDataSource, UITableViewDelegate> {
    unsigned long long  _selectedIndex;
    PKActivationMethodTableViewCell * _sizingCell;
    NSArray * _verificationChannels;
    PKPaymentVerificationController * _verificationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *verificationChannels;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (id)_detailTextLabelForChannel:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithVerificationController:(id)arg1;
- (id)newVerificationRequest;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setVerificationChannels:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)verificationChannels;
- (id)verificationController;

@end
