/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSBaseTemplateViewController : UIViewController <CPBaseTemplateProviding, CPSBaseTemplateViewController, CPSButtonDelegate> {
    CPTemplate * _associatedTemplate;
    bool  _didDisappear;
    bool  _isPopping;
    <CPTemplateDelegate> * _templateDelegate;
    <CPSTemplateViewControllerDelegate> * _viewControllerDelegate;
}

@property (nonatomic, retain) CPTemplate *associatedTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisappear;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPopping;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic) <CPSTemplateViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (id)_barButtonItemForIdentifier:(id)arg1;
- (void)_cps_viewControllerWasPopped;
- (void)_dismissTemplateViewController;
- (id)associatedTemplate;
- (bool)didDisappear;
- (void)didSelectButton:(id)arg1;
- (id)initWithTemplate:(id)arg1 templateDelegate:(id)arg2;
- (bool)isPopping;
- (void)setAssociatedTemplate:(id)arg1;
- (void)setBarButton:(id)arg1 image:(id)arg2;
- (void)setBarButton:(id)arg1 title:(id)arg2;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setDidDisappear:(bool)arg1;
- (void)setIsPopping:(bool)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (id)templateDelegate;
- (id)viewControllerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
