/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICSectionedSearchResults : NSObject {
    bool  _disableAutomaticUpdates;
    NSMutableDictionary * _searchResultsBySection;
}

@property (nonatomic) bool disableAutomaticUpdates;
@property (nonatomic, retain) NSMutableDictionary *searchResultsBySection;

+ (id)newSearchResultsBySection;

- (void).cxx_destruct;
- (void)addSearchResult:(id)arg1 toSection:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (bool)addSearchResults:(id)arg1 removingFoundIdentifiers:(id)arg2 passingVisibilityTesting:(id)arg3;
- (void)addSearchResults:(id)arg1 toSection:(unsigned long long)arg2;
- (unsigned long long)addSearchResultsBySection:(id)arg1;
- (void)clear;
- (unsigned long long)countForSection:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (bool)disableAutomaticUpdates;
- (void)filterSearchResultsUsingVisiblityTesting:(id)arg1;
- (bool)hasSearchResults;
- (bool)hideSearchResultsForIdentifier:(id)arg1;
- (bool)hideSearchResultsForObjects:(id)arg1;
- (id)init;
- (void)noteWillBeUndeletedOrUntrashed:(id)arg1;
- (void)objectsDidChange:(id)arg1;
- (bool)passesVisibilityTesting:(id)arg1 forSearchResult:(id)arg2;
- (id)removeSearchResultAtRow:(long long)arg1 section:(unsigned long long)arg2;
- (bool)removeSearchResultWithIdentifier:(id)arg1 forHiding:(bool)arg2;
- (bool)removeSearchResultWithIdentifier:(id)arg1 fromSection:(unsigned long long)arg2 forHiding:(bool)arg3;
- (unsigned long long)removeSearchResultsWithIdentifiers:(id)arg1 forHiding:(bool)arg2;
- (bool)replaceSearchResultObject:(id)arg1 withObject:(id)arg2;
- (id)searchResultAtRow:(long long)arg1 section:(unsigned long long)arg2;
- (id)searchResultObjectsInSection:(unsigned long long)arg1;
- (id)searchResultSectionForSectionIndex:(unsigned long long)arg1;
- (id)searchResultsBySection;
- (id)searchResultsBySectionForSearchResults:(id)arg1 passingVisibilityTesting:(id)arg2;
- (id)searchResultsInSection:(unsigned long long)arg1;
- (unsigned long long)sectionForSearchResult:(id)arg1;
- (void)setDisableAutomaticUpdates:(bool)arg1;
- (void)setSearchResults:(id)arg1 forSection:(unsigned long long)arg2;
- (void)setSearchResultsBySection:(id)arg1;
- (void)updateForSortTypeChange;

@end
