//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoLibraryPathManager.h>

@interface PLPhotoLibraryPathManager (conveniences)
- (id)pathToiPhotoLibraryMediaDir;
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1 createEmptyFile:(_Bool)arg2;
- (id)cloudSharingArchiveDirectory;
- (id)directoryPathForInFlightComments:(_Bool)arg1;
- (id)cplDownloadFinishedMarkerFilePath;
- (id)cplEnableMarkerFilePath;
- (id)forceSoftResetSyncPath;
- (id)pauseICloudPhotosFilePath;
- (id)disableICloudPhotosFilePath;
- (id)enableICloudPhotosFilePath;
- (id)cplDataDirectoryCreateIfNeeded:(_Bool)arg1;
- (id)deletedMemoryUUIDsFilePath;
- (id)searchMetadataStoreFilePath;
- (id)zeroKeywordStoreFilePath;
- (id)searchIndexManagerDatabaseFilePath;
- (id)searchIndexManagerDatabaseDirectory;
- (id)dataMigratorFinishedFilePath;
- (id)photoStreamsDataDirectory;
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
- (void)_setSqliteErrorAndExitIfNecessaryForReason:(int)arg1;
- (void)setSqliteErrorAndExitIfNecessaryForDemoContentInstallation;
- (void)setSqliteErrorAndExitIfNecessaryForSimulatedCorruption:(_Bool)arg1;
- (_Bool)createSqliteErrorIndicatorFile;
- (id)sqliteErrorIndicatorFilePath;
@end

