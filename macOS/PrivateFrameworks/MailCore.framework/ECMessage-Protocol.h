//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/NSCopying-Protocol.h>
#import <MailCore/NSObject-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;
@protocol ECMailAccount, ECMailbox, ECMessageHeaders, ECMimePart;

@protocol ECMessage <NSCopying, NSObject>
@property(readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property(readonly) unsigned long long numberOfAttachments;
@property(readonly, copy) NSUUID *documentID;
@property(readonly, copy, nonatomic) NSArray *references;
@property(readonly, nonatomic) id <ECMessageHeaders> headers;
@property(readonly, nonatomic) id <ECMailAccount> account;
@property(readonly) NSSet *labels;
@property(readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property(readonly, copy, nonatomic) NSString *messageIDHeader;
@property(readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property(readonly, nonatomic) id <ECMimePart> bodyPart;
@property(readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property(readonly, nonatomic) ECMessageFlags *flags;
@property(readonly) long long conversationID;
@property(readonly, nonatomic) id <ECMailbox> mailbox;
@property(readonly, copy) NSString *remoteID;
@property(readonly, copy) NSArray *listUnsubscribe;
@property(readonly) NSDate *dateSent;
@property(readonly) NSDate *dateReceived;
@property(readonly, copy) NSArray *senders;
@property(readonly, copy) NSArray *bcc;
@property(readonly, copy) NSArray *cc;
@property(readonly, copy) NSArray *to;
@property(readonly, copy) NSArray *from;
@property(readonly, copy) ECSubject *subject;
@property(readonly, copy, nonatomic) NSString *persistentID;
- (NSString *)bestAlternativePart:(char *)arg1;
@end

