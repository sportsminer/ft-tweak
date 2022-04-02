/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADCalendarDatabaseCalCalendarInfoProvider : NSObject <CADCalCalendarInfoProvider> {
    <CADDatabaseProvider> * _databaseProvider;
}

@property (nonatomic, readonly) <CADDatabaseProvider> *databaseProvider;

- (void).cxx_destruct;
- (id)calendarRowIDsInStoreWithRowID:(int)arg1;
- (id)databaseProvider;
- (id)initWithDatabaseProvider:(id)arg1;
- (int)naturalLanguageSuggestionsCalendarRowID;
- (int)suggestionsCalendarRowID;

@end
