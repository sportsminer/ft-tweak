/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMarkupCellContext : SUItemCellContext {
    long long  _pendingWebViewLoads;
    NSString * _stylesheet;
    struct __CFDictionary { } * _webViewCache;
    double  _webViewWidth;
}

@property (nonatomic, retain) NSString *stylesheet;
@property (nonatomic) double webViewWidth;

- (void)dealloc;
- (void)setStylesheet:(id)arg1;
- (void)setWebViewWidth:(double)arg1;
- (id)stylesheet;
- (void)webViewDidFinishLoading:(id)arg1;
- (id)webViewForMarkup:(id)arg1;
- (double)webViewWidth;

@end
