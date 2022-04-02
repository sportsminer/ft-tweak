/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXState : NSObject {
    CXNamespace * mOCXDrawingNamespace;
    CXNamespace * mOCXRelationshipsNamespace;
    int  mXMLFormat;
}

@property (nonatomic, retain) CXNamespace *OCXDrawingNamespace;
@property (nonatomic, retain) CXNamespace *OCXRelationshipsNamespace;
@property (nonatomic, readonly) int xmlFormat;

- (id)OCXCommentAuthorsRelationshipType;
- (id)OCXCommentsRelationshipType;
- (id)OCXCustomXmlRelationshipType;
- (id)OCXDrawingNamespace;
- (id)OCXDrawingRelationshipType;
- (id)OCXEndnotesRelationshipType;
- (id)OCXFontTableRelationshipType;
- (id)OCXFootnotesRelationshipType;
- (id)OCXLegacyDocTextInfoRelationshipType;
- (id)OCXNotesMasterRelationshipType;
- (id)OCXNotesSlideRelationshipType;
- (id)OCXNumberingRelationshipType;
- (id)OCXPackagePresPropsRelationshipType;
- (id)OCXPackageViewPropsRelationshipType;
- (id)OCXPivotTableRelationshipType;
- (id)OCXRelationshipsNamespace;
- (id)OCXSettingsRelationshipType;
- (id)OCXSharedStringsRelationshipType;
- (id)OCXSlideLayoutRelationshipType;
- (id)OCXSlideMasterRelationshipType;
- (id)OCXSlideRelationshipType;
- (id)OCXStylesRelationshipType;
- (id)OCXTableRelationshipType;
- (id)OCXTableStylesRelationshipType;
- (id)OCXThemeOverrideRelationshipType;
- (id)OCXThemeRelationshipType;
- (id)OCXVmlDrawingRelationshipType;
- (void)dealloc;
- (id)init;
- (void)setOCXDrawingNamespace:(id)arg1;
- (void)setOCXRelationshipsNamespace:(id)arg1;
- (void)setXmlFormat:(int)arg1;
- (void)setupNSForXMLFormat:(int)arg1;
- (int)xmlFormat;

@end
