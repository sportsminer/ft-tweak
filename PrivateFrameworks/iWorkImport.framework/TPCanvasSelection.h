/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection> {
    NSSet * mAdditionalInfos;
    NSSet * mExcludedInfos;
    NSSet * mInfos;
}

@property (nonatomic, readonly) int canvasSelectionKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long infoCount;
@property (nonatomic, readonly) NSSet *infos;
@property (nonatomic, readonly) NSSet *infosWithNonInteractiveInfos;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) NSSet *nonInteractiveInfos;
@property (nonatomic, readonly) NSSet *rawAdditionalInfos;
@property (nonatomic, readonly) NSSet *rawExcludedInfos;
@property (nonatomic, readonly) NSSet *rawInfos;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unlockedInfoCount;
@property (nonatomic, readonly) NSSet *unlockedInfos;

+ (Class)archivedSelectionClass;
+ (id)canvasSelectionFromCanvasSelection:(id)arg1 withToggledInfo:(id)arg2;
+ (id)canvasSelectionFromSelection:(id)arg1;
+ (id)canvasSelectionFromSelection:(id)arg1 withInfos:(id)arg2;
+ (id)emptySelection;
+ (id)selectionWithInfos:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDDescription;
- (int)canvasSelectionKind;
- (bool)containsKindOfClass:(Class)arg1;
- (bool)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithNewStyleInsertionBehavior:(int)arg1 newCaretAffinity:(int)arg2;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithNewVisualRanges:(id)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)copyWithVisualRanges:(id)arg1 headChar:(unsigned long long)arg2 tailChar:(unsigned long long)arg3 rightToLeft:(bool)arg4 sameLine:(bool)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)infoCount;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)infosWithNonInteractiveInfos;
- (id)initWithArchive:(const struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; int x6; int x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSP::Reference> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct Reference {} *x11; int x12; }*)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (id)initWithTextSelection:(id)arg1 infos:(id)arg2 excludedInfos:(id)arg3 additionalInfos:(id)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 leadingEdge:(bool)arg6 leadingCharIndex:(unsigned long long)arg7 infos:(id)arg8 excludedInfos:(id)arg9 additionalInfos:(id)arg10;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)nonInteractiveInfos;
- (id)p_UUIDDescriptionsForInfosSet:(id)arg1;
- (void)p_commonCopyTo:(id)arg1;
- (id)rawAdditionalInfos;
- (id)rawExcludedInfos;
- (id)rawInfos;
- (void)saveToArchive:(struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; int x6; int x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSP::Reference> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct Reference {} *x11; int x12; }*)arg1 archiver:(id)arg2;
- (unsigned long long)unlockedInfoCount;
- (id)unlockedInfos;

@end
