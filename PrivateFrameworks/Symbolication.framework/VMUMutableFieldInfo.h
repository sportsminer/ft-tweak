/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (nonatomic, retain) VMUClassInfo *destinationLayout;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool isByref;
@property (nonatomic) bool isCapture;
@property (nonatomic, copy) NSString *ivarName;
@property (nonatomic) unsigned int scanType;
@property (nonatomic) unsigned int scannableSize;
@property (nonatomic) unsigned int stride;

- (void)setDestinationLayout:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setIsByref:(bool)arg1;
- (void)setIsCapture:(bool)arg1;
- (void)setIvarName:(id)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setScanType:(unsigned int)arg1;
- (void)setScannableSize:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setStride:(unsigned int)arg1;
- (void)setTypeName:(id)arg1;

@end
