//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAbAssignInfo, GEOLocalTime, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAnalyticMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    struct GEOSessionID _sessionId;
    GEOAbAssignInfo *_abAssignInfo;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    NSString *_loggedAbExperiment;
    NSString *_osVersion;
    NSString *_productName;
    double _relativeTimestamp;
    GEOLocalTime *_requestTime;
    NSMutableArray *_serviceTags;
    int _requestSource;
    unsigned int _sequenceNumber;
    _Bool _isFromApi;
    _Bool _isInternalInstall;
    _Bool _isInternalTool;
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_relativeTimestamp:1;
        unsigned int has_requestSource:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_isFromApi:1;
        unsigned int has_isInternalInstall:1;
        unsigned int has_isInternalTool:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abAssignInfo:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_hardwareModel:1;
        unsigned int read_loggedAbExperiment:1;
        unsigned int read_osVersion:1;
        unsigned int read_productName:1;
        unsigned int read_requestTime:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sessionId:1;
        unsigned int wrote_abAssignInfo:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_appMajorVersion:1;
        unsigned int wrote_appMinorVersion:1;
        unsigned int wrote_hardwareModel:1;
        unsigned int wrote_loggedAbExperiment:1;
        unsigned int wrote_osVersion:1;
        unsigned int wrote_productName:1;
        unsigned int wrote_relativeTimestamp:1;
        unsigned int wrote_requestTime:1;
        unsigned int wrote_serviceTags:1;
        unsigned int wrote_requestSource:1;
        unsigned int wrote_sequenceNumber:1;
        unsigned int wrote_isFromApi:1;
        unsigned int wrote_isInternalInstall:1;
        unsigned int wrote_isInternalTool:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)serviceTagType;
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
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(nonatomic) double relativeTimestamp;
@property(retain, nonatomic) GEOLocalTime *requestTime;
@property(readonly, nonatomic) _Bool hasRequestTime;
- (void)_readRequestTime;
@property(retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property(readonly, nonatomic) _Bool hasAbAssignInfo;
- (void)_readAbAssignInfo;
@property(retain, nonatomic) NSString *loggedAbExperiment;
@property(readonly, nonatomic) _Bool hasLoggedAbExperiment;
- (void)_readLoggedAbExperiment;
@property(retain, nonatomic) NSString *productName;
@property(readonly, nonatomic) _Bool hasProductName;
- (void)_readProductName;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (unsigned int)serviceTagsCount;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
- (void)_readServiceTags;
@property(nonatomic) _Bool hasIsFromApi;
@property(nonatomic) _Bool isFromApi;
- (int)StringAsRequestSource:(id)arg1;
- (id)requestSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestSource;
@property(nonatomic) int requestSource;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) unsigned int sequenceNumber;
@property(nonatomic) _Bool hasSessionId;
@property(nonatomic) struct GEOSessionID sessionId;
@property(nonatomic) _Bool hasIsInternalInstall;
@property(nonatomic) _Bool isInternalInstall;
@property(nonatomic) _Bool hasIsInternalTool;
@property(nonatomic) _Bool isInternalTool;
@property(retain, nonatomic) NSString *osVersion;
@property(readonly, nonatomic) _Bool hasOsVersion;
- (void)_readOsVersion;
@property(retain, nonatomic) NSString *hardwareModel;
@property(readonly, nonatomic) _Bool hasHardwareModel;
- (void)_readHardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
- (void)_readAppMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
- (void)_readAppMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
- (void)_readAppIdentifier;
- (id)initWithTraits:(id)arg1;

@end

