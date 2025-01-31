//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPAddressCorrections, GEORPPersonalizedMapsContext, PBDataReader, PBUnknownFields;

@interface GEORPAddressFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPPersonalizedMapsContext *_personalizedMaps;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    int _type;
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_personalizedMaps:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_personalizedMaps:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_place:1;
        unsigned int wrote_type:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) BOOL hasPlaceRequest;
- (void)_readPlaceRequest;
@property(retain, nonatomic) GEORPPersonalizedMapsContext *personalizedMaps;
@property(readonly, nonatomic) BOOL hasPersonalizedMaps;
- (void)_readPersonalizedMaps;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) BOOL hasPlace;
- (void)_readPlace;
@property(retain, nonatomic) GEORPAddressCorrections *address;
@property(readonly, nonatomic) BOOL hasAddress;
- (void)_readAddress;

@end

