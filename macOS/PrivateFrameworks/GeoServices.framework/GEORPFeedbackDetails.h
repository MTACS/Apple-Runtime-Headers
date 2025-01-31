//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAddressFeedback, GEORPDirectionsFeedback, GEORPMerchantLookupFeedback, GEORPPoiFeedback, GEORPSearchFeedback, GEORPTileFeedback, GEORPTransitPoiFeedback, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEORPAddressFeedback *_addressPointFeedback;
    GEORPDirectionsFeedback *_directionsFeedback;
    GEORPMerchantLookupFeedback *_merchantLookupFeedback;
    GEORPPoiFeedback *_poiFeedback;
    GEORPSearchFeedback *_searchFeedback;
    GEORPTileFeedback *_tileFeedback;
    GEORPTransitPoiFeedback *_transitPoiFeedback;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressPointFeedback:1;
        unsigned int read_directionsFeedback:1;
        unsigned int read_merchantLookupFeedback:1;
        unsigned int read_poiFeedback:1;
        unsigned int read_searchFeedback:1;
        unsigned int read_tileFeedback:1;
        unsigned int read_transitPoiFeedback:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressPointFeedback:1;
        unsigned int wrote_directionsFeedback:1;
        unsigned int wrote_merchantLookupFeedback:1;
        unsigned int wrote_poiFeedback:1;
        unsigned int wrote_searchFeedback:1;
        unsigned int wrote_tileFeedback:1;
        unsigned int wrote_transitPoiFeedback:1;
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
@property(retain, nonatomic) GEORPTileFeedback *tileFeedback;
@property(readonly, nonatomic) BOOL hasTileFeedback;
- (void)_readTileFeedback;
@property(retain, nonatomic) GEORPAddressFeedback *addressPointFeedback;
@property(readonly, nonatomic) BOOL hasAddressPointFeedback;
- (void)_readAddressPointFeedback;
@property(retain, nonatomic) GEORPDirectionsFeedback *directionsFeedback;
@property(readonly, nonatomic) BOOL hasDirectionsFeedback;
- (void)_readDirectionsFeedback;
@property(retain, nonatomic) GEORPMerchantLookupFeedback *merchantLookupFeedback;
@property(readonly, nonatomic) BOOL hasMerchantLookupFeedback;
- (void)_readMerchantLookupFeedback;
@property(retain, nonatomic) GEORPSearchFeedback *searchFeedback;
@property(readonly, nonatomic) BOOL hasSearchFeedback;
- (void)_readSearchFeedback;
@property(retain, nonatomic) GEORPTransitPoiFeedback *transitPoiFeedback;
@property(readonly, nonatomic) BOOL hasTransitPoiFeedback;
- (void)_readTransitPoiFeedback;
@property(retain, nonatomic) GEORPPoiFeedback *poiFeedback;
@property(readonly, nonatomic) BOOL hasPoiFeedback;
- (void)_readPoiFeedback;

@end

