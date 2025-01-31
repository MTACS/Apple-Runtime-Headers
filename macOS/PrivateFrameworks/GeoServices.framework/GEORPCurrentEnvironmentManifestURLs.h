//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_environmentDisplayName;
    NSString *_environmentReleaseName;
    NSMutableArray *_urls;
    struct {
        unsigned int read_environmentDisplayName:1;
        unsigned int read_environmentReleaseName:1;
        unsigned int read_urls:1;
        unsigned int wrote_environmentDisplayName:1;
        unsigned int wrote_environmentReleaseName:1;
        unsigned int wrote_urls:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)urlType;
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
- (id)urlAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)_addNoFlagsUrl:(id)arg1;
- (void)addUrl:(id)arg1;
- (void)clearUrls;
@property(retain, nonatomic) NSMutableArray *urls;
- (void)_readUrls;
@property(retain, nonatomic) NSString *environmentReleaseName;
@property(readonly, nonatomic) BOOL hasEnvironmentReleaseName;
- (void)_readEnvironmentReleaseName;
@property(retain, nonatomic) NSString *environmentDisplayName;
@property(readonly, nonatomic) BOOL hasEnvironmentDisplayName;
- (void)_readEnvironmentDisplayName;

@end

