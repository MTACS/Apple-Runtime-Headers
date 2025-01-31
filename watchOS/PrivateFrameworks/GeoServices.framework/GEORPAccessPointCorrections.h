//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPAccessPointCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_addeds;
    NSMutableArray *_editeds;
    NSMutableArray *_removeds;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addeds:1;
        unsigned int read_editeds:1;
        unsigned int read_removeds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addeds:1;
        unsigned int wrote_editeds:1;
        unsigned int wrote_removeds:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)editedType;
+ (Class)removedType;
+ (Class)addedType;
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
- (id)editedAtIndex:(unsigned int)arg1;
- (unsigned int)editedsCount;
- (void)_addNoFlagsEdited:(id)arg1;
- (void)addEdited:(id)arg1;
- (void)clearEditeds;
@property(retain, nonatomic) NSMutableArray *editeds;
- (void)_readEditeds;
- (id)removedAtIndex:(unsigned int)arg1;
- (unsigned int)removedsCount;
- (void)_addNoFlagsRemoved:(id)arg1;
- (void)addRemoved:(id)arg1;
- (void)clearRemoveds;
@property(retain, nonatomic) NSMutableArray *removeds;
- (void)_readRemoveds;
- (id)addedAtIndex:(unsigned int)arg1;
- (unsigned int)addedsCount;
- (void)_addNoFlagsAdded:(id)arg1;
- (void)addAdded:(id)arg1;
- (void)clearAddeds;
@property(retain, nonatomic) NSMutableArray *addeds;
- (void)_readAddeds;

@end

