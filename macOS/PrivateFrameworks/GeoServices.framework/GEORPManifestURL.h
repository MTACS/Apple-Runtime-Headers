//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPManifestURL : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_urlName;
    NSString *_urlValue;
    struct {
        unsigned int read_urlName:1;
        unsigned int read_urlValue:1;
        unsigned int wrote_urlName:1;
        unsigned int wrote_urlValue:1;
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
@property(retain, nonatomic) NSString *urlValue;
@property(readonly, nonatomic) BOOL hasUrlValue;
- (void)_readUrlValue;
@property(retain, nonatomic) NSString *urlName;
@property(readonly, nonatomic) BOOL hasUrlName;
- (void)_readUrlName;

@end

