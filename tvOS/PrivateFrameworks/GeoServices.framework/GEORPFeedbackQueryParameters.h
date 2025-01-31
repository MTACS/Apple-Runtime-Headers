//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPPageInfo, GEORPSortParameters, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _feedbackComponentTypes;
    GEORPPageInfo *_pageInfo;
    GEORPSortParameters *_sortParameters;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponentTypes:1;
        unsigned int read_pageInfo:1;
        unsigned int read_sortParameters:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackComponentTypes:1;
        unsigned int wrote_pageInfo:1;
        unsigned int wrote_sortParameters:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (int)StringAsFeedbackComponentTypes:(id)arg1;
- (id)feedbackComponentTypesAsString:(int)arg1;
- (void)setFeedbackComponentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsFeedbackComponentType:(int)arg1;
- (void)addFeedbackComponentType:(int)arg1;
- (void)clearFeedbackComponentTypes;
@property(readonly, nonatomic) int *feedbackComponentTypes;
@property(readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
- (void)_readFeedbackComponentTypes;
@property(retain, nonatomic) GEORPPageInfo *pageInfo;
@property(readonly, nonatomic) _Bool hasPageInfo;
- (void)_readPageInfo;
@property(retain, nonatomic) GEORPSortParameters *sortParameters;
@property(readonly, nonatomic) _Bool hasSortParameters;
- (void)_readSortParameters;
- (void)dealloc;

@end

