//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PLPhotoAnalysisServiceClient : NSObject
{
    NSURL *_libraryURL;
    NSDictionary *_cachedRequestContextDictionary;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSXPCConnection *_xpcConnection;
    _Bool _graphIsReady;
    unsigned int _graphLoadcount;
    _Bool _graphLoadWasSent;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)dispatchOnQueue:(id)arg1 blockWithoutBoost:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)requestContextDictionaryWithOperationId:(_Bool)arg1;
- (id)requestContextDictionary;
- (id)xpcConnection;
- (id)_xpcConnection;
- (void)_setupXPCConnection;
- (id)backgroundQueue;
- (void)writeQALog:(id)arg1;
- (void)notifyLibraryAvailableAtURL:(id)arg1;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)dumpAnalysisStatusError:(id *)arg1;
- (int)photoanalysisdPid;
- (void)dealloc;
- (id)initWithLibraryURL:(id)arg1;
- (id)init;
- (void)unloadGraph;
- (void)loadGraph;
- (_Bool)isGraphReady;
- (void)_sendGraphLoadIfNeeded;
- (_Bool)rebuildPersonsWithOptions:(id)arg1 error:(id *)arg2;
- (id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (void)personPromoterAdvancedStatus:(CDUnknownBlockType)arg1;
- (void)personPromoterStatus:(CDUnknownBlockType)arg1;
- (id)requestSuggestedMePersonIdentifierWithError:(id *)arg1;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;
- (id)faceClusteringInformation:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)processPersonsWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)reclusterFacesWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)resetFaceClassificationModel:(id *)arg1;
- (_Bool)resetPeople:(id *)arg1;
- (_Bool)resetFaceClusteringState:(id *)arg1;
- (int)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id *)arg3;
- (int)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)turboIsEnabled;
- (void)stopTurboAnalysis;
- (void)runTurboAnalysis;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)reportMetricsWithOptions:(id)arg1 error:(id *)arg2;
- (id)runCurationWithItems:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)requestPeopleSuggestionLearningWithError:(id *)arg1;
- (id)requestPeopleSuggestionLearningStatisticsWithError:(id *)arg1;
- (id)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 error:(id *)arg3;
- (id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id *)arg2;
- (_Bool)requestAssetRevGeocodingWithError:(id *)arg1;
- (_Bool)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)requestEnrichmentWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestSuggestedContributionsForAssetsMetadata:(id)arg1 error:(id *)arg2;
- (id)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (_Bool)requestTitleForPersonIdentifiers:(id)arg1 format:(int)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (_Bool)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(int)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (_Bool)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(int)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (_Bool)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id *)arg2 subtitle:(id *)arg3 error:(id *)arg4;
- (_Bool)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;
- (id)requestDefaultsObjectForKey:(id)arg1 withError:(id *)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id *)arg4;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id *)arg3;
- (id)requestMetadataSnapshotFolderCreation:(id *)arg1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)requestInvalidatePersistentCaches:(id *)arg1;
- (_Bool)requestInvalidateTransientCaches:(id *)arg1;
- (void)requestGraphRebuildFractionCompletedWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphPerformQuery:(id)arg1 error:(id *)arg2;
- (id)requestGraphStatus:(id *)arg1;
- (void)requestHighlightEstimatesWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphStatisticsWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (id)requestSuggestionInfosWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestMemoryInfosWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestUtilityAssetInformationWithError:(id *)arg1;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned int)arg4 relatedType:(unsigned int)arg5 error:(id *)arg6;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned int)arg4 relatedType:(unsigned int)arg5 error:(id *)arg6;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned int)arg2 isFullAnalysis:(_Bool)arg3 withOptions:(id)arg4 error:(id *)arg5;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned int)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned int)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestLocalizedSceneAncestryInformationWithError:(id *)arg1;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestSynonymsDictionariesWithError:(id *)arg1;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id *)arg2;
- (void)invalidateGraphWithReply:(CDUnknownBlockType)arg1;
- (void)enrichDataModelWithProgress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rebuildGraphWithOptions:(id)arg1 progress:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id *)arg2;
- (id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (void)generateQuestionsWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateSuggestionsWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned int)arg2 precision:(unsigned int)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned int)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

