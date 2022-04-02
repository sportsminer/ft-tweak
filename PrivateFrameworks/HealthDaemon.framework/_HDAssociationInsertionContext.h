/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAssociationInsertionContext : NSObject {
    HDSQLiteDatabase * _database;
    bool  _enforceSameSource;
    NSUUID * _parentUUID;
    bool  _permitPendingAssociations;
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly) bool enforceSameSource;
@property (nonatomic, readonly, copy) NSUUID *parentUUID;
@property (nonatomic, readonly) bool permitPendingAssociations;
@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (id)database;
- (bool)enforceSameSource;
- (id)initWithParentUUID:(id)arg1 enforceSameSource:(bool)arg2 permitPendingAssociations:(bool)arg3 profile:(id)arg4 database:(id)arg5;
- (id)parentUUID;
- (bool)permitPendingAssociations;
- (id)profile;

@end
