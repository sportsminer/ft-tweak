/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost> {
    NSExtension * _extension;
    <NSCopying><NSObject> * _extensionRequestIdentifier;
    _UIScreenRoutePickerViewController * _publicController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying><NSObject> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UIScreenRoutePickerViewController *publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_dismissViewController;
- (id)extension;
- (id)extensionRequestIdentifier;
- (void)invalidate;
- (id)publicController;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPublicController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
