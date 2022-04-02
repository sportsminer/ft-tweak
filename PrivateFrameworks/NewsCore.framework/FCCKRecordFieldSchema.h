/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKRecordFieldSchema : NSObject {
    bool  _isEncrypted;
    NSString * _name;
}

@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)fieldWithName:(id)arg1 isEncrypted:(bool)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFieldName:(id)arg1 isEncrypted:(bool)arg2;
- (bool)isEncrypted;
- (id)name;

@end
