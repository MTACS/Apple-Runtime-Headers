//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOBusiness : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    unsigned long long _uID;
    NSString *_uRL;
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSMutableArray *_photos;
    NSMutableArray *_placeDataAmendments;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    BOOL _isClosed;
    struct {
        unsigned int has_uID:1;
        unsigned int has_isClosed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_uRL:1;
        unsigned int read_attributeKeyValues:1;
        unsigned int read_attributions:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int read_localizedCategories:1;
        unsigned int read_mapsURL:1;
        unsigned int read_name:1;
        unsigned int read_openHours:1;
        unsigned int read_phoneticName:1;
        unsigned int read_photos:1;
        unsigned int read_placeDataAmendments:1;
        unsigned int read_ratings:1;
        unsigned int read_sources:1;
        unsigned int read_starRatings:1;
        unsigned int read_telephone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_uID:1;
        unsigned int wrote_uRL:1;
        unsigned int wrote_attributeKeyValues:1;
        unsigned int wrote_attributions:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_center:1;
        unsigned int wrote_localizedCategories:1;
        unsigned int wrote_mapsURL:1;
        unsigned int wrote_name:1;
        unsigned int wrote_openHours:1;
        unsigned int wrote_phoneticName:1;
        unsigned int wrote_photos:1;
        unsigned int wrote_placeDataAmendments:1;
        unsigned int wrote_ratings:1;
        unsigned int wrote_sources:1;
        unsigned int wrote_starRatings:1;
        unsigned int wrote_telephone:1;
        unsigned int wrote_isClosed:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)placeDataAmendmentType;
+ (Class)starRatingType;
+ (Class)sourceType;
+ (Class)attributionType;
+ (Class)localizedCategoriesType;
+ (Class)openHoursType;
+ (Class)attributeKeyValueType;
+ (Class)photoType;
+ (Class)categoryType;
+ (Class)ratingType;
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
- (id)placeDataAmendmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeDataAmendmentsCount;
- (void)_addNoFlagsPlaceDataAmendment:(id)arg1;
- (void)addPlaceDataAmendment:(id)arg1;
- (void)clearPlaceDataAmendments;
@property(retain, nonatomic) NSMutableArray *placeDataAmendments;
- (void)_readPlaceDataAmendments;
- (id)starRatingAtIndex:(unsigned long long)arg1;
- (unsigned long long)starRatingsCount;
- (void)_addNoFlagsStarRating:(id)arg1;
- (void)addStarRating:(id)arg1;
- (void)clearStarRatings;
@property(retain, nonatomic) NSMutableArray *starRatings;
- (void)_readStarRatings;
- (id)sourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourcesCount;
- (void)_addNoFlagsSource:(id)arg1;
- (void)addSource:(id)arg1;
- (void)clearSources;
@property(retain, nonatomic) NSMutableArray *sources;
- (void)_readSources;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)_addNoFlagsAttribution:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
@property(retain, nonatomic) NSMutableArray *attributions;
- (void)_readAttributions;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategoriesCount;
- (void)_addNoFlagsLocalizedCategories:(id)arg1;
- (void)addLocalizedCategories:(id)arg1;
- (void)clearLocalizedCategories;
@property(retain, nonatomic) NSMutableArray *localizedCategories;
- (void)_readLocalizedCategories;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)_readCenter;
- (id)openHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)openHoursCount;
- (void)_addNoFlagsOpenHours:(id)arg1;
- (void)addOpenHours:(id)arg1;
- (void)clearOpenHours;
@property(retain, nonatomic) NSMutableArray *openHours;
- (void)_readOpenHours;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeyValuesCount;
- (void)_addNoFlagsAttributeKeyValue:(id)arg1;
- (void)addAttributeKeyValue:(id)arg1;
- (void)clearAttributeKeyValues;
@property(retain, nonatomic) NSMutableArray *attributeKeyValues;
- (void)_readAttributeKeyValues;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photosCount;
- (void)_addNoFlagsPhoto:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)clearPhotos;
@property(retain, nonatomic) NSMutableArray *photos;
- (void)_readPhotos;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)_addNoFlagsCategory:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
@property(retain, nonatomic) NSMutableArray *categorys;
- (void)_readCategorys;
- (id)ratingAtIndex:(unsigned long long)arg1;
- (unsigned long long)ratingsCount;
- (void)_addNoFlagsRating:(id)arg1;
- (void)addRating:(id)arg1;
- (void)clearRatings;
@property(retain, nonatomic) NSMutableArray *ratings;
- (void)_readRatings;
@property(retain, nonatomic) NSString *mapsURL;
@property(readonly, nonatomic) BOOL hasMapsURL;
- (void)_readMapsURL;
@property(nonatomic) BOOL hasIsClosed;
@property(nonatomic) BOOL isClosed;
@property(retain, nonatomic) NSString *uRL;
@property(readonly, nonatomic) BOOL hasURL;
- (void)_readURL;
@property(retain, nonatomic) NSString *telephone;
@property(readonly, nonatomic) BOOL hasTelephone;
- (void)_readTelephone;
@property(retain, nonatomic) NSString *phoneticName;
@property(readonly, nonatomic) BOOL hasPhoneticName;
- (void)_readPhoneticName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
@property(nonatomic) BOOL hasUID;
@property(nonatomic) unsigned long long uID;
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6;
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;

@end

