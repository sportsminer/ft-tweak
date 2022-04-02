/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface _SSBServiceStatus : NSObject {
    struct ServiceStatus { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } m_name; 
        int m_pid; 
        struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
            struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { 
                struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__value_; 
            } __end_cap_; 
        } m_activeTransactions; 
        struct vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> > { 
            struct Connection {} *__begin_; 
            struct Connection {} *__end_; 
            struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> > { 
                struct Connection {} *__value_; 
            } __end_cap_; 
        } m_connections; 
        struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus> > { 
            struct DatabaseUpdaterStatus {} *__begin_; 
            struct DatabaseUpdaterStatus {} *__end_; 
            struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus> > { 
                struct DatabaseUpdaterStatus {} *__value_; 
            } __end_cap_; 
        } m_databaseUpdatersStatuses; 
    }  _serviceStatus;
}

@property (nonatomic, readonly, copy) NSArray *activeTransactions;
@property (nonatomic, readonly) unsigned long long connectionCount;
@property (nonatomic, readonly) unsigned long long databaseUpdaterState;
@property (nonatomic, readonly) NSArray *databaseUpdatersStatuses;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) int processIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeTransactions;
- (id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionCount;
- (unsigned long long)databaseUpdaterState;
- (id)databaseUpdatersStatuses;
- (id)initWithServiceStatus:(struct ServiceStatus { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; int x2; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_2_1; } x_3_1_3; } x3; })arg1;
- (id)name;
- (int)processIdentifier;
- (int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1;

@end