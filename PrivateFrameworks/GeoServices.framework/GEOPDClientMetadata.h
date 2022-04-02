/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDClientMetadata : PBCodable <NSCopying> {
    GEOABSecondPartyPlaceRequestClientMetaData * _abClientMetadata;
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    NSMutableArray * _businessChatPreflightIdentifiers;
    unsigned int  _dayOfWeek;
    NSString * _debugApiKey;
    NSString * _deviceCountryCode;
    NSString * _deviceDisplayLanguage;
    GEOLocation * _deviceExtendedLocation;
    NSMutableArray * _deviceHistoricalLocations;
    NSString * _deviceKeyboardLanguage;
    NSString * _deviceSpokenLanguage;
    bool  _enablePreflightVenues;
    struct { 
        unsigned int dayOfWeek : 1; 
        unsigned int hourOfDay : 1; 
        unsigned int requiredVersion : 1; 
        unsigned int resultListAttributionSupport : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int enablePreflightVenues : 1; 
    }  _has;
    unsigned int  _hourOfDay;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownClientResolvedTypeDeprecateds;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownClientResolvedTypes;
    int  _requiredVersion;
    int  _resultListAttributionSupport;
    unsigned int  _timeSinceMapEnteredForeground;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic, retain) NSMutableArray *businessChatPreflightIdentifiers;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic, retain) NSString *debugApiKey;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSString *deviceDisplayLanguage;
@property (nonatomic, retain) GEOLocation *deviceExtendedLocation;
@property (nonatomic, retain) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic, retain) NSString *deviceKeyboardLanguage;
@property (nonatomic, retain) NSString *deviceSpokenLanguage;
@property (nonatomic) bool enablePreflightVenues;
@property (nonatomic, readonly) bool hasAbClientMetadata;
@property (nonatomic, readonly) bool hasAdditionalEnabledMarkets;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic, readonly) bool hasDebugApiKey;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDeviceDisplayLanguage;
@property (nonatomic, readonly) bool hasDeviceExtendedLocation;
@property (nonatomic, readonly) bool hasDeviceKeyboardLanguage;
@property (nonatomic, readonly) bool hasDeviceSpokenLanguage;
@property (nonatomic) bool hasEnablePreflightVenues;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic) bool hasRequiredVersion;
@property (nonatomic) bool hasResultListAttributionSupport;
@property (nonatomic) bool hasTimeSinceMapEnteredForeground;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic, readonly) int*knownClientResolvedTypeDeprecateds;
@property (nonatomic, readonly) unsigned long long knownClientResolvedTypeDeprecatedsCount;
@property (nonatomic, readonly) int*knownClientResolvedTypes;
@property (nonatomic, readonly) unsigned long long knownClientResolvedTypesCount;
@property (nonatomic) int requiredVersion;
@property (nonatomic) int resultListAttributionSupport;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)businessChatPreflightIdentifierType;
+ (Class)deviceHistoricalLocationType;

- (void).cxx_destruct;
- (int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg1;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (int)StringAsRequiredVersion:(id)arg1;
- (int)StringAsResultListAttributionSupport:(id)arg1;
- (id)abClientMetadata;
- (void)addBusinessChatPreflightIdentifier:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)addKnownClientResolvedTypeDeprecated:(int)arg1;
- (id)additionalEnabledMarkets;
- (id)businessChatPreflightIdentifierAtIndex:(unsigned long long)arg1;
- (id)businessChatPreflightIdentifiers;
- (unsigned long long)businessChatPreflightIdentifiersCount;
- (void)clearBusinessChatPreflightIdentifiers;
- (void)clearDeviceHistoricalLocations;
- (void)clearKnownClientResolvedTypeDeprecateds;
- (void)clearKnownClientResolvedTypes;
- (void)clearLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (void)dealloc;
- (id)debugApiKey;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceDisplayLanguage;
- (id)deviceExtendedLocation;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (id)deviceHistoricalLocations;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)deviceKeyboardLanguage;
- (id)deviceSpokenLanguage;
- (id)dictionaryRepresentation;
- (bool)enablePreflightVenues;
- (bool)hasAbClientMetadata;
- (bool)hasAdditionalEnabledMarkets;
- (bool)hasDayOfWeek;
- (bool)hasDebugApiKey;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceDisplayLanguage;
- (bool)hasDeviceExtendedLocation;
- (bool)hasDeviceKeyboardLanguage;
- (bool)hasDeviceSpokenLanguage;
- (bool)hasEnablePreflightVenues;
- (bool)hasHourOfDay;
- (bool)hasRequiredVersion;
- (bool)hasResultListAttributionSupport;
- (bool)hasTimeSinceMapEnteredForeground;
- (unsigned long long)hash;
- (unsigned int)hourOfDay;
- (id)initWithTraits:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (int)knownClientResolvedTypeDeprecatedAtIndex:(unsigned long long)arg1;
- (int*)knownClientResolvedTypeDeprecateds;
- (id)knownClientResolvedTypeDeprecatedsAsString:(int)arg1;
- (unsigned long long)knownClientResolvedTypeDeprecatedsCount;
- (int*)knownClientResolvedTypes;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (unsigned long long)knownClientResolvedTypesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requiredVersion;
- (id)requiredVersionAsString:(int)arg1;
- (int)resultListAttributionSupport;
- (id)resultListAttributionSupportAsString:(int)arg1;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setBusinessChatPreflightIdentifiers:(id)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setDebugApiKey:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceDisplayLanguage:(id)arg1;
- (void)setDeviceExtendedLocation:(id)arg1;
- (void)setDeviceHistoricalLocations:(id)arg1;
- (void)setDeviceKeyboardLanguage:(id)arg1;
- (void)setDeviceSpokenLanguage:(id)arg1;
- (void)setEnablePreflightVenues:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasEnablePreflightVenues:(bool)arg1;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasRequiredVersion:(bool)arg1;
- (void)setHasResultListAttributionSupport:(bool)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (void)setKnownClientResolvedTypeDeprecateds:(int*)arg1 count:(unsigned long long)arg2;
- (void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setRequiredVersion:(int)arg1;
- (void)setResultListAttributionSupport:(int)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (unsigned int)timeSinceMapEnteredForeground;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
