/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptLookupRequest : SUScriptObject {
    SSLookupRequest * _request;
}

@property (retain) id authenticatesIfNeeded;
@property (copy) NSString *keyProfile;
@property long long localizationStyle;
@property (readonly) long long localizationStyleDevice;
@property (readonly) long long localizationStyleServer;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)authenticatesIfNeeded;
- (void)dealloc;
- (id)init;
- (id)keyProfile;
- (long long)localizationStyle;
- (long long)localizationStyleDevice;
- (long long)localizationStyleServer;
- (id)scriptAttributeKeys;
- (void)setAuthenticatesIfNeeded:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)setLocalizationStyle:(long long)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)startWithLookupFunction:(id)arg1;
- (id)valueForRequestParameter:(id)arg1;

@end
