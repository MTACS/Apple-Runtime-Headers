//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/EDMessageChangeManager.h>

#import <Message/EDMessageChangeManagerSubClassMethods-Protocol.h>

@class MFMailMessageLibrary, NSString;

@interface MFMessageChangeManager_iOS : EDMessageChangeManager <EDMessageChangeManagerSubClassMethods>
{
    MFMailMessageLibrary *_library;
}

@property(nonatomic) __weak MFMailMessageLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (_Bool)mailboxPartOfAllMail:(id)arg1;
- (_Bool)mailboxIsAllMail:(id)arg1;
- (id)accountForMailboxURL:(id)arg1;
- (id)iterateMessagesInMailboxURL:(id)arg1 excludingMessages:(id)arg2 batchSize:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)messagesForRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (id)messageForDatabaseID:(long long)arg1;
- (id)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesInDatabase:(id)arg3;
- (id)applyFlagChange:(id)arg1 toMessagesInDatabase:(id)arg2;
- (void)resetStatusCountsForMailboxWithURL:(id)arg1;
- (void)messageWasAppended:(id)arg1;
- (void)displayErrorForTransferAction:(id)arg1 withResults:(id)arg2;
- (void)actionHasChangedAccount:(id)arg1;
- (void)checkForNewActionsInMailboxID:(long long)arg1;
- (void)setData:(id)arg1 onMessage:(id)arg2;
- (void)setRemoteID:(id)arg1 onMessageWithDatabaseID:(long long)arg2;
- (long long)mailboxDatabaseIDForURL:(id)arg1;
- (_Bool)haveCompleteMIMEForMessage:(id)arg1;
- (void)deletePersistedMessages:(id)arg1;
- (_Bool)persistNewMessages:(id)arg1 mailboxURL:(id)arg2 oldMessagesByNewMessage:(id)arg3 fromSyncing:(_Bool)arg4;
- (id)messagesToJournalForMessages:(id)arg1 inMailbox:(id)arg2;
- (id)addNewMessages:(id)arg1 mailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (id)copyMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (id)initWithLibrary:(id)arg1 database:(id)arg2 localActionPersistence:(id)arg3 serverMessagePersistenceFactory:(id)arg4 hookResponder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

