//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTFIncident : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    CDStruct_5df41632 _geoids;
    NSString *_crossStreet;
    unsigned long long _durationMin;
    double _endOffset;
    NSString *_incidentId;
    NSMutableArray *_infos;
    double _latitude;
    double _longitude;
    NSData *_openlr;
    double _startOffset;
    long long _startTime;
    NSString *_street;
    long long _updateTime;
    NSData *_zilch;
    unsigned int _alertCCode;
    int _color;
    float _delay;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoomLevel;
    unsigned int _minZoomLevel;
    int _significance;
    float _speed;
    int _trafficTrend;
    int _type;
    _Bool _blocked;
    _Bool _endTimeReliable;
    _Bool _hardBlocked;
    _Bool _hidden;
    _Bool _navigationAlert;
    struct {
        unsigned int has_durationMin:1;
        unsigned int has_endOffset:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_startOffset:1;
        unsigned int has_startTime:1;
        unsigned int has_updateTime:1;
        unsigned int has_alertCCode:1;
        unsigned int has_color:1;
        unsigned int has_delay:1;
        unsigned int has_laneClosureCount:1;
        unsigned int has_laneClosureType:1;
        unsigned int has_maxZoomLevel:1;
        unsigned int has_minZoomLevel:1;
        unsigned int has_significance:1;
        unsigned int has_speed:1;
        unsigned int has_trafficTrend:1;
        unsigned int has_type:1;
        unsigned int has_blocked:1;
        unsigned int has_endTimeReliable:1;
        unsigned int has_hardBlocked:1;
        unsigned int has_hidden:1;
        unsigned int has_navigationAlert:1;
        unsigned int read_geoids:1;
        unsigned int read_crossStreet:1;
        unsigned int read_incidentId:1;
        unsigned int read_infos:1;
        unsigned int read_openlr:1;
        unsigned int read_street:1;
        unsigned int read_zilch:1;
        unsigned int wrote_geoids:1;
        unsigned int wrote_crossStreet:1;
        unsigned int wrote_durationMin:1;
        unsigned int wrote_endOffset:1;
        unsigned int wrote_incidentId:1;
        unsigned int wrote_infos:1;
        unsigned int wrote_latitude:1;
        unsigned int wrote_longitude:1;
        unsigned int wrote_openlr:1;
        unsigned int wrote_startOffset:1;
        unsigned int wrote_startTime:1;
        unsigned int wrote_street:1;
        unsigned int wrote_updateTime:1;
        unsigned int wrote_zilch:1;
        unsigned int wrote_alertCCode:1;
        unsigned int wrote_color:1;
        unsigned int wrote_delay:1;
        unsigned int wrote_laneClosureCount:1;
        unsigned int wrote_laneClosureType:1;
        unsigned int wrote_maxZoomLevel:1;
        unsigned int wrote_minZoomLevel:1;
        unsigned int wrote_significance:1;
        unsigned int wrote_speed:1;
        unsigned int wrote_trafficTrend:1;
        unsigned int wrote_type:1;
        unsigned int wrote_blocked:1;
        unsigned int wrote_endTimeReliable:1;
        unsigned int wrote_hardBlocked:1;
        unsigned int wrote_hidden:1;
        unsigned int wrote_navigationAlert:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)infoType;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSData *openlr;
@property(readonly, nonatomic) _Bool hasOpenlr;
- (void)_readOpenlr;
@property(nonatomic) _Bool hasNavigationAlert;
@property(nonatomic) _Bool navigationAlert;
@property(nonatomic) _Bool hasAlertCCode;
@property(nonatomic) unsigned int alertCCode;
@property(retain, nonatomic) NSData *zilch;
@property(readonly, nonatomic) _Bool hasZilch;
- (void)_readZilch;
@property(nonatomic) _Bool hasDurationMin;
@property(nonatomic) unsigned long long durationMin;
- (int)StringAsColor:(id)arg1;
- (id)colorAsString:(int)arg1;
@property(nonatomic) _Bool hasColor;
@property(nonatomic) int color;
- (int)StringAsTrafficTrend:(id)arg1;
- (id)trafficTrendAsString:(int)arg1;
@property(nonatomic) _Bool hasTrafficTrend;
@property(nonatomic) int trafficTrend;
@property(nonatomic) _Bool hasHidden;
@property(nonatomic) _Bool hidden;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) float speed;
@property(nonatomic) _Bool hasMaxZoomLevel;
@property(nonatomic) unsigned int maxZoomLevel;
@property(nonatomic) _Bool hasMinZoomLevel;
@property(nonatomic) unsigned int minZoomLevel;
- (int)StringAsSignificance:(id)arg1;
- (id)significanceAsString:(int)arg1;
@property(nonatomic) _Bool hasSignificance;
@property(nonatomic) int significance;
@property(nonatomic) _Bool hasDelay;
@property(nonatomic) float delay;
@property(nonatomic) _Bool hasEndOffset;
@property(nonatomic) double endOffset;
@property(nonatomic) _Bool hasStartOffset;
@property(nonatomic) double startOffset;
@property(nonatomic) _Bool hasHardBlocked;
@property(nonatomic) _Bool hardBlocked;
- (int)StringAsLaneClosureType:(id)arg1;
- (id)laneClosureTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLaneClosureType;
@property(nonatomic) int laneClosureType;
@property(nonatomic) _Bool hasEndTimeReliable;
@property(nonatomic) _Bool endTimeReliable;
@property(nonatomic) _Bool hasLaneClosureCount;
@property(nonatomic) unsigned int laneClosureCount;
@property(retain, nonatomic) NSString *crossStreet;
@property(readonly, nonatomic) _Bool hasCrossStreet;
- (void)_readCrossStreet;
@property(retain, nonatomic) NSString *street;
@property(readonly, nonatomic) _Bool hasStreet;
- (void)_readStreet;
@property(nonatomic) _Bool hasBlocked;
@property(nonatomic) _Bool blocked;
@property(nonatomic) _Bool hasUpdateTime;
@property(nonatomic) long long updateTime;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) long long startTime;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) double latitude;
@property(retain, nonatomic) NSString *incidentId;
@property(readonly, nonatomic) _Bool hasIncidentId;
- (void)_readIncidentId;
- (id)infoAtIndex:(unsigned long long)arg1;
- (unsigned long long)infosCount;
- (void)_addNoFlagsInfo:(id)arg1;
- (void)addInfo:(id)arg1;
- (void)clearInfos;
@property(retain, nonatomic) NSMutableArray *infos;
- (void)_readInfos;
- (void)setGeoids:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)geoidAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsGeoid:(long long)arg1;
- (void)addGeoid:(long long)arg1;
- (void)clearGeoids;
@property(readonly, nonatomic) long long *geoids;
@property(readonly, nonatomic) unsigned long long geoidsCount;
- (void)_readGeoids;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (void)dealloc;

@end

