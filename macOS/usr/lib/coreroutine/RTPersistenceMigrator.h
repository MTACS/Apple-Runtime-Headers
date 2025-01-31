//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSManagedObjectModel, NSPersistentStoreCoordinator, RTPersistenceStore;
@protocol RTPersistenceDelegate, RTPersistenceModelProvider;

@interface RTPersistenceMigrator : NSObject
{
    NSPersistentStoreCoordinator *_cachedCoordinator;
    BOOL _didVacuumStore;
    NSDate *_migrationStartDate;
    NSDate *_migrationEndDate;
    RTPersistenceStore *_store;
    id <RTPersistenceModelProvider> _modelProvider;
    id <RTPersistenceDelegate> _delegate;
    unsigned long long _state;
    NSManagedObjectModel *_nextModel;
}

@property(retain, nonatomic) NSManagedObjectModel *nextModel; // @synthesize nextModel=_nextModel;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly) __weak id <RTPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak id <RTPersistenceModelProvider> modelProvider; // @synthesize modelProvider=_modelProvider;
@property(readonly) __weak RTPersistenceStore *store; // @synthesize store=_store;
@property(readonly) BOOL didVacuumStore; // @synthesize didVacuumStore=_didVacuumStore;
@property(readonly) NSDate *migrationEndDate; // @synthesize migrationEndDate=_migrationEndDate;
@property(readonly) NSDate *migrationStartDate; // @synthesize migrationStartDate=_migrationStartDate;
- (void).cxx_destruct;
- (void)__cleanupAfterImportWithStore:(id)arg1 coordinator:(id)arg2;
- (unsigned long long)__executeImportStepWithSourceStore:(id)arg1 sourceCoordinator:(id)arg2 destinationStore:(id)arg3 destinationCoordinator:(id)arg4 model:(id)arg5;
- (unsigned long long)__prepareImportStepWithSourceStore:(id)arg1 sourceCoordinator:(id)arg2 destinationStore:(id)arg3 destinationCoordinator:(id)arg4 model:(id)arg5 allowMigration:(BOOL)arg6;
- (id)__findCandidateStoresForImportStepWithStore:(id)arg1;
- (unsigned long long)_executeImportStep;
- (unsigned long long)_executeRecreateStep;
- (unsigned long long)_executeDestroyStep;
- (unsigned long long)_executeMigrateStep;
- (unsigned long long)_executeCacheStep;
- (unsigned long long)_executeRekeyStep;
- (unsigned long long)_executePrepareStep;
- (unsigned long long)_executeVacuumStep;
- (unsigned long long)_executeOpenStep;
- (void)_executeSingleMigrationStep;
- (void)_attemptMigration;
- (id)_coordinatorForModel:(id)arg1;
- (unsigned long long)run;
@property(readonly) unsigned long long status;
- (id)initWithStore:(id)arg1 modelProvider:(id)arg2 delegate:(id)arg3;
- (id)init;

@end

