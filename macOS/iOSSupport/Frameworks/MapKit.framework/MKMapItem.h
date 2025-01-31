//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/GEOURLSerializable-Protocol.h>
#import <MapKit/NSItemProviderReading-Protocol.h>
#import <MapKit/NSItemProviderWriting-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class GEOAddress, GEOBusinessHours, GEOFeatureStyleAttributes, GEOMapItemDetourInfo, GEOMapItemStorage, GEOMapItemStorageUserValues, GEOMapRegion, GEOModuleLayoutEntry, GEOPDBusinessClaim, GEOPDFlyover, GEOPlace, GEORelatedPlaceList, MKMapItemIdentifier, MKMapItemMetadata, MKPlacemark, NSArray, NSData, NSDate, NSNumber, NSNumberFormatter, NSString, NSTimeZone, NSURL, UIColor, _MKMapItemPhotosAttribution, _MKMapItemPlaceAttribution, _MKMapItemReviewsAttribution, _MKPlaceReservationInfo;
@protocol GEOAnnotatedItemList, GEOEncyclopedicInfo, GEOMapItem, GEOMapItemPrivate, GEOMapItemTransitInfo, GEOMapItemVenueInfo, GEOTransitAttribution, MKTransitInfoPreload, NSObject;

@interface MKMapItem : NSObject <NSSecureCoding, NSItemProviderReading, NSItemProviderWriting, GEOURLSerializable>
{
    BOOL _isCurrentLocation;
    BOOL _isPlaceHolder;
    id <GEOMapItem> _geoMapItem;
    MKMapItemIdentifier *_identifier;
    BOOL _isTransitInfoUpdated;
    NSDate *_transitInfoUpdatedDate;
    id <GEOMapItemTransitInfo> _updatedTransitInfo;
    id <GEOMapItemTransitInfo> _defaultTransitInfo;
    id <GEOTransitAttribution> _updatedTransitAttribution;
    _MKMapItemPlaceAttribution *_attribution;
    _MKMapItemPhotosAttribution *_photosAttribution;
    _MKMapItemReviewsAttribution *_reviewsAttribution;
    GEOMapItemStorageUserValues *_userValues;
    id <NSObject> _didResolveAttributionToken;
    NSString *_shortAddress;
    NSString *_firstLocalizedCategoryName;
    NSNumberFormatter *_numberFormatterForAdamId;
    NSString *_localizedSampleSizeForUserRatingScoreString;
    BOOL _isMapItemTypeTransit;
    MKMapItemMetadata *_metadata;
    GEOPlace *_place;
    _MKPlaceReservationInfo *_reservationInfo;
    NSString *_pointOfInterestCategory;
    id <MKTransitInfoPreload> _preloadedTransitInfo;
}

+ (id)_launchOptionsWithOptions:(id)arg1;
+ (id)_urlForLocation:(id)arg1 address:(id)arg2 label:(id)arg3 options:(id)arg4;
+ (id)_urlForMapItemHandles:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)_mapItemBackedByURL:(id)arg1;
+ (id)mapItemsFromURL:(id)arg1 options:(id *)arg2;
+ (id)sanitizeDictionary:(id)arg1;
+ (id)sanitizeArray:(id)arg1 forKey:(id)arg2;
+ (id)sanitizeObject:(id)arg1 forKey:(id)arg2;
+ (BOOL)valueIsValid:(id)arg1 forKey:(id)arg2;
+ (id)launchOptionsFromURL:(id)arg1;
+ (id)_launchOptionsFromResourceOptionsDictionary:(id)arg1;
+ (id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id *)arg2;
+ (void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_mapItemFromHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_sourceAppIdFromLaunchUserInfo:(id)arg1;
+ (id)_sourceAppIdFromLaunchURL:(id)arg1;
+ (id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1;
+ (id)_sharedSessionURLForPunchoutURL:(id)arg1;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2;
+ (void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (id)_localizedNextOpeningDayOftheWeekFormatter;
+ (id)_localizedNextOpeningHoursFormatter;
+ (id)mapItemForCurrentLocation;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(BOOL)arg3;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (BOOL)supportsSecureCoding;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)ticketForMapsDataString:(id)arg1 name:(id)arg2;
+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)contactsAddressKeysForGeoAddressKeys;
+ (id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1;
+ (id)_mapItemFromVCardRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=_preloadedTransitInfo) id <MKTransitInfoPreload> preloadedTransitInfo; // @synthesize preloadedTransitInfo=_preloadedTransitInfo;
@property(copy, nonatomic) NSString *pointOfInterestCategory; // @synthesize pointOfInterestCategory=_pointOfInterestCategory;
@property(retain, nonatomic) _MKPlaceReservationInfo *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
@property(nonatomic, getter=_isMapItemTypeTransit) BOOL isMapItemTypeTransit; // @synthesize isMapItemTypeTransit=_isMapItemTypeTransit;
@property(readonly, nonatomic, getter=_reviewsAttribution) _MKMapItemReviewsAttribution *reviewsAttribution; // @synthesize reviewsAttribution=_reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) _MKMapItemPhotosAttribution *photosAttribution; // @synthesize photosAttribution=_photosAttribution;
@property(readonly, nonatomic, getter=_attribution) _MKMapItemPlaceAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) BOOL isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
@property(readonly, nonatomic) GEOPlace *place; // @synthesize place=_place;
@property(readonly, nonatomic) MKMapItemMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_hasCorrectedHomeWorkAddress) BOOL hasCorrectedHomeWorkAddress;
@property(readonly, nonatomic, getter=_hasCorrectedHomeWorkCoordinate) BOOL hasCorrectedHomeWorkCoordinate;
@property(readonly, nonatomic, getter=_externalTransitStationCode) NSData *externalTransitStationCode;
@property(readonly, nonatomic, getter=_detourInfo) GEOMapItemDetourInfo *detourInfo;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) BOOL hasBusinessClaim;
@property(readonly, nonatomic) NSString *reviewsProviderDisplayName;
@property(readonly, nonatomic, getter=_tips) NSArray *tips;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property(readonly, nonatomic, getter=_relatedPlaceList) GEORelatedPlaceList *relatedPlaceList;
@property(readonly, nonatomic, getter=_placeCollections) NSArray *placeCollections;
@property(readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property(readonly, nonatomic, getter=_navTintBrandColor) UIColor *navTintBrandColor;
@property(readonly, nonatomic, getter=_navBackgroundbrandColor) UIColor *navBackgroundbrandColor;
@property(readonly, nonatomic, getter=_placecardLayout) GEOModuleLayoutEntry *placecardLayout;
@property(readonly, nonatomic, getter=_isMessageIDVerified) BOOL isMessageIDVerified;
@property(readonly, nonatomic, getter=_messageURLString) NSString *messageURLString;
@property(readonly, nonatomic, getter=_messageID) NSString *messageID;
@property(readonly, nonatomic, getter=_brandMUID) unsigned long long brand;
@property(readonly, nonatomic, getter=_hasBrandMUID) BOOL hasBrandMUID;
@property(readonly, nonatomic, getter=_isStandAloneBrand) BOOL isStandAloneBrand;
@property(readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property(readonly, nonatomic, getter=_isMapItemTypeBrand) BOOL isMapItemTypeBrand;
@property(readonly, nonatomic, getter=_isMapItemTypeAddress) BOOL isMapItemTypeAddress;
@property(readonly, nonatomic, getter=_isMapItemTypeSettlement) BOOL isMapItemTypeSettlement;
@property(readonly, nonatomic, getter=_isMapItemTypeBusiness) BOOL isMapItemTypeBusiness;
@property(readonly, nonatomic, getter=_isMapItemTypeUnknown) BOOL isMapItemTypeUnknown;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
- (id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(BOOL)arg4;
@property(readonly, nonatomic, getter=_reviewsDisplayName) NSString *reviewsDisplayName;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property(readonly, nonatomic, getter=_linkedServices) NSArray *linkedServices;
@property(readonly, nonatomic, getter=_hasLinkedServices) BOOL hasLinkedServices;
@property(readonly, nonatomic, getter=_businessHours) NSArray *businessHours;
@property(readonly, nonatomic, getter=_hasBusinessHours) BOOL hasBusinessHours;
@property(readonly, nonatomic, getter=_alternativeAppAdamIds) NSArray *alternativeAppAdamIds;
@property(readonly, nonatomic, getter=_preferedAppAdamID) NSNumber *preferedAppAdamID;
- (id)venueLabelWithContext:(unsigned long long)arg1;
- (id)_cnPostalAddress;
- (id)_addressFormattedAsTitlesForMapRect:(CDStruct_02837cd9)arg1;
- (id)_addressFormattedAsWeatherDisplayName;
- (id)_addressFormattedAsSinglelineAddress;
- (id)_addressFormattedAsShortenedAddress;
- (id)_addressFormattedAsName;
- (id)_addressFormattedAsMultilineAddress;
- (id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1;
- (id)_addressFormattedAsStreetOnly;
- (id)_addressFormattedAsCity;
- (id)_addressOrNil:(id)arg1;
- (id)_bestNavbarBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(BOOL)arg2;
- (id)_bestBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(BOOL)arg2;
- (BOOL)_canGetDirections;
- (id)_urlExtraStorage;
- (id)_activityURLUsingWebPlaceCard:(BOOL)arg1;
- (id)_activityURL;
- (id)_weatherDisplayName;
- (id)_fullAddressWithMultiline:(BOOL)arg1;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)urlRepresentation;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic, getter=_handle) NSData *handle;
- (void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
@property(readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_encyclopedicInfo) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic, getter=_hasEncyclopedicInfo) BOOL hasEncyclopedicInfo;
@property(readonly, nonatomic, getter=_localizedResponseTime) NSString *localizedResponseTime;
@property(readonly, nonatomic, getter=_messageBusinessHours) GEOBusinessHours *messageBusinessHours;
- (id)_localizedNextOpeningStringShort:(BOOL)arg1;
@property(readonly, nonatomic, getter=_hasLocalizedOperatingHours) BOOL hasLocalizedOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property(readonly, nonatomic, getter=_responseStatusIsIncomplete) BOOL responseStatusIncomplete;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_acceptsApplePay) BOOL acceptsApplePay;
@property(readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) BOOL hasAcceptsApplePayAmenity;
- (BOOL)valueForAmenityType:(int)arg1;
- (BOOL)hasAmenityType:(int)arg1;
@property(readonly, nonatomic, getter=_amenities) NSArray *amenities;
@property(readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
@property(readonly, nonatomic, getter=_firstLocalizedCategoryName) NSString *firstLocalizedCategoryName;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_shortAddress) NSString *shortAddress;
@property(readonly, nonatomic, getter=_geoAddress) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_priceRangeString) NSString *priceRangeString;
@property(readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_priceDescription) NSString *priceDescription;
@property(readonly, nonatomic, getter=_hasPriceDescription) BOOL hasPriceDescription;
@property(readonly, nonatomic, getter=_localizedSampleSizeForUserRatingScoreString) NSString *localizedSampleSizeForUserRatingScoreString;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property(readonly, nonatomic, getter=_identifier) MKMapItemIdentifier *identifier;
@property(readonly, nonatomic, getter=_annotatedItemList) id <GEOAnnotatedItemList> annotatedItemList;
@property(readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property(readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property(readonly, nonatomic, getter=_venueInfo) id <GEOMapItemVenueInfo> venueInfo;
@property(readonly, nonatomic, getter=_venueFeatureType) long long venueFeatureType;
@property(readonly, nonatomic, getter=_hasVenueFeatureType) BOOL hasVenueFeatureType;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
- (void)preloadTransitInfoWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
- (id)_formatterForAdamId;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_hasTransitLabels) BOOL hasTransitLabels;
@property(readonly, nonatomic, getter=_transitDisplayName) NSString *transitDisplayName;
@property(readonly, nonatomic, getter=_hasTransitDisplayName) BOOL hasTransitDisplayName;
@property(readonly, nonatomic, getter=_hasTransit) BOOL hasTransit;
@property(readonly, nonatomic, getter=_geoFenceMapRegion) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic, getter=_displayMaxZoom) float displayMaxZoom;
@property(readonly, nonatomic, getter=_hasDisplayMaxZoom) BOOL hasDisplayMaxZoom;
@property(readonly, nonatomic, getter=_displayMinZoom) float displayMinZoom;
@property(readonly, nonatomic, getter=_hasDisplayMinZoom) BOOL hasDisplayMinZoom;
@property(readonly, nonatomic, getter=_displayMapRegion) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic, getter=_coordinate) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) NSString *yelpID;
@property(retain, nonatomic) NSURL *url;
- (id)_getBusiness;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic, getter=_phoneNumberOptsOutOfAds) BOOL phoneNumberOptsOutOfAds;
@property(copy, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic, getter=_secondarySpokenName) NSString *secondarySpokenName;
@property(readonly, nonatomic, getter=_secondaryName) NSString *secondaryName;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) GEOMapItemStorageUserValues *userValues;
@property(readonly, nonatomic, getter=_geoMapItemStorageForDragAndDrop) GEOMapItemStorage *geoMapItemStorageForDragAndDrop;
@property(readonly, nonatomic, getter=_geoMapItemStorageForPersistence) GEOMapItemStorage *geoMapItemStorageForPersistence;
@property(readonly, nonatomic, getter=_geoMapItem) id <GEOMapItemPrivate> geoMapItem;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_refreshAttribution;
@property(readonly, nonatomic) MKPlacemark *placemark;
- (void)dealloc;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCLLocation:(id)arg1 placeType:(int)arg2;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlace:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithGeoMapItemAsCurrentLocation:(id)arg1;
- (void)_launchActivityForBrandItem;
- (id)thumbnailWithSize:(struct CGSize)arg1 annotationView:(id)arg2;
- (id)sharingURL;
- (id)formattedNumberOfReviewsIncludingProvider:(BOOL)arg1 formatter:(id)arg2;
@property(readonly, nonatomic) NSString *formattedNumberOfReviewsIncludingProvider;
@property(readonly, nonatomic) NSString *formattedNumberOfReviews;
- (id)_reviewForIdentifier:(id)arg1;
- (void)_updateTransitInfoWithMapItem:(id)arg1;
- (void)_markTransitInfoUpdated;
@property(readonly, nonatomic, getter=_transitInfoUpdatedDate) NSDate *transitInfoUpdatedDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_restaurantLink_overridenBundleIDsForVendorIDs;
- (id)_restaurantLink_firstProviderDisplayName;
- (id)_restaurantLink_firstProviderPlaceIdentifier;
- (id)_restaurantLink_firstVendorID;
- (id)_restaurantLink_firstProviderIdentifier;
- (unsigned long long)_restaurantExtensionModeForFirstProvider;
- (BOOL)_restaurantLink_hasFeatureType:(unsigned long long)arg1;
- (BOOL)_hasRestaurantExtensionInfo;
- (id)_htmlRepresentation;
- (id)_mapsDataString;
- (id)_initWithLabelMarker:(id)arg1;
- (id)_placeCardContact;
@property(readonly, getter=_isEmptyContactMapItem) BOOL isEmptyContactMapItem;
- (id)initWithContact:(id)arg1;
- (id)_vCardFilename;
- (id)_vCardRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

