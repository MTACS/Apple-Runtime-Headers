//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOComposedRouteStepTransitInstructionMerging-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEODrivingWalkingInstruction, GEODrivingWalkingSpokenInstruction, GEOFormattedString, GEOGenericInstruction, GEOTransitListInstruction, GEOTransitSignInstruction, NSString, PBDataReader, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOInstructionSet : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_countStopsText;
    GEOFormattedString *_departureBar;
    GEODrivingWalkingInstruction *_drivingWalkingListInstruction;
    GEODrivingWalkingInstruction *_drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction *_drivingWalkingSpokenInstruction;
    GEOGenericInstruction *_genericInstruction;
    GEOTransitListInstruction *_transitListInstruction;
    GEOTransitSignInstruction *_transitSignInstruction;
    int _departureBarStyle;
    struct {
        unsigned int has_departureBarStyle:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countStopsText:1;
        unsigned int read_departureBar:1;
        unsigned int read_drivingWalkingListInstruction:1;
        unsigned int read_drivingWalkingSignInstruction:1;
        unsigned int read_drivingWalkingSpokenInstruction:1;
        unsigned int read_genericInstruction:1;
        unsigned int read_transitListInstruction:1;
        unsigned int read_transitSignInstruction:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_countStopsText:1;
        unsigned int wrote_departureBar:1;
        unsigned int wrote_drivingWalkingListInstruction:1;
        unsigned int wrote_drivingWalkingSignInstruction:1;
        unsigned int wrote_drivingWalkingSpokenInstruction:1;
        unsigned int wrote_genericInstruction:1;
        unsigned int wrote_transitListInstruction:1;
        unsigned int wrote_transitSignInstruction:1;
        unsigned int wrote_departureBarStyle:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingSpokenInstruction;
- (void)_readDrivingWalkingSpokenInstruction;
@property(retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingListInstruction;
- (void)_readDrivingWalkingListInstruction;
@property(retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingSignInstruction;
- (void)_readDrivingWalkingSignInstruction;
@property(retain, nonatomic) GEOFormattedString *countStopsText;
@property(readonly, nonatomic) _Bool hasCountStopsText;
- (void)_readCountStopsText;
- (int)StringAsDepartureBarStyle:(id)arg1;
- (id)departureBarStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasDepartureBarStyle;
@property(nonatomic) int departureBarStyle;
@property(retain, nonatomic) GEOFormattedString *departureBar;
@property(readonly, nonatomic) _Bool hasDepartureBar;
- (void)_readDepartureBar;
@property(retain, nonatomic) GEOGenericInstruction *genericInstruction;
@property(readonly, nonatomic) _Bool hasGenericInstruction;
- (void)_readGenericInstruction;
@property(retain, nonatomic) GEOTransitListInstruction *transitListInstruction;
@property(readonly, nonatomic) _Bool hasTransitListInstruction;
- (void)_readTransitListInstruction;
@property(retain, nonatomic) GEOTransitSignInstruction *transitSignInstruction;
@property(readonly, nonatomic) _Bool hasTransitSignInstruction;
- (void)_readTransitSignInstruction;
@property(readonly, nonatomic) _Bool hideTimeInstructionsIfCollapsed;
@property(readonly, nonatomic) id <GEOServerFormattedString> secondaryTimeFormattedString;
@property(readonly, nonatomic) id <GEOServerFormattedString> primaryTimeFormattedString;
@property(readonly, nonatomic) id <GEOServerFormattedString> expandableListFormattedString;
@property(readonly, nonatomic) id <GEOServerFormattedString> countStopsFormattedString;
@property(readonly, nonatomic) int departureBarFormatStyle;
@property(readonly, nonatomic) id <GEOServerFormattedString> departureBarFormattedString;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

