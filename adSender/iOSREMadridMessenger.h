//
//  iOSREMadridMessenger.h
//  adSender
//
//  Created by 石勇 on 2019/7/5.
//

#ifndef iOSREMadridMessenger_h
#define iOSREMadridMessenger_h

@interface IDSIDQueryController
+ (instancetype)sharedInstance;
- (NSDictionary *)_currentIDStatusForDestinations:(NSArray *)arg1 service:(NSString *)arg2 listenerID:(NSString *)arg3;
- (BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

@interface IMServiceImpl : NSObject
+ (instancetype)iMessageService;
@end

@class IMHandle;

@interface IMAccount : NSObject
- (IMHandle *)imHandleWithID:(NSString *)arg1 alreadyCanonical:(BOOL)arg2;
@end

@interface IMAccountController : NSObject
+ (instancetype)sharedInstance;
- (IMAccount *)__ck_defaultAccountForService:(IMServiceImpl *)arg1;
@end

@interface IMMessage : NSObject
+ (instancetype)instantMessageWithText:(NSAttributedString *)arg1 flags:(unsigned long long)arg2;
@end

@interface IMChat : NSObject
- (void)sendMessage:(IMMessage *)arg1;
@end

@interface IMChatRegistry : NSObject
+ (instancetype)sharedInstance;
- (IMChat *)chatForIMHandle:(IMHandle *)arg1;
@end

#endif /* iOSREMadridMessenger_h */
