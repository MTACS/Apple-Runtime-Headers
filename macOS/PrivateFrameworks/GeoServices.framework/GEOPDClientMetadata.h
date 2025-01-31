//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOAdditionalEnabledMarkets, GEOLocalizationCapabilities, GEOLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _knownClientResolvedTypeDeprecateds;
    CDStruct_95bda58d _knownClientResolvedTypes;
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    NSMutableArray *_businessChatPreflightIdentifiers;
    NSString *_debugApiKey;
    NSString *_deviceCountryCode;
    NSString *_deviceDisplayLanguage;
    GEOLocation *_deviceExtendedLocation;
    NSMutableArray *_deviceHistoricalLocations;
    NSString *_deviceKeyboardLanguage;
    NSString *_deviceSku;
    NSString *_deviceSpokenLanguage;
    GEOLocalizationCapabilities *_localizationCapabilities;
    int _clientRevision;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    int _requiredVersion;
    int _resultListAttributionSupport;
    unsigned int _timeSinceMapEnteredForeground;
    BOOL _enablePreflightVenues;
    struct {
        unsigned int has_clientRevision:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_hourOfDay:1;
        unsigned int has_requiredVersion:1;
        unsigned int has_resultListAttributionSupport:1;
        unsigned int has_timeSinceMapEnteredForeground:1;
        unsigned int has_enablePreflightVenues:1;
        unsigned int read_unknownFields:1;
        unsigned int read_knownClientResolvedTypeDeprecateds:1;
        unsigned int read_knownClientResolvedTypes:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_businessChatPreflightIdentifiers:1;
        unsigned int read_debugApiKey:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceDisplayLanguage:1;
        unsigned int read_deviceExtendedLocation:1;
        unsigned int read_deviceHistoricalLocations:1;
        unsigned int read_deviceKeyboardLanguage:1;
        unsigned int read_deviceSku:1;
        unsigned int read_deviceSpokenLanguage:1;
        unsigned int read_localizationCapabilities:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_knownClientResolvedTypeDeprecateds:1;
        unsigned int wrote_knownClientResolvedTypes:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_additionalEnabledMarkets:1;
        unsigned int wrote_businessChatPreflightIdentifiers:1;
        unsigned int wrote_debugApiKey:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceDisplayLanguage:1;
        unsigned int wrote_deviceExtendedLocation:1;
        unsigned int wrote_deviceHistoricalLocations:1;
        unsigned int wrote_deviceKeyboardLanguage:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_deviceSpokenLanguage:1;
        unsigned int wrote_localizationCapabilities:1;
        unsigned int wrote_clientRevision:1;
        unsigned int wrote_dayOfWeek:1;
        unsigned int wrote_hourOfDay:1;
        unsigned int wrote_requiredVersion:1;
        unsigned int wrote_resultListAttributionSupport:1;
        unsigned int wrote_timeSinceMapEnteredForeground:1;
        unsigned int wrote_enablePreflightVenues:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)businessChatPreflightIdentifierType;
+ (Class)deviceHistoricalLocationType;
- (void).cxx_destruct;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property(readonly, nonatomic) BOOL hasAbClientMetadata;
- (void)_readAbClientMetadata;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) BOOL hasDeviceSku;
- (void)_readDeviceSku;
@property(retain, nonatomic) GEOLocalizationCapabilities *localizationCapabilities;
@property(readonly, nonatomic) BOOL hasLocalizationCapabilities;
- (void)_readLocalizationCapabilities;
- (int)StringAsClientRevision:(id)arg1;
- (id)clientRevisionAsString:(int)arg1;
@property(nonatomic) BOOL hasClientRevision;
@property(nonatomic) int clientRevision;
- (id)businessChatPreflightIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessChatPreflightIdentifiersCount;
- (void)_addNoFlagsBusinessChatPreflightIdentifier:(id)arg1;
- (void)addBusinessChatPreflightIdentifier:(id)arg1;
- (void)clearBusinessChatPreflightIdentifiers;
@property(retain, nonatomic) NSMutableArray *businessChatPreflightIdentifiers;
- (void)_readBusinessChatPreflightIdentifiers;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (void)setKnownClientResolvedTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsKnownClientResolvedType:(int)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)clearKnownClientResolvedTypes;
@property(readonly, nonatomic) int *knownClientResolvedTypes;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
- (void)_readKnownClientResolvedTypes;
@property(nonatomic) BOOL hasEnablePreflightVenues;
@property(nonatomic) BOOL enablePreflightVenues;
- (int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg1;
- (id)knownClientResolvedTypeDeprecatedsAsString:(int)arg1;
- (void)setKnownClientResolvedTypeDeprecateds:(int *)arg1 count:(unsigned long long)arg2;
- (int)knownClientResolvedTypeDeprecatedAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsKnownClientResolvedTypeDeprecated:(int)arg1;
- (void)addKnownClientResolvedTypeDeprecated:(int)arg1;
- (void)clearKnownClientResolvedTypeDeprecateds;
@property(readonly, nonatomic) int *knownClientResolvedTypeDeprecateds;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypeDeprecatedsCount;
- (void)_readKnownClientResolvedTypeDeprecateds;
@property(retain, nonatomic) NSString *debugApiKey;
@property(readonly, nonatomic) BOOL hasDebugApiKey;
- (void)_readDebugApiKey;
- (int)StringAsRequiredVersion:(id)arg1;
- (id)requiredVersionAsString:(int)arg1;
@property(nonatomic) BOOL hasRequiredVersion;
@property(nonatomic) int requiredVersion;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void)_addNoFlagsDeviceHistoricalLocation:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
- (void)_readDeviceHistoricalLocations;
@property(retain, nonatomic) GEOLocation *deviceExtendedLocation;
@property(readonly, nonatomic) BOOL hasDeviceExtendedLocation;
- (void)_readDeviceExtendedLocation;
@property(nonatomic) BOOL hasDayOfWeek;
@property(nonatomic) unsigned int dayOfWeek;
@property(nonatomic) BOOL hasHourOfDay;
@property(nonatomic) unsigned int hourOfDay;
- (int)StringAsResultListAttributionSupport:(id)arg1;
- (id)resultListAttributionSupportAsString:(int)arg1;
@property(nonatomic) BOOL hasResultListAttributionSupport;
@property(nonatomic) int resultListAttributionSupport;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
- (void)_readAdditionalEnabledMarkets;
@property(nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground;
@property(retain, nonatomic) NSString *deviceSpokenLanguage;
@property(readonly, nonatomic) BOOL hasDeviceSpokenLanguage;
- (void)_readDeviceSpokenLanguage;
@property(retain, nonatomic) NSString *deviceKeyboardLanguage;
@property(readonly, nonatomic) BOOL hasDeviceKeyboardLanguage;
- (void)_readDeviceKeyboardLanguage;
@property(retain, nonatomic) NSString *deviceDisplayLanguage;
@property(readonly, nonatomic) BOOL hasDeviceDisplayLanguage;
- (void)_readDeviceDisplayLanguage;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (void)_readDeviceCountryCode;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;
- (void)clearLocations;

@end

