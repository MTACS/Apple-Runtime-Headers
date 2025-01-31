//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, GEOPlaceFormattedString, PBDataReader, PBUnknownFields;

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_cardTitle;
    GEOPlaceFormattedString *_commuteTitle;
    GEOFormattedString *_routeDescription;
    GEOFormattedString *_routeTitle;
    GEOPlaceFormattedString *_title;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_body:1;
        unsigned int read_cardTitle:1;
        unsigned int read_commuteTitle:1;
        unsigned int read_routeDescription:1;
        unsigned int read_routeTitle:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_body:1;
        unsigned int wrote_cardTitle:1;
        unsigned int wrote_commuteTitle:1;
        unsigned int wrote_routeDescription:1;
        unsigned int wrote_routeTitle:1;
        unsigned int wrote_title:1;
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
@property(retain, nonatomic) GEOPlaceFormattedString *body;
@property(readonly, nonatomic) BOOL hasBody;
- (void)_readBody;
@property(retain, nonatomic) GEOPlaceFormattedString *commuteTitle;
@property(readonly, nonatomic) BOOL hasCommuteTitle;
- (void)_readCommuteTitle;
@property(retain, nonatomic) GEOPlaceFormattedString *title;
@property(readonly, nonatomic) BOOL hasTitle;
- (void)_readTitle;
@property(retain, nonatomic) GEOFormattedString *routeDescription;
@property(readonly, nonatomic) BOOL hasRouteDescription;
- (void)_readRouteDescription;
@property(retain, nonatomic) GEOFormattedString *routeTitle;
@property(readonly, nonatomic) BOOL hasRouteTitle;
- (void)_readRouteTitle;
@property(retain, nonatomic) GEOFormattedString *cardTitle;
@property(readonly, nonatomic) BOOL hasCardTitle;
- (void)_readCardTitle;

@end

