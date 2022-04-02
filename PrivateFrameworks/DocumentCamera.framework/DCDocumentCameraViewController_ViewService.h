/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCDocumentCameraViewController_ViewService : DCDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController> {
    BKSAccelerometer * _accelerometer;
    _UIResilientRemoteViewContainerViewController * _childViewController;
    DCDocumentCameraViewServiceSession * _viewServiceSession;
}

@property (nonatomic, retain) BKSAccelerometer *accelerometer;
@property (setter=setChildViewController:, nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=remoteViewController, nonatomic, readonly) DCDocumentCameraRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) DCDocumentCameraViewServiceSession *viewServiceSession;
@property (getter=viewServiceViewController, nonatomic, readonly) <DCDocumentCameraViewServiceViewController> *viewServiceViewController;

- (void).cxx_destruct;
- (id)accelerometer;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (id)childViewController;
- (void)dealloc;
- (void)didCancel;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)dismiss;
- (id)initWithDelegate:(id)arg1;
- (id)remoteViewController;
- (void)setAccelerometer:(id)arg1;
- (void)setChildViewController:(id)arg1;
- (void)setViewServiceSession:(id)arg1;
- (void)viewDidLoad;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)viewServiceSession;
- (id)viewServiceViewController;

@end
