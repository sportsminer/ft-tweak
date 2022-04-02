/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASDatabaseCompetitionListEntryJournalEntry : HDJournalEntry {
    ASCodableDatabaseCompetitionListEntry * _competitionList;
}

@property (nonatomic, readonly) ASCodableDatabaseCompetitionListEntry *competitionList;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)competitionList;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompetitionList:(id)arg1;

@end
