/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeAction : NSObject <NSCopying> {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _mergeFormulaIndexes;
    struct vector<TSCEFormula, std::__1::allocator<TSCEFormula> > { 
        struct TSCEFormula {} *__begin_; 
        struct TSCEFormula {} *__end_; 
        struct __compressed_pair<TSCEFormula *, std::__1::allocator<TSCEFormula> > { 
            struct TSCEFormula {} *__value_; 
        } __end_cap_; 
    }  _mergeFormulas;
    int  _type;
    struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { 
        struct UUIDRect<TSP::UUIDRect> {} *__begin_; 
        struct UUIDRect<TSP::UUIDRect> {} *__end_; 
        struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { 
            struct UUIDRect<TSP::UUIDRect> {} *__value_; 
        } __end_cap_; 
    }  _uidRanges;
}

@property (nonatomic, readonly) bool hasMergeFormulas;
@property (nonatomic, readonly) bool hasMultiRowMerge;
@property (nonatomic) const /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct *mergeFormulaIndexes; /* unknown property attribute:  std::__1::allocator<unsigned long> >=^Q}} */
@property (nonatomic) const /* Warning: unhandled struct encoding: '{vector<TSCEFormula' */ struct *mergeFormulas; /* unknown property attribute:  std::__1::allocator<TSCEFormula> >=^{TSCEFormula}}} */
@property (nonatomic) int type;
@property (nonatomic) const /* Warning: unhandled struct encoding: '{vector<TSU::UUIDRect<TSP::UUIDRect>' */ struct *uidRanges; /* unknown property attribute:  std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > >=^{UUIDRect<TSP::UUIDRect>}}} */

+ (struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; })cellUIDRangeFromMergeFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned char x_2_1_1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1 calcEngine:(id)arg2;
+ (id)mergeActionForGrowingRange:(const struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; }*)arg1 coveringRange:(const struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; }*)arg2 inTable:(id)arg3;
+ (id)mergeActionForInsertingRange:(const struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; }*)arg1 inTable:(id)arg2;
+ (id)mergeActionForRemovingRanges:(const struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x1; struct UUIDRect<TSP::UUIDRect> {} *x2; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x_3_1_1; } x3; }*)arg1 inTable:(id)arg2;
+ (id)stringForMergeType:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionByExpandingWithAction:(id)arg1;
- (void)addFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned char x_2_1_1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1;
- (void)addFormulaIndex:(unsigned long long)arg1;
- (id)changeDescriptorForTable:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateMergeFormulasUsingBlock:(id /* block */)arg1;
- (bool)hasMergeFormulas;
- (bool)hasMultiRowMerge;
- (id)initWithArchive:(const struct MergeOperationArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUIDRectArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; int x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 uidRange:(const struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; }*)arg2;
- (id)initWithType:(int)arg1 uidRanges:(const struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x1; struct UUIDRect<TSP::UUIDRect> {} *x2; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x_3_1_1; } x3; }*)arg2;
- (const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; }*)mergeFormulaIndexes;
- (const struct vector<TSCEFormula, std::__1::allocator<TSCEFormula> > { struct TSCEFormula {} *x1; struct TSCEFormula {} *x2; struct __compressed_pair<TSCEFormula *, std::__1::allocator<TSCEFormula> > { struct TSCEFormula {} *x_3_1_1; } x3; }*)mergeFormulas;
- (id)remapUIDsByColumnMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 rowMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg2 ownerMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg3;
- (void)saveToArchive:(struct MergeOperationArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUIDRectArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; int x8; }*)arg1 archiver:(id)arg2;
- (void)setMergeFormulaIndexes:(const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; }*)arg1;
- (void)setMergeFormulas:(const struct vector<TSCEFormula, std::__1::allocator<TSCEFormula> > { struct TSCEFormula {} *x1; struct TSCEFormula {} *x2; struct __compressed_pair<TSCEFormula *, std::__1::allocator<TSCEFormula> > { struct TSCEFormula {} *x_3_1_1; } x3; }*)arg1;
- (void)setType:(int)arg1;
- (void)setUidRanges:(const struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x1; struct UUIDRect<TSP::UUIDRect> {} *x2; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x_3_1_1; } x3; }*)arg1;
- (id)shrinkAction;
- (int)type;
- (const struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x1; struct UUIDRect<TSP::UUIDRect> {} *x2; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> {} *x_3_1_1; } x3; }*)uidRanges;
- (void)verify;

@end
