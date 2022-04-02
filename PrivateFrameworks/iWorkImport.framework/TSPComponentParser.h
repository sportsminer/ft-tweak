/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentParser : NSObject {
    struct ArchiveInfo { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        unsigned long long identifier_; 
        struct RepeatedPtrField<TSP::MessageInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } message_infos_; 
        bool should_merge_; 
    }  _archiveInfo;
    unsigned int  _archiveInfoLength;
    <TSPComponentParserDelegate> * _delegate;
    unsigned int  _messagesLength;
    unsigned long long  _state;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)readArchiveFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg1 error:(id*)arg2;
- (unsigned long long)readArchiveInfoFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg1 error:(id*)arg2;
- (unsigned long long)readArchiveInfoLengthFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg1 error:(id*)arg2;
- (bool)readFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg1 error:(id*)arg2;
- (void)readWithChannel:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;

@end
