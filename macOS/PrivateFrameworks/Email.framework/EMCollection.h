//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMRepositoryObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EFSignpostable-Protocol.h>

@class EFFuture, EFPromise, EFQuery, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol EFCancelable, EFScheduler, EMCollectionChangeObserver;

@interface EMCollection : EMRepositoryObject <EFLoggable, EFSignpostable>
{
    NSMutableOrderedSet *_itemIDs;
    NSOrderedSet *_recoveringItemIDs;
    EFPromise *_allItemIDsPromise;
    struct os_unfair_lock_s _itemIDsLock;
    BOOL _foundAllItemIDs;
    EFQuery *_query;
    id <EFCancelable> _cancelationToken;
    id <EMCollectionChangeObserver> _changeObserver;
    id <EFScheduler> _queryScheduler;
    id <EFScheduler> _observerScheduler;
}

+ (BOOL)supportsSecureCoding;
+ (id)signpostLog;
+ (id)log;
@property(readonly, nonatomic) id <EFScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly, nonatomic) id <EFScheduler> queryScheduler; // @synthesize queryScheduler=_queryScheduler;
@property(nonatomic) __weak id <EMCollectionChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
@property(retain, nonatomic) id <EFCancelable> cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(readonly, nonatomic) EFQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)queryReplacedObjectID:(id)arg1 withNewObjectID:(id)arg2;
- (BOOL)observerContainsObjectID:(id)arg1;
- (void)_filterAndTransformObjectIDs:(id)arg1 before:(BOOL)arg2 existingObjectID:(id)arg3 batchBlock:(CDUnknownBlockType)arg4;
- (id)_itemIDsForObjectIDs:(id)arg1;
- (void)queryDidFinishRemoteSearch;
- (void)queryDidFinishInitialLoad;
- (void)queryMatchedDeletedObjectIDs:(id)arg1;
- (void)queryMatchedChangedObjectIDs:(id)arg1;
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2;
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2;
- (void)queryMatchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)queryMatchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)queryDidStartRecovery;
- (void)finishRecovery;
- (BOOL)isRecovering;
- (void)_cancelQueryIfNeeded;
- (void)_performQueryIfNeeded;
- (void)_cancelQuery;
- (void)_performQuery;
- (void)stopObserving:(id)arg1;
- (void)beginObserving:(id)arg1;
@property(readonly, nonatomic) EFFuture *allItemIDs;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (id)iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (BOOL)containsItemID:(id)arg1 includeRecovery:(BOOL)arg2;
- (void)removeItemIDs:(id)arg1;
- (void)insertItemIDs:(id)arg1 after:(id)arg2;
- (void)insertItemIDs:(id)arg1 before:(id)arg2;
- (BOOL)objectIDBelongsToCollection:(id)arg1;
- (id)itemIDForObjectID:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_commonInitWithQuery:(id)arg1;
- (id)initWithObjectID:(id)arg1 query:(id)arg2;
- (id)initWithQuery:(id)arg1 repository:(id)arg2;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

