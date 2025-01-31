//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLPhotoLibraryPathManager-Protocol.h>

@class NSFileManager, NSString, NSURL, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManagerCore : NSObject <PLPhotoLibraryPathManager>
{
    struct os_unfair_lock_s _folderCreationLock;
    unsigned int _photoDirectoriesExists;
    unsigned int _privateSubDirectoriesExists;
    unsigned int _privateCacheSubDirectoriesExists;
    unsigned int _externalDirectoriesExists;
    unsigned int _persistedAlbumDataDirectoryExists;
    NSFileManager *_fm;
    PLFileSystemCapabilities *_capabilities;
    NSURL *_libraryURL;
    NSString *_baseDirectory;
    NSString *_assetUUIDRecoveryMappingPath;
}

+ (void)recordPrevSystemLibraryPath:(id)arg1;
+ (BOOL)isSystemLibraryURLDefined;
+ (BOOL)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id *)arg3;
+ (id)systemLibraryURLIfResolvable;
+ (id)systemLibraryURL;
+ (id)_legacySystemLibraryPath;
+ (id)_legacySystemLibraryBookmarkData;
+ (void)_updateSystemLibraryURLWithOldValue:(id)arg1;
+ (id)systemLibraryBaseDirectory;
+ (BOOL)isSupportedFileSystemAtURL:(id)arg1;
+ (BOOL)isSystemPhotoLibraryURL:(id)arg1;
+ (id)systemLibraryPathManager;
+ (void)listenForSystemPhotoLibraryURLChanges;
+ (BOOL)setTimeMachineExclusionAttribute:(BOOL)arg1 url:(id)arg2 error:(id *)arg3;
+ (void)initialize;
@property(copy) NSString *assetUUIDRecoveryMappingPath; // @synthesize assetUUIDRecoveryMappingPath=_assetUUIDRecoveryMappingPath;
@property(copy) NSString *baseDirectory; // @synthesize baseDirectory=_baseDirectory;
@property(copy) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property(readonly, nonatomic) PLFileSystemCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void).cxx_destruct;
- (id)pathToAssetAlbumOrderStructure;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2;
- (void)setDataProtectionComplete:(BOOL)arg1;
- (BOOL)isDataProtectionComplete;
- (id)_dataProtectionIndicatorFilePath;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;
- (void)setExtendedAttributesWithIdentifier:(id)arg1;
- (id)readOnlyUrlWithIdentifier:(id)arg1;
- (id)temporaryDragAndDropDirectoryCreateIfNeeded:(BOOL)arg1 error:(id *)arg2;
- (id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(BOOL)arg1 error:(id *)arg2;
- (id)knownDBPaths;
- (id)syncInfoPath;
- (id)pathToAssetsToAlbumsMapping;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id *)arg5;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id *)arg3;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)externalDirectoryWithSubType:(unsigned char)arg1;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id *)arg3;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id *)arg5;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id *)arg4;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id *)arg3;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)privateDirectoryWithSubType:(unsigned char)arg1;
- (id)pathsForExternalWriters;
- (BOOL)createPathsForNewLibrariesWithError:(id *)arg1;
- (id)pathsForPermissionCheck;
- (id)pathsForClientAccess:(id)arg1;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id *)arg5;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id *)arg4;
- (id)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id *)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(id)arg2;
- (id)photoDirectoryWithType:(unsigned char)arg1;
- (id)photosAsideDatabasePath;
- (id)photosCPLDatabasePath;
- (id)photosDatabasePath;
- (id)baseDirectoryForBundleScope:(unsigned char)arg1;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (BOOL)createDirectoryOnceWithPath:(id)arg1 mask:(unsigned char)arg2 type:(unsigned char)arg3 error:(id *)arg4;
- (BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id *)arg2;
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1;
- (void)postInit;
- (id)initWithLibraryURL:(id)arg1;
- (id)initWithBaseDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

