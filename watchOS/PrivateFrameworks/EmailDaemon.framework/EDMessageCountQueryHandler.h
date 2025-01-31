//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMailboxChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EFCancelable-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDMessagePersistence, EDMessageQueryEvaluator, EDPersistenceHookRegistry, EDUpdateThrottler, EFCancelationToken, EFQuery, EMMailboxScope, NSMutableDictionary, NSMutableSet, NSPredicate, NSString;
@protocol EMMessageRepositoryCountQueryObserver_xpc;

@interface EDMessageCountQueryHandler : NSObject <EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EFCancelable>
{
    NSMutableDictionary *_serverCounts;
    NSMutableSet *_mailboxesBeingSynced;
    NSMutableSet *_seenMessageIDs;
    NSMutableSet *_newMessageIDs;
    struct os_unfair_lock_s _seenMessageIDsLock;
    // Error parsing type: {EFAtomicObject="cfObject"Al}, name: _atomicQueryDescription
    // Error parsing type: {EFAtomicObject="cfObject"Al}, name: _atomicMailboxScopeDescription
    EFQuery *_query;
    EFQuery *_expandedQuery;
    NSPredicate *_predicateIgnoringFlags;
    EMMailboxScope *_serverCountMailboxScope;
    EDMessageQueryEvaluator *_queryEvaluator;
    id <EMMessageRepositoryCountQueryObserver_xpc> _resultsObserver;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EFCancelationToken *_cancelationToken;
    EDUpdateThrottler *_updateThrottler;
    NSString *_pendingFlagChangesKey;
    int _localCount;
}

+ (id)defaultScheduler;
+ (id)log;
@property(nonatomic) int localCount; // @synthesize localCount=_localCount;
@property(readonly) NSString *pendingFlagChangesKey; // @synthesize pendingFlagChangesKey=_pendingFlagChangesKey;
@property(retain, nonatomic) EDUpdateThrottler *updateThrottler; // @synthesize updateThrottler=_updateThrottler;
@property(retain, nonatomic) EFCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) id <EMMessageRepositoryCountQueryObserver_xpc> resultsObserver; // @synthesize resultsObserver=_resultsObserver;
@property(retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator; // @synthesize queryEvaluator=_queryEvaluator;
@property(readonly, nonatomic) EMMailboxScope *serverCountMailboxScope; // @synthesize serverCountMailboxScope=_serverCountMailboxScope;
@property(retain, nonatomic) NSPredicate *predicateIgnoringFlags; // @synthesize predicateIgnoringFlags=_predicateIgnoringFlags;
@property(retain, nonatomic) EFQuery *expandedQuery; // @synthesize expandedQuery=_expandedQuery;
@property(retain, nonatomic) EFQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(int)arg1 forMailboxWithObjectID:(id)arg2;
- (void)persistenceDidUpdateMostRecentStatusCount:(int)arg1 forMailboxWithObjectID:(id)arg2;
- (void)persistenceDidUpdateServerCount:(int)arg1 forMailboxWithObjectID:(id)arg2;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 message:(id)arg2;
- (void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(_Bool)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceDidAddMessages:(id)arg1;
- (void)persistenceWillAddMessage:(id)arg1 fromExistingMessage:(_Bool)arg2;
- (_Bool)_moreThan:(int)arg1 messagesExistWithMessageIDHeaderHash:(id)arg2;
- (id)_filterMessages:(id)arg1 potentiallyMatchingMessages:(id *)arg2;
- (void)_processChangedMessages:(id)arg1 changeKey:(id)arg2;
- (void)_prepareForChangeWithMessages:(id)arg1 changeKey:(id)arg2;
- (id)_originalMessagesKeyForKey:(id)arg1;
- (void)didSyncMailbox:(id)arg1;
- (void)willSyncMailbox:(id)arg1;
- (void)_notifyObserverWithLogMessage:(id)arg1;
- (void)_decrementLocalCount:(int)arg1 logMessage:(id)arg2;
- (void)_incrementLocalCount:(int)arg1 logMessage:(id)arg2;
- (void)_scheduleCountCalculation;
- (void)cancel;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 serverCountMailboxScope:(id)arg2 messagePersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

