//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionManeuverStep-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEONameInfo, NSMutableArray, NSString, PBDataReader;

@interface GEOCompanionDriveStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    struct GEOJunctionElement *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    GEONameInfo *_exitNumber;
    NSMutableArray *_maneuverNames;
    NSString *_shield;
    NSMutableArray *_signposts;
    int _drivingSide;
    int _junctionType;
    int _maneuverType;
    int _shieldType;
    BOOL _toFreeway;
    struct {
        unsigned int has_drivingSide:1;
        unsigned int has_junctionType:1;
        unsigned int has_maneuverType:1;
        unsigned int has_shieldType:1;
        unsigned int has_toFreeway:1;
        unsigned int read_junctionElements:1;
        unsigned int read_exitNumber:1;
        unsigned int read_maneuverNames:1;
        unsigned int read_shield:1;
        unsigned int read_signposts:1;
        unsigned int wrote_junctionElements:1;
        unsigned int wrote_exitNumber:1;
        unsigned int wrote_maneuverNames:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_signposts:1;
        unsigned int wrote_drivingSide:1;
        unsigned int wrote_junctionType:1;
        unsigned int wrote_maneuverType:1;
        unsigned int wrote_shieldType:1;
        unsigned int wrote_toFreeway:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)signpostType;
+ (Class)maneuverNameType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (int)StringAsDrivingSide:(id)arg1;
- (id)drivingSideAsString:(int)arg1;
@property(nonatomic) BOOL hasDrivingSide;
@property(nonatomic) int drivingSide;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsJunctionElement:(struct GEOJunctionElement)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;
- (void)clearJunctionElements;
@property(readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
- (void)_readJunctionElements;
- (int)StringAsJunctionType:(id)arg1;
- (id)junctionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasJunctionType;
@property(nonatomic) int junctionType;
@property(nonatomic) BOOL hasShieldType;
@property(nonatomic) int shieldType;
@property(retain, nonatomic) NSString *shield;
@property(readonly, nonatomic) BOOL hasShield;
- (void)_readShield;
@property(retain, nonatomic) GEONameInfo *exitNumber;
@property(readonly, nonatomic) BOOL hasExitNumber;
- (void)_readExitNumber;
@property(nonatomic) BOOL hasToFreeway;
@property(nonatomic) BOOL toFreeway;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)_addNoFlagsSignpost:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
@property(retain, nonatomic) NSMutableArray *signposts;
- (void)_readSignposts;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (void)_addNoFlagsManeuverName:(id)arg1;
- (void)addManeuverName:(id)arg1;
- (void)clearManeuverNames;
@property(retain, nonatomic) NSMutableArray *maneuverNames;
- (void)_readManeuverNames;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasManeuverType;
@property(nonatomic) int maneuverType;
- (void)dealloc;
@property(readonly, nonatomic) int transportType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

