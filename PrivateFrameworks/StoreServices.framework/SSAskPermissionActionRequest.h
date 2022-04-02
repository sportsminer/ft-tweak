/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAskPermissionActionRequest : SSRequest <SSXPCCoding> {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)URL;
- (id)copyXPCEncoding;
- (id)initWithURL:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
