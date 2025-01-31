//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHBatchFetchingArrayDataSource-Protocol.h>
#import <Photos/PHPerformChangesRequest-Protocol.h>

@class CPLStatus, NSError, NSHashTable, NSManagedObjectID, NSMutableDictionary, NSProgress, NSString, NSURL, PHPerformChangesRequest, PHPersistentChangeToken, PHPhotoLibraryAppPrivateData, PLAssetsdClient, PLFileSystemVolume, PLLazyObject, PLPhotoAnalysisServiceClient, PLPhotoKitVariationCache, PLPhotoLibrary, PLPhotoLibraryBundle;
@protocol OS_dispatch_queue, PLPhotoAnalysisServiceTaxonomyResolver;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource, PHPerformChangesRequest>
{
    PLLazyObject *_lazyPhotoLibrary;
    PLLazyObject *_lazyMainQueueConcurrencyPhotoLibrary;
    PLLazyObject *_lazyMainQueuePhotoLibrary;
    PLLazyObject *_lazyBackgroundQueuePhotoLibrary;
    PLLazyObject *_lazyUserInitiatedQueuePhotoLibrary;
    PLLazyObject *_lazyBackgroundQueueObjectFetchingPhotoLibrary;
    PLLazyObject *_lazyChangeHandlingPhotoLibrary;
    PLLazyObject *_lazyAlbumRootFolderObjectID;
    PLLazyObject *_lazyProjectAlbumRootFolderObjectID;
    PLFileSystemVolume *_libraryFileSystemVolume;
    BOOL _unknownMergeEvent;
    BOOL _isChangeProcessingPending;
    BOOL _clearsOIDCacheAfterFetchResultDealloc;
    unsigned short _type;
    NSError *_unavailabilityReason;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_libraryID;
    PLPhotoLibrary *_transactionPhotoLibrary;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    PHPerformChangesRequest *_request;
    NSMutableDictionary *_changeRequests;
    NSHashTable *_fetchResults;
    NSHashTable *_internalObservers;
    NSHashTable *_externalObservers;
    NSMutableDictionary *_changeNotificationInfo;
    double _lastChangeProcessingStarted;
    NSHashTable *_availabilityObservers;
    NSURL *_photoLibraryURL;
    PLPhotoLibraryBundle *_photoLibraryBundle;
    NSProgress *_postOpenProgress;
    PHPhotoLibraryAppPrivateData *_appPrivateData;
}

+ (id)sharedContactStore;
+ (BOOL)_isInternalObserver:(id)arg1;
+ (void)removeAllUniquedOIDs;
+ (id)uniquedOIDsFromObjects:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOID:(id)arg1;
+ (id)_effectiveRootEntity:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (id)PHObjectClasses;
+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (id)PHObjectClassesByEntityName;
+ (Class)classForFetchType:(id)arg1;
+ (id)fetchTypeForLocalIdentifierCode:(id)arg1;
+ (long long)collectionListTypeForIdentifierCode:(id)arg1;
+ (id)photoLibraryForCurrentTransaction;
+ (id)stringFromPHPhotoLibraryType:(unsigned short)arg1;
+ (void)assertTransaction;
+ (BOOL)isSystemPhotoLibraryURL:(id)arg1;
+ (const char *)systemPhotoLibraryURLChangeNotificationName;
+ (BOOL)setSystemPhotoLibraryURL:(id)arg1 error:(id *)arg2;
+ (id)systemPhotoLibraryURL;
+ (BOOL)isMultiLibraryModeEnabled;
+ (void)enableMultiLibraryMode;
+ (void)_forceUserInterfaceReload;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (long long)authorizationStatus;
+ (id)sharedMomentSharePhotoLibrary;
+ (id)sharedPhotoLibrary;
+ (void)initialize;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1;
+ (void)setSharedPhotoLibrary:(id)arg1;
+ (BOOL)hasSharedPhotoLibrary;
+ (void)assertRunningInExtension;
+ (BOOL)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2;
@property(nonatomic) BOOL clearsOIDCacheAfterFetchResultDealloc; // @synthesize clearsOIDCacheAfterFetchResultDealloc=_clearsOIDCacheAfterFetchResultDealloc;
@property(readonly, nonatomic) PHPhotoLibraryAppPrivateData *appPrivateData; // @synthesize appPrivateData=_appPrivateData;
@property(readonly, nonatomic) NSProgress *postOpenProgress; // @synthesize postOpenProgress=_postOpenProgress;
@property(readonly) PLPhotoLibraryBundle *photoLibraryBundle; // @synthesize photoLibraryBundle=_photoLibraryBundle;
@property(readonly, nonatomic) NSURL *photoLibraryURL; // @synthesize photoLibraryURL=_photoLibraryURL;
@property(retain, nonatomic) NSHashTable *availabilityObservers; // @synthesize availabilityObservers=_availabilityObservers;
@property(nonatomic) double lastChangeProcessingStarted; // @synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted;
@property(nonatomic) BOOL isChangeProcessingPending; // @synthesize isChangeProcessingPending=_isChangeProcessingPending;
@property(nonatomic) BOOL unknownMergeEvent; // @synthesize unknownMergeEvent=_unknownMergeEvent;
@property(retain, nonatomic) NSMutableDictionary *changeNotificationInfo; // @synthesize changeNotificationInfo=_changeNotificationInfo;
@property(retain, nonatomic) NSHashTable *externalObservers; // @synthesize externalObservers=_externalObservers;
@property(retain, nonatomic) NSHashTable *internalObservers; // @synthesize internalObservers=_internalObservers;
@property(retain, nonatomic) NSHashTable *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) NSMutableDictionary *changeRequests; // @synthesize changeRequests=_changeRequests;
@property(retain, nonatomic) PHPerformChangesRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(readonly) PLPhotoLibrary *transactionPhotoLibrary; // @synthesize transactionPhotoLibrary=_transactionPhotoLibrary;
@property(retain, nonatomic) NSString *libraryID; // @synthesize libraryID=_libraryID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSError *unavailabilityReason; // @synthesize unavailabilityReason=_unavailabilityReason;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)countOfReferencedMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canUpdatePersonState;
- (void)_notifiyPersistentChangeObservers;
@property(readonly, nonatomic) PHPersistentChangeToken *currentToken;
- (id)_fetchPersistentChangesSinceToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 error:(id *)arg3;
- (id)fetchPersistentChangesWithRequest:(id)arg1 error:(id *)arg2;
- (id)fetchPersistentChangesSinceToken:(id)arg1 error:(id *)arg2;
- (void)_processPendingChanges;
- (void)handleMergeNotification:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectID *projectAlbumRootFolderObjectID;
@property(readonly, nonatomic) NSManagedObjectID *albumRootFolderObjectID;
- (id)librarySpecificFetchOptions;
- (id)allowedEntities;
- (id)fetchUpdatedObject:(id)arg1;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchedObjectsForOIDs:(id)arg1 objectClass:(Class)arg2;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3;
- (id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(BOOL)arg3;
- (id)urlForApplicationDataFolderIdentifier:(long long)arg1;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (id)changeRequestForUUID:(id)arg1;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)assertTransaction;
- (BOOL)isApplyingRequestedChanges;
- (BOOL)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)performCancellableChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performCancellableChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_preflightRequestWithError:(id *)arg1;
- (id)_errorForAuthorizationStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelTransaction:(CDUnknownBlockType)arg1;
- (void)_clearSaveTokensForRequest:(id)arg1;
- (void)_commitTransaction:(CDUnknownBlockType)arg1;
- (void)_beginTransaction;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)_onQueueNotifyAvailabilityObserversWithReason:(id)arg1;
- (void)_notifyAvailabilityObserversWithReason:(id)arg1;
- (BOOL)_setUnavailabilityReason:(id)arg1;
- (void)_handleServiceConnectionClosed:(id)arg1;
- (void)_stopObservingServiceConnectionInvalidated;
- (void)_startObservingServiceConnectionInvalidated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopWatchingFileSystemVolumeForLibraryAvailability;
- (void)_startWatchingFileSystemVolumeForLibraryAvailability;
- (void)_stopWatchingForLibraryAvailability;
- (void)_handleLibraryBecameUnavailable:(id)arg1 reason:(id)arg2;
- (void)_startWatchingForLibraryAvailability;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (void)unregisterFetchResult:(id)arg1;
- (void)registerFetchResult:(id)arg1;
@property(readonly) PLPhotoLibrary *changeHandlingPhotoLibrary;
- (id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2;
- (id)objectFetchingContextForCurrentQueueQoS;
- (id)photoLibraryForCurrentQueueQoS;
- (id)managedObjectContextForCurrentQueueQoS;
@property(readonly) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary;
@property(readonly) PLPhotoLibrary *userInitiatedQueuePhotoLibrary;
@property(readonly) PLPhotoLibrary *backgroundQueuePhotoLibrary;
- (id)mainQueueManagedObjectContext;
@property(readonly) PLPhotoLibrary *mainQueuePhotoLibrary;
@property(readonly, nonatomic) PLPhotoLibrary *mainQueueConcurrencyPhotoLibrary;
@property(readonly, nonatomic) PLPhotoAnalysisServiceClient *photoAnalysisClient;
@property(readonly, nonatomic) PLAssetsdClient *assetsdClient;
- (id)managedObjectContext;
@property(readonly) PLPhotoLibrary *photoLibrary;
- (id)pl_photoLibraryForCMM;
@property(readonly) PLPhotoKitVariationCache *variationCache;
- (void)dealloc;
- (void)_invalidateEverythingWithReason:(id)arg1;
- (id)initWithPhotoLibraryBundle:(id)arg1 type:(unsigned short)arg2;
- (id)initWithPhotoLibraryURL:(id)arg1 type:(unsigned short)arg2;
- (id)initWithPLPhotoLibrary:(id)arg1 type:(unsigned short)arg2;
- (id)initWithPLPhotoLibrary:(id)arg1;
- (BOOL)isPHPhotoLibraryForCMM;
- (void)close;
- (id)upgradePhotoLibraryWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)openAndWaitWithUpgrade:(BOOL)arg1 error:(id *)arg2;
- (unsigned long long)pl_upgradeOptionsFromOptions:(unsigned long long)arg1;
- (BOOL)createPhotoLibraryWithError:(id *)arg1;
- (BOOL)_postOpenInitializationWithError:(id *)arg1;
@property(readonly, nonatomic) CPLStatus *cplStatus;
@property(readonly, nonatomic) BOOL isReadOnlyCloudPhotoLibrary;
@property(readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property(readonly, nonatomic) BOOL isCloudPhotoLibrary;
@property(readonly, nonatomic) BOOL isSystemPhotoLibrary;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (id)initMomentShareLibrary;
- (id)initSharedLibrary;
- (id)init;
@property(readonly, nonatomic) NSString *uuid;
- (id)sharingSuggestionWithRandomPick:(BOOL)arg1 fallbackToRecentMoments:(BOOL)arg2 needsNotification:(BOOL)arg3;
- (id)pl_syncProgressAlbums;
@property(retain, nonatomic) id <PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)sceneInformationFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)migrationDate;
- (id)cloudIdentifiersForLocalIdentifiers:(id)arg1;
- (id)localIdentifiersForCloudIdentifiers:(id)arg1;
- (id)_cloudIdentifierKeysByFetchType;
- (id)bfa_photoLibrary;
- (id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3;
- (id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2;
- (id)bfa_fetchedObjectsForOIDs:(id)arg1 objectClass:(Class)arg2;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfUnclusteredFaces;
- (unsigned long long)countOfDirtyFaceGroups;
- (unsigned long long)countOfUnprocessedFaceCrops;
- (BOOL)isFaceProcessingFinished;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4;
- (id)suggestedContactsForPersonLocalIdentifier:(id)arg1;
- (id)inferredContactForPersonLocalIdentifier:(id)arg1;
- (id)inferredContactByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1;
- (void)personPromotionProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)suggestedMePersonIdentifierWithError:(id *)arg1;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id *)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 error:(id *)arg5;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestSynonymsDictionariesWithError:(id *)arg1;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id *)arg2;
- (void)requestSearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)requestSearchIndexUpdates:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unloadGraph;
- (void)loadGraph;
- (id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (BOOL)requestEnrichmentWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id *)arg2;
- (BOOL)requestAssetRevGeocodingWithError:(id *)arg1;
- (BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id *)arg2;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGraphRebuildWithOptions:(id)arg1 progress:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)invalidatePersistentGraphCachesAndReturnError:(id *)arg1;
- (BOOL)invalidateTransientGraphCachesAndReturnError:(id *)arg1;
- (id)exportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (void)requestHighlightEstimatesWithCompletion:(CDUnknownBlockType)arg1;
- (id)graphStatisticsDescription:(id *)arg1;
- (id)graphStatusDescription:(id *)arg1;
- (id)sharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)sharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)curationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)highlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)featureEnabledForWorkerType:(short)arg1;
- (BOOL)featureEnabledForWorkerType:(short)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isNamingFlowEnabled:(CDUnknownBlockType)arg1;
- (void)enableNamingFlow;
- (void)_checkForPeopleUIFeatureWithFetchRequest:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (BOOL)resetPendingAnalysisStatesWithError:(id *)arg1;
- (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
- (BOOL)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
- (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 error:(id *)arg3;
- (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 error:(id *)arg4;
- (double)sceneAnalysisProgressForHighlight:(id)arg1 usingSceneVersion:(unsigned long long)arg2;
- (id)analysisProgressCountsForWorkerType:(short)arg1;
- (id)assetUUIDsAllowedForCurationFromAssets:(id)arg1;
- (double)analysisProgressForHighlight:(id)arg1 workerType:(short)arg2 error:(id *)arg3;
- (void)requestAnalysisProgressCountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestAnalysisProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestTotalProgressCountsWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

