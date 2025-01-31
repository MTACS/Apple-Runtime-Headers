//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimezone, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMessageLink : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_hoursOfOperations;
    NSString *_messageId;
    NSString *_messageUrl;
    NSString *_navBackgroundColor;
    NSString *_navTintColor;
    GEOTimezone *_timezone;
    int _responseTime;
    BOOL _isVerified;
    struct {
        unsigned int has_responseTime:1;
        unsigned int has_isVerified:1;
        unsigned int read_unknownFields:1;
        unsigned int read_hoursOfOperations:1;
        unsigned int read_messageId:1;
        unsigned int read_messageUrl:1;
        unsigned int read_navBackgroundColor:1;
        unsigned int read_navTintColor:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_hoursOfOperations:1;
        unsigned int wrote_messageId:1;
        unsigned int wrote_messageUrl:1;
        unsigned int wrote_navBackgroundColor:1;
        unsigned int wrote_navTintColor:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_responseTime:1;
        unsigned int wrote_isVerified:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)arg1;
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
@property(retain, nonatomic) NSString *navTintColor;
@property(readonly, nonatomic) BOOL hasNavTintColor;
- (void)_readNavTintColor;
@property(retain, nonatomic) NSString *navBackgroundColor;
@property(readonly, nonatomic) BOOL hasNavBackgroundColor;
- (void)_readNavBackgroundColor;
@property(nonatomic) BOOL hasIsVerified;
@property(nonatomic) BOOL isVerified;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) BOOL hasTimezone;
- (void)_readTimezone;
- (id)hoursOfOperationAtIndex:(unsigned long long)arg1;
- (unsigned long long)hoursOfOperationsCount;
- (void)_addNoFlagsHoursOfOperation:(id)arg1;
- (void)addHoursOfOperation:(id)arg1;
- (void)clearHoursOfOperations;
@property(retain, nonatomic) NSMutableArray *hoursOfOperations;
- (void)_readHoursOfOperations;
- (int)StringAsResponseTime:(id)arg1;
- (id)responseTimeAsString:(int)arg1;
@property(nonatomic) BOOL hasResponseTime;
@property(nonatomic) int responseTime;
@property(retain, nonatomic) NSString *messageUrl;
@property(readonly, nonatomic) BOOL hasMessageUrl;
- (void)_readMessageUrl;
@property(retain, nonatomic) NSString *messageId;
@property(readonly, nonatomic) BOOL hasMessageId;
- (void)_readMessageId;

@end

