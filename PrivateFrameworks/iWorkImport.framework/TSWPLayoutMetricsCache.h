/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLayoutMetricsCache : NSObject <TSWPStorageParagraphObserver> {
    struct vector<TSWPParagraphMetrics, std::__1::allocator<TSWPParagraphMetrics> > { 
        struct TSWPParagraphMetrics {} *__begin_; 
        struct TSWPParagraphMetrics {} *__end_; 
        struct __compressed_pair<TSWPParagraphMetrics *, std::__1::allocator<TSWPParagraphMetrics> > { 
            struct TSWPParagraphMetrics {} *__value_; 
        } __end_cap_; 
    }  _paragraphMetrics;
    TSWPStorage * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;
- (struct TSWPParagraphMetrics { bool x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; unsigned long long x3; double x4; }*)paragraphMetricsForParagraphAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)storage:(id)arg1 didChangeParagraphsInIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)storage:(id)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)storage:(id)arg1 didInsertParagraphsInIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
