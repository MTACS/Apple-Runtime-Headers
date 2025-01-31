//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailMessage.h>

#import <Message/EDLibraryMessage-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, MFMailboxUid, MFMessageHeaders, MailAccount, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;
@protocol ECMimePart;

@interface MFLibraryMessage : MFMailMessage <EDLibraryMessage>
{
    long long _libraryID;
    NSString *_remoteID;
    unsigned long _uid;
    unsigned long long _uniqueRemoteId;
    unsigned int _size;
    long long _mailboxID;
    long long _originalMailboxID;
    NSString *_messageID;
    unsigned long long _conversationFlags;
    NSArray *_references;
}

+ (id)messageWithLibraryID:(long long)arg1;
+ (id)log;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *references; // @synthesize references=_references;
- (unsigned int)fileSize;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (id)attachmentStorageLocation;
- (id)_attachmentStorageLocation;
- (id)copyMessageInfo;
- (_Bool)isLibraryMessage;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(_Bool)arg2;
- (void)setRemoteID:(id)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(long long)arg4 originalMailboxID:(long long)arg5;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:(unsigned long long)arg1;
- (id)preferredAccountToUseForReplying;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsNotViewed;
- (void)markAsViewed;
@property(readonly, nonatomic) MailAccount *account; // @dynamic account;
- (id)dataPathForMimePart:(id)arg1;
- (id)path;
- (id)_privacySafeDescription;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)commit;
- (void)setSummary:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (int)compareByUidWithMessage:(id)arg1;
- (id)mailboxName;
- (void)setHasTemporaryUid:(_Bool)arg1;
- (_Bool)hasTemporaryUid;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (_Bool)isMessageContentsLocallyAvailable;
- (void)setIsPartial:(_Bool)arg1;
- (_Bool)isPartial;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned long long)uniqueRemoteId;
- (void)setUid:(unsigned long)arg1;
- (unsigned long)uid;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *remoteID;
- (void)setRemoteID:(id)arg1;
- (void)_updateUID;
@property(readonly, nonatomic) MFMailboxUid *mailbox; // @dynamic mailbox;
- (id)messageStore;
- (void)setMessageSize:(unsigned int)arg1;
- (unsigned int)messageSize;
- (id)originalMailboxURL;
- (void)setOriginalMailboxID:(long long)arg1;
- (long long)originalMailboxID;
- (void)setMailboxID:(long long)arg1;
- (long long)mailboxID;
@property(readonly, nonatomic) long long libraryID;
@property(readonly, copy, nonatomic) NSString *persistentID;
- (id)messageID;
- (id)library;
- (id)initWithLibraryID:(long long)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *bcc;
@property(readonly, nonatomic) id <ECMimePart> bodyPart;
@property(readonly, copy, nonatomic) NSArray *cc;
@property(readonly, nonatomic) long long conversationID;
@property(readonly, nonatomic) NSDate *dateReceived;
@property(readonly, nonatomic) NSDate *dateSent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSUUID *documentID; // @dynamic documentID;
@property(readonly, nonatomic) ECMessageFlags *flags;
@property(readonly, copy, nonatomic) NSArray *from;
@property(readonly, nonatomic) MFMessageHeaders *headers; // @dynamic headers;
@property(readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property(readonly) NSSet *labels;
@property(readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property(readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property(readonly, copy, nonatomic) NSString *messageIDHeader;
@property(readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property(readonly, nonatomic) unsigned int numberOfAttachments;
@property(readonly, nonatomic, getter=isPartOfExistingThread) _Bool partOfExistingThread;
@property(readonly, copy, nonatomic) NSArray *senders;
@property(readonly, copy, nonatomic) ECSubject *subject;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *to;

@end

