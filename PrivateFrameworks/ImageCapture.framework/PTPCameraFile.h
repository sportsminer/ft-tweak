/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraFile : ICCameraFile {
    int  _bitsPerPixel;
    long long  _dpOffset;
    NSString * _exifCreationDateTime;
    NSString * _exifModificationDateTime;
    int  _imgHeight;
    int  _imgOrientation;
    int  _imgWidth;
    NSString * _path;
    bool  _previewThumbnail;
    void * _ptpCameraFileProperties;
    bool  _rolledMetadata;
    bool  _smallThumbnail;
    int  _thmHeight;
    int  _thmOffset;
    int  _thmSize;
    int  _thmWidth;
    bool  _updatedBasicMetadata;
    bool  _updatedExpensiveMetadata;
}

@property int bitsPerPixel;
@property long long dpOffset;
@property (copy) NSString *exifCreationDateTime;
@property (copy) NSString *exifModificationDateTime;
@property int imgHeight;
@property int imgOrientation;
@property int imgWidth;
@property (copy) id info;
@property (readonly) unsigned int objHandle;
@property (retain) NSString *path;
@property bool previewThumbnail;
@property bool rolledMetadata;
@property bool smallThumbnail;
@property (readonly) unsigned int storageID;
@property int thmHeight;
@property int thmOffset;
@property int thmSize;
@property int thmWidth;
@property (readonly) unsigned long long type;
@property bool updatedBasicMetadata;
@property bool updatedExpensiveMetadata;

- (id)altThumbnaillForPixelWidth:(unsigned int)arg1;
- (void)attachKeywords;
- (int)bitsPerPixel;
- (long long)compare:(id)arg1 against:(id)arg2 withContext:(void*)arg3;
- (struct CGImage { }*)copyThumbnailForPixelWidth:(unsigned int)arg1;
- (void)dealloc;
- (long long)dpOffset;
- (id)exifCreationDateTime;
- (id)exifModificationDateTime;
- (id)imageData;
- (int)imgHeight;
- (int)imgOrientation;
- (int)imgWidth;
- (id)info;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned int)arg5 objectHandle:(unsigned int)arg6;
- (id)metadataDict;
- (unsigned int)objHandle;
- (id)path;
- (bool)previewThumbnail;
- (bool)processMetadata:(id)arg1;
- (void)rawImageInspectMetadata;
- (void)rawImageScrapeAllocatedData:(char *)arg1 length:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3;
- (id)rawImageValidateSubImage:(id)arg1 error:(id*)arg2;
- (unsigned long long)readStream:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (void)releaseProvider;
- (void)rewind;
- (bool)rolledMetadata;
- (void)setBitsPerPixel:(int)arg1;
- (void)setDpOffset:(long long)arg1;
- (void)setExifCreationDateTime:(id)arg1;
- (void)setExifModificationDateTime:(id)arg1;
- (void)setImgHeight:(int)arg1;
- (void)setImgOrientation:(int)arg1;
- (void)setImgWidth:(int)arg1;
- (void)setInfo:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPreviewThumbnail:(bool)arg1;
- (void)setRolledMetadata:(bool)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setSmallThumbnail:(bool)arg1;
- (void)setThmHeight:(int)arg1;
- (void)setThmOffset:(int)arg1;
- (void)setThmSize:(int)arg1;
- (void)setThmWidth:(int)arg1;
- (void)setUpdatedBasicMetadata:(bool)arg1;
- (void)setUpdatedExpensiveMetadata:(bool)arg1;
- (long long)skipBytes:(long long)arg1;
- (bool)smallThumbnail;
- (unsigned int)storageID;
- (int)thmHeight;
- (int)thmOffset;
- (int)thmSize;
- (int)thmWidth;
- (id)thumbnailForPixelWidth:(unsigned int)arg1;
- (unsigned long long)type;
- (void)updateBasicMetadata;
- (bool)updatedBasicMetadata;
- (bool)updatedExpensiveMetadata;
- (int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;

@end
