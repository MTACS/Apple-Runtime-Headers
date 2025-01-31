//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLRouteHandle, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOURLRouteHandle *_routeHandle;
    NSMutableArray *_waypoints;
    int _transportType;
    struct {
        unsigned int has_transportType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeHandle:1;
        unsigned int read_waypoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_routeHandle:1;
        unsigned int wrote_waypoints:1;
        unsigned int wrote_transportType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)waypointsType;
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
@property(retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property(readonly, nonatomic) BOOL hasRouteHandle;
- (void)_readRouteHandle;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)_addNoFlagsWaypoints:(id)arg1;
- (void)addWaypoints:(id)arg1;
- (void)clearWaypoints;
@property(retain, nonatomic) NSMutableArray *waypoints;
- (void)_readWaypoints;

@end

