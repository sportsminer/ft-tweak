/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfSlideExporter : KNSlideExporter <TSKEncryptedDocumentExporter>

@property (nonatomic, readonly) bool canExportInBackground;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentSpecificTypeUTI;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isExportSupported;
@property (nonatomic, readonly) bool needsSupplementalFiles;
@property (nonatomic, readonly) TSUProgress *progress;
@property (nonatomic, readonly) NSString *savePanelMessage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeUTI;

- (id)p_renderingExporterDelegate;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (bool)validatePassphrases:(id*)arg1;

@end
