//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABDebugPanelExperimentBranch, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABClientDebugPanelExperimentBranch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_configKeyValues;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_configKeyValues:1;
        unsigned int read_debugExperimentBranch:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_configKeyValues:1;
        unsigned int wrote_debugExperimentBranch:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)configKeyValueType;
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
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)configKeyValuesCount;
- (void)_addNoFlagsConfigKeyValue:(id)arg1;
- (void)addConfigKeyValue:(id)arg1;
- (void)clearConfigKeyValues;
@property(retain, nonatomic) NSMutableArray *configKeyValues;
- (void)_readConfigKeyValues;
@property(retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property(readonly, nonatomic) _Bool hasDebugExperimentBranch;
- (void)_readDebugExperimentBranch;

@end

