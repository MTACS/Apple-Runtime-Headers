//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDCategoryInformation : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_localizedMapsCategoryName;
    NSString *_mapsCategoryId;
    GEOStyleAttributes *_mapsCategoryStyleAttributes;
    NSString *_walletCategoryId;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_localizedMapsCategoryName:1;
        unsigned int read_mapsCategoryId:1;
        unsigned int read_mapsCategoryStyleAttributes:1;
        unsigned int read_walletCategoryId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_localizedMapsCategoryName:1;
        unsigned int wrote_mapsCategoryId:1;
        unsigned int wrote_mapsCategoryStyleAttributes:1;
        unsigned int wrote_walletCategoryId:1;
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
@property(retain, nonatomic) GEOStyleAttributes *mapsCategoryStyleAttributes;
@property(readonly, nonatomic) BOOL hasMapsCategoryStyleAttributes;
- (void)_readMapsCategoryStyleAttributes;
@property(retain, nonatomic) GEOLocalizedString *localizedMapsCategoryName;
@property(readonly, nonatomic) BOOL hasLocalizedMapsCategoryName;
- (void)_readLocalizedMapsCategoryName;
@property(retain, nonatomic) NSString *mapsCategoryId;
@property(readonly, nonatomic) BOOL hasMapsCategoryId;
- (void)_readMapsCategoryId;
@property(retain, nonatomic) NSString *walletCategoryId;
@property(readonly, nonatomic) BOOL hasWalletCategoryId;
- (void)_readWalletCategoryId;

@end

