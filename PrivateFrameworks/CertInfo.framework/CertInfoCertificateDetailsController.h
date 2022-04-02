/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateDetailsController : UITableViewController {
    <CertInfoCertificateDetailsControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    NSArray * _sectionDictionaries;
    unsigned int  _showsDoneButton;
}

@property (nonatomic) <CertInfoCertificateDetailsControllerDelegate> *delegate;
@property (nonatomic) bool showsDoneButton;

- (void).cxx_destruct;
- (void)_doneButtonPressed:(id)arg1;
- (id)_propertiesForIndexPath:(id)arg1;
- (id)_sectionsForProperties:(id)arg1;
- (id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2;
- (id)delegate;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 certificateIndex:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)showsDoneButton;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
