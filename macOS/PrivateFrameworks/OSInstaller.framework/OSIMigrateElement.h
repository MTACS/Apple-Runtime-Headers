//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

#import <OSInstaller/MigrationProgressEventsListener-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, SMPaths;

@interface OSIMigrateElement : OSIInstallQueueElement <MigrationProgressEventsListener>
{
    NSString *_systemRoot;
    NSString *_archiveRoot;
    NSString *_leftOversPath;
    NSMutableArray *_engineFileWarnings;
    NSError *_engineFatalError;
    NSArray *_ignoredFilesInPreviousSystem;
    BOOL _engineIsRunning;
    BOOL _hasStartedMigration;
    BOOL _isServerDisk;
    SMPaths *_pather;
}

+ (void)removeFlag:(int)arg1 fromPath:(id)arg2;
+ (BOOL)moveFilesAtPaths:(id)arg1 toPreservationFolderAtPath:(id)arg2 withError:(id *)arg3;
+ (id)validPathsForPreservation:(id)arg1 onMountpoint:(id)arg2 ignoreFiles:(id)arg3 keepFiles:(id)arg4;
+ (BOOL)setupMigrationWithOptions:(id)arg1 error:(id *)arg2;
@property(retain) SMPaths *pather; // @synthesize pather=_pather;
- (void).cxx_destruct;
- (BOOL)_moveFirmlinkedUserDataWithError:(id *)arg1;
- (void)migrationRequestCompletedState:(unsigned long long)arg1 advancingTo:(unsigned long long)arg2 withErrorsAndWarnings:(id)arg3;
- (void)engineStartedWithRequestUUID:(id)arg1 migrationType:(unsigned long long)arg2;
- (void)engineMinutesRemaining:(id)arg1 transferRate:(id)arg2;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(id)arg1;
- (void)engineStarted;
- (BOOL)_cleanupPath:(id)arg1 saveAllFiles:(BOOL)arg2 onSystem:(id)arg3 error:(id *)arg4 server:(BOOL)arg5;
- (void)_doCleanupOnArchiveReturningError:(id *)arg1 forServer:(BOOL)arg2 onSystem:(id)arg3;
- (BOOL)_createMacBuddyCookie;
- (BOOL)_deleteRegistrationCookie;
- (void)_mergeInstallHistory;
- (double)estimatedTimeToComplete;
- (id)localizedStatusString;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1 isServer:(BOOL)arg2;

@end

