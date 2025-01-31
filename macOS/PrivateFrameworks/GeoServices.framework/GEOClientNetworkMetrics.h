//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOClientNetworkMetrics : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    double _requestEnd;
    double _requestStart;
    NSString *_serviceIpAddress;
    NSMutableArray *_transactionMetrics;
    int _httpResponseCode;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    struct {
        unsigned int has_requestEnd:1;
        unsigned int has_requestStart:1;
        unsigned int has_httpResponseCode:1;
        unsigned int has_redirectCount:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int read_unknownFields:1;
        unsigned int read_serviceIpAddress:1;
        unsigned int read_transactionMetrics:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_requestEnd:1;
        unsigned int wrote_requestStart:1;
        unsigned int wrote_serviceIpAddress:1;
        unsigned int wrote_transactionMetrics:1;
        unsigned int wrote_httpResponseCode:1;
        unsigned int wrote_redirectCount:1;
        unsigned int wrote_requestDataSize:1;
        unsigned int wrote_responseDataSize:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)transactionMetricsType;
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
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (void)_addNoFlagsTransactionMetrics:(id)arg1;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
@property(retain, nonatomic) NSMutableArray *transactionMetrics;
- (void)_readTransactionMetrics;
@property(nonatomic) BOOL hasRedirectCount;
@property(nonatomic) int redirectCount;
@property(nonatomic) BOOL hasRequestEnd;
@property(nonatomic) double requestEnd;
@property(nonatomic) BOOL hasRequestStart;
@property(nonatomic) double requestStart;
@property(nonatomic) BOOL hasResponseDataSize;
@property(nonatomic) int responseDataSize;
@property(nonatomic) BOOL hasRequestDataSize;
@property(nonatomic) int requestDataSize;
@property(retain, nonatomic) NSString *serviceIpAddress;
@property(readonly, nonatomic) BOOL hasServiceIpAddress;
- (void)_readServiceIpAddress;
@property(nonatomic) BOOL hasHttpResponseCode;
@property(nonatomic) int httpResponseCode;

@end

