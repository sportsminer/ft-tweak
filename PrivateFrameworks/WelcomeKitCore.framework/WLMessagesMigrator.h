/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMessagesMigrator : WLMigrationWebService {
    NSString * _accountGuid;
    struct sqlite3 { } * _database;
}

+ (id)_attachmentPersistentPathForGuid:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 uti:(id)arg4;
+ (id)contentType;

- (void).cxx_destruct;
- (bool)_beginTransaction;
- (id)_chatAccountIDWithMessage:(id)arg1;
- (id)_chatAccountLoginWithMessage:(id)arg1;
- (id)_chatDisplayNameWithMessage:(id)arg1;
- (id)_chatGUIDWithGroupRoomName:(id)arg1;
- (id)_chatGUIDWithNonGroupMessage:(id)arg1;
- (id)_chatGroupIDWithNonGroupMessage:(id)arg1;
- (long long)_chatIDForHandleIDs:(id)arg1 groupRoomName:(id)arg2 groupID:(id)arg3 message:(id)arg4;
- (id)_chatIdentifierWithNonGroupMessage:(id)arg1;
- (id)_chatLastAddressedHandleWithMessage:(id)arg1;
- (id)_chatPropertiesDataWithMessage:(id)arg1;
- (id)_chatServiceWithMessage:(id)arg1;
- (long long)_chatStateWithMessage:(id)arg1;
- (long long)_chatStyleWithMessage:(id)arg1;
- (bool)_commitTransaction;
- (id)_databaseFilename;
- (long long)_handleIDFromNonGroupMessageHandleIDs:(id)arg1;
- (id)_handleIDsForMessage:(id)arg1;
- (bool)_insertChatHandleJoinRowWithChatID:(long long)arg1 handleID:(long long)arg2 duplicateMightExist:(bool)arg3;
- (bool)_insertChatMessageJoinRowWithChatID:(long long)arg1 messageID:(long long)arg2;
- (bool)_insertMessage:(id)arg1;
- (bool)_insertMessageAttachmentJoinRowWithMessageID:(long long)arg1 attachmentID:(long long)arg2;
- (long long)_insertMessageRowWithMessage:(id)arg1 handleIDs:(id)arg2 groupRoomName:(id)arg3;
- (long long)_insertRowWithAttachment:(id)arg1 filePath:(id)arg2 forMessage:(id)arg3;
- (id)_messageAccountGUIDWithMessage:(id)arg1;
- (id)_messageAccountWithMessage:(id)arg1;
- (id)_messageAttributedBodyDataWithMessage:(id)arg1;
- (long long)_messageDateDeliveredWithMessage:(id)arg1;
- (long long)_messageDateReadWithMessage:(id)arg1;
- (long long)_messageDateWithMessage:(id)arg1;
- (long long)_messageErrorWithMessage:(id)arg1;
- (id)_messageGroupTitleWithMessage:(id)arg1;
- (bool)_messageIsFromMeWithMessage:(id)arg1;
- (id)_messageServiceCenterWithMessage:(id)arg1;
- (id)_messageServiceWithMessage:(id)arg1;
- (id)_messageSubjectWithMessage:(id)arg1;
- (long long)_messageVersionWithMessage:(id)arg1;
- (bool)_openDatabase;
- (id)_otherPartyAddressWithNonGroupMessage:(id)arg1;
- (id)_ourAddressWithMessage:(id)arg1;
- (bool)_performSimpleQuery:(id)arg1;
- (bool)_rollbackTransaction;
- (long long)_senderHandleIDFromReceviedGroupMessageHandleIDs:(id)arg1;
- (id)_serviceStringWithMessage:(id)arg1;
- (id)_sortedHandleIDs:(id)arg1;
- (id)_uncanonicalizedIDWithMessage:(id)arg1;
- (id)_uniqueHandleStringsWithMessage:(id)arg1;
- (id)contentType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importDidEnd;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3;
- (void)performPreImportPhaseForSummary:(id)arg1 data:(id)arg2;

@end
