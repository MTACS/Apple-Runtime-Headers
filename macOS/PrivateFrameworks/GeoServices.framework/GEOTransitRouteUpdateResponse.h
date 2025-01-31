//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDDatasetABStatus, GEOTransitRouteUpdateConfiguration, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdateResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint _timepointUsed;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSData *_responseId;
    GEOTransitRouteUpdateConfiguration *_routeUpdateConfiguration;
    NSMutableArray *_routeUpdates;
    NSString *_transitDataVersion;
    int _status;
    struct {
        unsigned int has_timepointUsed:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_responseId:1;
        unsigned int read_routeUpdateConfiguration:1;
        unsigned int read_routeUpdates:1;
        unsigned int read_transitDataVersion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_timepointUsed:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_responseId:1;
        unsigned int wrote_routeUpdateConfiguration:1;
        unsigned int wrote_routeUpdates:1;
        unsigned int wrote_transitDataVersion:1;
        unsigned int wrote_status:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)routeUpdateType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *transitDataVersion;
@property(readonly, nonatomic) BOOL hasTransitDataVersion;
- (void)_readTransitDataVersion;
@property(nonatomic) BOOL hasTimepointUsed;
@property(nonatomic) struct GEOTimepoint timepointUsed;
@property(retain, nonatomic) GEOTransitRouteUpdateConfiguration *routeUpdateConfiguration;
@property(readonly, nonatomic) BOOL hasRouteUpdateConfiguration;
- (void)_readRouteUpdateConfiguration;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property(readonly, nonatomic) BOOL hasDatasetAbStatus;
- (void)_readDatasetAbStatus;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
@property(retain, nonatomic) NSData *responseId;
@property(readonly, nonatomic) BOOL hasResponseId;
- (void)_readResponseId;
- (id)routeUpdateAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeUpdatesCount;
- (void)_addNoFlagsRouteUpdate:(id)arg1;
- (void)addRouteUpdate:(id)arg1;
- (void)clearRouteUpdates;
@property(retain, nonatomic) NSMutableArray *routeUpdates;
- (void)_readRouteUpdates;

@end

