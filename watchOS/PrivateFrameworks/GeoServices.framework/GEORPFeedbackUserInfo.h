//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserCredentials, NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSData *_devicePushToken;
    NSString *_preferredEmail;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_preferredEmail:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_devicePushToken:1;
        unsigned int wrote_preferredEmail:1;
        unsigned int wrote_userCredentials:1;
        unsigned int wrote_userEmail:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *preferredEmail;
@property(readonly, nonatomic) _Bool hasPreferredEmail;
- (void)_readPreferredEmail;
@property(retain, nonatomic) NSString *userEmail;
@property(readonly, nonatomic) _Bool hasUserEmail;
- (void)_readUserEmail;
@property(retain, nonatomic) NSData *devicePushToken;
@property(readonly, nonatomic) _Bool hasDevicePushToken;
- (void)_readDevicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;
@property(readonly, nonatomic) _Bool hasUserCredentials;
- (void)_readUserCredentials;

@end

