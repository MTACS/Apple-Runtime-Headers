//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_personID;
    NSString *_token;
    _Bool _supportsMultipleAddresses;
    struct {
        unsigned int has_supportsMultipleAddresses:1;
        unsigned int read_personID:1;
        unsigned int read_token:1;
        unsigned int wrote_personID:1;
        unsigned int wrote_token:1;
        unsigned int wrote_supportsMultipleAddresses:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSupportsMultipleAddresses;
@property(nonatomic) _Bool supportsMultipleAddresses;
@property(retain, nonatomic) NSString *personID;
@property(readonly, nonatomic) _Bool hasPersonID;
- (void)_readPersonID;
@property(retain, nonatomic) NSString *token;
@property(readonly, nonatomic) _Bool hasToken;
- (void)_readToken;

@end

