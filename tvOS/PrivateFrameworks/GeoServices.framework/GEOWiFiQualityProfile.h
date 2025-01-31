//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOWiFiQualityHours, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityProfile : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    GEOWiFiQualityHours *_hours;
    NSMutableArray *_qualities;
    struct {
        unsigned int read_hours:1;
        unsigned int read_qualities:1;
        unsigned int wrote_hours:1;
        unsigned int wrote_qualities:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)qualitiesType;
- (void).cxx_destruct;
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
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)_addNoFlagsQualities:(id)arg1;
- (void)addQualities:(id)arg1;
- (void)clearQualities;
@property(retain, nonatomic) NSMutableArray *qualities;
- (void)_readQualities;
@property(retain, nonatomic) GEOWiFiQualityHours *hours;
@property(readonly, nonatomic) _Bool hasHours;
- (void)_readHours;

@end

