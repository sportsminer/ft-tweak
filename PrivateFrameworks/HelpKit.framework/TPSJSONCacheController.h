/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface TPSJSONCacheController : TPSDataCacheController

+ (id)sharedInstance;

- (void)commonInit;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isURLValid:(id)arg1;
- (id)newDataCache;

@end