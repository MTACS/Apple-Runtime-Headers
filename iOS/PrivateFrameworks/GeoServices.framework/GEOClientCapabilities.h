//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAbAssignInfo, GEOFormattedStringClientCapabilities, GEOLocalTime, GEOLocalizationCapabilities, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOClientCapabilities : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedTransitFeatures;
    GEOAbAssignInfo *_abAssignInfo;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOFormattedStringClientCapabilities *_formattedStringClientCapabilities;
    NSString *_hardwareModel;
    GEOLocalizationCapabilities *_localizationCapabilities;
    GEOLocalTime *_requestTime;
    NSString *_userCurrentTimezone;
    int _maxFormatterSupported;
    int _maxManeuverTypeSupported;
    int _maxRouteIncidentSupported;
    unsigned int _maxTrafficSpeedSupported;
    unsigned int _maxZilchMessageVersionSupported;
    int _transitMarketSupport;
    _Bool _clusteredTransitRoutesSupported;
    _Bool _includeCrossLanguagePhonetics;
    _Bool _internalInstall;
    _Bool _internalTool;
    _Bool _routeOptionsSupported;
    _Bool _snapToClosestStopSupported;
    _Bool _supportsArrivalMapRegion;
    _Bool _supportsGuidanceEventsInlineShields;
    _Bool _supportsGuidanceEvents;
    _Bool _supportsJunctionView;
    _Bool _supportsLongShieldStrings;
    _Bool _supportsNaturalGuidance;
    struct {
        unsigned int has_maxFormatterSupported:1;
        unsigned int has_maxManeuverTypeSupported:1;
        unsigned int has_maxRouteIncidentSupported:1;
        unsigned int has_maxTrafficSpeedSupported:1;
        unsigned int has_maxZilchMessageVersionSupported:1;
        unsigned int has_transitMarketSupport:1;
        unsigned int has_clusteredTransitRoutesSupported:1;
        unsigned int has_includeCrossLanguagePhonetics:1;
        unsigned int has_internalInstall:1;
        unsigned int has_internalTool:1;
        unsigned int has_routeOptionsSupported:1;
        unsigned int has_snapToClosestStopSupported:1;
        unsigned int has_supportsArrivalMapRegion:1;
        unsigned int has_supportsGuidanceEventsInlineShields:1;
        unsigned int has_supportsGuidanceEvents:1;
        unsigned int has_supportsJunctionView:1;
        unsigned int has_supportsLongShieldStrings:1;
        unsigned int has_supportsNaturalGuidance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_supportedTransitFeatures:1;
        unsigned int read_abAssignInfo:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_displayRegion:1;
        unsigned int read_formattedStringClientCapabilities:1;
        unsigned int read_hardwareModel:1;
        unsigned int read_localizationCapabilities:1;
        unsigned int read_requestTime:1;
        unsigned int read_userCurrentTimezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_supportedTransitFeatures:1;
        unsigned int wrote_abAssignInfo:1;
        unsigned int wrote_appMajorVersion:1;
        unsigned int wrote_appMinorVersion:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_displayLanguages:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_formattedStringClientCapabilities:1;
        unsigned int wrote_hardwareModel:1;
        unsigned int wrote_localizationCapabilities:1;
        unsigned int wrote_requestTime:1;
        unsigned int wrote_userCurrentTimezone:1;
        unsigned int wrote_maxFormatterSupported:1;
        unsigned int wrote_maxManeuverTypeSupported:1;
        unsigned int wrote_maxRouteIncidentSupported:1;
        unsigned int wrote_maxTrafficSpeedSupported:1;
        unsigned int wrote_maxZilchMessageVersionSupported:1;
        unsigned int wrote_transitMarketSupport:1;
        unsigned int wrote_clusteredTransitRoutesSupported:1;
        unsigned int wrote_includeCrossLanguagePhonetics:1;
        unsigned int wrote_internalInstall:1;
        unsigned int wrote_internalTool:1;
        unsigned int wrote_routeOptionsSupported:1;
        unsigned int wrote_snapToClosestStopSupported:1;
        unsigned int wrote_supportsArrivalMapRegion:1;
        unsigned int wrote_supportsGuidanceEventsInlineShields:1;
        unsigned int wrote_supportsGuidanceEvents:1;
        unsigned int wrote_supportsJunctionView:1;
        unsigned int wrote_supportsLongShieldStrings:1;
        unsigned int wrote_supportsNaturalGuidance:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)displayLanguagesType;
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
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) _Bool hasDeviceSku;
- (void)_readDeviceSku;
@property(retain, nonatomic) GEOLocalizationCapabilities *localizationCapabilities;
@property(readonly, nonatomic) _Bool hasLocalizationCapabilities;
- (void)_readLocalizationCapabilities;
@property(nonatomic) _Bool hasSupportsJunctionView;
@property(nonatomic) _Bool supportsJunctionView;
@property(nonatomic) _Bool hasSupportsNaturalGuidance;
@property(nonatomic) _Bool supportsNaturalGuidance;
@property(nonatomic) _Bool hasSupportsArrivalMapRegion;
@property(nonatomic) _Bool supportsArrivalMapRegion;
- (int)StringAsSupportedTransitFeatures:(id)arg1;
- (id)supportedTransitFeaturesAsString:(int)arg1;
- (void)setSupportedTransitFeatures:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedTransitFeatureAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsSupportedTransitFeature:(int)arg1;
- (void)addSupportedTransitFeature:(int)arg1;
- (void)clearSupportedTransitFeatures;
@property(readonly, nonatomic) int *supportedTransitFeatures;
@property(readonly, nonatomic) unsigned long long supportedTransitFeaturesCount;
- (void)_readSupportedTransitFeatures;
@property(nonatomic) _Bool hasMaxZilchMessageVersionSupported;
@property(nonatomic) unsigned int maxZilchMessageVersionSupported;
@property(retain, nonatomic) GEOLocalTime *requestTime;
@property(readonly, nonatomic) _Bool hasRequestTime;
- (void)_readRequestTime;
@property(retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property(readonly, nonatomic) _Bool hasAbAssignInfo;
- (void)_readAbAssignInfo;
@property(nonatomic) _Bool hasSupportsGuidanceEventsInlineShields;
@property(nonatomic) _Bool supportsGuidanceEventsInlineShields;
@property(nonatomic) _Bool hasSupportsGuidanceEvents;
@property(nonatomic) _Bool supportsGuidanceEvents;
@property(nonatomic) _Bool hasSupportsLongShieldStrings;
@property(nonatomic) _Bool supportsLongShieldStrings;
@property(retain, nonatomic) NSString *userCurrentTimezone;
@property(readonly, nonatomic) _Bool hasUserCurrentTimezone;
- (void)_readUserCurrentTimezone;
@property(nonatomic) _Bool hasIncludeCrossLanguagePhonetics;
@property(nonatomic) _Bool includeCrossLanguagePhonetics;
@property(nonatomic) _Bool hasSnapToClosestStopSupported;
@property(nonatomic) _Bool snapToClosestStopSupported;
@property(retain, nonatomic) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property(readonly, nonatomic) _Bool hasFormattedStringClientCapabilities;
- (void)_readFormattedStringClientCapabilities;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (id)transitMarketSupportAsString:(int)arg1;
@property(nonatomic) _Bool hasTransitMarketSupport;
@property(nonatomic) int transitMarketSupport;
@property(nonatomic) _Bool hasRouteOptionsSupported;
@property(nonatomic) _Bool routeOptionsSupported;
@property(nonatomic) _Bool hasClusteredTransitRoutesSupported;
@property(nonatomic) _Bool clusteredTransitRoutesSupported;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (void)_readDeviceCountryCode;
@property(nonatomic) _Bool hasMaxFormatterSupported;
@property(nonatomic) int maxFormatterSupported;
@property(nonatomic) _Bool hasMaxRouteIncidentSupported;
@property(nonatomic) int maxRouteIncidentSupported;
@property(nonatomic) _Bool hasMaxTrafficSpeedSupported;
@property(nonatomic) unsigned int maxTrafficSpeedSupported;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (void)_readDisplayRegion;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (void)_addNoFlagsDisplayLanguages:(id)arg1;
- (void)addDisplayLanguages:(id)arg1;
- (void)clearDisplayLanguages;
@property(retain, nonatomic) NSMutableArray *displayLanguages;
- (void)_readDisplayLanguages;
@property(nonatomic) _Bool hasInternalTool;
@property(nonatomic) _Bool internalTool;
@property(nonatomic) _Bool hasInternalInstall;
@property(nonatomic) _Bool internalInstall;
- (int)StringAsMaxManeuverTypeSupported:(id)arg1;
- (id)maxManeuverTypeSupportedAsString:(int)arg1;
@property(nonatomic) _Bool hasMaxManeuverTypeSupported;
@property(nonatomic) int maxManeuverTypeSupported;
@property(retain, nonatomic) NSString *hardwareModel;
@property(readonly, nonatomic) _Bool hasHardwareModel;
- (void)_readHardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
- (void)_readAppMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
- (void)_readAppMajorVersion;
- (void)dealloc;

@end

