/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEUUidReferenceMap : NSObject {
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, std::__1::hash<TSUUUID>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _cellRefsByUuid;
    struct unordered_map<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet>, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<std::__1::pair<const TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> > > > { 
        struct __hash_table<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, std::__1::__unordered_map_hasher<TSCEInternalCellReference, std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, std::__1::hash<TSCEInternalCellReference>, true>, std::__1::__unordered_map_equal<TSCEInternalCellReference, std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, std::__1::equal_to<TSCEInternalCellReference>, true>, std::__1::allocator<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSCEInternalCellReference, std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, std::__1::hash<TSCEInternalCellReference>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSCEInternalCellReference, std::__1::__hash_value_type<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> >, std::__1::equal_to<TSCEInternalCellReference>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _uuidsByCellRef;
}

+ (id)_stringForInternalCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; unsigned short x2; unsigned short x3; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; unsigned short x2; unsigned short x3; }*)arg1 forUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)description;
- (void)encodeToArchive:(struct UuidReferenceMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::UuidReferenceMapArchive_CellRefsForUuid> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 alsoSave31Format:(bool)arg2 archiver:(id)arg3;
- (void)getCellRefs:(struct TSCEReferenceSet { struct unordered_set<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct __hash_table<TSCEReferenceType, std::__1::hash<TSCEReferenceType>, std::__1::equal_to<TSCEReferenceType>, std::__1::allocator<TSCEReferenceType> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCEReferenceType, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSCEReferenceType, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_1_1_1; } x1; }*)arg1 referringToUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2;
- (id)initFromArchive:(const struct UuidReferenceMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::UuidReferenceMapArchive_CellRefsForUuid> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 dependencyTracker:(struct TSCEDependencyTracker { id x1; struct TSCECalcEngine {} *x2; struct TSCEIDMap { struct os_unfair_lock_s { unsigned int x_1_2_1; } x_3_1_1; struct TSCEIDAllocator<unsigned short> { unsigned short x_2_2_1; struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > { struct __tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_4_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_6_1; } x_2_5_1; } x_1_4_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned short> > { unsigned long long x_3_5_1; } x_1_4_3; } x_2_3_1; } x_2_2_2; } x_3_1_2; struct unordered_map<unsigned short, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSU::UUIDData<TSP::UUIDData> > > > { struct __hash_table<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; } x_3_2_1; } x_3_1_3; } x3; }*)arg2;
- (void)removeAllCellRefsInOwner:(unsigned short)arg1;
- (void)removeCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; unsigned short x2; unsigned short x3; }*)arg1;
- (void)removeCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; unsigned short x2; unsigned short x3; }*)arg1 forUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (bool)tooManyCellRefsFor31FormatArchive;

@end
