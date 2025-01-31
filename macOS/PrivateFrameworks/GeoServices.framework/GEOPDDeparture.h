//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitDeparture-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSDate, NSString, PBDataReader, PBUnknownFields;
@protocol GEOServerFormattedString;

__attribute__((visibility("hidden")))
@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    double _absDepartureTime;
    double _absLiveDepartureTime;
    GEOFormattedString *_realTimeStatus;
    unsigned long long _referenceTripId;
    NSString *_vehicleNumber;
    BOOL _isCanceled;
    struct {
        unsigned int has_absDepartureTime:1;
        unsigned int has_absLiveDepartureTime:1;
        unsigned int has_referenceTripId:1;
        unsigned int has_isCanceled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_realTimeStatus:1;
        unsigned int read_vehicleNumber:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_absDepartureTime:1;
        unsigned int wrote_absLiveDepartureTime:1;
        unsigned int wrote_realTimeStatus:1;
        unsigned int wrote_referenceTripId:1;
        unsigned int wrote_vehicleNumber:1;
        unsigned int wrote_isCanceled:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) GEOFormattedString *realTimeStatus;
@property(readonly, nonatomic) BOOL hasRealTimeStatus;
- (void)_readRealTimeStatus;
@property(nonatomic) BOOL hasReferenceTripId;
@property(nonatomic) unsigned long long referenceTripId;
@property(nonatomic) BOOL hasIsCanceled;
@property(nonatomic) BOOL isCanceled;
@property(nonatomic) BOOL hasAbsLiveDepartureTime;
@property(nonatomic) double absLiveDepartureTime;
@property(retain, nonatomic) NSString *vehicleNumber;
@property(readonly, nonatomic) BOOL hasVehicleNumber;
- (void)_readVehicleNumber;
@property(nonatomic) BOOL hasAbsDepartureTime;
@property(nonatomic) double absDepartureTime;
- (BOOL)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isPastDeparture;
@property(readonly, nonatomic) unsigned long long tripIdentifier;
@property(readonly, nonatomic) id <GEOServerFormattedString> liveStatusString;
@property(readonly, nonatomic) long long liveStatus;
@property(readonly, nonatomic) NSString *vehicleIdentifier;
@property(readonly, nonatomic) NSDate *liveDepartureDate;
@property(readonly, nonatomic) NSDate *scheduledDepartureDate;
@property(readonly, nonatomic) NSDate *departureDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

