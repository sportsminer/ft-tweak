/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMHistoryAnalyzer : NSObject {
    NSPersistentHistoryToken * _finalToken;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *finalToken;

+ (id)_uninterestingAttributes;

- (void).cxx_destruct;
- (id)changesForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 error:(id*)arg4;
- (id)deltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id*)arg5 interestingEntityNames:(id)arg6 error:(id*)arg7;
- (id)finalToken;
- (bool)isChangeInteresting:(id)arg1 interestingEntityNames:(id)arg2;
- (id)newDeltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id*)arg5 error:(id*)arg6;
- (bool)newIsChangeInteresting:(id)arg1;

@end
