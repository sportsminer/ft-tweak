/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDPresentation : OCDDocument {
    NSMutableArray * mBulletBlips;
    NSMutableArray * mCommentAuthors;
    bool  mIsAutoPlay;
    bool  mIsCommentsVisible;
    bool  mIsKiosk;
    bool  mIsLooping;
    NSMutableArray * mNotesMasters;
    struct CGSize { 
        double width; 
        double height; 
    }  mNotesSize;
    NSMutableArray * mSlideMasters;
    struct CGSize { 
        double width; 
        double height; 
    }  mSlideSize;
    NSMutableArray * mSlides;
}

- (unsigned int)addBulletBlip:(id)arg1;
- (void)addCommentAuthor:(id)arg1;
- (void)addNotesMaster:(id)arg1;
- (void)addSlide:(id)arg1;
- (void)addSlideMaster:(id)arg1;
- (id)bulletBlipAtIndex:(int)arg1;
- (unsigned int)bulletBlipCount;
- (id)bulletBlips;
- (void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2;
- (void)cacheGraphicStylesForSlideBase:(id)arg1;
- (id)commentAuthorAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentAuthorCount;
- (void)dealloc;
- (id)description;
- (void)ensureDefaultLayoutsForMasters;
- (void)flushUnusedMastersAndLayouts;
- (unsigned long long)indexOfSlide:(id)arg1;
- (id)init;
- (bool)isAutoPlay;
- (bool)isCommentsVisible;
- (bool)isKiosk;
- (bool)isLooping;
- (id)notesMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesMasterCount;
- (struct CGSize { double x1; double x2; })notesSize;
- (void)removeUnnecessaryOverrides;
- (void)setIsAutoPlay:(bool)arg1;
- (void)setIsCommentsVisible:(bool)arg1;
- (void)setIsKiosk:(bool)arg1;
- (void)setIsLooping:(bool)arg1;
- (void)setNotesSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSlideSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideCount;
- (id)slideMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideMasterCount;
- (struct CGSize { double x1; double x2; })slideSize;

@end
