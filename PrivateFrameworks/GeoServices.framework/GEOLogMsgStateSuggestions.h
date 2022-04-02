/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying> {
    int  _acSequenceNumber;
    NSMutableArray * _displayedResults;
    struct { 
        unsigned int acSequenceNumber : 1; 
        unsigned int searchFieldType : 1; 
        unsigned int selectedIndex : 1; 
    }  _has;
    int  _searchFieldType;
    NSString * _searchString;
    int  _selectedIndex;
}

@property (nonatomic) int acSequenceNumber;
@property (nonatomic, retain) NSMutableArray *displayedResults;
@property (nonatomic) bool hasAcSequenceNumber;
@property (nonatomic) bool hasSearchFieldType;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic) bool hasSelectedIndex;
@property (nonatomic) int searchFieldType;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int selectedIndex;

+ (Class)displayedResultType;

- (void).cxx_destruct;
- (int)StringAsSearchFieldType:(id)arg1;
- (int)acSequenceNumber;
- (void)addDisplayedResult:(id)arg1;
- (void)clearDisplayedResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedResultAtIndex:(unsigned long long)arg1;
- (id)displayedResults;
- (unsigned long long)displayedResultsCount;
- (bool)hasAcSequenceNumber;
- (bool)hasSearchFieldType;
- (bool)hasSearchString;
- (bool)hasSelectedIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchFieldType;
- (id)searchFieldTypeAsString:(int)arg1;
- (id)searchString;
- (int)selectedIndex;
- (void)setAcSequenceNumber:(int)arg1;
- (void)setDisplayedResults:(id)arg1;
- (void)setHasAcSequenceNumber:(bool)arg1;
- (void)setHasSearchFieldType:(bool)arg1;
- (void)setHasSelectedIndex:(bool)arg1;
- (void)setSearchFieldType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)writeTo:(id)arg1;

@end
