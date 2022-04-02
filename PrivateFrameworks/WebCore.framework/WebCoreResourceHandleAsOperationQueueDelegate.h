/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate> {
    bool  m_boolResult;
    struct RetainPtr<NSCachedURLResponse> { 
        void *m_ptr; 
    }  m_cachedResponseResult;
    struct ResourceHandle { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal {} *x_1_2_1; } x_3_1_1; } x3; } * m_handle;
    struct MessageQueue<WTF::Function<void ()> >={Lock={Atomic<unsigned char>={atomic<unsigned char>=AC {} * m_messageQueue;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                unsigned char __a_; 
            } value; 
        } m_byte; 
    }  m_mutex;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    }  m_requestResult;
    struct optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > > { 
        bool init_; 
        union storage_t<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > > { 
            unsigned char dummy_; 
            struct HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > { 
                struct HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > >, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > { 
                    struct RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > {} *m_table; 
                    unsigned int m_tableSize; 
                    unsigned int m_tableSizeMask; 
                    unsigned int m_keyCount; 
                    unsigned int m_deletedCount; 
                } m_impl; 
            } value_; 
        } storage_; 
    }  m_scheduledPairs;
    NSObject<OS_dispatch_semaphore> * m_semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callFunctionOnMainThread:(struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {}*)arg1;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)detachHandle;
- (id)initWithHandle:(struct ResourceHandle { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 messageQueue:(struct MessageQueue<WTF::Function<void ()> >={Lock={Atomic<unsigned char>={atomic<unsigned char>=AC {}*)arg2;

@end