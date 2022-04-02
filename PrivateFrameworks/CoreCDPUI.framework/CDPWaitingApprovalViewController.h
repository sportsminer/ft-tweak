/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPWaitingApprovalViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    UIButton * _escapeButton;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    UIActivityIndicatorView * _spinner;
    UILabel * _waitingLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)escapeOfferSelectedWithOption:(id)arg1;
- (id)initWithEscapeOffer:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)remoteApprovalSucceeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
