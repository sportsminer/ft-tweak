/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPControlConnection : NSObject {
    unsigned long long  _flowIdentifier;
}

@property (readonly) unsigned long long flowIdentifier;

- (void)fetchConnectionInfoWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)flowIdentifier;
- (id)initFromConnection:(id)arg1;
- (id)initFromMetadata:(id)arg1;
- (id)initFromNWConnection:(id)arg1;
- (id)initFromStream:(id)arg1;
- (id)initFromTask:(id)arg1;

@end
