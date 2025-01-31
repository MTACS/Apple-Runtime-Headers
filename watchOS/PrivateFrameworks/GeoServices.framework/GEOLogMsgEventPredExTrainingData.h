//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventPredExTrainingData : PBCodable <NSCopying>
{
    double _chanceOfPrecipitation;
    double _chanceOfRain;
    double _chanceOfSnow;
    double _endTime;
    double _secondsUntilEnd;
    double _secondsUntilStart;
    double _startTime;
    double _temperature;
    double _timeOfDay;
    double _timeSinceBackgrounded;
    int _actualTransportMode;
    unsigned int _dayOfWeek;
    int _distanceFromHereToHome;
    int _distanceFromHereToOrigin;
    int _distanceFromHereToParkedCar;
    int _distanceFromHereToWork;
    int _distanceFromHere;
    int _distanceFromOriginToDestination;
    int _entryType;
    int _mapType;
    int _predictedTransportMode;
    int _preferredTransportMode;
    _Bool _isInBasemode;
    _Bool _isTourist;
    _Bool _isTransitPossible;
    _Bool _routePlanningScreenPresented;
    struct {
        unsigned int has_chanceOfPrecipitation:1;
        unsigned int has_chanceOfRain:1;
        unsigned int has_chanceOfSnow:1;
        unsigned int has_endTime:1;
        unsigned int has_secondsUntilEnd:1;
        unsigned int has_secondsUntilStart:1;
        unsigned int has_startTime:1;
        unsigned int has_temperature:1;
        unsigned int has_timeOfDay:1;
        unsigned int has_timeSinceBackgrounded:1;
        unsigned int has_actualTransportMode:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_distanceFromHereToHome:1;
        unsigned int has_distanceFromHereToOrigin:1;
        unsigned int has_distanceFromHereToParkedCar:1;
        unsigned int has_distanceFromHereToWork:1;
        unsigned int has_distanceFromHere:1;
        unsigned int has_distanceFromOriginToDestination:1;
        unsigned int has_entryType:1;
        unsigned int has_mapType:1;
        unsigned int has_predictedTransportMode:1;
        unsigned int has_preferredTransportMode:1;
        unsigned int has_isInBasemode:1;
        unsigned int has_isTourist:1;
        unsigned int has_isTransitPossible:1;
        unsigned int has_routePlanningScreenPresented:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (int)StringAsDistanceFromHereToParkedCar:(id)arg1;
- (id)distanceFromHereToParkedCarAsString:(int)arg1;
@property(nonatomic) _Bool hasDistanceFromHereToParkedCar;
@property(nonatomic) int distanceFromHereToParkedCar;
- (int)StringAsDistanceFromHereToWork:(id)arg1;
- (id)distanceFromHereToWorkAsString:(int)arg1;
@property(nonatomic) _Bool hasDistanceFromHereToWork;
@property(nonatomic) int distanceFromHereToWork;
- (int)StringAsDistanceFromHereToHome:(id)arg1;
- (id)distanceFromHereToHomeAsString:(int)arg1;
@property(nonatomic) _Bool hasDistanceFromHereToHome;
@property(nonatomic) int distanceFromHereToHome;
- (int)StringAsDistanceFromOriginToDestination:(id)arg1;
- (id)distanceFromOriginToDestinationAsString:(int)arg1;
@property(nonatomic) _Bool hasDistanceFromOriginToDestination;
@property(nonatomic) int distanceFromOriginToDestination;
- (int)StringAsDistanceFromHereToOrigin:(id)arg1;
- (id)distanceFromHereToOriginAsString:(int)arg1;
@property(nonatomic) _Bool hasDistanceFromHereToOrigin;
@property(nonatomic) int distanceFromHereToOrigin;
- (int)StringAsDistanceFromHere:(id)arg1;
- (id)distanceFromHereAsString:(int)arg1;
@property(nonatomic) _Bool hasDistanceFromHere;
@property(nonatomic) int distanceFromHere;
- (int)StringAsActualTransportMode:(id)arg1;
- (id)actualTransportModeAsString:(int)arg1;
@property(nonatomic) _Bool hasActualTransportMode;
@property(nonatomic) int actualTransportMode;
- (int)StringAsPredictedTransportMode:(id)arg1;
- (id)predictedTransportModeAsString:(int)arg1;
@property(nonatomic) _Bool hasPredictedTransportMode;
@property(nonatomic) int predictedTransportMode;
@property(nonatomic) _Bool hasRoutePlanningScreenPresented;
@property(nonatomic) _Bool routePlanningScreenPresented;
@property(nonatomic) _Bool hasTimeSinceBackgrounded;
@property(nonatomic) double timeSinceBackgrounded;
@property(nonatomic) _Bool hasIsInBasemode;
@property(nonatomic) _Bool isInBasemode;
@property(nonatomic) _Bool hasIsTransitPossible;
@property(nonatomic) _Bool isTransitPossible;
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (id)preferredTransportModeAsString:(int)arg1;
@property(nonatomic) _Bool hasPreferredTransportMode;
@property(nonatomic) int preferredTransportMode;
@property(nonatomic) _Bool hasIsTourist;
@property(nonatomic) _Bool isTourist;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) unsigned int dayOfWeek;
@property(nonatomic) _Bool hasTimeOfDay;
@property(nonatomic) double timeOfDay;
@property(nonatomic) _Bool hasChanceOfSnow;
@property(nonatomic) double chanceOfSnow;
@property(nonatomic) _Bool hasChanceOfRain;
@property(nonatomic) double chanceOfRain;
@property(nonatomic) _Bool hasChanceOfPrecipitation;
@property(nonatomic) double chanceOfPrecipitation;
@property(nonatomic) _Bool hasTemperature;
@property(nonatomic) double temperature;
@property(nonatomic) _Bool hasEndTime;
@property(nonatomic) double endTime;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) double startTime;
@property(nonatomic) _Bool hasSecondsUntilEnd;
@property(nonatomic) double secondsUntilEnd;
@property(nonatomic) _Bool hasSecondsUntilStart;
@property(nonatomic) double secondsUntilStart;
- (int)StringAsEntryType:(id)arg1;
- (id)entryTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEntryType;
@property(nonatomic) int entryType;

@end

