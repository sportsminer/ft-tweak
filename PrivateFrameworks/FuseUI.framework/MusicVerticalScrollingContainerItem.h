/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerItem : NSObject <NSCoding> {
    UIView * _view;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)verticalScrollingContainerWithView:(id)arg1;
+ (id)verticalScrollingContainerWithViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_handleContentScrollViewDidChangeNotification:(id)arg1;
- (void)_registerForContentScrollViewDidChangeNotification;
- (void)_unregisterForContentScrollViewDidChangeNotification;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)view;
- (id)viewController;

@end
