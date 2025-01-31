//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSOrderedSet, NSString, NSUUID, UICollectionView, UITableView, _UIDataSourceSnapshotter, _UIDiffableDataSourceViewUpdater;
@protocol OS_dispatch_queue;

@interface __UIDiffableDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource>
{
    UITableView *_tableView;
    UICollectionView *_collectionView;
    _Bool _isSnapshot;
    int _outstandingApplyCount;
    CDUnknownBlockType _tableViewCellProvider;
    CDUnknownBlockType _supplementaryViewProvider;
    CDUnknownBlockType _supplementaryReuseIdentifierProvider;
    CDUnknownBlockType _supplementaryViewConfigurationHandler;
    CDUnknownBlockType _collectionViewCellProvider;
    CDUnknownBlockType _tableViewCellConfigurationHandler;
    CDUnknownBlockType _reuseIdentifierProvider;
    CDUnknownBlockType _collectionViewCellConfigurationHandler;
    _UIDiffableDataSourceViewUpdater *_viewUpdater;
    NSUUID *_dataSourceGeneration;
    NSObject<OS_dispatch_queue> *_applyQueue;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    unsigned long long _mutationQueueSource;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    _UIDataSourceSnapshotter *_dataSourceSnapshot;
    NSMutableArray *_pendingSnapshotUpdates;
}

@property(readonly, nonatomic) NSMutableArray *pendingSnapshotUpdates; // @synthesize pendingSnapshotUpdates=_pendingSnapshotUpdates;
@property(readonly, nonatomic) _Bool isSnapshot; // @synthesize isSnapshot=_isSnapshot;
@property(retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(retain, nonatomic) NSOrderedSet *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSOrderedSet *identifiers; // @synthesize identifiers=_identifiers;
@property unsigned long long mutationQueueSource; // @synthesize mutationQueueSource=_mutationQueueSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // @synthesize snapshotQueue=_snapshotQueue;
@property(readonly, nonatomic) int outstandingApplyCount; // @synthesize outstandingApplyCount=_outstandingApplyCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *applyQueue; // @synthesize applyQueue=_applyQueue;
@property(retain, nonatomic) NSUUID *dataSourceGeneration; // @synthesize dataSourceGeneration=_dataSourceGeneration;
@property(retain, nonatomic) _UIDiffableDataSourceViewUpdater *viewUpdater; // @synthesize viewUpdater=_viewUpdater;
@property(copy, nonatomic) CDUnknownBlockType collectionViewCellConfigurationHandler; // @synthesize collectionViewCellConfigurationHandler=_collectionViewCellConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType reuseIdentifierProvider; // @synthesize reuseIdentifierProvider=_reuseIdentifierProvider;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellConfigurationHandler; // @synthesize tableViewCellConfigurationHandler=_tableViewCellConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType collectionViewCellProvider; // @synthesize collectionViewCellProvider=_collectionViewCellProvider;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewConfigurationHandler; // @synthesize supplementaryViewConfigurationHandler=_supplementaryViewConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType supplementaryReuseIdentifierProvider; // @synthesize supplementaryReuseIdentifierProvider=_supplementaryReuseIdentifierProvider;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewProvider; // @synthesize supplementaryViewProvider=_supplementaryViewProvider;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellProvider; // @synthesize tableViewCellProvider=_tableViewCellProvider;
- (void).cxx_destruct;
- (id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg1 tableView:(id)arg2;
- (long long)_numberOfRowsInSectionDeprecatedSPI:(long long)arg1 tableView:(id)arg2;
- (long long)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg1;
- (id)_cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (long long)_numberOfRowsInSection:(long long)arg1 tableView:(id)arg2;
- (long long)_numberOfSectionsForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;
- (id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg1 collectionView:(id)arg2;
- (long long)_numberOfItemsInSectionDeprecatedSPI:(long long)arg1 collectionView:(id)arg2;
- (long long)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg1;
- (id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;
- (id)_cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (long long)_numberOfItemsInSection:(long long)arg1 collectionView:(id)arg2;
- (long long)_numberOfSectionsForCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_commitStateAtomicallyWithIdentifiers:(id)arg1 sections:(id)arg2 dataSourceSnapshot:(id)arg3 shouldAdvanceGenerationalUUID:(_Bool)arg4 shouldCopy:(_Bool)arg5;
- (id)_snapshotWithHandlerAtomic:(CDUnknownBlockType)arg1;
- (_Bool)_canApplySnapshotUpdateWithoutDiffing:(id)arg1;
- (void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(_Bool)arg3;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1;
- (void)_commitUpdate:(id)arg1;
- (id)_pendingReloadUpdatesForDataSource:(id)arg1;
@property(nonatomic) long long tableViewDefaultRowAnimation;
- (void)applySnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (id)emptySnapshot;
- (id)snapshot;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)appendSectionWithIdentifier:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItemsInSection:(id)arg1;
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly, copy) NSString *description;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) __weak UICollectionView *collectionView;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 dataSource:(id)arg3;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)initWithViewUpdatesSink:(id)arg1;
- (id)initWithDataSourceGeneration:(id)arg1 sectionIdentifiers:(id)arg2 identifiers:(id)arg3 dataSourceSnapshot:(id)arg4;
@property(readonly, nonatomic) __weak UITableView *tableView;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

