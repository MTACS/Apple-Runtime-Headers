//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    NSMutableArray *_directionsFeedbacks;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    BOOL _arrivedAtDestination;
    CDStruct_57366784 _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)directionsFeedbackType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDurationOfTrip;
@property(nonatomic) double durationOfTrip;
@property(nonatomic) BOOL hasNavigationAudioFeedback;
@property(nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback;
@property(nonatomic) BOOL hasArrivedAtDestination;
@property(nonatomic) BOOL arrivedAtDestination;
@property(retain, nonatomic) GEOLocation *finalLocation;
@property(readonly, nonatomic) BOOL hasFinalLocation;
- (void)_readFinalLocation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (void)_addNoFlagsDirectionsFeedback:(id)arg1;
- (void)addDirectionsFeedback:(id)arg1;
- (void)clearDirectionsFeedbacks;
@property(retain, nonatomic) NSMutableArray *directionsFeedbacks;
- (void)_readDirectionsFeedbacks;

@end

