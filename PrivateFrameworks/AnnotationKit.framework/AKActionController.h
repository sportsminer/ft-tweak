/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKActionController : NSObject {
    AKController * _controller;
}

@property AKController *controller;

- (void).cxx_destruct;
- (bool)_isSenderEnabled:(id)arg1 segment:(long long)arg2;
- (id)controller;
- (id)initWithController:(id)arg1;
- (bool)isSenderEnabled:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (void)performActionForSender:(id)arg1 segment:(long long)arg2;
- (void)setController:(id)arg1;
- (bool)validateSender:(id)arg1;
- (bool)validateSender:(id)arg1 segment:(long long)arg2;

@end
