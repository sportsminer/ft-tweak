/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTCategoriesRequest : YTXMLHTTPRequest {
    NSMutableArray * _categories;
    id  _delegate;
    bool  _responseIndicatesAuthenticationFailure;
}

- (id)_categoriesURL;
- (void)clearDelegate;
- (void)dealloc;
- (void)didAuthenticate:(id)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)init;
- (void)loadRequest:(id)arg1;
- (int)parseData:(id)arg1;
- (bool)receivedValidResponse:(id)arg1;
- (void)requestCategoriesWithDelegate:(id)arg1;

@end
