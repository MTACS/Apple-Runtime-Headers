//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOMapItemPrivate-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOAssociatedApp, GEOFeatureStyleAttributes, GEOLatLng, GEOMapItemClientAttributes, GEOMapItemContainedPlace, GEOMapItemDetourInfo, GEOMapItemIdentifier, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapItemStorageUserValues, GEOMapRegion, GEOMessageLink, GEOMuninViewState, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPDResultDetourInfo, GEOPlace, GEOPlaceResult, GEOPlacecardLayoutConfiguration, GEOPriceDescription, GEORelatedPlaceList, GEORestaurantFeaturesLink, GEOStorefrontInfo, GEOStorefrontPresentationInfo, GEOStyleAttributes, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL, PBDataReader, PBUnknownFields, _GEOMapItemStorageNotificationTrampoline;
@protocol GEOAnnotatedItemList, GEOEncyclopedicInfo, GEOMapItem, GEOMapItemTransitInfo, GEOMapItemVenueInfo, GEOTransitAttribution, GEOTransitVehiclePosition;

@interface GEOMapItemStorage : PBCodable <GEOMapItemPrivate, NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPDResultDetourInfo *_internalDetourInfo;
    NSString *_mapsURL;
    GEOLatLng *_originatingCoordinate;
    GEOPDPlace *_placeData;
    GEOPlaceResult *_placeResult;
    GEOPlace *_place;
    GEOMapItemStorageUserValues *_userValues;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_clientAttributes:1;
        unsigned int read_internalDetourInfo:1;
        unsigned int read_mapsURL:1;
        unsigned int read_originatingCoordinate:1;
        unsigned int read_placeData:1;
        unsigned int read_placeResult:1;
        unsigned int read_place:1;
        unsigned int read_userValues:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientAttributes:1;
        unsigned int wrote_internalDetourInfo:1;
        unsigned int wrote_mapsURL:1;
        unsigned int wrote_originatingCoordinate:1;
        unsigned int wrote_placeData:1;
        unsigned int wrote_placeResult:1;
        unsigned int wrote_place:1;
        unsigned int wrote_userValues:1;
    } _flags;
    _GEOMapItemStorageNotificationTrampoline *_trampoline;
    id <GEOMapItem> _geoMapItem;
}

+ (_Bool)isValid:(id)arg1;
+ (id)mapItemStorageForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (id)mapItemStorageForPlaceData:(id)arg1 detourInfo:(id)arg2 userValues:(id)arg3;
+ (id)mapItemStorageForPlaceData:(id)arg1 detourInfo:(id)arg2;
+ (id)mapItemStorageForPlaceData:(id)arg1;
+ (id)mapItemStorageForPlaceResult:(id)arg1;
+ (id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2 userValues:(id)arg3;
+ (id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForPlace:(id)arg1;
+ (id)mapItemStorageForSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2;
+ (id)mapItemStorageForSerializedPlaceData:(id)arg1;
+ (id)mapItemStorageForSerializedMapItemStorage:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1 forUseType:(unsigned long long)arg2;
+ (id)mapItemStorageForGEOMapItem:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForGEOMapItem:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOMapItemStorageUserValues *userValues;
@property(readonly, nonatomic) _Bool hasUserValues;
- (void)_readUserValues;
@property(retain, nonatomic) NSString *mapsURL;
@property(readonly, nonatomic) _Bool hasMapsURL;
- (void)_readMapsURL;
@property(retain, nonatomic) GEOPDResultDetourInfo *internalDetourInfo;
@property(readonly, nonatomic) _Bool hasInternalDetourInfo;
- (void)_readInternalDetourInfo;
@property(retain, nonatomic) GEOLatLng *originatingCoordinate;
@property(readonly, nonatomic) _Bool hasOriginatingCoordinate;
- (void)_readOriginatingCoordinate;
@property(retain, nonatomic) GEOPlaceResult *placeResult;
@property(readonly, nonatomic) _Bool hasPlaceResult;
- (void)_readPlaceResult;
@property(retain, nonatomic) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic) _Bool hasClientAttributes;
- (void)_readClientAttributes;
@property(retain, nonatomic) GEOPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
- (void)_readPlace;
@property(retain, nonatomic) GEOPDPlace *placeData;
@property(readonly, nonatomic) _Bool hasPlaceData;
- (void)_readPlaceData;
@property(readonly, nonatomic, getter=_showSuggestAnEditButton) _Bool showSuggestAnEditButton;
@property(readonly, nonatomic, getter=_enableRAPLightweightFeedback) _Bool enableRAPLightweightFeedback;
@property(readonly, nonatomic, getter=_walletPlaceStyling) GEOStyleAttributes *walletPlaceStyling;
@property(readonly, nonatomic, getter=_walletPlaceLocalizedString) NSString *walletPlaceLocalizedString;
@property(readonly, nonatomic, getter=_walletPlaceLocalizedStringLocale) NSString *walletPlaceLocalizedStringLocale;
@property(readonly, nonatomic, getter=_walletCategoryStyling) GEOStyleAttributes *walletCategoryStyling;
@property(readonly, nonatomic, getter=_walletCategoryLocalizedString) NSString *walletCategoryLocalizedString;
@property(readonly, nonatomic, getter=_walletCategoryLocalizedStringLocale) NSString *walletCategoryLocalizedStringLocale;
@property(readonly, nonatomic, getter=_walletMapsCategoryIdentifier) NSString *walletMapsCategoryIdentifier;
@property(readonly, nonatomic, getter=_walletCategoryIdentifier) NSString *walletCategoryIdentifier;
@property(readonly, nonatomic) NSArray *spatialMappedPlaceCategories;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, nonatomic) _Bool hasVenueCapacity;
- (void)iterateGroundViewsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=_groundViewLocationId) unsigned long long groundViewLocationId;
@property(readonly, nonatomic, getter=_hasGroundViewLocationId) _Bool hasGroundViewLocationId;
@property(readonly, nonatomic, getter=_isInLinkedPlaceRelationship) _Bool inLinkedPlaceRelationship;
@property(readonly, nonatomic, getter=_containedPlace) GEOMapItemContainedPlace *containedPlace;
@property(readonly, nonatomic, getter=_priceDescription) GEOPriceDescription *priceDescription;
- (id)_bestHeroBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (id)_bestNavbarBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (id)_bestAvatarBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
@property(readonly, nonatomic, getter=_wifiFingerprintConfidence) unsigned int wifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_hasWifiFingerprintConfidence) _Bool hasWifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelType) int wifiFingerprintLabelType;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelType) _Bool hasWifiFingerprintLabelType;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelStatusCode) int wifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelStatusCode) _Bool hasWifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_annotatedItemList) id <GEOAnnotatedItemList> annotatedItemList;
@property(readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property(readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property(readonly, nonatomic, getter=_venueInfo) id <GEOMapItemVenueInfo> venueInfo;
@property(readonly, nonatomic, getter=_venueFeatureType) int venueFeatureType;
@property(readonly, nonatomic, getter=_hasVenueFeatureType) _Bool hasVenueFeatureType;
@property(readonly, nonatomic) NSData *externalTransitStationCode;
- (id)weatherDisplayName;
- (id)shortAddress;
- (id)addressObject;
@property(readonly, nonatomic) _Bool hasExpiredComponents;
@property(readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property(readonly, nonatomic, getter=_placecardLayoutConfiguration) GEOPlacecardLayoutConfiguration *placecardLayoutConfiguration;
@property(readonly, nonatomic, getter=_relatedPlaceList) GEORelatedPlaceList *relatedPlaceList;
@property(readonly, nonatomic, getter=_placeCollections) NSArray *placeCollections;
@property(readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property(readonly, nonatomic, getter=_messageLink) GEOMessageLink *messageLink;
@property(readonly, nonatomic, getter=_brandMUID) unsigned long long brandMUID;
@property(readonly, nonatomic, getter=_hasBrandMUID) _Bool hasBrandMUID;
@property(readonly, nonatomic, getter=_isStandaloneBrand) _Bool isStandAloneBrand;
@property(readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property(readonly, nonatomic, getter=_featureLink) GEORestaurantFeaturesLink *featureLink;
@property(readonly, nonatomic, getter=_hasFeatureLink) _Bool hasFeatureLink;
@property(readonly, nonatomic) NSArray *spatialMappedCategories;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) _Bool hasBusinessClaim;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (id)_asPlaceInfo;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_mapsCategoryId) NSString *mapsCategoryId;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_poiCategory) NSString *poiCategory;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property(readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_optsOutOfTelephoneAds) _Bool optsOutOfTelephoneAds;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
@property(readonly, nonatomic, getter=_encyclopedicInfo) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic, getter=_hasEncyclopedicInfo) _Bool hasEncyclopedicInfo;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) _Bool hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
- (_Bool)valueForAmenityType:(int)arg1;
- (_Bool)hasAmenityType:(int)arg1;
@property(readonly, nonatomic, getter=_amenities) NSArray *amenities;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_childItems) NSArray *childItems;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_hasAreaInMeters) _Bool hasAreaInMeters;
@property(readonly, nonatomic, getter=_placeDisplayType) int placeDisplayType;
@property(readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_storefrontPresentationInfo) GEOStorefrontPresentationInfo *storefrontPresentationInfo;
@property(readonly, nonatomic, getter=_storefrontInfo) GEOStorefrontInfo *storefrontInfo;
@property(readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_transitVehiclePosition) id <GEOTransitVehiclePosition> transitVehiclePosition;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, nonatomic, getter=_hasTransit) _Bool hasTransit;
@property(readonly, nonatomic, getter=_isTransitDisplayFeature) _Bool isTransitDisplayFeature;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) _Bool hasResultProviderID;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_spokenAddressForLocale:(id)arg1;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_responseStatusIsIncomplete) _Bool responseStatusIncomplete;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic) _Bool isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegionOrNil;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) float displayMaxZoom;
@property(readonly, nonatomic) _Bool hasDisplayMaxZoom;
@property(readonly, nonatomic) float displayMinZoom;
@property(readonly, nonatomic) _Bool hasDisplayMinZoom;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic, getter=isDisputed) _Bool disputed;
@property(readonly, nonatomic) NSData *encodedData;
@property(readonly, nonatomic) NSString *secondarySpokenName;
@property(readonly, nonatomic) NSString *secondaryName;
- (id)spokenNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)_geoMapItem;
- (id)_geoMapItemCreatingAndAssociatingIfNeeded;
- (id)initWithPlaceData:(id)arg1 detourInfo:(id)arg2 clientAttributes:(id)arg3 userValues:(id)arg4;
- (id)initWithPlaceResult:(id)arg1;
- (id)initWithPlace:(id)arg1 clientAttributes:(id)arg2 userValues:(id)arg3;
- (id)_mapItemByStrippingOptionalData;
@property(readonly, nonatomic, getter=_associatedApp) GEOAssociatedApp *associatedApp;
@property(readonly, nonatomic, getter=_linkedServices) NSArray *linkedServices;
@property(readonly, nonatomic, getter=_hasLinkedServices) _Bool hasLinkedServices;
@property(readonly, nonatomic, getter=_businessHours) NSArray *businessHours;
@property(readonly, nonatomic, getter=_hasBusinessHours) _Bool hasBusinessHours;
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_tips) NSArray *tips;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
- (_Bool)isEqualToMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

