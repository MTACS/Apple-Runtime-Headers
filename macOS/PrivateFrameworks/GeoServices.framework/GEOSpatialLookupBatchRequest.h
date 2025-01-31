//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_requests;
    struct {
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_requests:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_requests:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)requestType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) BOOL hasDeviceSku;
- (void)_readDeviceSku;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (void)_readDeviceCountryCode;
- (id)requestAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestsCount;
- (void)_addNoFlagsRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
@property(retain, nonatomic) NSMutableArray *requests;
- (void)_readRequests;

@end

