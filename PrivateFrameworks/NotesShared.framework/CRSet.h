/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRSet : NSObject <CRCoding, CRDataType, NSFastEnumeration> {
    CRDictionary * _dictionary;
    NSHashTable * _observers;
}

@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CRDictionary *dictionary;
@property (nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)dictionary;
- (id)document;
- (void)encodeWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 set:(struct Dictionary { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg2;
- (void)encodeWithCRCoder:(id)arg1 set:(struct Dictionary { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg2 elementValueCoder:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 set:(const struct Dictionary { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg2;
- (id)initWithCRCoder:(id)arg1 set:(const struct Dictionary { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<CRDT::Dictionary_Element> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg2 elementValueDecoder:(id /* block */)arg3;
- (id)initWithDocument:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)member:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)observers;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
