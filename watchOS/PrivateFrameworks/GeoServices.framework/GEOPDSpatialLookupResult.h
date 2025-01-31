//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDBounds, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    CDStruct_56d48c16 _mappedCategorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mappedCategorys:1;
        unsigned int read_bounds:1;
        unsigned int read_center:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_mappedCategorys:1;
        unsigned int wrote_bounds:1;
        unsigned int wrote_center:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (id)spatialLookupResultForPlaceData:(id)arg1;
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
- (int)StringAsMappedCategorys:(id)arg1;
- (id)mappedCategorysAsString:(int)arg1;
- (void)setMappedCategorys:(int *)arg1 count:(unsigned int)arg2;
- (int)mappedCategoryAtIndex:(unsigned int)arg1;
- (void)_addNoFlagsMappedCategory:(int)arg1;
- (void)addMappedCategory:(int)arg1;
- (void)clearMappedCategorys;
@property(readonly, nonatomic) int *mappedCategorys;
@property(readonly, nonatomic) unsigned int mappedCategorysCount;
- (void)_readMappedCategorys;
@property(retain, nonatomic) GEOPDBounds *bounds;
@property(readonly, nonatomic) _Bool hasBounds;
- (void)_readBounds;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)_readCenter;
- (void)dealloc;

@end

