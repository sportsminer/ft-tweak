/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipInputBundle : NSObject <SFUInputBundle> {
    OISFUZipArchive * _zipArchive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bufferedInputStreamForEntry:(id)arg1;
- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)dealloc;
- (bool)hasEntryWithName:(id)arg1;
- (id)initWithZipArchive:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;

@end
