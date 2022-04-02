/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIActivityIndicatorViewElement * _activityIndicatorElement;
    SKUIActivityIndicatorView * _activityIndicatorView;
    NSObject<OS_dispatch_source> * _delayTimer;
    SKUILayoutCache * _layoutCache;
    SKUILoadingTemplateViewElement * _templateElement;
    SKUIViewElementLayoutContext * _viewLayoutContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityIndicator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computedFrameForActivityIndicatorView;
- (id)_layoutCache;
- (void)_reloadViewStyling;
- (void)_showActivityIndicator;
- (id)_viewLayoutContext;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithActivityIndicatorElement:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
