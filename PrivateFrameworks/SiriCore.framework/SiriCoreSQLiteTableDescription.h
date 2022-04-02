/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying> {
    NSArray * _columns;
    NSArray * _constraints;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *columns;
@property (nonatomic, readonly, copy) NSArray *constraints;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)columns;
- (id)constraints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3;
- (id)initWithName:(id)arg1 columnsProvider:(id /* block */)arg2 constraintsProvider:(id /* block */)arg3;
- (id)name;

@end
