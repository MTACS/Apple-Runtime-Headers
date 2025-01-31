//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_coordinate;
    GEOMapRegion *_mapRegion;
    GEOPDMapsIdentifier *_mapsId;
    int _formType;
    struct {
        unsigned int has_formType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapRegion:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_formType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property(readonly, nonatomic) _Bool hasMapsId;
- (void)_readMapsId;
@property(retain, nonatomic) GEOLatLng *coordinate;
@property(readonly, nonatomic) _Bool hasCoordinate;
- (void)_readCoordinate;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (void)_readMapRegion;
- (int)StringAsFormType:(id)arg1;
- (id)formTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFormType;
@property(nonatomic) int formType;

@end

