//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString, PBDataReader;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    struct {
        unsigned int read_addressID:1;
        unsigned int read_addressLocation:1;
        unsigned int wrote_addressID:1;
        unsigned int wrote_addressLocation:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *addressID;
@property(readonly, nonatomic) _Bool hasAddressID;
- (void)_readAddressID;
@property(retain, nonatomic) GEOLocation *addressLocation;
@property(readonly, nonatomic) _Bool hasAddressLocation;
- (void)_readAddressLocation;

@end

