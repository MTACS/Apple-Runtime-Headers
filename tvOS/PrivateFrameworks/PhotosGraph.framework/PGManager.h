//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURL, PGCurationCache, PGGraph, PGMemoryController, PHPhotoLibrary;
@protocol OS_dispatch_queue, OS_os_log, PGGraphHealthRecording;

@interface PGManager : NSObject
{
    NSMutableArray *_prefetchCuratedKeyAssetsBlocks;
    NSMutableArray *_prefetchCuratedAssetsBlocks;
    NSObject<OS_dispatch_queue> *_curationPrefetchQueue;
    NSURL *_cachedGraphPersistenceParentDirectoryURL;
    double _timestampOfLastCallToProgress;
    double _timestampOfLastRecordedCallToProgress;
    unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
    // Error parsing type: AQ, name: _fullGraphRebuildStamp
    _Bool _wasStopped;
    NSObject<OS_dispatch_queue> *_graphAccessQueue;
    NSObject<OS_dispatch_queue> *_applicationDataQueue;
    // Error parsing type: AQ, name: _numberOfCurrentGraphAccesses
    NSObject<OS_dispatch_queue> *_graphUpdateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PGGraph *_graph;
    NSString *_graphName;
    _Bool _shouldPostGraphAvailableNotification;
    _Bool _photoLibraryIsReadonly;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _libraryAnalysisState;
    PGMemoryController *_memoryController;
    NSURL *_metadataSnapshotOutputPathURL;
    NSMutableDictionary *_curationScoreByAsset;
    NSMutableDictionary *_interactionScoreByAsset;
    NSObject<OS_os_log> *_loggingConnection;
    NSObject<OS_os_log> *_memoriesLoggingConnection;
    NSObject<OS_os_log> *_curationLoggingConnection;
    NSObject<OS_os_log> *_relatedLoggingConnection;
    NSObject<OS_os_log> *_ingestLoggingConnection;
    NSObject<OS_os_log> *_graphLoggingConnection;
    NSObject<OS_os_log> *_enrichmentLoggingConnection;
    NSObject<OS_os_log> *_guessWhoLoggingConnection;
    NSObject<OS_os_log> *_suggestionsLoggingConnection;
    NSObject<OS_os_log> *_metricsLoggingConnection;
    PGCurationCache *_curationCache;
    id <PGGraphHealthRecording> _graphHealthRecorder;
}

+ (_Bool)clientIsPhotoAnalysis;
+ (id)stringFromPGRelatedType:(unsigned long long)arg1;
+ (id)stringFromPGDuration:(unsigned long long)arg1;
+ (id)stringFromPGPrecision:(unsigned long long)arg1;
+ (_Bool)shouldInvalidateConstructionGraph:(id)arg1;
+ (_Bool)shouldInvalidatePersistentGraph:(id)arg1;
+ (_Bool)geoServiceProviderDidChangeForGraph:(id)arg1;
+ (void)initialize;
+ (id)_locationsByDateIntervalForAssetsMetadata:(id)arg1;
+ (unsigned long long)numberOfExistingMemoriesToKeepForOverlapCheckWithBeta:(double)arg1;
+ (double)durationForExistingMemoriesOverlapCheckWithBeta:(double)arg1;
+ (id)meaningsForSurvey;
+ (_Bool)memoriesAreWorthNotifying:(id)arg1;
+ (double)contentScoreForAssets:(id)arg1;
+ (id)dedupedAssetsWithAssets:(id)arg1 precision:(unsigned long long)arg2;
+ (id)representativeAssetsForAssetCollection:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
+ (id)allRecomputedTripMomentsInGraph:(id)arg1;
+ (id)exportableDictionaryFromKeywords:(id)arg1;
+ (unsigned long long)_minimumNumberOfItemsForDuration:(unsigned long long)arg1 withMaximumNumberOfItems:(unsigned long long)arg2;
+ (unsigned long long)_maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2 spanningNumberOfDays:(double)arg3;
+ (unsigned long long)_maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2;
+ (id)_assetsBeautifierForPrecision:(unsigned long long)arg1;
+ (id)_summaryClusteringForDuration:(unsigned long long)arg1 andPrecision:(unsigned long long)arg2;
+ (id)matchingWeightToDictionary;
+ (id)assetPropertySetsForCuration;
@property(readonly, nonatomic) id <PGGraphHealthRecording> graphHealthRecorder; // @synthesize graphHealthRecorder=_graphHealthRecorder;
@property(readonly) PGCurationCache *curationCache; // @synthesize curationCache=_curationCache;
@property(readonly, nonatomic) NSObject<OS_os_log> *metricsLoggingConnection; // @synthesize metricsLoggingConnection=_metricsLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *suggestionsLoggingConnection; // @synthesize suggestionsLoggingConnection=_suggestionsLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *guessWhoLoggingConnection; // @synthesize guessWhoLoggingConnection=_guessWhoLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *enrichmentLoggingConnection; // @synthesize enrichmentLoggingConnection=_enrichmentLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection; // @synthesize graphLoggingConnection=_graphLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection; // @synthesize ingestLoggingConnection=_ingestLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection; // @synthesize relatedLoggingConnection=_relatedLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *curationLoggingConnection; // @synthesize curationLoggingConnection=_curationLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *memoriesLoggingConnection; // @synthesize memoriesLoggingConnection=_memoriesLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly) NSMutableDictionary *interactionScoreByAsset; // @synthesize interactionScoreByAsset=_interactionScoreByAsset;
@property(readonly) NSMutableDictionary *curationScoreByAsset; // @synthesize curationScoreByAsset=_curationScoreByAsset;
@property(readonly) _Bool photoLibraryIsReadonly; // @synthesize photoLibraryIsReadonly=_photoLibraryIsReadonly;
@property(retain, nonatomic) NSURL *metadataSnapshotOutputPathURL; // @synthesize metadataSnapshotOutputPathURL=_metadataSnapshotOutputPathURL;
@property(readonly) PGMemoryController *memoryController; // @synthesize memoryController=_memoryController;
@property unsigned long long libraryAnalysisState; // @synthesize libraryAnalysisState=_libraryAnalysisState;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *graphUpdateQueue; // @synthesize graphUpdateQueue=_graphUpdateQueue;
@property(readonly, copy) NSString *graphName; // @synthesize graphName=_graphName;
- (void).cxx_destruct;
- (_Bool)canProceedWithFullGraphRebuildStamp: /* Error: Ran out of types for this method. */;
-     // Error parsing type: AQ16@0:8, name: currentFullGraphRebuildStamp
- (void)stampFullGraphRebuild;
- (_Bool)saveGraphToURL:(id)arg1;
- (void)matchWithVisualFormat:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)matchWithVisualFormat:(id)arg1 elements:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)checkCallsToProgressForJob:(id)arg1 progress:(double)arg2 stop:(_Bool)arg3 loggingConnection:(id)arg4;
- (void)resetCheckCallsToProgress;
- (void)waitUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (void)_waitLibraryUpdateUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (void)_waitGraphUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isBusy;
- (_Bool)isReady;
- (void)invalidatePersistentCaches;
- (void)invalidateTransientCaches;
- (void)_invalidatePersistentCaches;
- (void)_invalidatePersistentCachesForGeoServiceProviderChange;
- (void)_invalidateTransientCaches;
- (void)performApplicationDataBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousNotification:(CDUnknownBlockType)arg1;
- (_Bool)hasPendingGraphAccess;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousBarrierGraphWriteUsingBlock:(CDUnknownBlockType)arg1;
@property(retain) PGGraph *graph; // @synthesize graph=_graph;
- (id)initWithGraphName:(id)arg1 photoLibrary:(id)arg2;
- (id)processSubdirectoryName;
- (id)graphPersistenceParentDirectoryCandidateURLs;
@property(retain, nonatomic) NSURL *graphPersistenceParentDirectoryURL;
- (void)commonInit;
- (void)_precachePersonsInformation;
- (void)_loadGraph;
- (void)_reloadGraph;
- (_Bool)invalidatePersistentGraph;
- (id)initWithGraph:(id)arg1;
- (id)initForTesting;
- (id)init;
- (id)initWithReadonlyPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)textFeaturesForMomentLocalIdentifiers:(id)arg1;
- (id)featureVectorsForMoment:(id)arg1;
- (id)featureVectorsForAsset:(id)arg1;
- (id)peopleSuggestionLearningStatistics;
- (void)peopleSuggestionLearning;
- (id)suggestedContributionsForAssetsMetadata:(id)arg1;
- (id)suggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 sharingOptions:(id)arg3;
- (_Bool)_isMemoryCategoryTriggered:(unsigned long long)arg1;
- (_Bool)isPGMemoryTriggered:(id)arg1;
- (_Bool)isPHMemoryTriggered:(id)arg1;
- (id)createMemoriesWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (double)durationForExistingMemoriesOverlapCheck:(unsigned long long *)arg1;
- (id)_featuresFromOptions:(id)arg1;
- (id)_allFeatureVectorBasedMemoriesWithOptions:(id)arg1;
- (id)_memoriesWithOptions:(id)arg1 isFinalOne:(_Bool)arg2;
- (id)_memoryControllerWithOptions:(id)arg1;
- (id)_generateAllMemoriesWithKeyPeopleForHolidayMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_generateAllMemoriesWithSeasonMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_generateAllMemoriesWithBestOfPastMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_generateAllMemoriesWithFeatureVectorBasedMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_featuresOfType:(unsigned long long)arg1 inMemories:(id)arg2;
- (id)memoryWithOptions:(id)arg1;
- (id)memoriesWithOptions:(id)arg1;
- (id)_featureVectorGeneratorWithOptions:(id)arg1;
- (id)_memoryGeneratorWithOptions:(id)arg1 memoryController:(id)arg2;
- (id)memoryTreeWithOptions:(id)arg1;
- (id)celebrationOverTimeMemoriesForLocalDate:(id)arg1;
- (id)throwbackThursdayMemoriesForLocalDate:(id)arg1;
- (id)recurrentTripMemoriesWithLowRequirements:(_Bool)arg1;
- (id)peopleMemoriesForPeopleWithUUID:(id)arg1 year:(long long)arg2;
- (id)homeAggregationMemoriesForLocalDate:(id)arg1;
- (id)pastSupersetMemoriesWithLowRequirements:(_Bool)arg1;
- (id)babyMemoriesWithLowRequirements:(_Bool)arg1;
- (id)petMemoriesWithLowRequirements:(_Bool)arg1;
- (id)weekendMemoriesWithLowRequirements:(_Bool)arg1;
- (id)tripMemoriesWithLowRequirements:(_Bool)arg1;
- (id)socialGroupMemoriesForSocialGroupWithID:(long long)arg1 year:(long long)arg2;
- (id)upcomingFutureMemoriesForLocalDate:(id)arg1;
- (id)recentPastMemoriesForLocalDate:(id)arg1;
- (id)liveMemoriesForLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (id)nearbyTodayMemoriesForLocalDate:(id)arg1 location:(id)arg2;
- (id)nowMemoriesForLocalDate:(id)arg1;
- (id)featuredPeopleMemoriesWithLowRequirements:(_Bool)arg1;
- (id)sometimeInHistoryMemories;
- (id)feelingLuckyMemoriesWithLowRequirements:(_Bool)arg1;
- (id)dayInHistoryMemoriesForLocalDate:(id)arg1;
- (id)dayInHistoryMemoryForLocalDate:(id)arg1;
- (id)bestOfPastMemoryFromLocalDate:(id)arg1 toLocalDate:(id)arg2 duration:(unsigned long long)arg3;
- (id)memorySummaryOfYear:(long long)arg1 duration:(unsigned long long)arg2;
- (id)suggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1;
- (id)inferredContactIdentifierForPersonLocalIdentifier:(id)arg1;
- (id)inferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1;
- (id)assetCollectionsForPersonIdentifiers:(id)arg1;
- (id)maximalSocialGroupsForPersonIdentifiers:(id)arg1;
- (id)socialGroupsForPersonIdentifiers:(id)arg1;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1;
- (id)sortedArrayForPersonIdentifiers:(id)arg1;
- (id)publicEventsForAllMoments;
- (id)highlightGroupingsForPromotionScoreSurvey;
- (id)highlightsForKeyAssetSurvey;
- (id)highlightsForMeaningKeyAssetSurvey;
- (id)assetCollectionsForOptimizedMeaningSurvey:(id)arg1;
- (_Bool)_momentNodeHasMeaningfulEntertainmentScenes:(id)arg1 graph:(id)arg2;
- (_Bool)_momentNodeHasMeaningfulCelebrationScenes:(id)arg1 graph:(id)arg2;
- (_Bool)_momentNodeHasMeaningfulRestaurantScenes:(id)arg1 graph:(id)arg2;
- (_Bool)_momentNodeHasMeaningfulActivityScenes:(id)arg1 graph:(id)arg2;
- (_Bool)_highConfidentSceneNodesInMoment:(id)arg1 withSceneNames:(id)arg2 includingChildrenOfScenes:(id)arg3 graph:(id)arg4;
- (id)similarAssetCollections;
- (id)_topN:(unsigned long long)arg1 fromScoreByAsset:(id)arg2;
- (id)_assetsWithKNearestSceneprintsToReferenceAssets:(id)arg1 amongOtherAssets:(id)arg2 minimumSimilarity:(double)arg3 k:(unsigned long long)arg4;
- (id)popularAssetCollections;
- (id)businessItemsForAllMoments;
- (id)enrichedBusinessItemsByMuidsForBusinessItems:(id)arg1;
- (id)_interactionScoreByAssetFromMomentNodes:(id)arg1;
- (id)_interestingMomentNodesAndUninterestingNodes;
- (_Bool)_isInterestingMomentNode:(id)arg1;
- (id)surveyInformationForMoment:(id)arg1;
- (id)meaningLabelsForMoment:(id)arg1;
- (id)momentFeatureVectorForMoment:(id)arg1;
- (id)uninterestingMoments;
- (id)_momentsForHobbyType:(long long)arg1;
- (id)momentsForPet;
- (id)momentsForBaby;
- (id)momentsAndGraphScoresAboveGraphScoreThreshold:(double)arg1;
- (id)surveyMomentClustersForTrips;
- (id)_tripRelatedClustersInGraph:(id)arg1;
- (id)_momentClustersForTripsInGraph:(id)arg1 tripIndexByMomentNode:(id)arg2;
- (id)_tripIndexByMomentNodeInGraph:(id)arg1;
- (id)surveySocialGroupsInfoDictionaries;
- (id)surveyFrequentLocationQuestions;
- (id)_momentNodesForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodGraphContextIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodSceneIdentifiersByMomentForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodMeaningIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodGraphNodeIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)blacklistedFeatures;
- (id)defaultAssetSortDescriptors;
- (id)fetchAssetWithLocalIdentifier:(id)arg1;
- (id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)arg1;
- (id)allYearsForPeopleWithName:(id)arg1;
- (id)allPeopleNames;
- (id)nameForSocialGroupWithID:(long long)arg1;
- (id)allYearsForSocialGroupWithID:(long long)arg1;
- (id)allSocialGroupIDs;
- (_Bool)locationIsInSupersets:(id)arg1;
- (_Bool)isLocationNearHomeOrWork:(id)arg1;
- (id)allYears;
- (id)libraryStatisticsForCurrentPhotoLibrary;
- (id)_yearsStatisticsForCurrentPhotoLibrary;
- (id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg1 fetchOptions:(id)arg2 yearEntryKey:(id)arg3 numberOfYearsEntryKey:(id)arg4;
- (id)_collectionStatisticsForCurrentPhotoLibrary;
- (id)_momentsStatisticsForCurrentPhotoLibrary;
- (unsigned long long)medianValueFromUnsignedItegerArray:(id)arg1;
- (id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
- (id)_diagnosticSummaryInfoForMemory:(id)arg1;
- (id)_extractDatesAndAssetCountsFromMemory:(id)arg1;
- (id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 referencedMemory:(id)arg2;
- (id)highlightDebugInformationWithHighlight:(id)arg1;
- (id)memoryDebugInformationWithMoments:(id)arg1 meaningLabels:(id)arg2;
- (id)titleTupleForAlbum:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForMoment:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForAssetCollection:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForMomentList:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForPersonIdentifiers:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForMemory:(id)arg1 error:(id *)arg2;
- (id)searchSynonymsDictionaries;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(_Bool)arg3;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)searchKeywordsByEventWithUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)searchMetadataWithOptions:(id)arg1;
- (id)zeroKeywordsWithOptions:(id)arg1;
- (id)_memoryFetchOptions;
- (_Bool)memoriesOfTheDayAreWorthNotifying;
- (id)lastTriggeredNotificationDate;
- (id)nextPossibleNotificationDate;
- (_Bool)swapInGraph:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)performLibraryAnalysisWithGraphURL:(id)arg1 graphUpdate:(id)arg2 withRecipe:(id)arg3 processedGraphUpdate:(id *)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (void)performFullLibraryAnalysisInGraph:(id)arg1 withRecipe:(id)arg2 withAlreadyIngestedMomentIdentifiers:(id)arg3 alreadyIngestedHighlightIdentifiers:(id)arg4 processedGraphUpdate:(id *)arg5 progressBlock:(CDUnknownBlockType)arg6;
- (id)graphForLibraryAnalysisAtURL:(id)arg1 alreadyIngestedMomentIdentifiers:(id *)arg2 alreadyIngestedHighlightIdentifiers:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)_exportGraphToDiskOrRemoveItDependingOnUserDefault;
- (void)updateGraphWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 keepExistingGraph:(_Bool)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)startGraphUpdate:(id)arg1 usingCurrentGraph:(_Bool)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateCurrentGraphWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)_shouldFullyRebuildGraphWithGraphUpdate:(id)arg1;
- (_Bool)needsLibraryAnalysis;
- (void)cancelLibraryAnalysisWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startLibraryAnalysisWithRecipe:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 keepExistingGraph:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)startLibraryAnalysis:(CDUnknownBlockType)arg1 keepExistingGraph:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isInterestingForMoment:(id)arg1;
- (_Bool)isSmartInterestingForMoment:(id)arg1;
- (double)neighborScoreForLocalDate:(id)arg1;
- (double)neighborScoreForMoment:(id)arg1;
- (_Bool)isAssetCollectionInteresting:(id)arg1 precision:(unsigned long long)arg2;
- (double)graphScoreForMoment:(id)arg1;
- (double)contentScoreForAssetCollection:(id)arg1 precision:(unsigned long long)arg2;
- (id)_filteredAssetsForAssets:(id)arg1 inMoments:(id)arg2 keepFavorites:(_Bool)arg3;
- (id)_libraryDateInterval;
- (id)_batchFetchFacesByAssetsForCluster:(id)arg1 indexOfItem:(unsigned long long)arg2 fetchOptions:(id)arg3;
- (id)_batchFetchFacesByAssetsForClusters:(id)arg1 indexOfCluster:(unsigned long long)arg2 fetchOptions:(id)arg3;
- (id)_firstBestFacedAssetInAssetCluster:(id)arg1 forPersonUUID:(id)arg2 faceFetchOptions:(id)arg3;
- (id)_timeBasedAssetClustersForAssets:(id)arg1 maximumClusterCount:(unsigned long long)arg2;
- (id)sceneInfoWithAsset:(id)arg1;
- (id)curationDebugInformationForHighlight:(id)arg1 options:(id)arg2;
- (id)curationDebugInformationForAssetCollection:(id)arg1 options:(id)arg2;
- (_Bool)supportsSemanticalDedupingForMemory:(id)arg1;
- (id)curatedAssetsForAssetCollection:(id)arg1 options:(id)arg2 personUUID:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)dejunkAndDedupeItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)dejunkAndDedupeAssetsInAssetCollection:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)curatedAssetsForAssetCollection:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)bestAssetsForAssetFeeder:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)prefetchAreMomentsInteresting:(id)arg1 precision:(unsigned long long)arg2;
- (void)cancelAllCurationPrefetches;
- (void)prefetchCuratedAssetsForMoments:(id)arg1 options:(id)arg2;
- (void)prefetchCuratedKeyAssetsForMoments:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3;
- (id)_locationForAsset:(id)arg1 fromNearbyAssetsInAssets:(id)arg2;
- (id)_curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curatedKeyAsset:(id *)arg5;
- (id)curatedKeyAssetForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4;
- (id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4;
- (id)curatedAssetIdentifiersForEvent:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3;
- (id)curatedAssetsFetchResultForEvent:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3;
- (id)_momentNodesForMemory:(id)arg1;
- (id)_poiLabelsForMomentNodes:(id)arg1;
- (id)_roiLabelsForMomentNodes:(id)arg1;
- (id)_gatheringAndFamilyKeywordsForMemory:(id)arg1 momentNodes:(id)arg2;
- (id)_locationTripKeywordsForMemory:(id)arg1 momentNodes:(id)arg2;
- (id)_keywordsSortedByPriority:(id)arg1;
- (id)moodKeywordsForMemory:(id)arg1;
- (id)_stringDescriptionForMusicSummaryOnly:(_Bool)arg1;
- (id)_behavioralStatistics;
- (unsigned long long)_numberOfAssetsMatchingInternalPredicate:(id)arg1;
- (id)_fetchResultMatchingInternalPredicate:(id)arg1;
- (id)_stringDescriptionForLegacyPets;
- (id)_stringDescriptionForBabies;
- (id)_stringDescriptionForPets;
- (id)_sortedTextFeaturesFromTextFeatures:(id)arg1;
- (id)sharingMessageSuggestionDebugInformationForAssetCollection:(id)arg1;
- (id)_dayOfWeekStatistics;
- (id)snapshotOuputFilePathURLForKey:(id)arg1;
- (id)_snapshotFilenameForLookupKey:(id)arg1;
- (id)defaultPeopleClustersExportIntermediatePath;
- (id)fastGraphExportFullPath;
- (id)defaultGraphExportFullPath;
- (id)defaultSnapshotRootPath;
- (id)_getDefaultOutputPathForMetadataSnapshot;
- (id)utilityAssetInformation;
- (id)sharingSuggestionDebugInformationForSuggestion:(id)arg1;
- (id)_debugInformationForRelated:(id)arg1 referenceKeywords:(id)arg2 andRelatedMoment:(id)arg3 relatedType:(unsigned long long)arg4 precision:(unsigned long long)arg5;
- (id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4;
- (id)relatedDebugInformationBetweenAsset:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4;
- (id)_domainLabelCountStatistics;
- (id)_mobilityStatistics;
- (id)_titleStatistics;
- (id)_highlightTitleStatistics;
- (id)_stringDescriptionForPublicEvents:(_Bool)arg1;
- (id)_poiStatistics;
- (id)_stringDescriptionForBusinessItemsIncludingInferredThroughPublicEvents:(_Bool)arg1 verbose:(_Bool)arg2;
- (id)_stringDescriptionForLocations;
- (id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg1;
- (id)_stringDescriptionForDisambiguatedLocations;
- (id)_stringDescriptionForMeNode:(id)arg1;
- (id)_stringDescriptionForPeopleEvents;
- (id)_stringDescriptionForInterestingAreas:(id)arg1;
- (id)_stringDescriptionForInterestingCities:(id)arg1;
- (id)_stringDescriptionForUrbanCities:(id)arg1;
- (id)_dateFormatter;
- (id)_stringDescriptionForMeaningfulEvents:(id)arg1 isTrip:(_Bool)arg2 forDiagnostics:(_Bool)arg3;
- (id)_stringDescriptionForSocialGroups:(id)arg1 includeWeight:(_Bool)arg2;
- (id)_highlightEstimatesStatistics;
- (id)_messagesStatistics;
- (id)_peopleNameGenderStatistics;
- (id)_peopleVisionGenderStatistics;
- (id)_peopleVisionAgeStatistics;
- (id)_stringDescriptionForContactCache;
- (id)_peopleContactSuggestionStatisticsIncludingDebugInfo:(_Bool)arg1;
- (id)_oneOnOneTrips;
- (unsigned long long)_numberOfNightOutMoments;
- (unsigned long long)_numberOfFamilyHolidayMoments;
- (unsigned long long)_numberOfMomentsOverWeekends;
- (id)_peopleRelationshipsStatisticsIncludingDebugInfo:(_Bool)arg1;
- (id)_partOfDayStatistics;
- (id)_interestingStatistics;
- (id)_moodStatistics;
- (id)_stringDescriptionForMemoriesNotification;
- (id)_checkConsistencyOfGraph:(id)arg1;
- (id)_defaultStatistics:(_Bool)arg1 forDiagnostics:(_Bool)arg2;
- (id)statisticsWithTypeStrings:(id)arg1;
- (unsigned int)identifierForMoment:(id)arg1;
- (id)UUIDForMoment:(id)arg1;
- (id)keywordsForAsset:(id)arg1 relatedType:(unsigned long long)arg2;
- (id)keywordsForMomentNodeName:(id)arg1 relatedType:(unsigned long long)arg2;
- (id)keywordsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2;
- (void)debugTitlesForAssetCollection:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)_extendedAssetsForCurationForAssets:(id)arg1 matchingAssetsRange:(struct _NSRange)arg2;
- (id)_contextualBestAssetInAssets:(id)arg1;
- (id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3;
- (id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2;
- (id)_filteredAssetsFromAssetCollection:(id)arg1 throughCriteriaForMeaningWithLabel:(id)arg2;
- (id)_filteredAssetsFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3;
- (id)_filteredAssetCollectionFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3;
- (id)_bestAssetInSummarizedAssets:(id)arg1 forReferencePeople:(id)arg2;
- (id)_bestAssetsInAssets:(id)arg1 forReferencePersons:(id)arg2 minimumRatioOfReferencePersonsPerAsset:(double)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 minimumNumberOfCommonPeople:(unsigned long long)arg3 avoidVideoIfPossible:(_Bool)arg4;
- (id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2;
- (id)bestAssetInAssets:(id)arg1 options:(id)arg2;
- (id)_filteredAssetsWithFaceFilter:(unsigned long long)arg1 forAssets:(id)arg2;
- (double)contentScoreForAssetFeeder:(id)arg1 precision:(unsigned long long)arg2;
- (_Bool)isAssetFeederInteresting:(id)arg1 precision:(unsigned long long)arg2;
- (void)_removePrefetchBlock;
- (void)_generateTitleForRelatedResults:(id)arg1 withReferenceEvent:(id)arg2 referenceAsset:(id)arg3;
- (id)_referenceAssetWithLocalIdentifier:(id)arg1;
- (_Bool)exportMatchingResultsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id *)arg4;
- (_Bool)exportMatchingResultsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id *)arg4;
- (id)_fileURLForMomentNode:(id)arg1 relatedType:(unsigned long long)arg2 focusOnAsset:(id)arg3 toURL:(id)arg4;
- (id)_stringFromRelatedType:(unsigned long long)arg1;
- (id)_weekendsForTargetDomain:(unsigned short)arg1;
- (id)_tripsForTargetDomain:(unsigned short)arg1;
- (id)_diverseResultsFromMatchingResults:(id)arg1 timeShuffleTimestamp:(double)arg2 matchingOptions:(id)arg3 options:(id)arg4;
- (id)_postProcessGraphMatchingResults:(id)arg1 matchingOptions:(id)arg2 options:(id)arg3;
- (id)relatedCollectionBetweenAssetCollection:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4;
- (id)_relatedCollectionBetweenHighlight:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4 needsDiversityInfo:(_Bool)arg5;
- (id)_relatedCollectionBetweenMoment:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4 needsDiversityInfo:(_Bool)arg5;
- (id)relatedCollectionBetweenAsset:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4;
- (id)relatedCollectionsForPersonIdentifiers:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id *)arg5;
- (id)relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id *)arg5;
- (id)relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)relatedCollectionsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(_Bool)arg4 error:(id *)arg5;
- (id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(_Bool)arg4 error:(id *)arg5;
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)relatedCollectionsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (void)matchFeatureVector:(id)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invalidateCurationCacheForCollectionWithIdentifier:(id)arg1;
- (void)invalidateCurationCacheForMoment:(id)arg1;
- (void)invalidateCurationCacheForMoments:(id)arg1;
- (void)invalidateCurationCacheForMomentIdentifiers:(id)arg1;
- (unsigned long long)optimalDurationForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4;
- (_Bool)areAssetsInteresting:(id)arg1 minimumNumberOfCuratedAssets:(unsigned long long)arg2 duration:(unsigned long long)arg3 precision:(unsigned long long)arg4;
- (id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 withContextualAssets:(id)arg4 minimumProportion:(double)arg5 progressBlock:(CDUnknownBlockType)arg6;
- (id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 referencePeople:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;

@end

