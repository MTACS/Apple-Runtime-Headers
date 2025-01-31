//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALSCGreenClient, CPSearchMatcher, NSDate, NSRecursiveLock;

@interface ALCityManager : NSObject
{
    struct sqlite3 *_db;
    struct sqlite3 *_localizedDb;
    CPSearchMatcher *_citySearchMatcher;
    NSRecursiveLock *_databaseAccessRecursiveLock;
    _Bool _greenKey1ValueCache;
    _Bool _greenKey2ValueCache;
    _Bool _greenKey3ValueCache;
    NSDate *_greenKeyValueCacheExpirationDate;
    ALSCGreenClient *_greenClient;
}

+ (id)_displayStringForTaiwanRegionWithKey2Value:(_Bool)arg1;
+ (id)displayStringForTaiwanRegion;
+ (id)displayStringForMacaoSAR;
+ (id)displayStringForMacaoSARChina;
+ (id)displayStringForHongKongSAR;
+ (id)displayStringForHongKongSARChina;
+ (id)_localeDictionaryFromSQLRow:(char **)arg1;
+ (struct __CFArray *)legacyCityForCity:(id)arg1;
+ (id)newCitiesByIdentifierMap:(id)arg1;
+ (id)sharedManager;
@property(readonly) CPSearchMatcher *citySearchMatcher; // @synthesize citySearchMatcher=_citySearchMatcher;
- (void)dealloc;
- (id)citiesWithTimeZone:(id)arg1;
- (id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)defaultCityForTimeZone:(id)arg1;
- (id)defaultCitiesShownInWorldClock;
- (id)defaultCitiesForLocaleCode:(id)arg1;
- (id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2;
- (id)localeWithCode:(id)arg1;
- (id)allLocales;
- (id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (void)_whileDatabaseLocked_modifyCityForGreen:(id)arg1;
- (void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
- (id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1;
- (id)citiesMatchingQualifier:(id)arg1;
- (id)bestCityForLegacyCity:(struct __CFArray *)arg1;
- (id)cityForClassicIdentifier:(id)arg1;
- (id)citiesWithIdentifiers:(id)arg1;
- (void)localizeCities:(id)arg1;
- (id)citiesMatchingName:(id)arg1 localized:(_Bool)arg2;
- (id)citiesMatchingName:(id)arg1;
- (id)allCities;
- (id)init;

@end

