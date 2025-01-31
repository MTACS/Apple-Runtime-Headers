//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemClientAttributes, GEOMapItemInitialRequestData, GEOPDPlaceRefinementParameters, PBDataReader;

@interface GEOMapItemHandle : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOMapItemInitialRequestData *_placeRequestData;
    int _handleType;
    struct {
        unsigned int has_handleType:1;
        unsigned int read_clientAttributes:1;
        unsigned int read_placeRefinementParameters:1;
        unsigned int read_placeRequestData:1;
        unsigned int wrote_clientAttributes:1;
        unsigned int wrote_placeRefinementParameters:1;
        unsigned int wrote_placeRequestData:1;
        unsigned int wrote_handleType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (id)handleDataForMapItem:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic) _Bool hasClientAttributes;
- (void)_readClientAttributes;
@property(retain, nonatomic) GEOMapItemInitialRequestData *placeRequestData;
@property(readonly, nonatomic) _Bool hasPlaceRequestData;
- (void)_readPlaceRequestData;
@property(retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property(readonly, nonatomic) _Bool hasPlaceRefinementParameters;
- (void)_readPlaceRefinementParameters;
- (int)StringAsHandleType:(id)arg1;
- (id)handleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasHandleType;
@property(nonatomic) int handleType;

@end

