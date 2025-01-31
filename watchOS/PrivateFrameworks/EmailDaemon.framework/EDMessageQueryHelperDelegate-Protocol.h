//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EDMessageQueryHelper, EMMessage, EMMessageObjectID, NSArray;

@protocol EDMessageQueryHelperDelegate <NSObject>
- (void)queryHelperNeedsRestart:(EDMessageQueryHelper *)arg1;
- (void)queryHelperDidFinishRemoteSearch:(EDMessageQueryHelper *)arg1;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didDeleteMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didUpdateMessages:(NSArray *)arg2 forKeyPaths:(NSArray *)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 objectIDDidChangeForMessage:(EMMessage *)arg2 oldObjectID:(EMMessageObjectID *)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 conversationNotificationLevelDidChangeForConversation:(int)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 conversationIDDidChangeForMessages:(NSArray *)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 messageFlagsDidChangeForMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didAddMessages:(NSArray *)arg2;
- (void)queryHelperDidFindAllMessages:(EDMessageQueryHelper *)arg1;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didFindMessages:(NSArray *)arg2;
@end

