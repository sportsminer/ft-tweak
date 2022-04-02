// See http://iphonedevwiki.net/index.php/Logos

#if TARGET_OS_SIMULATOR
#error Do not support the simulator, please use the real iPhone Device.
#endif

#import <UIKit/UIKit.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <AVFoundation/AVAudioSession.h>
#import <AudioToolbox/AudioToolbox.h>
#import <arpa/inet.h>
#import <stdio.h>
#import "ADFrameLoader.h"
#import "Interfaces.h"
#import "iOSREMadridMessenger.h"

typedef struct { long long x1; int x2; unsigned int x3; long long x4; } FTime;
static ADFrameLoader* loader;
static void* lib_handle;
void handle_connection(int connfd);
void server();
OSStatus DoRender(AudioUnitRenderActionFlags *ioActionFlags, const AudioTimeStamp *inTimeStamp, UInt32 inOutputBusNumber, UInt32 inNumberFrames, AudioBufferList *ioData);

%group group_mediaserverd

%hook VideoConference
-(void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned)arg3 localInterfaceType:(id)arg4 remoteInterfaceType:(id)arg5 error:(id)arg6{
//    NSLog(@"[adSender] facetime call connected.");
    [loader connected];
    %orig;
}
-(void)session:(id)arg1 didStopWithError:(id)arg2{
//    NSLog(@"[adSender] facetime call disconnected.");
    [loader disConnected];
    %orig;
}
%end

%hook VCVideoCaptureServer
- (BOOL)onCaptureFrame:(CMSampleBufferRef)arg1 frameTime:(FTime)arg2 preview:(BOOL)arg3 droppedFrames:(int)arg4 isSwitching:(BOOL)arg5 camera:(int)arg6
{
    [loader maskSample:(CMSampleBufferRef)arg1];
    return %orig;
}
%end

%hook AVCaptureDataOutputSynchronizer
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(CMSampleBufferRef)arg2 fromConnection:(id)arg3
{
    [loader maskSample:(CMSampleBufferRef)arg2];
    %orig;
}
%end

%hookf(OSStatus, AudioUnitSetProperty, AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitScope inScope, AudioUnitElement inElement, const void *inData, UInt32 inDataSize){

//    [loader logParamsForFunc:@"AudioUnitSetProperty" p:inUnit pro:inID sc:inScope d:(void*)inData];
    [loader injectMyCallback:@"AudioUnitSetProperty" p:inUnit pro:inID sc:inScope d:(void*)inData];
    return %orig;
}

//%hookf(OSStatus, AudioUnitRender, AudioUnit inUnit, AudioUnitRenderActionFlags *ioActionFlags, const AudioTimeStamp *inTimeStamp, UInt32 inOutputBusNumber, UInt32 inNumberFrames, AudioBufferList *ioData){
//
//    %orig;
//    [loader myRenderAudioUnit:inUnit flag:ioActionFlags ats:inTimeStamp bus:inOutputBusNumber frames:inNumberFrames data:ioData];
//    return 0;
//}
//%hookf(OSStatus, AudioUnitProcess, AudioUnit inUnit, AudioUnitRenderActionFlags *ioActionFlags, const AudioTimeStamp *inTimeStamp, UInt32 inNumberFrames, AudioBufferList *ioData){
//
//    %orig;
//    [loader myRenderAudioUnit:inUnit flag:ioActionFlags ats:inTimeStamp bus:0 frames:inNumberFrames data:ioData];
//    return 0;
//}

%end

%group group_mobilesms

%hook CKConversation
-(IMService *)sendingService{
    %orig;
    return [IMService iMessageService];
}
%end

%hook SMSApplication
%new
- (int)madridStatusForAddress:(NSString *)address
{
    NSString *formattedAddress = nil;
    if ([address rangeOfString:@"@"].location != NSNotFound){
        formattedAddress = [@"mailto:" stringByAppendingString:address];
    }else{
        formattedAddress = [@"tel:" stringByAppendingString:address];
    }
    NSDictionary *status = [[IDSIDQueryController sharedInstance] _currentIDStatusForDestinations:@[formattedAddress] service:@"com.apple.madrid" listenerID:@"__kIMChatServiceForSendingIDSQueryControllerListenerID"];

    return [status[formattedAddress] intValue];
}
%new
- (void)sendMadridMessageToAddress:(NSString *)address withText:(NSString *)base64text
{
    NSData *data = [[NSData alloc]initWithBase64EncodedString:base64text options:0];
    NSString *text = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
//    NSString *str = @"www.baidu.com";
//    NSDictionary *dictAttr = @{NSLinkAttributeName:[NSURL URLWithString:str], NSUnderlineStyleAttributeName:@(NSUnderlineStyleSingle),NSUnderlineColorAttributeName:[UIColor redColor]};
//    NSAttributedString *link = [[NSAttributedString alloc]initWithString:str attributes:dictAttr];
    NSMutableAttributedString *orig = [[NSMutableAttributedString alloc] initWithString:text];
//    [orig appendAttributedString:link];
    NSAttributedString *attributedString = [[NSAttributedString alloc] initWithAttributedString:orig];

    IMServiceImpl *service = [IMServiceImpl iMessageService];
    IMAccount *account = [[IMAccountController sharedInstance] __ck_defaultAccountForService:service];
    IMHandle *handle = [account imHandleWithID:address alreadyCanonical:NO];
    IMChat *chat = [[IMChatRegistry sharedInstance] chatForIMHandle:handle];
    IMMessage *message = [IMMessage instantMessageWithText:attributedString flags:1048581];
    [chat sendMessage:message];
}
%new
- (NSString*)anotherSendMessage:(NSString*)address withText:(NSString*)base64text withFile:(NSString*)fileName
{
    NSData *data = [[NSData alloc]initWithBase64EncodedString:base64text options:0];
    NSString *text = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
//    NSString *str = @"www.baidu.com";
//    NSDictionary *dictAttr = @{NSLinkAttributeName:[NSURL URLWithString:str], NSUnderlineStyleAttributeName:@(NSUnderlineStyleSingle),NSUnderlineColorAttributeName:[UIColor redColor]};
//    NSAttributedString *link = [[NSAttributedString alloc]initWithString:str attributes:dictAttr];
    NSMutableAttributedString *orig = [[NSMutableAttributedString alloc] initWithString:text];
//    [orig appendAttributedString:link];
    NSAttributedString __block *attributedString = [[NSAttributedString alloc] initWithAttributedString:orig];
//    NSAttributedString __block *attributedString = [[NSAttributedString alloc] initWithString:text];

    //    CKConversationList* conversationList = [CKConversationList sharedConversationList];
    //Get the conversation for an address
    NSArray *ads = [NSArray arrayWithObject:address];
    CKConversation *conversation = [CKConversation conversationForAddresses:ads allowRetargeting:false candidateConversation:nil];
    dispatch_async(dispatch_get_main_queue(), ^{
//        IMService *svc = [IMService iMessageService];
        //send image
        NSURL *fileUrl = [NSURL URLWithString:[NSString stringWithFormat:@"file:///var/mobile/Media/Downloads/imgsender/%@",fileName]];
        CKMediaObject *attach = [[CKMediaObjectManager sharedInstance] mediaObjectWithFileURL:fileUrl filename:@"img666.jpg" transcoderUserInfo:NULL];
        CKComposition* newcomp = [CKComposition compositionWithMediaObject:attach subject:nil];
        CKMessage* message = [conversation messageWithComposition:newcomp];
        [conversation sendMessage:message newComposition:YES];
        
        //send text
        CKComposition* composition = [[CKComposition alloc] initWithText:attributedString subject:nil];
        CKMessage* message2 = [conversation messageWithComposition:composition];
        [conversation sendMessage:message2 newComposition:YES];
    });
    return @"true";
}
%end

%end

void handle_connection(int connfd)
{
//    NSLog(@"[adSender] [%d] Connection opened.", connfd);
    struct timeval tv;
    tv.tv_sec = 15;
    tv.tv_usec = 0;
    
    long rlen = 0;
    char data[512];
    char buffer[128];
    
    fd_set readset;
    int result = -1;
    FD_ZERO(&readset);
    FD_SET(connfd, &readset);
    
    while(connfd != -1) {
        memset(data,0,512);
        memcpy(data,"cmd>",4);
        rlen = send(connfd, data, strlen(data), 0);
        if (rlen < 0) {
            connfd = -1;
        }
        while (rlen > 0) {
            rlen = send(connfd, data, strlen(data)-rlen, 0);
            if (rlen < 0) {
                connfd = -1;
            }
        }
        result = select(connfd+1, &readset, NULL, NULL, &tv);
        
        if (result <= 0) {
            close(connfd);
            break;
        }
        
        // Wait for anything to come from the client.
        memset(buffer,0,128);
        memset(data,0,512);
        rlen = recv(connfd, buffer, sizeof(buffer)-1, 0);
        if (strncmp(buffer, "stats", 5) == 0) {
            memcpy(data,[loader getStatsWithJsonstr],strlen([loader getStatsWithJsonstr]));
            rlen = send(connfd, data, strlen(data), 0);
            if (rlen < 0) {
                connfd = -1;
            }
            while (rlen > 0) {
                rlen = send(connfd, data, strlen(data)-rlen, 0);
                if (rlen < 0) {
                    connfd = -1;
                }
            }
        }
        if (strncmp(buffer, "exit", 4) == 0) {
            close(connfd);
            break;
        }
        if (strncmp(buffer, "loading", 7) == 0) {
            [loader reset];
        }
        if (strncmp(buffer, "ping", 4) == 0) {
            memcpy(data,"pong",4);
            rlen = send(connfd, data, strlen(data), 0);
            if (rlen < 0) {
                connfd = -1;
            }
            while (rlen > 0) {
                rlen = send(connfd, data, strlen(data)-rlen, 0);
                if (rlen < 0) {
                    connfd = -1;
                }
            }
        }
    }
    
//    NSLog(@"[adSender] [%d] Connection closed.", connfd);
}

void server()
{
    NSLog(@"[adSender] Server created...");
    struct sockaddr_in local;
    local.sin_family = AF_INET;
    local.sin_addr.s_addr = htonl(INADDR_ANY); //INADDR_ANY if you want to expose audio output
    local.sin_port = htons(8888);
    int listenfd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    int r = -1;
    int __block user = 0;
    while(r != 0) {
        r = bind(listenfd, (struct sockaddr*)&local, sizeof(local));
        usleep(200 * 1000);
    }
    NSLog(@"[adSender] Bound");
    
    int one = 1;
    setsockopt(listenfd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one));
    setsockopt(listenfd, SOL_SOCKET, SO_REUSEPORT, &one, sizeof(one));
    setsockopt(listenfd, SOL_SOCKET, SO_NOSIGPIPE, &one, sizeof(one));
    
    r = -1;
    while(r != 0) {
        r = listen(listenfd, 20);
        usleep(200 * 1000);
    }
    NSLog(@"[adSender] Listening");
    
    while(true) {
        int connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
        if (connfd > 0 && user == 0) {
            struct timeval tv;
            tv.tv_sec = 15;
            tv.tv_usec = 0;
            user = 1;
            setsockopt(connfd, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof tv);
            setsockopt(connfd, SOL_SOCKET, SO_SNDTIMEO, (const char*)&tv, sizeof tv);
            setsockopt(connfd, SOL_SOCKET, SO_NOSIGPIPE, &one, sizeof(one));
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
                handle_connection(connfd);
                user = 0;
            });
        }else{
            close(connfd);
        }
    }
}

%ctor {
    loader = [ADFrameLoader sharedInstance];
    
    lib_handle = dlopen([@"/System/Library/PrivateFrameworks/AVConference.framework/AVConference"  cStringUsingEncoding:kCFStringEncodingUTF8], RTLD_LOCAL);
    if (!lib_handle) {
        NSLog(@"tweak-from-Bryan: Unable to open library: %s\n", dlerror());
    }
    
    NSString *bundleID = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"];
    if(![bundleID isEqualToString:@"com.apple.MobileSMS"]){
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            server();
        });
        %init(group_mediaserverd);
        NSLog(@"tweak-from-Bryan: initialized group_mediaserverd");
    }else{
        %init(group_mobilesms)
        NSLog(@"tweak-from-Bryan: initialized group_mobilesms");
    }
}

%dtor {
    if(lib_handle != nil){
        dlclose(lib_handle);
    }
}
