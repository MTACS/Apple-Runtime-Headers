//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, __UIDiffableDataSource;

@interface _UIDiffableDataSource : NSObject
{
    __UIDiffableDataSource *_dsImpl;
}

- (void).cxx_destruct;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)applySnapshot:(id)arg1;
- (void)reloadFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (id)emptySnapshot;
- (id)snapshot;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)appendSectionWithIdentifier:(id)arg1;
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
- (void)setDefaultRowAnimation:(long long)arg1;
- (long long)defaultRowAnimation;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)_impl;
- (id)dsImpl;
- (id)initWithDiffableDataSource:(id)arg1;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)initWithViewUpdatesSink:(id)arg1;
- (id)init;

@end

