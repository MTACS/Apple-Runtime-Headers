//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODataSetURLOverride : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSString *_announcementsURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessPortalBaseURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_logMessageUsageURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    unsigned int _dataSet;
    struct {
        unsigned int has_dataSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressCorrectionInitURL:1;
        unsigned int read_addressCorrectionUpdateURL:1;
        unsigned int read_announcementsURL:1;
        unsigned int read_batchReverseGeocoderURL:1;
        unsigned int read_businessPortalBaseURL:1;
        unsigned int read_directionsURL:1;
        unsigned int read_dispatcherURL:1;
        unsigned int read_etaURL:1;
        unsigned int read_logMessageUsageURL:1;
        unsigned int read_problemCategoriesURL:1;
        unsigned int read_problemOptInURL:1;
        unsigned int read_problemStatusURL:1;
        unsigned int read_problemSubmissionURL:1;
        unsigned int read_simpleETAURL:1;
        unsigned int read_spatialLookupURL:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressCorrectionInitURL:1;
        unsigned int wrote_addressCorrectionUpdateURL:1;
        unsigned int wrote_announcementsURL:1;
        unsigned int wrote_batchReverseGeocoderURL:1;
        unsigned int wrote_businessPortalBaseURL:1;
        unsigned int wrote_directionsURL:1;
        unsigned int wrote_dispatcherURL:1;
        unsigned int wrote_etaURL:1;
        unsigned int wrote_logMessageUsageURL:1;
        unsigned int wrote_problemCategoriesURL:1;
        unsigned int wrote_problemOptInURL:1;
        unsigned int wrote_problemStatusURL:1;
        unsigned int wrote_problemSubmissionURL:1;
        unsigned int wrote_simpleETAURL:1;
        unsigned int wrote_spatialLookupURL:1;
        unsigned int wrote_dataSet:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) NSString *spatialLookupURL;
@property(readonly, nonatomic) BOOL hasSpatialLookupURL;
- (void)_readSpatialLookupURL;
@property(retain, nonatomic) NSString *logMessageUsageURL;
@property(readonly, nonatomic) BOOL hasLogMessageUsageURL;
- (void)_readLogMessageUsageURL;
@property(retain, nonatomic) NSString *businessPortalBaseURL;
@property(readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
- (void)_readBusinessPortalBaseURL;
@property(retain, nonatomic) NSString *problemOptInURL;
@property(readonly, nonatomic) BOOL hasProblemOptInURL;
- (void)_readProblemOptInURL;
@property(retain, nonatomic) NSString *dispatcherURL;
@property(readonly, nonatomic) BOOL hasDispatcherURL;
- (void)_readDispatcherURL;
@property(retain, nonatomic) NSString *announcementsURL;
@property(readonly, nonatomic) BOOL hasAnnouncementsURL;
- (void)_readAnnouncementsURL;
@property(retain, nonatomic) NSString *problemCategoriesURL;
@property(readonly, nonatomic) BOOL hasProblemCategoriesURL;
- (void)_readProblemCategoriesURL;
@property(retain, nonatomic) NSString *problemStatusURL;
@property(readonly, nonatomic) BOOL hasProblemStatusURL;
- (void)_readProblemStatusURL;
@property(retain, nonatomic) NSString *problemSubmissionURL;
@property(readonly, nonatomic) BOOL hasProblemSubmissionURL;
- (void)_readProblemSubmissionURL;
@property(retain, nonatomic) NSString *addressCorrectionUpdateURL;
@property(readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
- (void)_readAddressCorrectionUpdateURL;
@property(retain, nonatomic) NSString *addressCorrectionInitURL;
@property(readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
- (void)_readAddressCorrectionInitURL;
@property(retain, nonatomic) NSString *simpleETAURL;
@property(readonly, nonatomic) BOOL hasSimpleETAURL;
- (void)_readSimpleETAURL;
@property(retain, nonatomic) NSString *batchReverseGeocoderURL;
@property(readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
- (void)_readBatchReverseGeocoderURL;
@property(retain, nonatomic) NSString *etaURL;
@property(readonly, nonatomic) BOOL hasEtaURL;
- (void)_readEtaURL;
@property(retain, nonatomic) NSString *directionsURL;
@property(readonly, nonatomic) BOOL hasDirectionsURL;
- (void)_readDirectionsURL;
@property(nonatomic) BOOL hasDataSet;
@property(nonatomic) unsigned int dataSet;

@end

