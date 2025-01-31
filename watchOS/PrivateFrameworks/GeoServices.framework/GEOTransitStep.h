//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionCompatibility-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet, GEOLatLng, GEOTransitArrivalInfo, GEOTransitBaseFare, GEOTransitScheduleInfo, GEOTransitSurcharge, GEOTransitVehiclePositionInfo, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;
@protocol GEOTransitVehicleEntries;

@interface GEOTransitStep : PBCodable <GEOCompanionCompatibility, NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    CDStruct_084d6ede _routeDetailsPrimaryArtworkIndexs;
    CDStruct_084d6ede _steppingArtworkIndexs;
    GEOTransitArrivalInfo *_arrivalInfo;
    GEOTransitBaseFare *_baseFare;
    NSMutableArray *_enterExitInfos;
    GEOInstructionSet *_instructions;
    GEOLatLng *_location;
    GEOTransitScheduleInfo *_scheduleInfo;
    GEOTransitSurcharge *_surcharge;
    NSMutableArray *_transferInfos;
    NSData *_updateIdentifier;
    NSMutableArray *_vehicleInfos;
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;
    unsigned int _accessPointZilchIndex;
    unsigned int _defaultVehicleInfoIndex;
    unsigned int _departureFrequency;
    unsigned int _distanceInMeters;
    unsigned int _endingStopIndex;
    unsigned int _listTransitIncidentMessageIndex;
    int _maneuverType;
    unsigned int _routeDetailsSecondaryArtworkIndex;
    int _significanceForEndNode;
    unsigned int _startingStopIndex;
    unsigned int _startingTime;
    unsigned int _steppingTransitIncidentMessageIndex;
    unsigned int _walkingIndex;
    unsigned int _zilchIndex;
    _Bool _prioritizeTilesPreloading;
    struct {
        unsigned int has_accessPointZilchIndex:1;
        unsigned int has_defaultVehicleInfoIndex:1;
        unsigned int has_departureFrequency:1;
        unsigned int has_distanceInMeters:1;
        unsigned int has_endingStopIndex:1;
        unsigned int has_listTransitIncidentMessageIndex:1;
        unsigned int has_maneuverType:1;
        unsigned int has_routeDetailsSecondaryArtworkIndex:1;
        unsigned int has_significanceForEndNode:1;
        unsigned int has_startingStopIndex:1;
        unsigned int has_startingTime:1;
        unsigned int has_steppingTransitIncidentMessageIndex:1;
        unsigned int has_walkingIndex:1;
        unsigned int has_zilchIndex:1;
        unsigned int has_prioritizeTilesPreloading:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeDetailsPrimaryArtworkIndexs:1;
        unsigned int read_steppingArtworkIndexs:1;
        unsigned int read_arrivalInfo:1;
        unsigned int read_baseFare:1;
        unsigned int read_enterExitInfos:1;
        unsigned int read_instructions:1;
        unsigned int read_location:1;
        unsigned int read_scheduleInfo:1;
        unsigned int read_surcharge:1;
        unsigned int read_transferInfos:1;
        unsigned int read_updateIdentifier:1;
        unsigned int read_vehicleInfos:1;
        unsigned int read_vehiclePositionInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_routeDetailsPrimaryArtworkIndexs:1;
        unsigned int wrote_steppingArtworkIndexs:1;
        unsigned int wrote_arrivalInfo:1;
        unsigned int wrote_baseFare:1;
        unsigned int wrote_enterExitInfos:1;
        unsigned int wrote_instructions:1;
        unsigned int wrote_location:1;
        unsigned int wrote_scheduleInfo:1;
        unsigned int wrote_surcharge:1;
        unsigned int wrote_transferInfos:1;
        unsigned int wrote_updateIdentifier:1;
        unsigned int wrote_vehicleInfos:1;
        unsigned int wrote_vehiclePositionInfo:1;
        unsigned int wrote_accessPointZilchIndex:1;
        unsigned int wrote_defaultVehicleInfoIndex:1;
        unsigned int wrote_departureFrequency:1;
        unsigned int wrote_distanceInMeters:1;
        unsigned int wrote_endingStopIndex:1;
        unsigned int wrote_listTransitIncidentMessageIndex:1;
        unsigned int wrote_maneuverType:1;
        unsigned int wrote_routeDetailsSecondaryArtworkIndex:1;
        unsigned int wrote_significanceForEndNode:1;
        unsigned int wrote_startingStopIndex:1;
        unsigned int wrote_startingTime:1;
        unsigned int wrote_steppingTransitIncidentMessageIndex:1;
        unsigned int wrote_walkingIndex:1;
        unsigned int wrote_zilchIndex:1;
        unsigned int wrote_prioritizeTilesPreloading:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)transferInfoType;
+ (Class)enterExitInfoType;
+ (Class)vehicleInfoType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property(readonly, nonatomic) _Bool hasScheduleInfo;
- (void)_readScheduleInfo;
@property(retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property(readonly, nonatomic) _Bool hasVehiclePositionInfo;
- (void)_readVehiclePositionInfo;
@property(retain, nonatomic) NSData *updateIdentifier;
@property(readonly, nonatomic) _Bool hasUpdateIdentifier;
- (void)_readUpdateIdentifier;
@property(retain, nonatomic) GEOTransitSurcharge *surcharge;
@property(readonly, nonatomic) _Bool hasSurcharge;
- (void)_readSurcharge;
@property(retain, nonatomic) GEOTransitBaseFare *baseFare;
@property(readonly, nonatomic) _Bool hasBaseFare;
- (void)_readBaseFare;
@property(nonatomic) _Bool hasListTransitIncidentMessageIndex;
@property(nonatomic) unsigned int listTransitIncidentMessageIndex;
@property(nonatomic) _Bool hasSteppingTransitIncidentMessageIndex;
@property(nonatomic) unsigned int steppingTransitIncidentMessageIndex;
@property(nonatomic) _Bool hasDepartureFrequency;
@property(nonatomic) unsigned int departureFrequency;
@property(nonatomic) _Bool hasDefaultVehicleInfoIndex;
@property(nonatomic) unsigned int defaultVehicleInfoIndex;
@property(nonatomic) _Bool hasAccessPointZilchIndex;
@property(nonatomic) unsigned int accessPointZilchIndex;
@property(nonatomic) _Bool hasRouteDetailsSecondaryArtworkIndex;
@property(nonatomic) unsigned int routeDetailsSecondaryArtworkIndex;
- (void)setSteppingArtworkIndexs:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)steppingArtworkIndexAtIndex:(unsigned int)arg1;
- (void)_addNoFlagsSteppingArtworkIndex:(unsigned int)arg1;
- (void)addSteppingArtworkIndex:(unsigned int)arg1;
- (void)clearSteppingArtworkIndexs;
@property(readonly, nonatomic) unsigned int *steppingArtworkIndexs;
@property(readonly, nonatomic) unsigned int steppingArtworkIndexsCount;
- (void)_readSteppingArtworkIndexs;
- (void)setRouteDetailsPrimaryArtworkIndexs:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned int)arg1;
- (void)_addNoFlagsRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)clearRouteDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) unsigned int *routeDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) unsigned int routeDetailsPrimaryArtworkIndexsCount;
- (void)_readRouteDetailsPrimaryArtworkIndexs;
@property(nonatomic) _Bool hasDistanceInMeters;
@property(nonatomic) unsigned int distanceInMeters;
@property(nonatomic) _Bool hasZilchIndex;
@property(nonatomic) unsigned int zilchIndex;
@property(retain, nonatomic) GEOInstructionSet *instructions;
@property(readonly, nonatomic) _Bool hasInstructions;
- (void)_readInstructions;
- (int)StringAsSignificanceForEndNode:(id)arg1;
- (id)significanceForEndNodeAsString:(int)arg1;
@property(nonatomic) _Bool hasSignificanceForEndNode;
@property(nonatomic) int significanceForEndNode;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)_readLocation;
@property(retain, nonatomic) GEOTransitArrivalInfo *arrivalInfo;
@property(readonly, nonatomic) _Bool hasArrivalInfo;
- (void)_readArrivalInfo;
@property(nonatomic) _Bool hasStartingTime;
@property(nonatomic) unsigned int startingTime;
- (id)transferInfoAtIndex:(unsigned int)arg1;
- (unsigned int)transferInfosCount;
- (void)_addNoFlagsTransferInfo:(id)arg1;
- (void)addTransferInfo:(id)arg1;
- (void)clearTransferInfos;
@property(retain, nonatomic) NSMutableArray *transferInfos;
- (void)_readTransferInfos;
@property(nonatomic) _Bool hasWalkingIndex;
@property(nonatomic) unsigned int walkingIndex;
@property(nonatomic) _Bool hasPrioritizeTilesPreloading;
@property(nonatomic) _Bool prioritizeTilesPreloading;
- (id)enterExitInfoAtIndex:(unsigned int)arg1;
- (unsigned int)enterExitInfosCount;
- (void)_addNoFlagsEnterExitInfo:(id)arg1;
- (void)addEnterExitInfo:(id)arg1;
- (void)clearEnterExitInfos;
@property(retain, nonatomic) NSMutableArray *enterExitInfos;
- (void)_readEnterExitInfos;
- (id)vehicleInfoAtIndex:(unsigned int)arg1;
- (unsigned int)vehicleInfosCount;
- (void)_addNoFlagsVehicleInfo:(id)arg1;
- (void)addVehicleInfo:(id)arg1;
- (void)clearVehicleInfos;
@property(retain, nonatomic) NSMutableArray *vehicleInfos;
- (void)_readVehicleInfos;
@property(nonatomic) _Bool hasEndingStopIndex;
@property(nonatomic) unsigned int endingStopIndex;
@property(nonatomic) _Bool hasStartingStopIndex;
@property(nonatomic) unsigned int startingStopIndex;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType;
- (void)dealloc;
- (id)instanceCompatibleWithProtocolVersion:(unsigned int)arg1;
@property(readonly, nonatomic) id <GEOTransitVehicleEntries> vehicleEntries;
- (int)legTypeForManeuver;
- (void)updateTransitStep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

