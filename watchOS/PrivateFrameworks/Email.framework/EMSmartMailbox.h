//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMMailbox.h>

@class EMMailboxScope, NSPredicate;

@interface EMSmartMailbox : EMMailbox
{
    NSPredicate *_predicate;
    EMMailboxScope *_mailboxScope;
    int _smartMailboxType;
}

+ (id)unifiedMailboxOfType:(int)arg1 name:(id)arg2 additionalPredicate:(id)arg3;
+ (id)unifiedMailboxOfType:(int)arg1 name:(id)arg2;
+ (id)includesMeMailboxWithMailboxScope:(id)arg1;
+ (id)muteThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)todayMailboxWithMailboxScope:(id)arg1;
+ (id)notifyThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)hasAttachmentsMailboxWithMailboxScope:(id)arg1;
+ (id)unreadMailboxWithMailboxScope:(id)arg1;
+ (id)flaggedMailboxWithMailboxScope:(id)arg1;
+ (id)vipMailboxWithMailboxScope:(id)arg1;
@property(readonly, nonatomic) int smartMailboxType; // @synthesize smartMailboxType=_smartMailboxType;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)supportsSelectAll;
- (_Bool)isSmartMailbox;
- (id)initWithType:(int)arg1 mailboxType:(int)arg2 name:(id)arg3 predicate:(id)arg4 mailboxScope:(id)arg5;

@end

