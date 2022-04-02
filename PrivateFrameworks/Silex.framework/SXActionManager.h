/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionManager : NSObject <SXActionManager> {
    <SXActionActivityManager> * _activityManager;
    SXActionManagerPreview * _currentPreview;
    <SXActionViewManager> * _viewManager;
}

@property (nonatomic, readonly) <SXActionActivityManager> *activityManager;
@property (nonatomic, retain) SXActionManagerPreview *currentPreview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXActionViewManager> *viewManager;

- (void).cxx_destruct;
- (id)activityManager;
- (void)commitPreviewViewController:(id)arg1;
- (id)currentPreview;
- (id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2;
- (void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 mode:(unsigned long long)arg5;
- (id)previewViewControllerForAction:(id)arg1;
- (void)setCurrentPreview:(id)arg1;
- (id)viewManager;

@end
