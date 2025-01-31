//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDebugClient : PLAssetsdBaseClient
{
}

- (void)updateSiriVocabulary;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned int)arg2 highPriority:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithError:(id *)arg1;
- (_Bool)cleanupEmptyHighlightsWithError:(id *)arg1;
- (_Bool)updateHighlightTitlesWithError:(id *)arg1;
- (_Bool)processUnprocessedMomentLocationsWithError:(id *)arg1;
- (_Bool)processRecentHighlightsWithError:(id *)arg1;
- (void)prefetchResourcesWithMode:(int)arg1;
- (void)prefetchResourcesForHighlights:(id)arg1;
- (void)prefetchResourcesForMemories:(id)arg1;
- (void)pruneAssets:(id)arg1 resourceTypes:(id)arg2;
- (_Bool)debugSidecarFileURLsForAsset:(id)arg1 debugSidecarFileURLs:(id *)arg2 error:(id *)arg3;
- (_Bool)revertToOriginalForAsset:(id)arg1 error:(id *)arg2;
- (id)getCPLState;
- (id)getXPCTransactionStatus;
- (void)rebuildAllThumbnails;
- (void)resetDupesAnalysis;
- (void)rebuildCloudFeed;
- (_Bool)rebuildSearchIndexWithError:(id *)arg1;
- (_Bool)synchronouslySetSearchIndexPaused:(_Bool)arg1 reason:(id)arg2 error:(id *)arg3;
- (void)setSearchIndexPaused:(_Bool)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dropSearchIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)deferredLogDumpWithFormat:(id)arg1;
- (_Bool)allMomentsMetadataWithOutputPath:(id)arg1 metadataDictionary:(id *)arg2 error:(id *)arg3;
- (_Bool)dumpMetadataForMomentsWithOutputPath:(id)arg1 metadataDirectory:(id *)arg2 error:(id *)arg3;
- (_Bool)rebuildHighlightsDeletingExistingHighlights:(_Bool)arg1 error:(id *)arg2;
- (_Bool)rebuildMomentsDeletingExistingMoments:(_Bool)arg1 error:(id *)arg2;
- (id)momentGenerationStatus;
- (void)recoverAssetsInInconsistentCloudState;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getStatus;

@end

