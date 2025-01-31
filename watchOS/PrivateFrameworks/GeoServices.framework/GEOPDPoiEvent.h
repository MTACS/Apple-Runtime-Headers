//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    int _expectedAttendance;
    struct {
        unsigned int has_expectedAttendance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventCategorys:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_name:1;
        unsigned int read_performers:1;
        unsigned int read_poiIds:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_eventCategorys:1;
        unsigned int wrote_eventDateTimes:1;
        unsigned int wrote_eventId:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performers:1;
        unsigned int wrote_poiIds:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_expectedAttendance:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)performerType;
+ (Class)eventDateTimeType;
+ (Class)poiIdType;
+ (Class)eventCategoryType;
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
@property(nonatomic) _Bool hasExpectedAttendance;
@property(nonatomic) int expectedAttendance;
- (id)performerAtIndex:(unsigned int)arg1;
- (unsigned int)performersCount;
- (void)_addNoFlagsPerformer:(id)arg1;
- (void)addPerformer:(id)arg1;
- (void)clearPerformers;
@property(retain, nonatomic) NSMutableArray *performers;
- (void)_readPerformers;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
- (void)_readTimezone;
- (id)eventDateTimeAtIndex:(unsigned int)arg1;
- (unsigned int)eventDateTimesCount;
- (void)_addNoFlagsEventDateTime:(id)arg1;
- (void)addEventDateTime:(id)arg1;
- (void)clearEventDateTimes;
@property(retain, nonatomic) NSMutableArray *eventDateTimes;
- (void)_readEventDateTimes;
- (id)poiIdAtIndex:(unsigned int)arg1;
- (unsigned int)poiIdsCount;
- (void)_addNoFlagsPoiId:(id)arg1;
- (void)addPoiId:(id)arg1;
- (void)clearPoiIds;
@property(retain, nonatomic) NSMutableArray *poiIds;
- (void)_readPoiIds;
- (id)eventCategoryAtIndex:(unsigned int)arg1;
- (unsigned int)eventCategorysCount;
- (void)_addNoFlagsEventCategory:(id)arg1;
- (void)addEventCategory:(id)arg1;
- (void)clearEventCategorys;
@property(retain, nonatomic) NSMutableArray *eventCategorys;
- (void)_readEventCategorys;
@property(retain, nonatomic) GEOLocalizedString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property(readonly, nonatomic) _Bool hasEventId;
- (void)_readEventId;

@end

