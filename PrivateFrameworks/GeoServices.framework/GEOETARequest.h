/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequest : PBRequest <NSCopying> {
    GEOPDABClientDatasetMetadata * _abClientMetadata;
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    bool  _allowPartialResults;
    GEOAutomobileOptions * _automobileOptions;
    GEOClientCapabilities * _clientCapabilities;
    GEOCommonOptions * _commonOptions;
    NSMutableArray * _destinationWaypointTypeds;
    NSMutableArray * _destinations;
    NSMutableArray * _deviceHistoricalLocations;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int timepoint : 1; 
        unsigned int sessionRelativeTimestamp : 1; 
        unsigned int transportType : 1; 
        unsigned int walkingLimitMeters : 1; 
        unsigned int allowPartialResults : 1; 
        unsigned int includeDistance : 1; 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeRouteTrafficDetail : 1; 
        unsigned int includeShortTrafficSummary : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int needServerLatency : 1; 
        unsigned int useLiveTrafficAsFallback : 1; 
    }  _has;
    bool  _includeDistance;
    bool  _includeHistoricTravelTime;
    bool  _includeRouteTrafficDetail;
    bool  _includeShortTrafficSummary;
    bool  _isFromAPI;
    GEOLocation * _lastKnownRoadLocation;
    bool  _needServerLatency;
    GEOWaypoint * _origin;
    GEOWaypointTyped * _originWaypointTyped;
    NSData * _originalRouteID;
    NSData * _originalRouteZilchPoints;
    NSString * _phoneticLocaleIdentifier;
    NSString * _requestingAppId;
    NSMutableArray * _serviceTags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    double  _sessionRelativeTimestamp;
    NSData * _sessionState;
    struct GEOTimepoint { 
        double _time; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _timepoint;
    GEOTFTrafficSnapshot * _trafficSnapshot;
    GEOTransitOptions * _transitOptions;
    int  _transportType;
    bool  _useLiveTrafficAsFallback;
    unsigned int  _walkingLimitMeters;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, retain) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic) bool allowPartialResults;
@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, retain) GEOClientCapabilities *clientCapabilities;
@property (nonatomic, retain) GEOCommonOptions *commonOptions;
@property (nonatomic, retain) NSMutableArray *destinationWaypointTypeds;
@property (nonatomic, retain) NSMutableArray *destinations;
@property (nonatomic, retain) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic, readonly) bool hasAbClientMetadata;
@property (nonatomic, readonly) bool hasAdditionalEnabledMarkets;
@property (nonatomic) bool hasAllowPartialResults;
@property (nonatomic, readonly) bool hasAutomobileOptions;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasCommonOptions;
@property (nonatomic) bool hasIncludeDistance;
@property (nonatomic) bool hasIncludeHistoricTravelTime;
@property (nonatomic) bool hasIncludeRouteTrafficDetail;
@property (nonatomic) bool hasIncludeShortTrafficSummary;
@property (nonatomic) bool hasIsFromAPI;
@property (nonatomic, readonly) bool hasLastKnownRoadLocation;
@property (nonatomic) bool hasNeedServerLatency;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic, readonly) bool hasOriginWaypointTyped;
@property (nonatomic, readonly) bool hasOriginalRouteID;
@property (nonatomic, readonly) bool hasOriginalRouteZilchPoints;
@property (nonatomic, readonly) bool hasPhoneticLocaleIdentifier;
@property (nonatomic, readonly) bool hasRequestingAppId;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasSessionRelativeTimestamp;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic) bool hasTimepoint;
@property (nonatomic, readonly) bool hasTrafficSnapshot;
@property (nonatomic, readonly) bool hasTransitOptions;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasUseLiveTrafficAsFallback;
@property (nonatomic) bool hasWalkingLimitMeters;
@property (nonatomic, readonly) bool hasWalkingOptions;
@property (nonatomic) bool includeDistance;
@property (nonatomic) bool includeHistoricTravelTime;
@property (nonatomic) bool includeRouteTrafficDetail;
@property (nonatomic) bool includeShortTrafficSummary;
@property (nonatomic) bool isFromAPI;
@property (nonatomic, retain) GEOLocation *lastKnownRoadLocation;
@property (nonatomic) bool needServerLatency;
@property (nonatomic, retain) GEOWaypoint *origin;
@property (nonatomic, retain) GEOWaypointTyped *originWaypointTyped;
@property (nonatomic, retain) NSData *originalRouteID;
@property (nonatomic, retain) NSData *originalRouteZilchPoints;
@property (nonatomic, retain) NSString *phoneticLocaleIdentifier;
@property (nonatomic, retain) NSString *requestingAppId;
@property (nonatomic, retain) NSMutableArray *serviceTags;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic) struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timepoint;
@property (nonatomic, retain) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic) int transportType;
@property (nonatomic) bool useLiveTrafficAsFallback;
@property (nonatomic) unsigned int walkingLimitMeters;
@property (nonatomic, retain) GEOWalkingOptions *walkingOptions;

+ (Class)destinationType;
+ (Class)destinationWaypointTypedType;
+ (Class)deviceHistoricalLocationType;
+ (Class)serviceTagType;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (id)abClientMetadata;
- (void)addDestination:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (id)additionalEnabledMarkets;
- (bool)allowPartialResults;
- (id)automobileOptions;
- (void)clearDestinationWaypointTypeds;
- (void)clearDestinations;
- (void)clearDeviceHistoricalLocations;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (id)commonOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypeds;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)destinations;
- (unsigned long long)destinationsCount;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (id)deviceHistoricalLocations;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)dictionaryRepresentation;
- (bool)hasAbClientMetadata;
- (bool)hasAdditionalEnabledMarkets;
- (bool)hasAllowPartialResults;
- (bool)hasAutomobileOptions;
- (bool)hasClientCapabilities;
- (bool)hasCommonOptions;
- (bool)hasIncludeDistance;
- (bool)hasIncludeHistoricTravelTime;
- (bool)hasIncludeRouteTrafficDetail;
- (bool)hasIncludeShortTrafficSummary;
- (bool)hasIsFromAPI;
- (bool)hasLastKnownRoadLocation;
- (bool)hasNeedServerLatency;
- (bool)hasOrigin;
- (bool)hasOriginWaypointTyped;
- (bool)hasOriginalRouteID;
- (bool)hasOriginalRouteZilchPoints;
- (bool)hasPhoneticLocaleIdentifier;
- (bool)hasRequestingAppId;
- (bool)hasSessionID;
- (bool)hasSessionRelativeTimestamp;
- (bool)hasSessionState;
- (bool)hasTimepoint;
- (bool)hasTrafficSnapshot;
- (bool)hasTransitOptions;
- (bool)hasTransportType;
- (bool)hasUseLiveTrafficAsFallback;
- (bool)hasWalkingLimitMeters;
- (bool)hasWalkingOptions;
- (unsigned long long)hash;
- (bool)includeDistance;
- (bool)includeHistoricTravelTime;
- (bool)includeRouteTrafficDetail;
- (bool)includeShortTrafficSummary;
- (id)initWithQuickETARequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromAPI;
- (id)lastKnownRoadLocation;
- (void)mergeFrom:(id)arg1;
- (bool)needServerLatency;
- (id)origin;
- (id)originWaypointTyped;
- (id)originalRouteID;
- (id)originalRouteZilchPoints;
- (id)phoneticLocaleIdentifier;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestingAppId;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (double)sessionRelativeTimestamp;
- (id)sessionState;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setAllowPartialResults:(bool)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setCommonOptions:(id)arg1;
- (void)setDestinationWaypointTypeds:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDeviceHistoricalLocations:(id)arg1;
- (void)setHasAllowPartialResults:(bool)arg1;
- (void)setHasIncludeDistance:(bool)arg1;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setHasIncludeRouteTrafficDetail:(bool)arg1;
- (void)setHasIncludeShortTrafficSummary:(bool)arg1;
- (void)setHasIsFromAPI:(bool)arg1;
- (void)setHasNeedServerLatency:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSessionRelativeTimestamp:(bool)arg1;
- (void)setHasTimepoint:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasUseLiveTrafficAsFallback:(bool)arg1;
- (void)setHasWalkingLimitMeters:(bool)arg1;
- (void)setIncludeDistance:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (void)setIncludeRouteTrafficDetail:(bool)arg1;
- (void)setIncludeShortTrafficSummary:(bool)arg1;
- (void)setIsFromAPI:(bool)arg1;
- (void)setLastKnownRoadLocation:(id)arg1;
- (void)setNeedServerLatency:(bool)arg1;
- (void)setOrigin:(id)arg1;
- (void)setOriginWaypointTyped:(id)arg1;
- (void)setOriginalRouteID:(id)arg1;
- (void)setOriginalRouteZilchPoints:(id)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setRequestingAppId:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setSessionState:(id)arg1;
- (void)setTimepoint:(struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setTrafficSnapshot:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setUseLiveTrafficAsFallback:(bool)arg1;
- (void)setWalkingLimitMeters:(unsigned int)arg1;
- (void)setWalkingOptions:(id)arg1;
- (struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timepoint;
- (id)trafficSnapshot;
- (id)transitOptions;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (bool)useLiveTrafficAsFallback;
- (unsigned int)walkingLimitMeters;
- (id)walkingOptions;
- (void)writeTo:(id)arg1;

@end
