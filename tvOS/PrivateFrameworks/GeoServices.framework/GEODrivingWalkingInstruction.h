//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODrivingWalkingInstruction : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_continueCommands;
    GEOFormattedString *_distance;
    NSMutableArray *_mergeCommands;
    NSMutableArray *_normalCommands;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_continueCommands:1;
        unsigned int read_distance:1;
        unsigned int read_mergeCommands:1;
        unsigned int read_normalCommands:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_continueCommands:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_mergeCommands:1;
        unsigned int wrote_normalCommands:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)mergeCommandType;
+ (Class)continueCommandType;
+ (Class)normalCommandType;
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
- (id)mergeCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)mergeCommandsCount;
- (void)_addNoFlagsMergeCommand:(id)arg1;
- (void)addMergeCommand:(id)arg1;
- (void)clearMergeCommands;
@property(retain, nonatomic) NSMutableArray *mergeCommands;
- (void)_readMergeCommands;
- (id)continueCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)continueCommandsCount;
- (void)_addNoFlagsContinueCommand:(id)arg1;
- (void)addContinueCommand:(id)arg1;
- (void)clearContinueCommands;
@property(retain, nonatomic) NSMutableArray *continueCommands;
- (void)_readContinueCommands;
- (id)normalCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalCommandsCount;
- (void)_addNoFlagsNormalCommand:(id)arg1;
- (void)addNormalCommand:(id)arg1;
- (void)clearNormalCommands;
@property(retain, nonatomic) NSMutableArray *normalCommands;
- (void)_readNormalCommands;
@property(retain, nonatomic) GEOFormattedString *distance;
@property(readonly, nonatomic) _Bool hasDistance;
- (void)_readDistance;

@end

