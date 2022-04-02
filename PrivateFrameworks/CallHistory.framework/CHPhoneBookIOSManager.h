/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol> {
    CNContactStore * _fContactsStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactStore *fContactsStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)get;

- (void).cxx_destruct;
- (id)fContactsStore;
- (id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(bool)arg3;
- (id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id*)arg3;
- (id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(bool)arg2;
- (id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(bool)arg3;
- (id)getPersonsNameForContact:(id)arg1;
- (id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(bool)arg3;
- (id)init;
- (bool)isABContactASuggestion;
- (void)setFContactsStore:(id)arg1;

@end
