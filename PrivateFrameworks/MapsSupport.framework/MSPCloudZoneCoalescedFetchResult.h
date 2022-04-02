/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudZoneCoalescedFetchResult : NSObject <MSPCloudCachingCKFetchResult> {
    NSDictionary * _fetchedDeletedRecordIDsByRecordType;
    NSDictionary * _fetchedRecords;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *fetchedDeletedRecordIDsByRecordType;
@property (nonatomic, readonly) NSDictionary *fetchedRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fetchedDeletedRecordIDsByRecordType;
- (id)fetchedRecords;
- (id)initWithFetchedRecords:(id)arg1 fetchedDeletedRecordIDsByRecordType:(id)arg2;

@end
