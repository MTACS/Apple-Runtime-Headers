//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEORPUserCredentials, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_countryCode;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
    struct {
        unsigned int read_countryCode:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_hwMachine:1;
        unsigned int read_inputLanguage:1;
        unsigned int read_osRelease:1;
        unsigned int read_requestElements:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_devicePushToken:1;
        unsigned int wrote_hwMachine:1;
        unsigned int wrote_inputLanguage:1;
        unsigned int wrote_osRelease:1;
        unsigned int wrote_requestElements:1;
        unsigned int wrote_userCredentials:1;
        unsigned int wrote_userEmail:1;
        unsigned int wrote_userLocation:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)requestElementType;
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
@property(retain, nonatomic) GEOLocation *userLocation;
@property(readonly, nonatomic) BOOL hasUserLocation;
- (void)_readUserLocation;
@property(retain, nonatomic) NSString *userEmail;
@property(readonly, nonatomic) BOOL hasUserEmail;
- (void)_readUserEmail;
@property(retain, nonatomic) NSData *devicePushToken;
@property(readonly, nonatomic) BOOL hasDevicePushToken;
- (void)_readDevicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;
@property(readonly, nonatomic) BOOL hasUserCredentials;
- (void)_readUserCredentials;
@property(retain, nonatomic) NSString *inputLanguage;
@property(readonly, nonatomic) BOOL hasInputLanguage;
- (void)_readInputLanguage;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) BOOL hasCountryCode;
- (void)_readCountryCode;
@property(retain, nonatomic) NSString *osRelease;
@property(readonly, nonatomic) BOOL hasOsRelease;
- (void)_readOsRelease;
@property(retain, nonatomic) NSString *hwMachine;
@property(readonly, nonatomic) BOOL hasHwMachine;
- (void)_readHwMachine;
- (id)requestElementAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestElementsCount;
- (void)_addNoFlagsRequestElement:(id)arg1;
- (void)addRequestElement:(id)arg1;
- (void)clearRequestElements;
@property(retain, nonatomic) NSMutableArray *requestElements;
- (void)_readRequestElements;

@end

