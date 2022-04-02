/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackageWriter : TSPPackageWriter {
    bool  _apfsMode;
    TSUZipFileWriter * _delayedZipArchiveWriter;
    bool  _onlyWriteToDelayedZipArchive;
    TSUSafeSaveAssistant * _safeSaveAssistant;
}

- (void).cxx_destruct;
- (void)closeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)componentZipArchiveWriter;
- (void)finalizeComponentAndDataSectionWithCompletionHandler:(id /* block */)arg1;
- (id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 apfsMode:(bool)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id*)arg14;
- (id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;
- (id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned int)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(bool)arg5;
- (void)truncateZipAtFirstDeletedData:(id)arg1;
- (void)willWriteData:(id)arg1;
- (id)zipArchiveWriter;

@end
