//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_entranceNameDisplayString;
    NSMutableArray *_entranceZoomNames;
    NSString *_exitNameDisplayString;
    NSMutableArray *_exitZoomNames;
    GEOLatLng *_location;
    unsigned long long _muid;
    unsigned int _accessPointIndex;
    unsigned int _stationIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_accessPointIndex:1;
        unsigned int has_stationIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entranceNameDisplayString:1;
        unsigned int read_entranceZoomNames:1;
        unsigned int read_exitNameDisplayString:1;
        unsigned int read_exitZoomNames:1;
        unsigned int read_location:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entranceNameDisplayString:1;
        unsigned int wrote_entranceZoomNames:1;
        unsigned int wrote_exitNameDisplayString:1;
        unsigned int wrote_exitZoomNames:1;
        unsigned int wrote_location:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_accessPointIndex:1;
        unsigned int wrote_stationIndex:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)exitZoomNameType;
+ (Class)entranceZoomNameType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *exitNameDisplayString;
@property(readonly, nonatomic) _Bool hasExitNameDisplayString;
- (void)_readExitNameDisplayString;
@property(retain, nonatomic) NSString *entranceNameDisplayString;
@property(readonly, nonatomic) _Bool hasEntranceNameDisplayString;
- (void)_readEntranceNameDisplayString;
- (id)exitZoomNameAtIndex:(unsigned int)arg1;
- (unsigned int)exitZoomNamesCount;
- (void)_addNoFlagsExitZoomName:(id)arg1;
- (void)addExitZoomName:(id)arg1;
- (void)clearExitZoomNames;
@property(retain, nonatomic) NSMutableArray *exitZoomNames;
- (void)_readExitZoomNames;
- (id)entranceZoomNameAtIndex:(unsigned int)arg1;
- (unsigned int)entranceZoomNamesCount;
- (void)_addNoFlagsEntranceZoomName:(id)arg1;
- (void)addEntranceZoomName:(id)arg1;
- (void)clearEntranceZoomNames;
@property(retain, nonatomic) NSMutableArray *entranceZoomNames;
- (void)_readEntranceZoomNames;
@property(nonatomic) _Bool hasStationIndex;
@property(nonatomic) unsigned int stationIndex;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)_readLocation;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(nonatomic) _Bool hasAccessPointIndex;
@property(nonatomic) unsigned int accessPointIndex;
- (id)identifier;
- (id)bestExitNameWithLocale:(out id *)arg1;
- (id)bestExitName;
- (id)bestEntranceNameWithLocale:(out id *)arg1;
- (id)bestEntranceName;

@end

