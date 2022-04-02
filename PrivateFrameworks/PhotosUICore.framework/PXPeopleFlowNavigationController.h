/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleFlowNavigationController : UINavigationController <PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate> {
    UIBarButtonItem * _backButton;
    UIBarButtonItem * _cancelButton;
    UIViewController<PXPeopleFlowViewController> * _currentViewController;
    UIBarButtonItem * _doneButton;
    <PXPeopleFlowController> * _flowController;
    UIBarButtonItem * _nextButton;
}

@property (nonatomic, retain) UIBarButtonItem *backButton;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) UIViewController<PXPeopleFlowViewController> *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic, retain) <PXPeopleFlowController> *flowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *nextButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateActions;
- (void)back:(id)arg1;
- (id)backButton;
- (void)cancel:(id)arg1;
- (id)cancelButton;
- (id)currentViewController;
- (void)done:(id)arg1;
- (id)doneButton;
- (id)flowController;
- (id)initWithFlowController:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)next:(id)arg1;
- (id)nextButton;
- (void)requestAdvanceToNextInFlow;
- (void)requestCancel;
- (void)setAdvanceButtonEnabled:(bool)arg1;
- (void)setBackButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setFlowController:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)viewDidLoad;

@end
