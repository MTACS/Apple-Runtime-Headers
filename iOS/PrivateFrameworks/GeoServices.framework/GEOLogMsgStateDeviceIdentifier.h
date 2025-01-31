//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_deviceHwIdentifier;
    NSString *_deviceOsVersion;
    _Bool _deviceDarkMode;
    _Bool _isInternalInstall;
    _Bool _isInternalTool;
    struct {
        unsigned int has_deviceDarkMode:1;
        unsigned int has_isInternalInstall:1;
        unsigned int has_isInternalTool:1;
        unsigned int read_deviceHwIdentifier:1;
        unsigned int read_deviceOsVersion:1;
        unsigned int wrote_deviceHwIdentifier:1;
        unsigned int wrote_deviceOsVersion:1;
        unsigned int wrote_deviceDarkMode:1;
        unsigned int wrote_isInternalInstall:1;
        unsigned int wrote_isInternalTool:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(nonatomic) _Bool hasDeviceDarkMode;
@property(nonatomic) _Bool deviceDarkMode;
@property(nonatomic) _Bool hasIsInternalInstall;
@property(nonatomic) _Bool isInternalInstall;
@property(nonatomic) _Bool hasIsInternalTool;
@property(nonatomic) _Bool isInternalTool;
@property(retain, nonatomic) NSString *deviceHwIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceHwIdentifier;
- (void)_readDeviceHwIdentifier;
@property(retain, nonatomic) NSString *deviceOsVersion;
@property(readonly, nonatomic) _Bool hasDeviceOsVersion;
- (void)_readDeviceOsVersion;

@end

