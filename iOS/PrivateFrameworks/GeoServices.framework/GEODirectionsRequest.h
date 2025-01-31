//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEOOriginalRoute, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, GEOTrafficTrafficApiResponse, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    struct GEOSessionID _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_deviceHistoricalLocations;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocation *_lastKnownRoadLocation;
    NSString *_loggedAbExperiment;
    NSData *_nonRecommendedRoutesCache;
    NSData *_originalDirectionsResponseID;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEOOriginalRoute *_originalRoute;
    double _requestTime;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_serviceTags;
    double _sessionRelativeTimestamp;
    NSData *_sessionState;
    GEOTrafficTrafficApiResponse *_trafficApiResponse;
    NSMutableArray *_trafficSnapshotIds;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSMutableArray *_waypointTypeds;
    int _departureTime;
    unsigned int _mainTransportTypeMaxRouteCount;
    int _nonRecommendedRoutesOption;
    int _originalRoutePurpose;
    unsigned int _sequenceNumber;
    unsigned int _timeSinceLastRerouteRequest;
    _Bool _getRouteForZilchPoints;
    _Bool _isFromAPI;
    _Bool _needLatency;
    _Bool _useLiveTrafficAsFallback;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_requestTime:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_departureTime:1;
        unsigned int has_mainTransportTypeMaxRouteCount:1;
        unsigned int has_nonRecommendedRoutesOption:1;
        unsigned int has_originalRoutePurpose:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_timeSinceLastRerouteRequest:1;
        unsigned int has_getRouteForZilchPoints:1;
        unsigned int has_isFromAPI:1;
        unsigned int has_needLatency:1;
        unsigned int has_useLiveTrafficAsFallback:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_commonOptions:1;
        unsigned int read_currentMapRegion:1;
        unsigned int read_currentUserLocation:1;
        unsigned int read_deviceHistoricalLocations:1;
        unsigned int read_feedback:1;
        unsigned int read_lastKnownRoadLocation:1;
        unsigned int read_loggedAbExperiment:1;
        unsigned int read_nonRecommendedRoutesCache:1;
        unsigned int read_originalDirectionsResponseID:1;
        unsigned int read_originalRouteID:1;
        unsigned int read_originalRouteZilchPoints:1;
        unsigned int read_originalRoute:1;
        unsigned int read_routeAttributes:1;
        unsigned int read_serviceTags:1;
        unsigned int read_sessionState:1;
        unsigned int read_trafficApiResponse:1;
        unsigned int read_trafficSnapshotIds:1;
        unsigned int read_trafficSnapshot:1;
        unsigned int read_waypointTypeds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_additionalEnabledMarkets:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_commonOptions:1;
        unsigned int wrote_currentMapRegion:1;
        unsigned int wrote_currentUserLocation:1;
        unsigned int wrote_deviceHistoricalLocations:1;
        unsigned int wrote_feedback:1;
        unsigned int wrote_lastKnownRoadLocation:1;
        unsigned int wrote_loggedAbExperiment:1;
        unsigned int wrote_nonRecommendedRoutesCache:1;
        unsigned int wrote_originalDirectionsResponseID:1;
        unsigned int wrote_originalRouteID:1;
        unsigned int wrote_originalRouteZilchPoints:1;
        unsigned int wrote_originalRoute:1;
        unsigned int wrote_requestTime:1;
        unsigned int wrote_routeAttributes:1;
        unsigned int wrote_serviceTags:1;
        unsigned int wrote_sessionRelativeTimestamp:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_trafficApiResponse:1;
        unsigned int wrote_trafficSnapshotIds:1;
        unsigned int wrote_trafficSnapshot:1;
        unsigned int wrote_waypointTypeds:1;
        unsigned int wrote_departureTime:1;
        unsigned int wrote_mainTransportTypeMaxRouteCount:1;
        unsigned int wrote_nonRecommendedRoutesOption:1;
        unsigned int wrote_originalRoutePurpose:1;
        unsigned int wrote_sequenceNumber:1;
        unsigned int wrote_timeSinceLastRerouteRequest:1;
        unsigned int wrote_getRouteForZilchPoints:1;
        unsigned int wrote_isFromAPI:1;
        unsigned int wrote_needLatency:1;
        unsigned int wrote_useLiveTrafficAsFallback:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)trafficSnapshotIdsType;
+ (Class)serviceTagType;
+ (Class)deviceHistoricalLocationType;
+ (Class)waypointTypedType;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRequestTime;
@property(nonatomic) double requestTime;
@property(nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property(nonatomic) _Bool useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) _Bool hasTrafficSnapshot;
- (void)_readTrafficSnapshot;
@property(nonatomic) _Bool hasNeedLatency;
@property(nonatomic) _Bool needLatency;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSnapshotIdsCount;
- (void)_addNoFlagsTrafficSnapshotIds:(id)arg1;
- (void)addTrafficSnapshotIds:(id)arg1;
- (void)clearTrafficSnapshotIds;
@property(retain, nonatomic) NSMutableArray *trafficSnapshotIds;
- (void)_readTrafficSnapshotIds;
@property(retain, nonatomic) GEOTrafficTrafficApiResponse *trafficApiResponse;
@property(readonly, nonatomic) _Bool hasTrafficApiResponse;
- (void)_readTrafficApiResponse;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
- (void)_readServiceTags;
@property(retain, nonatomic) NSData *nonRecommendedRoutesCache;
@property(readonly, nonatomic) _Bool hasNonRecommendedRoutesCache;
- (void)_readNonRecommendedRoutesCache;
- (int)StringAsNonRecommendedRoutesOption:(id)arg1;
- (id)nonRecommendedRoutesOptionAsString:(int)arg1;
@property(nonatomic) _Bool hasNonRecommendedRoutesOption;
@property(nonatomic) int nonRecommendedRoutesOption;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void)_addNoFlagsDeviceHistoricalLocation:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
- (void)_readDeviceHistoricalLocations;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
- (void)_readAbClientMetadata;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
@property(nonatomic) _Bool hasOriginalRoutePurpose;
@property(nonatomic) int originalRoutePurpose;
@property(retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property(readonly, nonatomic) _Bool hasLastKnownRoadLocation;
- (void)_readLastKnownRoadLocation;
@property(retain, nonatomic) NSString *loggedAbExperiment;
@property(readonly, nonatomic) _Bool hasLoggedAbExperiment;
- (void)_readLoggedAbExperiment;
@property(retain, nonatomic) GEOCommonOptions *commonOptions;
@property(readonly, nonatomic) _Bool hasCommonOptions;
- (void)_readCommonOptions;
@property(nonatomic) _Bool hasIsFromAPI;
@property(nonatomic) _Bool isFromAPI;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) _Bool hasSessionState;
- (void)_readSessionState;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) unsigned int sequenceNumber;
@property(retain, nonatomic) GEOOriginalRoute *originalRoute;
@property(readonly, nonatomic) _Bool hasOriginalRoute;
- (void)_readOriginalRoute;
- (id)waypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointTypedsCount;
- (void)_addNoFlagsWaypointTyped:(id)arg1;
- (void)addWaypointTyped:(id)arg1;
- (void)clearWaypointTypeds;
@property(retain, nonatomic) NSMutableArray *waypointTypeds;
- (void)_readWaypointTypeds;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
- (void)_readAdditionalEnabledMarkets;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property(readonly, nonatomic) _Bool hasFeedback;
- (void)_readFeedback;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
@property(nonatomic) _Bool hasGetRouteForZilchPoints;
@property(nonatomic) _Bool getRouteForZilchPoints;
@property(nonatomic) _Bool hasDepartureTime;
@property(nonatomic) int departureTime;
@property(retain, nonatomic) NSData *originalDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasOriginalDirectionsResponseID;
- (void)_readOriginalDirectionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
- (void)_readClientCapabilities;
@property(nonatomic) _Bool hasTimeSinceLastRerouteRequest;
@property(nonatomic) unsigned int timeSinceLastRerouteRequest;
@property(retain, nonatomic) NSData *originalRouteZilchPoints;
@property(readonly, nonatomic) _Bool hasOriginalRouteZilchPoints;
- (void)_readOriginalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID;
@property(readonly, nonatomic) _Bool hasOriginalRouteID;
- (void)_readOriginalRouteID;
@property(retain, nonatomic) GEOMapRegion *currentMapRegion;
@property(readonly, nonatomic) _Bool hasCurrentMapRegion;
- (void)_readCurrentMapRegion;
@property(retain, nonatomic) GEOLocation *currentUserLocation;
@property(readonly, nonatomic) _Bool hasCurrentUserLocation;
- (void)_readCurrentUserLocation;
@property(nonatomic) _Bool hasMainTransportTypeMaxRouteCount;
@property(nonatomic) unsigned int mainTransportTypeMaxRouteCount;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) _Bool hasRouteAttributes;
- (void)_readRouteAttributes;
- (id)initWithFeedback:(id)arg1 sessionID:(struct GEOSessionID)arg2;
- (id)initWithFeedback:(id)arg1;
- (id)init;
- (id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2;
- (void)clearLocations;
- (void)clearSessionId;

@end

