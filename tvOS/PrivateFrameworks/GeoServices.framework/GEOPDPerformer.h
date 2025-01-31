//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPerformer : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_itunesId;
    NSString *_itunesUrl;
    GEOLocalizedString *_name;
    NSString *_performerId;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_itunesId:1;
        unsigned int read_itunesUrl:1;
        unsigned int read_name:1;
        unsigned int read_performerId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_itunesId:1;
        unsigned int wrote_itunesUrl:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performerId:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *itunesUrl;
@property(readonly, nonatomic) _Bool hasItunesUrl;
- (void)_readItunesUrl;
@property(retain, nonatomic) NSString *itunesId;
@property(readonly, nonatomic) _Bool hasItunesId;
- (void)_readItunesId;
@property(retain, nonatomic) NSString *performerId;
@property(readonly, nonatomic) _Bool hasPerformerId;
- (void)_readPerformerId;
@property(retain, nonatomic) GEOLocalizedString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;

@end

