/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
 */

@interface CRSCardRequest : CRSRequest <CRSCardRequesting> {
    <CRContent> * _content;
    unsigned long long  _format;
    bool  _loadsBundleServices;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <CRContent> *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long format;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadsBundleServices;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)registerService:(id)arg1;

- (void).cxx_destruct;
- (void)_loadAndRegisterBundleServices:(id /* block */)arg1;
- (void)_tryRemainingCardServices:(id)arg1 reply:(id /* block */)arg2;
- (id)content;
- (unsigned long long)format;
- (id)init;
- (id)initWithContent:(id)arg1 format:(unsigned long long)arg2;
- (bool)loadsBundleServices;
- (void)setContent:(id)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setLoadsBundleServices:(bool)arg1;
- (void)startWithReply:(id /* block */)arg1;

@end
