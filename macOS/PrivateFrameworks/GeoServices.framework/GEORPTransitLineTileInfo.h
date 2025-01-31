//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    unsigned long long _transitLineMuid;
    NSString *_transitLineName;
    NSString *_transitSystemName;
    struct {
        unsigned int has_transitLineMuid:1;
        unsigned int read_transitLineName:1;
        unsigned int read_transitSystemName:1;
        unsigned int wrote_transitLineMuid:1;
        unsigned int wrote_transitLineName:1;
        unsigned int wrote_transitSystemName:1;
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
@property(retain, nonatomic) NSString *transitSystemName;
@property(readonly, nonatomic) BOOL hasTransitSystemName;
- (void)_readTransitSystemName;
@property(retain, nonatomic) NSString *transitLineName;
@property(readonly, nonatomic) BOOL hasTransitLineName;
- (void)_readTransitLineName;
@property(nonatomic) BOOL hasTransitLineMuid;
@property(nonatomic) unsigned long long transitLineMuid;

@end

