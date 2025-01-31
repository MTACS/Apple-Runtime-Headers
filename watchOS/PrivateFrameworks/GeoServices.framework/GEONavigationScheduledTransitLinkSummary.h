//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavigationTransitStopSummary, PBDataReader;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    unsigned long long _lineID;
    double _scheduledArrival;
    double _scheduledDeparture;
    GEONavigationTransitStopSummary *_stopFrom;
    GEONavigationTransitStopSummary *_stopTo;
    struct {
        unsigned int has_lineID:1;
        unsigned int has_scheduledArrival:1;
        unsigned int has_scheduledDeparture:1;
        unsigned int read_stopFrom:1;
        unsigned int read_stopTo:1;
        unsigned int wrote_lineID:1;
        unsigned int wrote_scheduledArrival:1;
        unsigned int wrote_scheduledDeparture:1;
        unsigned int wrote_stopFrom:1;
        unsigned int wrote_stopTo:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) GEONavigationTransitStopSummary *stopTo;
@property(readonly, nonatomic) _Bool hasStopTo;
- (void)_readStopTo;
@property(retain, nonatomic) GEONavigationTransitStopSummary *stopFrom;
@property(readonly, nonatomic) _Bool hasStopFrom;
- (void)_readStopFrom;
@property(nonatomic) _Bool hasScheduledArrival;
@property(nonatomic) double scheduledArrival;
@property(nonatomic) _Bool hasScheduledDeparture;
@property(nonatomic) double scheduledDeparture;
@property(nonatomic) _Bool hasLineID;
@property(nonatomic) unsigned long long lineID;
- (id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3;

@end

