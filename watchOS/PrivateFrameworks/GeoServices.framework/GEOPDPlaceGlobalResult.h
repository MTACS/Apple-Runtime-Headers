//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAddressObjectGeocodingResult, GEOPDAutocompleteResult, GEOPDBatchCategoryLookupResult, GEOPDBatchMerchantLookupBrandResult, GEOPDBatchPopularNearbySearchResult, GEOPDBatchSpatialLookupResult, GEOPDBrandLookupResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDClusterGeocodingResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDInitialOfflineSuggestionResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDOfflineAreaLookupResult, GEOPDOfflinePolygonQuadNodesResult, GEOPDOfflineProactiveRegionsResult, GEOPDOfflineSuggestedRegionsResult, GEOPDOfflineUpdateManifestResult, GEOPDPlaceCollectionLookupResult, GEOPDPlaceGlobalCommonResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDReverseGeocodingResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDTransitScheduleLookupResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingResult *_addressObjectGeocodingResult;
    GEOPDAutocompleteResult *_autocompleteResult;
    GEOPDBatchCategoryLookupResult *_batchCategoryLookupResult;
    GEOPDBatchMerchantLookupBrandResult *_batchMerchantLookupBrandResult;
    GEOPDBatchPopularNearbySearchResult *_batchPopularNearbySearchResult;
    GEOPDBatchSpatialLookupResult *_batchSpatialLookupResult;
    GEOPDBrandLookupResult *_brandLookupResult;
    GEOPDSearchBrowseCategorySuggestionResult *_browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult *_canonicalSearchResult;
    GEOPDCategorySearchResult *_categorySearchResult;
    GEOPDClusterGeocodingResult *_clusterGeocodingResult;
    GEOPDExternalTransitLookupResult *_externalTransitLookupResult;
    GEOPDFeatureIdGeocodingResult *_featureIdGeocodingResult;
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDInitialOfflineSuggestionResult *_initialOfflineSuggestionResult;
    GEOPDIpGeoLookupResult *_ipGeoLookupResult;
    GEOPDLocationDirectedSearchResult *_locationDirectedSearchResult;
    GEOPDMapsIdentifierPlaceLookupResult *_mapsIdentifierPlaceLookupResult;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOPDNearbySearchResult *_nearbySearchResult;
    GEOPDOfflineAreaLookupResult *_offlineAreaLookupResult;
    GEOPDOfflinePolygonQuadNodesResult *_offlinePolygonQuadNodesResult;
    GEOPDOfflineProactiveRegionsResult *_offlineProactiveRegionsResult;
    GEOPDOfflineSuggestedRegionsResult *_offlineSuggestedRegionsResult;
    GEOPDOfflineUpdateManifestResult *_offlineUpdateManifestResult;
    GEOPDPlaceCollectionLookupResult *_placeCollectionLookupResult;
    GEOPDPlaceGlobalCommonResult *_placeGlobalCommonResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDPopularNearbySearchResult *_popularNearbySearchResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult *_searchFieldPlaceholderResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult *_searchZeroKeywordCategorySuggestionResult;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *_searchZeroKeywordWithSearchResultsSuggestionResult;
    GEOPDSiriSearchResult *_siriSearchResult;
    GEOPDTransitScheduleLookupResult *_transitScheduleLookupResult;
    GEOPDVendorSpecificPlaceRefinementResult *_vendorSpecificPlaceRefinementResult;
    GEOPDWifiFingerprintResult *_wifiFingerprintResult;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressObjectGeocodingResult:1;
        unsigned int read_autocompleteResult:1;
        unsigned int read_batchCategoryLookupResult:1;
        unsigned int read_batchMerchantLookupBrandResult:1;
        unsigned int read_batchPopularNearbySearchResult:1;
        unsigned int read_batchSpatialLookupResult:1;
        unsigned int read_brandLookupResult:1;
        unsigned int read_browseCategorySuggestionResult:1;
        unsigned int read_canonicalSearchResult:1;
        unsigned int read_categorySearchResult:1;
        unsigned int read_clusterGeocodingResult:1;
        unsigned int read_externalTransitLookupResult:1;
        unsigned int read_featureIdGeocodingResult:1;
        unsigned int read_geocodingResult:1;
        unsigned int read_initialOfflineSuggestionResult:1;
        unsigned int read_ipGeoLookupResult:1;
        unsigned int read_locationDirectedSearchResult:1;
        unsigned int read_mapsIdentifierPlaceLookupResult:1;
        unsigned int read_merchantLookupResult:1;
        unsigned int read_nearbySearchResult:1;
        unsigned int read_offlineAreaLookupResult:1;
        unsigned int read_offlinePolygonQuadNodesResult:1;
        unsigned int read_offlineProactiveRegionsResult:1;
        unsigned int read_offlineSuggestedRegionsResult:1;
        unsigned int read_offlineUpdateManifestResult:1;
        unsigned int read_placeCollectionLookupResult:1;
        unsigned int read_placeGlobalCommonResult:1;
        unsigned int read_placeLookupResult:1;
        unsigned int read_placeRefinementResult:1;
        unsigned int read_popularNearbySearchResult:1;
        unsigned int read_reverseGeocodingResult:1;
        unsigned int read_searchFieldPlaceholderResult:1;
        unsigned int read_searchResult:1;
        unsigned int read_searchZeroKeywordCategorySuggestionResult:1;
        unsigned int read_searchZeroKeywordWithSearchResultsSuggestionResult:1;
        unsigned int read_siriSearchResult:1;
        unsigned int read_transitScheduleLookupResult:1;
        unsigned int read_vendorSpecificPlaceRefinementResult:1;
        unsigned int read_wifiFingerprintResult:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressObjectGeocodingResult:1;
        unsigned int wrote_autocompleteResult:1;
        unsigned int wrote_batchCategoryLookupResult:1;
        unsigned int wrote_batchMerchantLookupBrandResult:1;
        unsigned int wrote_batchPopularNearbySearchResult:1;
        unsigned int wrote_batchSpatialLookupResult:1;
        unsigned int wrote_brandLookupResult:1;
        unsigned int wrote_browseCategorySuggestionResult:1;
        unsigned int wrote_canonicalSearchResult:1;
        unsigned int wrote_categorySearchResult:1;
        unsigned int wrote_clusterGeocodingResult:1;
        unsigned int wrote_externalTransitLookupResult:1;
        unsigned int wrote_featureIdGeocodingResult:1;
        unsigned int wrote_geocodingResult:1;
        unsigned int wrote_initialOfflineSuggestionResult:1;
        unsigned int wrote_ipGeoLookupResult:1;
        unsigned int wrote_locationDirectedSearchResult:1;
        unsigned int wrote_mapsIdentifierPlaceLookupResult:1;
        unsigned int wrote_merchantLookupResult:1;
        unsigned int wrote_nearbySearchResult:1;
        unsigned int wrote_offlineAreaLookupResult:1;
        unsigned int wrote_offlinePolygonQuadNodesResult:1;
        unsigned int wrote_offlineProactiveRegionsResult:1;
        unsigned int wrote_offlineSuggestedRegionsResult:1;
        unsigned int wrote_offlineUpdateManifestResult:1;
        unsigned int wrote_placeCollectionLookupResult:1;
        unsigned int wrote_placeGlobalCommonResult:1;
        unsigned int wrote_placeLookupResult:1;
        unsigned int wrote_placeRefinementResult:1;
        unsigned int wrote_popularNearbySearchResult:1;
        unsigned int wrote_reverseGeocodingResult:1;
        unsigned int wrote_searchFieldPlaceholderResult:1;
        unsigned int wrote_searchResult:1;
        unsigned int wrote_searchZeroKeywordCategorySuggestionResult:1;
        unsigned int wrote_searchZeroKeywordWithSearchResultsSuggestionResult:1;
        unsigned int wrote_siriSearchResult:1;
        unsigned int wrote_transitScheduleLookupResult:1;
        unsigned int wrote_vendorSpecificPlaceRefinementResult:1;
        unsigned int wrote_wifiFingerprintResult:1;
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
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDBatchMerchantLookupBrandResult *batchMerchantLookupBrandResult;
@property(readonly, nonatomic) _Bool hasBatchMerchantLookupBrandResult;
- (void)_readBatchMerchantLookupBrandResult;
@property(retain, nonatomic) GEOPDBatchCategoryLookupResult *batchCategoryLookupResult;
@property(readonly, nonatomic) _Bool hasBatchCategoryLookupResult;
- (void)_readBatchCategoryLookupResult;
@property(retain, nonatomic) GEOPDTransitScheduleLookupResult *transitScheduleLookupResult;
@property(readonly, nonatomic) _Bool hasTransitScheduleLookupResult;
- (void)_readTransitScheduleLookupResult;
@property(retain, nonatomic) GEOPDPlaceCollectionLookupResult *placeCollectionLookupResult;
@property(readonly, nonatomic) _Bool hasPlaceCollectionLookupResult;
- (void)_readPlaceCollectionLookupResult;
@property(retain, nonatomic) GEOPDPlaceGlobalCommonResult *placeGlobalCommonResult;
@property(readonly, nonatomic) _Bool hasPlaceGlobalCommonResult;
- (void)_readPlaceGlobalCommonResult;
@property(retain, nonatomic) GEOPDBatchSpatialLookupResult *batchSpatialLookupResult;
@property(readonly, nonatomic) _Bool hasBatchSpatialLookupResult;
- (void)_readBatchSpatialLookupResult;
@property(retain, nonatomic) GEOPDIpGeoLookupResult *ipGeoLookupResult;
@property(readonly, nonatomic) _Bool hasIpGeoLookupResult;
- (void)_readIpGeoLookupResult;
@property(retain, nonatomic) GEOPDInitialOfflineSuggestionResult *initialOfflineSuggestionResult;
@property(readonly, nonatomic) _Bool hasInitialOfflineSuggestionResult;
- (void)_readInitialOfflineSuggestionResult;
@property(retain, nonatomic) GEOPDWifiFingerprintResult *wifiFingerprintResult;
@property(readonly, nonatomic) _Bool hasWifiFingerprintResult;
- (void)_readWifiFingerprintResult;
@property(retain, nonatomic) GEOPDOfflineUpdateManifestResult *offlineUpdateManifestResult;
@property(readonly, nonatomic) _Bool hasOfflineUpdateManifestResult;
- (void)_readOfflineUpdateManifestResult;
@property(retain, nonatomic) GEOPDBrandLookupResult *brandLookupResult;
@property(readonly, nonatomic) _Bool hasBrandLookupResult;
- (void)_readBrandLookupResult;
@property(retain, nonatomic) GEOPDOfflineProactiveRegionsResult *offlineProactiveRegionsResult;
@property(readonly, nonatomic) _Bool hasOfflineProactiveRegionsResult;
- (void)_readOfflineProactiveRegionsResult;
@property(retain, nonatomic) GEOPDOfflinePolygonQuadNodesResult *offlinePolygonQuadNodesResult;
@property(readonly, nonatomic) _Bool hasOfflinePolygonQuadNodesResult;
- (void)_readOfflinePolygonQuadNodesResult;
@property(retain, nonatomic) GEOPDOfflineSuggestedRegionsResult *offlineSuggestedRegionsResult;
@property(readonly, nonatomic) _Bool hasOfflineSuggestedRegionsResult;
- (void)_readOfflineSuggestedRegionsResult;
@property(retain, nonatomic) GEOPDClusterGeocodingResult *clusterGeocodingResult;
@property(readonly, nonatomic) _Bool hasClusterGeocodingResult;
- (void)_readClusterGeocodingResult;
@property(retain, nonatomic) GEOPDOfflineAreaLookupResult *offlineAreaLookupResult;
@property(readonly, nonatomic) _Bool hasOfflineAreaLookupResult;
- (void)_readOfflineAreaLookupResult;
@property(retain, nonatomic) GEOPDMapsIdentifierPlaceLookupResult *mapsIdentifierPlaceLookupResult;
@property(readonly, nonatomic) _Bool hasMapsIdentifierPlaceLookupResult;
- (void)_readMapsIdentifierPlaceLookupResult;
@property(retain, nonatomic) GEOPDFeatureIdGeocodingResult *featureIdGeocodingResult;
@property(readonly, nonatomic) _Bool hasFeatureIdGeocodingResult;
- (void)_readFeatureIdGeocodingResult;
@property(retain, nonatomic) GEOPDExternalTransitLookupResult *externalTransitLookupResult;
@property(readonly, nonatomic) _Bool hasExternalTransitLookupResult;
- (void)_readExternalTransitLookupResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *searchZeroKeywordWithSearchResultsSuggestionResult;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordWithSearchResultsSuggestionResult;
- (void)_readSearchZeroKeywordWithSearchResultsSuggestionResult;
@property(retain, nonatomic) GEOPDAddressObjectGeocodingResult *addressObjectGeocodingResult;
@property(readonly, nonatomic) _Bool hasAddressObjectGeocodingResult;
- (void)_readAddressObjectGeocodingResult;
@property(retain, nonatomic) GEOPDNearbySearchResult *nearbySearchResult;
@property(readonly, nonatomic) _Bool hasNearbySearchResult;
- (void)_readNearbySearchResult;
@property(retain, nonatomic) GEOPDVendorSpecificPlaceRefinementResult *vendorSpecificPlaceRefinementResult;
@property(readonly, nonatomic) _Bool hasVendorSpecificPlaceRefinementResult;
- (void)_readVendorSpecificPlaceRefinementResult;
@property(retain, nonatomic) GEOPDBatchPopularNearbySearchResult *batchPopularNearbySearchResult;
@property(readonly, nonatomic) _Bool hasBatchPopularNearbySearchResult;
- (void)_readBatchPopularNearbySearchResult;
@property(retain, nonatomic) GEOPDSearchFieldPlaceholderResult *searchFieldPlaceholderResult;
@property(readonly, nonatomic) _Bool hasSearchFieldPlaceholderResult;
- (void)_readSearchFieldPlaceholderResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordCategorySuggestionResult *searchZeroKeywordCategorySuggestionResult;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordCategorySuggestionResult;
- (void)_readSearchZeroKeywordCategorySuggestionResult;
@property(retain, nonatomic) GEOPDPopularNearbySearchResult *popularNearbySearchResult;
@property(readonly, nonatomic) _Bool hasPopularNearbySearchResult;
- (void)_readPopularNearbySearchResult;
@property(retain, nonatomic) GEOPDCategorySearchResult *categorySearchResult;
@property(readonly, nonatomic) _Bool hasCategorySearchResult;
- (void)_readCategorySearchResult;
@property(retain, nonatomic) GEOPDSearchBrowseCategorySuggestionResult *browseCategorySuggestionResult;
@property(readonly, nonatomic) _Bool hasBrowseCategorySuggestionResult;
- (void)_readBrowseCategorySuggestionResult;
@property(retain, nonatomic) GEOPDAutocompleteResult *autocompleteResult;
@property(readonly, nonatomic) _Bool hasAutocompleteResult;
- (void)_readAutocompleteResult;
@property(retain, nonatomic) GEOPDLocationDirectedSearchResult *locationDirectedSearchResult;
@property(readonly, nonatomic) _Bool hasLocationDirectedSearchResult;
- (void)_readLocationDirectedSearchResult;
@property(retain, nonatomic) GEOPDSiriSearchResult *siriSearchResult;
@property(readonly, nonatomic) _Bool hasSiriSearchResult;
- (void)_readSiriSearchResult;
@property(retain, nonatomic) GEOPDPlaceRefinementResult *placeRefinementResult;
@property(readonly, nonatomic) _Bool hasPlaceRefinementResult;
- (void)_readPlaceRefinementResult;
@property(retain, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property(readonly, nonatomic) _Bool hasMerchantLookupResult;
- (void)_readMerchantLookupResult;
@property(retain, nonatomic) GEOPDPlaceLookupResult *placeLookupResult;
@property(readonly, nonatomic) _Bool hasPlaceLookupResult;
- (void)_readPlaceLookupResult;
@property(retain, nonatomic) GEOPDReverseGeocodingResult *reverseGeocodingResult;
@property(readonly, nonatomic) _Bool hasReverseGeocodingResult;
- (void)_readReverseGeocodingResult;
@property(retain, nonatomic) GEOPDCanonicalLocationSearchResult *canonicalSearchResult;
@property(readonly, nonatomic) _Bool hasCanonicalSearchResult;
- (void)_readCanonicalSearchResult;
@property(retain, nonatomic) GEOPDGeocodingResult *geocodingResult;
@property(readonly, nonatomic) _Bool hasGeocodingResult;
- (void)_readGeocodingResult;
@property(retain, nonatomic) GEOPDSearchResult *searchResult;
@property(readonly, nonatomic) _Bool hasSearchResult;
- (void)_readSearchResult;

@end

