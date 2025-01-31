//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, PBDataReader, PBUnknownFields;

@interface GEORPPlaceRequestResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_placeRequest:1;
        unsigned int read_placeResponse:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_placeResponse:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property(readonly, nonatomic) _Bool hasPlaceResponse;
- (void)_readPlaceResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
- (void)_readPlaceRequest;

@end

