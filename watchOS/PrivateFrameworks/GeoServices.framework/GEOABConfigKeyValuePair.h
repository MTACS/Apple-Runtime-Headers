//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABConfigValue, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigKeyValuePair : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_abConfigKey;
    GEOABConfigValue *_abConfigValue;
    int _abConfigValueType;
    struct {
        unsigned int has_abConfigValueType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abConfigKey:1;
        unsigned int read_abConfigValue:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_abConfigKey:1;
        unsigned int wrote_abConfigValue:1;
        unsigned int wrote_abConfigValueType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOABConfigValue *abConfigValue;
@property(readonly, nonatomic) _Bool hasAbConfigValue;
- (void)_readAbConfigValue;
- (int)StringAsAbConfigValueType:(id)arg1;
- (id)abConfigValueTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAbConfigValueType;
@property(nonatomic) int abConfigValueType;
@property(retain, nonatomic) NSString *abConfigKey;
@property(readonly, nonatomic) _Bool hasAbConfigKey;
- (void)_readAbConfigKey;

@end

