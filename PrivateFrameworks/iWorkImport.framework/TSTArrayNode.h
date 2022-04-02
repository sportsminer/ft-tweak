/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArrayNode : TSTExpressionNode {
    struct TSCEVectorIndexPair { 
        unsigned int column; 
        unsigned int row; 
    }  _dimensions;
    NSArray * _whitespaceAfterDelimiters;
    NSString * _whitespaceBeforeFirstChild;
}

@property (readonly) struct TSCEVectorIndexPair { unsigned int x1; unsigned int x2; } dimensions;
@property (retain) NSArray *whitespaceAfterDelimiters;
@property (retain) NSString *whitespaceBeforeFirstChild;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSCEFunctionArgSpec { }*)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; }*)arg1 hostCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 symbolTable:(struct TSCESymbolTable { id x1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; }*)arg3;
- (struct TSCEVectorIndexPair { unsigned int x1; unsigned int x2; })dimensions;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 columns:(unsigned char)arg3 rows:(unsigned short)arg4 firstIndex:(unsigned long long)arg5 lastIndex:(unsigned long long)arg6;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2;
- (void)loadFromArchive:(const struct ArrayNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; unsigned int x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSTCSENodeData { unsigned long long x1; unsigned long long x2; })recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct ArrayNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; unsigned int x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceBeforeFirstChild:(id)arg1;
- (id)string;
- (int)tokenType;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceBeforeFirstChild;

@end
