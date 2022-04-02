#import <Foundation/NSObject.h>

@class NSAttributedString;

@interface CKComposition : NSObject
- (id)initWithText:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
@end

@interface CKConversation : NSObject
+ (id)conversationForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 candidateConversation:(id)arg3;
- (id)messageWithComposition:(id)arg1;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
@end

@interface CKMediaObject : NSObject
@end

@interface CKMediaObjectManager : NSObject
+(id)sharedInstance;
-(id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
@end

@interface CKMessage : NSObject <NSFastEnumeration>
@end

@interface CKConversationList : NSObject
@end

@interface IMService : NSObject
+ (id)iMessageService;
@end
