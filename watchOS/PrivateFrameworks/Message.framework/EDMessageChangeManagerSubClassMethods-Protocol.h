//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class ECLocalMessageAction, ECMessageFlagChange, ECTransferMessageAction, ECTransferMessageActionResults, NSArray, NSData, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol ECMessage, EDReceivingAccount;

@protocol EDMessageChangeManagerSubClassMethods <NSObject>
- (_Bool)mailboxPartOfAllMail:(NSURL *)arg1;
- (_Bool)mailboxIsAllMail:(NSURL *)arg1;
- (void)displayErrorForTransferAction:(ECTransferMessageAction *)arg1 withResults:(ECTransferMessageActionResults *)arg2;
- (void)actionHasChangedAccount:(ECLocalMessageAction *)arg1;
- (void)checkForNewActionsInMailboxID:(long long)arg1;
- (void)setData:(NSData *)arg1 onMessage:(id <ECMessage>)arg2;
- (void)setRemoteID:(NSString *)arg1 onMessageWithDatabaseID:(long long)arg2;
- (NSArray *)addLabels:(NSSet *)arg1 removeLabels:(NSSet *)arg2 toMessagesInDatabase:(NSArray *)arg3;
- (void)resetStatusCountsForMailboxWithURL:(NSURL *)arg1;
- (NSArray *)applyFlagChange:(ECMessageFlagChange *)arg1 toMessagesInDatabase:(NSArray *)arg2;
- (_Bool)haveCompleteMIMEForMessage:(id <ECMessage>)arg1;
- (void)deletePersistedMessages:(NSArray *)arg1;
- (_Bool)persistNewMessages:(NSArray *)arg1 mailboxURL:(NSURL *)arg2 oldMessagesByNewMessage:(NSMutableDictionary *)arg3 fromSyncing:(_Bool)arg4;
- (NSString *)iterateMessagesInMailboxURL:(NSURL *)arg1 excludingMessages:(NSArray *)arg2 batchSize:(unsigned int)arg3 handler:(void (^)(NSArray *))arg4;
- (NSArray *)messagesForRemoteIDs:(NSArray *)arg1 mailboxURL:(NSURL *)arg2;
- (id <ECMessage>)messageForDatabaseID:(long long)arg1;
- (id <EDReceivingAccount>)accountForMailboxURL:(NSURL *)arg1;
- (long long)mailboxDatabaseIDForURL:(NSURL *)arg1;
@end

