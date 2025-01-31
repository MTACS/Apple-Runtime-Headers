//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEOPDMapsIdentifier, NSString, PBDataReader;

@interface GEORPMerchantLookupContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_correlationId;
    NSString *_merchantAdamId;
    NSString *_merchantFormattedAddress;
    GEOPDMapsIdentifier *_merchantId;
    NSString *_merchantIndustryCategory;
    long long _merchantIndustryCode;
    NSString *_merchantName;
    NSString *_merchantRawName;
    NSString *_merchantUrl;
    GEOLocation *_transactionLocation;
    double _transactionTime;
    NSString *_transactionType;
    struct {
        unsigned int has_merchantIndustryCode:1;
        unsigned int has_transactionTime:1;
        unsigned int read_correlationId:1;
        unsigned int read_merchantAdamId:1;
        unsigned int read_merchantFormattedAddress:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantIndustryCategory:1;
        unsigned int read_merchantName:1;
        unsigned int read_merchantRawName:1;
        unsigned int read_merchantUrl:1;
        unsigned int read_transactionLocation:1;
        unsigned int read_transactionType:1;
        unsigned int wrote_correlationId:1;
        unsigned int wrote_merchantAdamId:1;
        unsigned int wrote_merchantFormattedAddress:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_merchantIndustryCategory:1;
        unsigned int wrote_merchantIndustryCode:1;
        unsigned int wrote_merchantName:1;
        unsigned int wrote_merchantRawName:1;
        unsigned int wrote_merchantUrl:1;
        unsigned int wrote_transactionLocation:1;
        unsigned int wrote_transactionTime:1;
        unsigned int wrote_transactionType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *correlationId;
@property(readonly, nonatomic) BOOL hasCorrelationId;
- (void)_readCorrelationId;
@property(retain, nonatomic) GEOLocation *transactionLocation;
@property(readonly, nonatomic) BOOL hasTransactionLocation;
- (void)_readTransactionLocation;
@property(retain, nonatomic) NSString *transactionType;
@property(readonly, nonatomic) BOOL hasTransactionType;
- (void)_readTransactionType;
@property(nonatomic) BOOL hasTransactionTime;
@property(nonatomic) double transactionTime;
@property(retain, nonatomic) NSString *merchantAdamId;
@property(readonly, nonatomic) BOOL hasMerchantAdamId;
- (void)_readMerchantAdamId;
@property(retain, nonatomic) NSString *merchantFormattedAddress;
@property(readonly, nonatomic) BOOL hasMerchantFormattedAddress;
- (void)_readMerchantFormattedAddress;
@property(retain, nonatomic) NSString *merchantUrl;
@property(readonly, nonatomic) BOOL hasMerchantUrl;
- (void)_readMerchantUrl;
@property(retain, nonatomic) NSString *merchantIndustryCategory;
@property(readonly, nonatomic) BOOL hasMerchantIndustryCategory;
- (void)_readMerchantIndustryCategory;
@property(retain, nonatomic) NSString *merchantRawName;
@property(readonly, nonatomic) BOOL hasMerchantRawName;
- (void)_readMerchantRawName;
@property(retain, nonatomic) NSString *merchantName;
@property(readonly, nonatomic) BOOL hasMerchantName;
- (void)_readMerchantName;
@property(retain, nonatomic) GEOPDMapsIdentifier *merchantId;
@property(readonly, nonatomic) BOOL hasMerchantId;
- (void)_readMerchantId;
@property(nonatomic) BOOL hasMerchantIndustryCode;
@property(nonatomic) long long merchantIndustryCode;

@end

