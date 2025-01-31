//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSString, PBDataReader;

@interface GEORPPlaceInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    NSString *_sourceApplication;
    NSString *_sourceUrl;
    struct {
        unsigned int read_placeRequest:1;
        unsigned int read_placeResponse:1;
        unsigned int read_sourceApplication:1;
        unsigned int read_sourceUrl:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_placeResponse:1;
        unsigned int wrote_sourceApplication:1;
        unsigned int wrote_sourceUrl:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSString *sourceUrl;
@property(readonly, nonatomic) BOOL hasSourceUrl;
- (void)_readSourceUrl;
@property(retain, nonatomic) NSString *sourceApplication;
@property(readonly, nonatomic) BOOL hasSourceApplication;
- (void)_readSourceApplication;
@property(retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property(readonly, nonatomic) BOOL hasPlaceResponse;
- (void)_readPlaceResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) BOOL hasPlaceRequest;
- (void)_readPlaceRequest;
- (void)clearLocations;
- (void)_clearLocationsFromPlaceResponse;
- (void)_clearLocationsFromPlaceRequest;
- (void)clearSessionId;

@end

