//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineArea : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_displayMapRegions;
    GEOMapRegion *_mapRegion;
    GEOMapRegion *_maximumAllowedMapRegion;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegions:1;
        unsigned int read_mapRegion:1;
        unsigned int read_maximumAllowedMapRegion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayMapRegions:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_maximumAllowedMapRegion:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)displayMapRegionType;
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
- (id)displayMapRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayMapRegionsCount;
- (void)_addNoFlagsDisplayMapRegion:(id)arg1;
- (void)addDisplayMapRegion:(id)arg1;
- (void)clearDisplayMapRegions;
@property(retain, nonatomic) NSMutableArray *displayMapRegions;
- (void)_readDisplayMapRegions;
@property(retain, nonatomic) GEOMapRegion *maximumAllowedMapRegion;
@property(readonly, nonatomic) _Bool hasMaximumAllowedMapRegion;
- (void)_readMaximumAllowedMapRegion;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (void)_readMapRegion;

@end

