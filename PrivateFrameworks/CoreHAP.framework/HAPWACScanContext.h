/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanContext : HMFObject {
    id /* block */  _completion;
    HAPWACScanner * _originator;
    struct __CFRunLoop { } * _runLoop;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) HAPWACScanner *originator;
@property (nonatomic) struct __CFRunLoop { }*runLoop;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)dealloc;
- (id)originator;
- (struct __CFRunLoop { }*)runLoop;
- (void)setCompletion:(id /* block */)arg1;
- (void)setOriginator:(id)arg1;
- (void)setRunLoop:(struct __CFRunLoop { }*)arg1;

@end
