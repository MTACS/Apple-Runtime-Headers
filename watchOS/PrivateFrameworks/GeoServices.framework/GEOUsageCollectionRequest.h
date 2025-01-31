//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABExperimentAssignment, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOUsageCollectionRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    NSMutableArray *_abExperimentAssignments;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    NSMutableArray *_timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray *_timeToLeaveInitialTravelTimeFeedbackCollections;
    struct {
        unsigned int read_abExperimentAssignments:1;
        unsigned int read_tilesAbExperimentAssignment:1;
        unsigned int read_timeToLeaveHypothesisFeedbackCollections:1;
        unsigned int read_timeToLeaveInitialTravelTimeFeedbackCollections:1;
        unsigned int wrote_abExperimentAssignments:1;
        unsigned int wrote_tilesAbExperimentAssignment:1;
        unsigned int wrote_timeToLeaveHypothesisFeedbackCollections:1;
        unsigned int wrote_timeToLeaveInitialTravelTimeFeedbackCollections:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
+ (Class)timeToLeaveHypothesisFeedbackCollectionType;
+ (Class)abExperimentAssignmentType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property(readonly, nonatomic) _Bool hasTilesAbExperimentAssignment;
- (void)_readTilesAbExperimentAssignment;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned int)arg1;
- (unsigned int)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (void)_addNoFlagsTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections;
- (void)_readTimeToLeaveInitialTravelTimeFeedbackCollections;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned int)arg1;
- (unsigned int)timeToLeaveHypothesisFeedbackCollectionsCount;
- (void)_addNoFlagsTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *timeToLeaveHypothesisFeedbackCollections;
- (void)_readTimeToLeaveHypothesisFeedbackCollections;
- (id)abExperimentAssignmentAtIndex:(unsigned int)arg1;
- (unsigned int)abExperimentAssignmentsCount;
- (void)_addNoFlagsAbExperimentAssignment:(id)arg1;
- (void)addAbExperimentAssignment:(id)arg1;
- (void)clearAbExperimentAssignments;
@property(retain, nonatomic) NSMutableArray *abExperimentAssignments;
- (void)_readAbExperimentAssignments;

@end

