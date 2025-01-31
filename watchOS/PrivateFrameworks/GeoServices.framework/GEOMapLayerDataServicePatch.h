//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceVersion, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServicePatch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    GEOMapLayerDataServiceLayerIndex *_index;
    GEOMapLayerDataServiceLayer *_layer;
    GEOMapLayerDataServiceVersion *_sourceVersion;
    GEOMapLayerDataServiceVersion *_targetVersion;
    CDStruct_2c11db96 _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) GEOMapLayerDataServiceLayerIndex *index;
@property(readonly, nonatomic) _Bool hasIndex;
- (void)_readIndex;
@property(retain, nonatomic) GEOMapLayerDataServiceVersion *targetVersion;
@property(readonly, nonatomic) _Bool hasTargetVersion;
- (void)_readTargetVersion;
@property(retain, nonatomic) GEOMapLayerDataServiceVersion *sourceVersion;
@property(readonly, nonatomic) _Bool hasSourceVersion;
- (void)_readSourceVersion;
@property(retain, nonatomic) GEOMapLayerDataServiceLayer *layer;
@property(readonly, nonatomic) _Bool hasLayer;
- (void)_readLayer;

@end

