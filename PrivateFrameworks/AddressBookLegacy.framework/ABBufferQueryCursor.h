/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABBufferQueryCursor : NSObject {
    unsigned long long  _blobBytesWritten;
    unsigned long long  _blobLength;
    int  _contactLinkUUIDColumn;
    int  _contactPreferredForImageColumn;
    unsigned long long  _countOfContactsInBuffer;
    long long  _currentMultivalue;
    int  _currentMultivalueIdentifier;
    int  _currentPropertyID;
    int  _currentRecordID;
    bool  _hasFoundAnyImageDataForCurrentContact;
    struct sqlite3_blob { } * _incompleteBlob;
    CNManagedConfiguration * _managedConfiguration;
    unsigned long long  _maxBufferSize;
    unsigned long long  _maxContactsPerBatch;
    int  _multivalueEntryKeyColumn;
    int  _multivalueEntryValueColumn;
    int  _multivalueIdentifierColumn;
    int  _multivalueLabelColumn;
    int  _multivaluePropertyIDColumn;
    int  _multivalueUUIDColumn;
    int  _multivalueValueColumn;
    NSMutableData * _mutableData;
    int  _personLinkColumn;
    ABBufferQuery * _query;
    long long  _resumeToken;
}

@property (nonatomic) unsigned long long blobBytesWritten;
@property (nonatomic) unsigned long long blobLength;
@property (nonatomic) int contactLinkUUIDColumn;
@property (nonatomic) int contactPreferredForImageColumn;
@property (nonatomic) unsigned long long countOfContactsInBuffer;
@property (nonatomic) long long currentMultivalue;
@property (nonatomic) int currentMultivalueIdentifier;
@property (nonatomic) int currentPropertyID;
@property (nonatomic) int currentRecordID;
@property (nonatomic) bool hasFoundAnyImageDataForCurrentContact;
@property (nonatomic) struct sqlite3_blob { }*incompleteBlob;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic) unsigned long long maxBufferSize;
@property (nonatomic) unsigned long long maxContactsPerBatch;
@property (nonatomic) int multivalueEntryKeyColumn;
@property (nonatomic) int multivalueEntryValueColumn;
@property (nonatomic) int multivalueIdentifierColumn;
@property (nonatomic) int multivalueLabelColumn;
@property (nonatomic) int multivaluePropertyIDColumn;
@property (nonatomic) int multivalueUUIDColumn;
@property (nonatomic) int multivalueValueColumn;
@property (nonatomic, retain) NSMutableData *mutableData;
@property (nonatomic) int personLinkColumn;
@property (nonatomic, readonly) ABBufferQuery *query;
@property (nonatomic) long long resumeToken;

- (unsigned long long)blobBytesWritten;
- (unsigned long long)blobLength;
- (int)contactLinkUUIDColumn;
- (int)contactPreferredForImageColumn;
- (unsigned long long)countOfContactsInBuffer;
- (long long)currentMultivalue;
- (int)currentMultivalueIdentifier;
- (int)currentPropertyID;
- (int)currentRecordID;
- (void)dealloc;
- (void)fetchNextBatchWithReply:(id /* block */)arg1;
- (bool)hasFoundAnyImageDataForCurrentContact;
- (struct sqlite3_blob { }*)incompleteBlob;
- (id)initWithAddressBook:(void*)arg1 predicate:(id)arg2 propertyIdentifierSet:(struct __CFSet { }*)arg3 includeLinkedContacts:(bool)arg4 sortOrder:(unsigned int)arg5 suggestedContactsPerBatch:(unsigned long long)arg6 managedConfiguration:(id)arg7;
- (id)initWithAddressBook:(void*)arg1 query:(id)arg2 queryBinder:(id /* block */)arg3 propertyIdentifierSet:(struct __CFSet { }*)arg4 includeLinkedContacts:(bool)arg5 sortOrder:(unsigned int)arg6 suggestedContactsPerBatch:(unsigned long long)arg7 managedConfiguration:(id)arg8;
- (id)initWithQuery:(id)arg1 batchSize:(unsigned long long)arg2 managedConfiguration:(id)arg3;
- (id)managedConfiguration;
- (unsigned long long)maxBufferSize;
- (unsigned long long)maxContactsPerBatch;
- (int)multivalueEntryKeyColumn;
- (int)multivalueEntryValueColumn;
- (int)multivalueIdentifierColumn;
- (int)multivalueLabelColumn;
- (int)multivaluePropertyIDColumn;
- (int)multivalueUUIDColumn;
- (int)multivalueValueColumn;
- (id)mutableData;
- (int)personLinkColumn;
- (id)query;
- (long long)resumeToken;
- (void)setBlobBytesWritten:(unsigned long long)arg1;
- (void)setBlobLength:(unsigned long long)arg1;
- (void)setContactLinkUUIDColumn:(int)arg1;
- (void)setContactPreferredForImageColumn:(int)arg1;
- (void)setCountOfContactsInBuffer:(unsigned long long)arg1;
- (void)setCurrentMultivalue:(long long)arg1;
- (void)setCurrentMultivalueIdentifier:(int)arg1;
- (void)setCurrentPropertyID:(int)arg1;
- (void)setCurrentRecordID:(int)arg1;
- (void)setHasFoundAnyImageDataForCurrentContact:(bool)arg1;
- (void)setIncompleteBlob:(struct sqlite3_blob { }*)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setMaxBufferSize:(unsigned long long)arg1;
- (void)setMaxContactsPerBatch:(unsigned long long)arg1;
- (void)setMultivalueEntryKeyColumn:(int)arg1;
- (void)setMultivalueEntryValueColumn:(int)arg1;
- (void)setMultivalueIdentifierColumn:(int)arg1;
- (void)setMultivalueLabelColumn:(int)arg1;
- (void)setMultivaluePropertyIDColumn:(int)arg1;
- (void)setMultivalueUUIDColumn:(int)arg1;
- (void)setMultivalueValueColumn:(int)arg1;
- (void)setMutableData:(id)arg1;
- (void)setPersonLinkColumn:(int)arg1;
- (void)setResumeToken:(long long)arg1;

@end
