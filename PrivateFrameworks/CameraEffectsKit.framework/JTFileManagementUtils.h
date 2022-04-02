/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTFileManagementUtils : NSObject

+ (bool)ODRAssetsAreEmbedded;
+ (id)_audioRecordingURL:(id*)arg1;
+ (id)_capturedPhotoURL:(id*)arg1 isHEIF:(bool)arg2;
+ (void)_cleanupDirectory:(id)arg1;
+ (bool)_createDirectoryAtURL:(id)arg1 error:(id*)arg2;
+ (id)_photoExportURL:(id*)arg1 isHEIF:(bool)arg2;
+ (id)_tempFileURLWithDirectory:(id)arg1 file:(id)arg2 error:(id*)arg3;
+ (id)_temporaryPhotoURL:(id*)arg1 fileName:(id)arg2;
+ (id)_videoExportURL:(id*)arg1;
+ (id)_videoRecordingURL:(id*)arg1;
+ (id)audioRecordingURL:(id*)arg1;
+ (id)cachedExportFilePath:(id*)arg1;
+ (id)capturedPhotoURL:(id*)arg1 isHEIF:(bool)arg2;
+ (void)cleanupOldProjects;
+ (void)cleanupTemporaryDirectories;
+ (id)photoExportURL:(id*)arg1 isHEIF:(bool)arg2;
+ (id)temporaryPhotoURL:(id*)arg1 fileName:(id)arg2;
+ (id)videoExportURL:(id*)arg1;
+ (id)videoRecordingURL:(id*)arg1;

@end
