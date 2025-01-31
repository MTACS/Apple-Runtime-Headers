//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPSearchCommonContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_lastSearchString;
    NSString *_lastUserTypedSearchString;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_lastSearchString:1;
        unsigned int read_lastUserTypedSearchString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_lastSearchString:1;
        unsigned int wrote_lastUserTypedSearchString:1;
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
@property(retain, nonatomic) NSString *lastUserTypedSearchString;
@property(readonly, nonatomic) BOOL hasLastUserTypedSearchString;
- (void)_readLastUserTypedSearchString;
@property(retain, nonatomic) NSString *lastSearchString;
@property(readonly, nonatomic) BOOL hasLastSearchString;
- (void)_readLastSearchString;

@end

