/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUtteranceSuggestions : NSObject {
    <AFUtteranceSuggestionsDelegate> * _delegate;
    NSString * _languageCode;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _suggestedUtterances;
}

@property (nonatomic, readonly) <AFUtteranceSuggestionsDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *languageCode;

- (void).cxx_destruct;
- (id)_suggestionsFilePath;
- (id)delegate;
- (void)getSuggestedUtterancesWithCompletion:(id /* block */)arg1;
- (id)initWithLanguageCode:(id)arg1 delegate:(id)arg2;
- (id)languageCode;
- (void)setSuggestedUtterances:(id)arg1;

@end
