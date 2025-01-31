//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABAssignmentResponse, GEORPCurrentEnvironmentManifestURLs, GEORPMapLocation, GEORPNavigationSettings, GEORPSearchCommonContext, GEORPSourceInfo, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    CDStruct_56d48c16 _userPaths;
    NSMutableArray *_auxiliaryControls;
    double _clientCreatedAt;
    GEOABAssignmentResponse *_currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;
    GEORPMapLocation *_mapLocation;
    GEORPNavigationSettings *_navigationSettings;
    unsigned long long _originatingAuxiliaryControlIndex;
    GEORPSearchCommonContext *_searchCommon;
    GEORPSourceInfo *_sourceInfo;
    NSMutableArray *_visibleTileSets;
    int _deviceGmtOffset;
    int _pinType;
    struct {
        unsigned int has_clientCreatedAt:1;
        unsigned int has_originatingAuxiliaryControlIndex:1;
        unsigned int has_deviceGmtOffset:1;
        unsigned int has_pinType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_userPaths:1;
        unsigned int read_auxiliaryControls:1;
        unsigned int read_currentAbAssignmentResponse:1;
        unsigned int read_currentEnvironmentManifestUrls:1;
        unsigned int read_mapLocation:1;
        unsigned int read_navigationSettings:1;
        unsigned int read_searchCommon:1;
        unsigned int read_sourceInfo:1;
        unsigned int read_visibleTileSets:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_userPaths:1;
        unsigned int wrote_auxiliaryControls:1;
        unsigned int wrote_clientCreatedAt:1;
        unsigned int wrote_currentAbAssignmentResponse:1;
        unsigned int wrote_currentEnvironmentManifestUrls:1;
        unsigned int wrote_mapLocation:1;
        unsigned int wrote_navigationSettings:1;
        unsigned int wrote_originatingAuxiliaryControlIndex:1;
        unsigned int wrote_searchCommon:1;
        unsigned int wrote_sourceInfo:1;
        unsigned int wrote_visibleTileSets:1;
        unsigned int wrote_deviceGmtOffset:1;
        unsigned int wrote_pinType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)auxiliaryControlType;
+ (Class)visibleTileSetType;
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
@property(retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property(readonly, nonatomic) _Bool hasCurrentAbAssignmentResponse;
- (void)_readCurrentAbAssignmentResponse;
@property(retain, nonatomic) GEORPSearchCommonContext *searchCommon;
@property(readonly, nonatomic) _Bool hasSearchCommon;
- (void)_readSearchCommon;
@property(retain, nonatomic) GEORPSourceInfo *sourceInfo;
@property(readonly, nonatomic) _Bool hasSourceInfo;
- (void)_readSourceInfo;
@property(retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property(readonly, nonatomic) _Bool hasNavigationSettings;
- (void)_readNavigationSettings;
@property(retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property(readonly, nonatomic) _Bool hasCurrentEnvironmentManifestUrls;
- (void)_readCurrentEnvironmentManifestUrls;
@property(nonatomic) _Bool hasDeviceGmtOffset;
@property(nonatomic) int deviceGmtOffset;
@property(nonatomic) _Bool hasOriginatingAuxiliaryControlIndex;
@property(nonatomic) unsigned long long originatingAuxiliaryControlIndex;
- (id)auxiliaryControlAtIndex:(unsigned int)arg1;
- (unsigned int)auxiliaryControlsCount;
- (void)_addNoFlagsAuxiliaryControl:(id)arg1;
- (void)addAuxiliaryControl:(id)arg1;
- (void)clearAuxiliaryControls;
@property(retain, nonatomic) NSMutableArray *auxiliaryControls;
- (void)_readAuxiliaryControls;
@property(nonatomic) _Bool hasClientCreatedAt;
@property(nonatomic) double clientCreatedAt;
- (int)StringAsUserPaths:(id)arg1;
- (id)userPathsAsString:(int)arg1;
- (void)setUserPaths:(int *)arg1 count:(unsigned int)arg2;
- (int)userPathAtIndex:(unsigned int)arg1;
- (void)_addNoFlagsUserPath:(int)arg1;
- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
@property(readonly, nonatomic) int *userPaths;
@property(readonly, nonatomic) unsigned int userPathsCount;
- (void)_readUserPaths;
- (id)visibleTileSetAtIndex:(unsigned int)arg1;
- (unsigned int)visibleTileSetsCount;
- (void)_addNoFlagsVisibleTileSet:(id)arg1;
- (void)addVisibleTileSet:(id)arg1;
- (void)clearVisibleTileSets;
@property(retain, nonatomic) NSMutableArray *visibleTileSets;
- (void)_readVisibleTileSets;
@property(retain, nonatomic) GEORPMapLocation *mapLocation;
@property(readonly, nonatomic) _Bool hasMapLocation;
- (void)_readMapLocation;
- (int)StringAsPinType:(id)arg1;
- (id)pinTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPinType;
@property(nonatomic) int pinType;
- (void)dealloc;

@end

