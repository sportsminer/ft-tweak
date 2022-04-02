/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEChatKitStatisticsManager : NSObject <AEHostStatisticsManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)reportPayloadSentFromSource:(long long)arg1;
- (void)reportPresentationOfFullScreenCamera;
- (void)reportPresentationOfFullScreenPhotoLibrary;
- (void)reportSelectionOfPhotoGridIndex:(unsigned long long)arg1;

@end
