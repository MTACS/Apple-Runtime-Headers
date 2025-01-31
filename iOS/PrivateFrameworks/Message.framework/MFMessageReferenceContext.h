//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ECSubject, EFMutableInt64Set, MFEmailSet, MFMailMessage, NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MFMessageReferenceContext : NSObject
{
    NSString *_sender;
    NSArray *_senderList;
    NSString *_to;
    NSArray *_toList;
    NSString *_cc;
    NSArray *_ccList;
    NSString *_bcc;
    NSArray *_bccList;
    MFMailMessage *_message;
    long long _libraryID;
    long long _messageIDHash;
    ECSubject *_subject;
    EFMutableInt64Set *_references;
    NSMutableDictionary *_messageIDsBySubject;
    long long _mailboxID;
    long long _conversationIDHash;
    unsigned long long *_conversationFlagsRef;
    double _dateSentInterval;
}

@property(nonatomic) double dateSentInterval; // @synthesize dateSentInterval=_dateSentInterval;
@property(nonatomic) unsigned long long *conversationFlagsRef; // @synthesize conversationFlagsRef=_conversationFlagsRef;
@property(nonatomic) long long conversationIDHash; // @synthesize conversationIDHash=_conversationIDHash;
@property(nonatomic) long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property(retain, nonatomic) NSMutableDictionary *messageIDsBySubject; // @synthesize messageIDsBySubject=_messageIDsBySubject;
@property(retain, nonatomic) EFMutableInt64Set *references; // @synthesize references=_references;
@property(copy, nonatomic) ECSubject *subject; // @synthesize subject=_subject;
@property(nonatomic) long long messageIDHash; // @synthesize messageIDHash=_messageIDHash;
@property(nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;
@property(retain, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, nonatomic) MFEmailSet *participants;
@property(copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property(copy, nonatomic) NSString *bcc; // @synthesize bcc=_bcc;
@property(copy, nonatomic) NSArray *ccList; // @synthesize ccList=_ccList;
@property(copy, nonatomic) NSString *cc; // @synthesize cc=_cc;
@property(copy, nonatomic) NSArray *toList; // @synthesize toList=_toList;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSArray *senderList; // @synthesize senderList=_senderList;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;

@end

