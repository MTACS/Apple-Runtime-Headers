//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlagChange, EDPersistenceDatabaseGenerationWindow, NSArray, NSData, NSSet, NSURL;
@protocol ECMessage;

@protocol EDMessageChangeHookResponder <NSObject>

@optional
- (void)persistenceWillTransferMessages:(NSArray *)arg1 transferType:(long long)arg2 destinationMailboxURL:(NSURL *)arg3 userInitiated:(BOOL)arg4;
- (void)persistenceDidChangeMessageIDHeaderHash:(ECAngleBracketIDHash *)arg1 message:(id <ECMessage>)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsChangingConversationID:(long long)arg1 messages:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceWillChangeConversationID:(long long)arg1 messages:(NSArray *)arg2;
- (void)persistenceDidAddLabels:(NSSet *)arg1 removeLabels:(NSSet *)arg2 messages:(NSArray *)arg3 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg4;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidChangeFlags:(ECMessageFlagChange *)arg1 messages:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsChangingFlags:(ECMessageFlagChange *)arg1 messages:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceWillChangeFlags:(ECMessageFlagChange *)arg1 messages:(NSArray *)arg2;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsDeletingAllMessagesInMailboxWithURL:(NSURL *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidDeleteMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsDeletingMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidUpdateProperties:(NSArray *)arg1 message:(id <ECMessage>)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateData:(NSData *)arg1 message:(id <ECMessage>)arg2;
- (void)persistenceDidReconcileJournaledMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidAddMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsAddingMessages:(NSArray *)arg1 journaled:(BOOL)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceWillAddMessage:(id <ECMessage>)arg1 fromExistingMessage:(BOOL)arg2;
- (void)persistenceDidFinishUpdates;
- (void)persistenceWillBeginUpdates;
@end

