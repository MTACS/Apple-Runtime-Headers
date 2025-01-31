//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, GEOLocation, GEOLogMsgEventPredExTrainingData, GEOMapRegion, GEOMapsServerMetadata, GEORouteDetails, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEOAnalyticsPipelineStateData : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    CDStruct_95bda58d _placeCardPossibleactions;
    CDStruct_95bda58d _placeCardUnactionableuielements;
    GEOCarInfo *_carPlayInfo;
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    GEOLocation *_lookaroundLocation;
    double _lookaroundSessionEndTime;
    double _lookaroundSessionStartTime;
    double _lookaroundZoom;
    double _mapViewLocationTouristTimestamp;
    GEOMapRegion *_mapViewMapRegion;
    double _mapViewZoomLevel;
    NSMutableArray *_mapsServerMetadataSuggestionEntryDisplayeds;
    NSData *_mapsServerMetadataSuggestionEntryTappedOn;
    GEOMapsServerMetadata *_mapsServerMetadata;
    NSString *_placeCardPlaceactiondetailsActionurl;
    unsigned long long _placeCardPlaceactiondetailsAnimationid;
    unsigned long long _placeCardPlaceactiondetailsBusinessid;
    NSString *_placeCardPlaceactiondetailsDestinationapp;
    NSString *_placeCardPlaceactiondetailsPhotoid;
    long long _placeCardPlaceactiondetailsPlaceid;
    NSString *_placeCardPlaceactiondetailsRichproviderid;
    double _placeCardPlaceactiondetailsSearchresponserelativetimestamp;
    unsigned long long _placeCardPlaceactiondetailsTargetid;
    NSString *_placeCardPlaceactiondetailsTransitplacecardIncidenttype;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
    unsigned long long _placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitsystemname;
    NSString *_placeCardPlacecardcategory;
    GEOLogMsgEventPredExTrainingData *_predExTrainingData;
    GEORouteDetails *_routeRouteDetails;
    NSMutableArray *_suggestionsDisplayedresults;
    NSString *_suggestionsSearchstring;
    unsigned int _lookaroundHeading;
    unsigned int _lookaroundNumberPoisInView;
    int _mapSettingsNavVolume;
    int _mapSettingsTransportMode;
    unsigned int _mapUiCurrentTabIndex;
    int _mapUiLayoutInfo;
    int _mapUiLayoutStyle;
    unsigned int _mapUiNumberOfTabsOpen;
    int _mapViewMapType;
    int _placeCardPlaceactiondetailsLocalsearchproviderid;
    int _placeCardPlaceactiondetailsResultindex;
    int _placeCardPlaceactiondetailsTransitplacecardTransitcategory;
    int _placeCardPlacecardtype;
    int _suggestionsAcsequencenumber;
    int _suggestionsSearchfieldtype;
    int _suggestionsSelectedindex;
    BOOL _deviceInDarkMode;
    BOOL _landscape;
    BOOL _lookaroundIsLabelingShown;
    BOOL _lookaroundSessionHadMoveAction;
    BOOL _lookaroundSessionHadPanAction;
    BOOL _lookaroundSessionHadShareAction;
    BOOL _lookaroundSessionHadTapPoiAction;
    BOOL _lookaroundSessionHadZoomAction;
    BOOL _mapSettingsAvoidHighways;
    BOOL _mapSettingsAvoidTolls;
    BOOL _mapSettingsFindMyCarEnabled;
    BOOL _mapSettingsHeadingEnabled;
    BOOL _mapSettingsLabelEnabled;
    BOOL _mapSettingsPauseSpokenAudioEnabled;
    BOOL _mapSettingsSpeedLimitEnabled;
    BOOL _mapSettingsTrafficEnabled;
    BOOL _mapUiShownAqiShown;
    BOOL _mapUiShownWeatherShown;
    BOOL _mapViewLocationIsTourist;
    BOOL _mapViewLocationPuckInViewport;
    BOOL _placeCardTransitadvisorybanner;
    BOOL _rideBookingAppEnabled;
    BOOL _rideBookingAppInstalled;
    BOOL _tableBookingAppEnabled;
    BOOL _tableBookingAppInstalled;
    BOOL _venueExperienceShown;
    struct {
        unsigned int has_lookaroundSessionEndTime:1;
        unsigned int has_lookaroundSessionStartTime:1;
        unsigned int has_lookaroundZoom:1;
        unsigned int has_mapViewLocationTouristTimestamp:1;
        unsigned int has_mapViewZoomLevel:1;
        unsigned int has_placeCardPlaceactiondetailsAnimationid:1;
        unsigned int has_placeCardPlaceactiondetailsBusinessid:1;
        unsigned int has_placeCardPlaceactiondetailsPlaceid:1;
        unsigned int has_placeCardPlaceactiondetailsSearchresponserelativetimestamp:1;
        unsigned int has_placeCardPlaceactiondetailsTargetid:1;
        unsigned int has_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid:1;
        unsigned int has_lookaroundHeading:1;
        unsigned int has_lookaroundNumberPoisInView:1;
        unsigned int has_mapSettingsNavVolume:1;
        unsigned int has_mapSettingsTransportMode:1;
        unsigned int has_mapUiCurrentTabIndex:1;
        unsigned int has_mapUiLayoutInfo:1;
        unsigned int has_mapUiLayoutStyle:1;
        unsigned int has_mapUiNumberOfTabsOpen:1;
        unsigned int has_mapViewMapType:1;
        unsigned int has_placeCardPlaceactiondetailsLocalsearchproviderid:1;
        unsigned int has_placeCardPlaceactiondetailsResultindex:1;
        unsigned int has_placeCardPlaceactiondetailsTransitplacecardTransitcategory:1;
        unsigned int has_placeCardPlacecardtype:1;
        unsigned int has_suggestionsAcsequencenumber:1;
        unsigned int has_suggestionsSearchfieldtype:1;
        unsigned int has_suggestionsSelectedindex:1;
        unsigned int has_deviceInDarkMode:1;
        unsigned int has_landscape:1;
        unsigned int has_lookaroundIsLabelingShown:1;
        unsigned int has_lookaroundSessionHadMoveAction:1;
        unsigned int has_lookaroundSessionHadPanAction:1;
        unsigned int has_lookaroundSessionHadShareAction:1;
        unsigned int has_lookaroundSessionHadTapPoiAction:1;
        unsigned int has_lookaroundSessionHadZoomAction:1;
        unsigned int has_mapSettingsAvoidHighways:1;
        unsigned int has_mapSettingsAvoidTolls:1;
        unsigned int has_mapSettingsFindMyCarEnabled:1;
        unsigned int has_mapSettingsHeadingEnabled:1;
        unsigned int has_mapSettingsLabelEnabled:1;
        unsigned int has_mapSettingsPauseSpokenAudioEnabled:1;
        unsigned int has_mapSettingsSpeedLimitEnabled:1;
        unsigned int has_mapSettingsTrafficEnabled:1;
        unsigned int has_mapUiShownAqiShown:1;
        unsigned int has_mapUiShownWeatherShown:1;
        unsigned int has_mapViewLocationIsTourist:1;
        unsigned int has_mapViewLocationPuckInViewport:1;
        unsigned int has_placeCardTransitadvisorybanner:1;
        unsigned int has_rideBookingAppEnabled:1;
        unsigned int has_rideBookingAppInstalled:1;
        unsigned int has_tableBookingAppEnabled:1;
        unsigned int has_tableBookingAppInstalled:1;
        unsigned int has_venueExperienceShown:1;
        unsigned int read_placeCardPossibleactions:1;
        unsigned int read_placeCardUnactionableuielements:1;
        unsigned int read_carPlayInfo:1;
        unsigned int read_deviceInputLocale:1;
        unsigned int read_deviceOutputLocale:1;
        unsigned int read_lookaroundLocation:1;
        unsigned int read_mapViewMapRegion:1;
        unsigned int read_mapsServerMetadataSuggestionEntryDisplayeds:1;
        unsigned int read_mapsServerMetadataSuggestionEntryTappedOn:1;
        unsigned int read_mapsServerMetadata:1;
        unsigned int read_placeCardPlaceactiondetailsActionurl:1;
        unsigned int read_placeCardPlaceactiondetailsDestinationapp:1;
        unsigned int read_placeCardPlaceactiondetailsPhotoid:1;
        unsigned int read_placeCardPlaceactiondetailsRichproviderid:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardIncidenttype:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitsystemname:1;
        unsigned int read_placeCardPlacecardcategory:1;
        unsigned int read_predExTrainingData:1;
        unsigned int read_routeRouteDetails:1;
        unsigned int read_suggestionsDisplayedresults:1;
        unsigned int read_suggestionsSearchstring:1;
        unsigned int wrote_placeCardPossibleactions:1;
        unsigned int wrote_placeCardUnactionableuielements:1;
        unsigned int wrote_carPlayInfo:1;
        unsigned int wrote_deviceInputLocale:1;
        unsigned int wrote_deviceOutputLocale:1;
        unsigned int wrote_lookaroundLocation:1;
        unsigned int wrote_lookaroundSessionEndTime:1;
        unsigned int wrote_lookaroundSessionStartTime:1;
        unsigned int wrote_lookaroundZoom:1;
        unsigned int wrote_mapViewLocationTouristTimestamp:1;
        unsigned int wrote_mapViewMapRegion:1;
        unsigned int wrote_mapViewZoomLevel:1;
        unsigned int wrote_mapsServerMetadataSuggestionEntryDisplayeds:1;
        unsigned int wrote_mapsServerMetadataSuggestionEntryTappedOn:1;
        unsigned int wrote_mapsServerMetadata:1;
        unsigned int wrote_placeCardPlaceactiondetailsActionurl:1;
        unsigned int wrote_placeCardPlaceactiondetailsAnimationid:1;
        unsigned int wrote_placeCardPlaceactiondetailsBusinessid:1;
        unsigned int wrote_placeCardPlaceactiondetailsDestinationapp:1;
        unsigned int wrote_placeCardPlaceactiondetailsPhotoid:1;
        unsigned int wrote_placeCardPlaceactiondetailsPlaceid:1;
        unsigned int wrote_placeCardPlaceactiondetailsRichproviderid:1;
        unsigned int wrote_placeCardPlaceactiondetailsSearchresponserelativetimestamp:1;
        unsigned int wrote_placeCardPlaceactiondetailsTargetid:1;
        unsigned int wrote_placeCardPlaceactiondetailsTransitplacecardIncidenttype:1;
        unsigned int wrote_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection:1;
        unsigned int wrote_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign:1;
        unsigned int wrote_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid:1;
        unsigned int wrote_placeCardPlaceactiondetailsTransitplacecardTransitsystemname:1;
        unsigned int wrote_placeCardPlacecardcategory:1;
        unsigned int wrote_predExTrainingData:1;
        unsigned int wrote_routeRouteDetails:1;
        unsigned int wrote_suggestionsDisplayedresults:1;
        unsigned int wrote_suggestionsSearchstring:1;
        unsigned int wrote_lookaroundHeading:1;
        unsigned int wrote_lookaroundNumberPoisInView:1;
        unsigned int wrote_mapSettingsNavVolume:1;
        unsigned int wrote_mapSettingsTransportMode:1;
        unsigned int wrote_mapUiCurrentTabIndex:1;
        unsigned int wrote_mapUiLayoutInfo:1;
        unsigned int wrote_mapUiLayoutStyle:1;
        unsigned int wrote_mapUiNumberOfTabsOpen:1;
        unsigned int wrote_mapViewMapType:1;
        unsigned int wrote_placeCardPlaceactiondetailsLocalsearchproviderid:1;
        unsigned int wrote_placeCardPlaceactiondetailsResultindex:1;
        unsigned int wrote_placeCardPlaceactiondetailsTransitplacecardTransitcategory:1;
        unsigned int wrote_placeCardPlacecardtype:1;
        unsigned int wrote_suggestionsAcsequencenumber:1;
        unsigned int wrote_suggestionsSearchfieldtype:1;
        unsigned int wrote_suggestionsSelectedindex:1;
        unsigned int wrote_deviceInDarkMode:1;
        unsigned int wrote_landscape:1;
        unsigned int wrote_lookaroundIsLabelingShown:1;
        unsigned int wrote_lookaroundSessionHadMoveAction:1;
        unsigned int wrote_lookaroundSessionHadPanAction:1;
        unsigned int wrote_lookaroundSessionHadShareAction:1;
        unsigned int wrote_lookaroundSessionHadTapPoiAction:1;
        unsigned int wrote_lookaroundSessionHadZoomAction:1;
        unsigned int wrote_mapSettingsAvoidHighways:1;
        unsigned int wrote_mapSettingsAvoidTolls:1;
        unsigned int wrote_mapSettingsFindMyCarEnabled:1;
        unsigned int wrote_mapSettingsHeadingEnabled:1;
        unsigned int wrote_mapSettingsLabelEnabled:1;
        unsigned int wrote_mapSettingsPauseSpokenAudioEnabled:1;
        unsigned int wrote_mapSettingsSpeedLimitEnabled:1;
        unsigned int wrote_mapSettingsTrafficEnabled:1;
        unsigned int wrote_mapUiShownAqiShown:1;
        unsigned int wrote_mapUiShownWeatherShown:1;
        unsigned int wrote_mapViewLocationIsTourist:1;
        unsigned int wrote_mapViewLocationPuckInViewport:1;
        unsigned int wrote_placeCardTransitadvisorybanner:1;
        unsigned int wrote_rideBookingAppEnabled:1;
        unsigned int wrote_rideBookingAppInstalled:1;
        unsigned int wrote_tableBookingAppEnabled:1;
        unsigned int wrote_tableBookingAppInstalled:1;
        unsigned int wrote_venueExperienceShown:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)suggestionsDisplayedresultsType;
+ (Class)mapsServerMetadataSuggestionEntryDisplayedType;
- (void).cxx_destruct;
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
@property(nonatomic) BOOL hasLandscape;
@property(nonatomic) BOOL landscape;
- (id)suggestionsDisplayedresultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsDisplayedresultsCount;
- (void)_addNoFlagsSuggestionsDisplayedresults:(id)arg1;
- (void)addSuggestionsDisplayedresults:(id)arg1;
- (void)clearSuggestionsDisplayedresults;
@property(retain, nonatomic) NSMutableArray *suggestionsDisplayedresults;
- (void)_readSuggestionsDisplayedresults;
@property(retain, nonatomic) NSString *suggestionsSearchstring;
@property(readonly, nonatomic) BOOL hasSuggestionsSearchstring;
- (void)_readSuggestionsSearchstring;
@property(nonatomic) BOOL hasSuggestionsSelectedindex;
@property(nonatomic) int suggestionsSelectedindex;
- (int)StringAsSuggestionsSearchfieldtype:(id)arg1;
- (id)suggestionsSearchfieldtypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSuggestionsSearchfieldtype;
@property(nonatomic) int suggestionsSearchfieldtype;
@property(nonatomic) BOOL hasSuggestionsAcsequencenumber;
@property(nonatomic) int suggestionsAcsequencenumber;
@property(retain, nonatomic) GEOLogMsgEventPredExTrainingData *predExTrainingData;
@property(readonly, nonatomic) BOOL hasPredExTrainingData;
- (void)_readPredExTrainingData;
@property(retain, nonatomic) GEORouteDetails *routeRouteDetails;
@property(readonly, nonatomic) BOOL hasRouteRouteDetails;
- (void)_readRouteRouteDetails;
@property(retain, nonatomic) GEOMapsServerMetadata *mapsServerMetadata;
@property(readonly, nonatomic) BOOL hasMapsServerMetadata;
- (void)_readMapsServerMetadata;
- (id)mapsServerMetadataSuggestionEntryDisplayedAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapsServerMetadataSuggestionEntryDisplayedsCount;
- (void)_addNoFlagsMapsServerMetadataSuggestionEntryDisplayed:(id)arg1;
- (void)addMapsServerMetadataSuggestionEntryDisplayed:(id)arg1;
- (void)clearMapsServerMetadataSuggestionEntryDisplayeds;
@property(retain, nonatomic) NSMutableArray *mapsServerMetadataSuggestionEntryDisplayeds;
- (void)_readMapsServerMetadataSuggestionEntryDisplayeds;
@property(retain, nonatomic) NSData *mapsServerMetadataSuggestionEntryTappedOn;
@property(readonly, nonatomic) BOOL hasMapsServerMetadataSuggestionEntryTappedOn;
- (void)_readMapsServerMetadataSuggestionEntryTappedOn;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
- (void)_readPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
- (void)_readPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
- (int)StringAsPlaceCardPlaceactiondetailsTransitplacecardTransitcategory:(id)arg1;
- (id)placeCardPlaceactiondetailsTransitplacecardTransitcategoryAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitcategory;
@property(nonatomic) int placeCardPlaceactiondetailsTransitplacecardTransitcategory;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitsystemname;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitsystemname;
- (void)_readPlaceCardPlaceactiondetailsTransitplacecardTransitsystemname;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardIncidenttype;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardIncidenttype;
- (void)_readPlaceCardPlaceactiondetailsTransitplacecardIncidenttype;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsResultindex;
@property(nonatomic) int placeCardPlaceactiondetailsResultindex;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsLocalsearchproviderid;
@property(nonatomic) int placeCardPlaceactiondetailsLocalsearchproviderid;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsTargetid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsTargetid;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsSearchresponserelativetimestamp;
@property(nonatomic) double placeCardPlaceactiondetailsSearchresponserelativetimestamp;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsRichproviderid;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsRichproviderid;
- (void)_readPlaceCardPlaceactiondetailsRichproviderid;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsPlaceid;
@property(nonatomic) long long placeCardPlaceactiondetailsPlaceid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsPhotoid;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsPhotoid;
- (void)_readPlaceCardPlaceactiondetailsPhotoid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsDestinationapp;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsDestinationapp;
- (void)_readPlaceCardPlaceactiondetailsDestinationapp;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsBusinessid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsBusinessid;
@property(nonatomic) BOOL hasPlaceCardPlaceactiondetailsAnimationid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsAnimationid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsActionurl;
@property(readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsActionurl;
- (void)_readPlaceCardPlaceactiondetailsActionurl;
@property(nonatomic) BOOL hasPlaceCardTransitadvisorybanner;
@property(nonatomic) BOOL placeCardTransitadvisorybanner;
- (int)StringAsPlaceCardPlacecardtype:(id)arg1;
- (id)placeCardPlacecardtypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceCardPlacecardtype;
@property(nonatomic) int placeCardPlacecardtype;
@property(retain, nonatomic) NSString *placeCardPlacecardcategory;
@property(readonly, nonatomic) BOOL hasPlaceCardPlacecardcategory;
- (void)_readPlaceCardPlacecardcategory;
- (void)setPlaceCardUnactionableuielements:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeCardUnactionableuielementsAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsPlaceCardUnactionableuielements:(int)arg1;
- (void)addPlaceCardUnactionableuielements:(int)arg1;
- (void)clearPlaceCardUnactionableuielements;
@property(readonly, nonatomic) int *placeCardUnactionableuielements;
@property(readonly, nonatomic) unsigned long long placeCardUnactionableuielementsCount;
- (void)_readPlaceCardUnactionableuielements;
- (void)setPlaceCardPossibleactions:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeCardPossibleactionsAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsPlaceCardPossibleactions:(int)arg1;
- (void)addPlaceCardPossibleactions:(int)arg1;
- (void)clearPlaceCardPossibleactions;
@property(readonly, nonatomic) int *placeCardPossibleactions;
@property(readonly, nonatomic) unsigned long long placeCardPossibleactionsCount;
- (void)_readPlaceCardPossibleactions;
@property(nonatomic) BOOL hasVenueExperienceShown;
@property(nonatomic) BOOL venueExperienceShown;
@property(nonatomic) BOOL hasDeviceInDarkMode;
@property(nonatomic) BOOL deviceInDarkMode;
@property(nonatomic) BOOL hasLookaroundIsLabelingShown;
@property(nonatomic) BOOL lookaroundIsLabelingShown;
@property(nonatomic) BOOL hasLookaroundNumberPoisInView;
@property(nonatomic) unsigned int lookaroundNumberPoisInView;
@property(nonatomic) BOOL hasLookaroundZoom;
@property(nonatomic) double lookaroundZoom;
@property(nonatomic) BOOL hasLookaroundHeading;
@property(nonatomic) unsigned int lookaroundHeading;
@property(retain, nonatomic) GEOLocation *lookaroundLocation;
@property(readonly, nonatomic) BOOL hasLookaroundLocation;
- (void)_readLookaroundLocation;
@property(nonatomic) BOOL hasLookaroundSessionHadShareAction;
@property(nonatomic) BOOL lookaroundSessionHadShareAction;
@property(nonatomic) BOOL hasLookaroundSessionHadTapPoiAction;
@property(nonatomic) BOOL lookaroundSessionHadTapPoiAction;
@property(nonatomic) BOOL hasLookaroundSessionHadMoveAction;
@property(nonatomic) BOOL lookaroundSessionHadMoveAction;
@property(nonatomic) BOOL hasLookaroundSessionHadZoomAction;
@property(nonatomic) BOOL lookaroundSessionHadZoomAction;
@property(nonatomic) BOOL hasLookaroundSessionHadPanAction;
@property(nonatomic) BOOL lookaroundSessionHadPanAction;
@property(nonatomic) BOOL hasLookaroundSessionEndTime;
@property(nonatomic) double lookaroundSessionEndTime;
@property(nonatomic) BOOL hasLookaroundSessionStartTime;
@property(nonatomic) double lookaroundSessionStartTime;
@property(nonatomic) BOOL hasMapUiShownWeatherShown;
@property(nonatomic) BOOL mapUiShownWeatherShown;
@property(nonatomic) BOOL hasMapUiShownAqiShown;
@property(nonatomic) BOOL mapUiShownAqiShown;
@property(nonatomic) BOOL hasMapUiCurrentTabIndex;
@property(nonatomic) unsigned int mapUiCurrentTabIndex;
@property(nonatomic) BOOL hasMapUiNumberOfTabsOpen;
@property(nonatomic) unsigned int mapUiNumberOfTabsOpen;
- (int)StringAsMapUiLayoutStyle:(id)arg1;
- (id)mapUiLayoutStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasMapUiLayoutStyle;
@property(nonatomic) int mapUiLayoutStyle;
- (int)StringAsMapUiLayoutInfo:(id)arg1;
- (id)mapUiLayoutInfoAsString:(int)arg1;
@property(nonatomic) BOOL hasMapUiLayoutInfo;
@property(nonatomic) int mapUiLayoutInfo;
@property(nonatomic) BOOL hasMapSettingsTrafficEnabled;
@property(nonatomic) BOOL mapSettingsTrafficEnabled;
@property(nonatomic) BOOL hasMapSettingsSpeedLimitEnabled;
@property(nonatomic) BOOL mapSettingsSpeedLimitEnabled;
@property(nonatomic) BOOL hasMapSettingsPauseSpokenAudioEnabled;
@property(nonatomic) BOOL mapSettingsPauseSpokenAudioEnabled;
@property(nonatomic) BOOL hasMapSettingsLabelEnabled;
@property(nonatomic) BOOL mapSettingsLabelEnabled;
@property(nonatomic) BOOL hasMapSettingsHeadingEnabled;
@property(nonatomic) BOOL mapSettingsHeadingEnabled;
@property(nonatomic) BOOL hasMapSettingsFindMyCarEnabled;
@property(nonatomic) BOOL mapSettingsFindMyCarEnabled;
@property(nonatomic) BOOL hasMapSettingsAvoidTolls;
@property(nonatomic) BOOL mapSettingsAvoidTolls;
@property(nonatomic) BOOL hasMapSettingsAvoidHighways;
@property(nonatomic) BOOL mapSettingsAvoidHighways;
- (int)StringAsMapSettingsTransportMode:(id)arg1;
- (id)mapSettingsTransportModeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapSettingsTransportMode;
@property(nonatomic) int mapSettingsTransportMode;
- (int)StringAsMapSettingsNavVolume:(id)arg1;
- (id)mapSettingsNavVolumeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapSettingsNavVolume;
@property(nonatomic) int mapSettingsNavVolume;
@property(nonatomic) BOOL hasMapViewLocationPuckInViewport;
@property(nonatomic) BOOL mapViewLocationPuckInViewport;
@property(nonatomic) BOOL hasMapViewLocationTouristTimestamp;
@property(nonatomic) double mapViewLocationTouristTimestamp;
@property(nonatomic) BOOL hasMapViewLocationIsTourist;
@property(nonatomic) BOOL mapViewLocationIsTourist;
- (int)StringAsMapViewMapType:(id)arg1;
- (id)mapViewMapTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapViewMapType;
@property(nonatomic) int mapViewMapType;
@property(retain, nonatomic) GEOMapRegion *mapViewMapRegion;
@property(readonly, nonatomic) BOOL hasMapViewMapRegion;
- (void)_readMapViewMapRegion;
@property(nonatomic) BOOL hasMapViewZoomLevel;
@property(nonatomic) double mapViewZoomLevel;
@property(nonatomic) BOOL hasTableBookingAppEnabled;
@property(nonatomic) BOOL tableBookingAppEnabled;
@property(nonatomic) BOOL hasTableBookingAppInstalled;
@property(nonatomic) BOOL tableBookingAppInstalled;
@property(nonatomic) BOOL hasRideBookingAppEnabled;
@property(nonatomic) BOOL rideBookingAppEnabled;
@property(nonatomic) BOOL hasRideBookingAppInstalled;
@property(nonatomic) BOOL rideBookingAppInstalled;
@property(retain, nonatomic) GEOCarInfo *carPlayInfo;
@property(readonly, nonatomic) BOOL hasCarPlayInfo;
- (void)_readCarPlayInfo;
@property(retain, nonatomic) NSString *deviceOutputLocale;
@property(readonly, nonatomic) BOOL hasDeviceOutputLocale;
- (void)_readDeviceOutputLocale;
@property(retain, nonatomic) NSString *deviceInputLocale;
@property(readonly, nonatomic) BOOL hasDeviceInputLocale;
- (void)_readDeviceInputLocale;
- (void)dealloc;

@end

