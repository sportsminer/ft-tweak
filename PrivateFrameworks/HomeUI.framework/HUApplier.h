/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUApplier : NSObject {
    NSMutableArray * _applierBlocks;
    NSMutableArray * _completionBlocks;
    double  _progress;
    unsigned long long  _state;
}

@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) unsigned long long state;

+ (void)registerStandaloneApplier:(id)arg1;
+ (void)unregisterStandaloneApplier:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasCompleted;
- (void)addApplierBlock:(id /* block */)arg1;
- (void)addCompletionBlock:(id /* block */)arg1;
- (bool)cancel;
- (bool)complete:(bool)arg1;
- (id)init;
- (bool)isInteractive;
- (double)progress;
- (bool)start;
- (unsigned long long)state;
- (void)updateProgress:(double)arg1;

@end
