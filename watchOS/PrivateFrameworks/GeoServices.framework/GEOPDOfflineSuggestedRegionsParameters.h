//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineSuggestedRegionsParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_layers;
    NSMutableArray *_locations;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_layers:1;
        unsigned int read_locations:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_layers:1;
        unsigned int wrote_locations:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)layerType;
+ (Class)locationType;
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
- (id)layerAtIndex:(unsigned int)arg1;
- (unsigned int)layersCount;
- (void)_addNoFlagsLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)clearLayers;
@property(retain, nonatomic) NSMutableArray *layers;
- (void)_readLayers;
- (id)locationAtIndex:(unsigned int)arg1;
- (unsigned int)locationsCount;
- (void)_addNoFlagsLocation:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
@property(retain, nonatomic) NSMutableArray *locations;
- (void)_readLocations;

@end

