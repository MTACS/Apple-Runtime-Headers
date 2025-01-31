//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDEntity, GEOPDPlaceInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedService : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    GEOPDEntity *_entity;
    NSMutableArray *_hours;
    GEOPDPlaceInfo *_placeInfo;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_entity:1;
        unsigned int read_hours:1;
        unsigned int read_placeInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entity:1;
        unsigned int wrote_hours:1;
        unsigned int wrote_placeInfo:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)hoursType;
+ (id)linkedServicesForPlaceData:(id)arg1;
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
- (id)hoursAtIndex:(unsigned int)arg1;
- (unsigned int)hoursCount;
- (void)_addNoFlagsHours:(id)arg1;
- (void)addHours:(id)arg1;
- (void)clearHours;
@property(retain, nonatomic) NSMutableArray *hours;
- (void)_readHours;
@property(retain, nonatomic) GEOPDPlaceInfo *placeInfo;
@property(readonly, nonatomic) _Bool hasPlaceInfo;
- (void)_readPlaceInfo;
@property(retain, nonatomic) GEOPDEntity *entity;
@property(readonly, nonatomic) _Bool hasEntity;
- (void)_readEntity;

@end

