//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOBusinessOptions : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributeKeys;
    NSMutableArray *_photoOptions;
    int _maxBusinessResults;
    _Bool _includeBusinessHours;
    _Bool _includeCenter;
    struct {
        unsigned int has_maxBusinessResults:1;
        unsigned int has_includeBusinessHours:1;
        unsigned int has_includeCenter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributeKeys:1;
        unsigned int read_photoOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributeKeys:1;
        unsigned int wrote_photoOptions:1;
        unsigned int wrote_maxBusinessResults:1;
        unsigned int wrote_includeBusinessHours:1;
        unsigned int wrote_includeCenter:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)attributeKeyType;
+ (Class)photoOptionsType;
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
@property(nonatomic) _Bool hasIncludeCenter;
@property(nonatomic) _Bool includeCenter;
@property(nonatomic) _Bool hasMaxBusinessResults;
@property(nonatomic) int maxBusinessResults;
@property(nonatomic) _Bool hasIncludeBusinessHours;
@property(nonatomic) _Bool includeBusinessHours;
- (id)attributeKeyAtIndex:(unsigned int)arg1;
- (unsigned int)attributeKeysCount;
- (void)_addNoFlagsAttributeKey:(id)arg1;
- (void)addAttributeKey:(id)arg1;
- (void)clearAttributeKeys;
@property(retain, nonatomic) NSMutableArray *attributeKeys;
- (void)_readAttributeKeys;
- (id)photoOptionsAtIndex:(unsigned int)arg1;
- (unsigned int)photoOptionsCount;
- (void)_addNoFlagsPhotoOptions:(id)arg1;
- (void)addPhotoOptions:(id)arg1;
- (void)clearPhotoOptions;
@property(retain, nonatomic) NSMutableArray *photoOptions;
- (void)_readPhotoOptions;

@end

