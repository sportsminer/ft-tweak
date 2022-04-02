/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSQLiteConnection : NSObject {
    void * _CPSearchContext;
    void * _ICUSearchContext;
    MFSQLiteConnectionConfiguration * _configuration;
    NSString * _databaseName;
    struct sqlite3 { } * _db;
    MFSQLiteConnectionPool * _pool;
    struct __CFDictionary { } * _statementCache;
    unsigned long long  _transactionCount;
    long long  _transactionType;
}

@property (nonatomic, copy) MFSQLiteConnectionConfiguration *configuration;
@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (nonatomic) MFSQLiteConnectionPool *pool;

- (void).cxx_destruct;
- (void)_fixFilePermission;
- (void)_makeCompletePath;
- (const char *)_vfsModuleName;
- (int)beginTransaction;
- (int)beginTransactionWithType:(long long)arg1;
- (void)close;
- (int)commitTransaction;
- (id)configuration;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (void)flush;
- (id)initWithConfiguration:(id)arg1;
- (bool)isOpen;
- (int)open;
- (id)pool;
- (struct sqlite3_stmt { }*)preparedStatementForPattern:(id)arg1;
- (int)rollbackTransaction;
- (void)setConfiguration:(id)arg1;
- (void)setPool:(id)arg1;

@end
