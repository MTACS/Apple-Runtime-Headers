//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionSource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    CDStruct_56d48c16 _attributionRequirements;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
    unsigned int _sourceVersion;
    _Bool _enforceAppStore;
    struct {
        unsigned int has_enforceAppStore:1;
        unsigned int read_attributionRequirements:1;
        unsigned int read_attributionApps:1;
        unsigned int read_localizedAttributions:1;
        unsigned int read_sourceIdentifier:1;
        unsigned int read_supportedComponentActions:1;
        unsigned int read_webBaseActionURL:1;
        unsigned int wrote_attributionRequirements:1;
        unsigned int wrote_attributionApps:1;
        unsigned int wrote_localizedAttributions:1;
        unsigned int wrote_sourceIdentifier:1;
        unsigned int wrote_supportedComponentActions:1;
        unsigned int wrote_webBaseActionURL:1;
        unsigned int wrote_sourceVersion:1;
        unsigned int wrote_enforceAppStore:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)supportedComponentActionsType;
+ (Class)attributionAppsType;
+ (Class)localizedAttributionType;
- (void).cxx_destruct;
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
@property(nonatomic) _Bool hasEnforceAppStore;
@property(nonatomic) _Bool enforceAppStore;
- (id)supportedComponentActionsAtIndex:(unsigned int)arg1;
- (unsigned int)supportedComponentActionsCount;
- (void)_addNoFlagsSupportedComponentActions:(id)arg1;
- (void)addSupportedComponentActions:(id)arg1;
- (void)clearSupportedComponentActions;
@property(retain, nonatomic) NSMutableArray *supportedComponentActions;
- (void)_readSupportedComponentActions;
@property(retain, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) _Bool hasWebBaseActionURL;
- (void)_readWebBaseActionURL;
- (id)attributionAppsAtIndex:(unsigned int)arg1;
- (unsigned int)attributionAppsCount;
- (void)_addNoFlagsAttributionApps:(id)arg1;
- (void)addAttributionApps:(id)arg1;
- (void)clearAttributionApps;
@property(retain, nonatomic) NSMutableArray *attributionApps;
- (void)_readAttributionApps;
- (int)StringAsAttributionRequirements:(id)arg1;
- (id)attributionRequirementsAsString:(int)arg1;
- (void)setAttributionRequirements:(int *)arg1 count:(unsigned int)arg2;
- (int)attributionRequirementsAtIndex:(unsigned int)arg1;
- (void)_addNoFlagsAttributionRequirements:(int)arg1;
- (void)addAttributionRequirements:(int)arg1;
- (void)clearAttributionRequirements;
@property(readonly, nonatomic) int *attributionRequirements;
@property(readonly, nonatomic) unsigned int attributionRequirementsCount;
- (void)_readAttributionRequirements;
- (id)localizedAttributionAtIndex:(unsigned int)arg1;
- (unsigned int)localizedAttributionsCount;
- (void)_addNoFlagsLocalizedAttribution:(id)arg1;
- (void)addLocalizedAttribution:(id)arg1;
- (void)clearLocalizedAttributions;
@property(retain, nonatomic) NSMutableArray *localizedAttributions;
- (void)_readLocalizedAttributions;
@property(nonatomic) unsigned int sourceVersion;
@property(retain, nonatomic) NSString *sourceIdentifier;
- (void)_readSourceIdentifier;
- (void)dealloc;
- (id)bestLocalizedAttribution;
- (_Bool)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2;
- (_Bool)supportsAction:(int)arg1 forComponent:(int)arg2;

@end

