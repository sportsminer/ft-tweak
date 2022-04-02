/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVGratisRequestBody : NSObject <NSCopying> {
    NSNumber * _accountID;
    NSMutableDictionary * _additionalParameters;
    NSArray * _applications;
    bool  _backgroundRequest;
    NSArray * _bundleIdentifiers;
    NSArray * _itemIdentifiers;
    long long  _style;
}

@property (nonatomic, readonly) NSData *JSONBodyData;
@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSArray *applications;
@property (getter=isBackgroundRequest, nonatomic) bool backgroundRequest;
@property (nonatomic, readonly) NSMutableDictionary *bodyDictionary;
@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic, copy) NSArray *itemIdentifiers;
@property (nonatomic, readonly) NSData *propertyListBodyData;
@property (nonatomic, readonly) long long requestStyle;

- (void).cxx_destruct;
- (id)JSONBodyData;
- (id)accountIdentifier;
- (id)applications;
- (id)bodyDictionary;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithRequestStyle:(long long)arg1;
- (bool)isBackgroundRequest;
- (id)itemIdentifiers;
- (id)propertyListBodyData;
- (long long)requestStyle;
- (void)setAccountIdentifier:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setBackgroundRequest:(bool)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setValue:(id)arg1 forBodyParameter:(id)arg2;

@end
