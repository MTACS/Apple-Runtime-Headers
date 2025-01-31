//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBCurrencyAmountValue, _INPBDataString, _INPBDateTime, _INPBInteger, _INPBMessage, _INPBMessageLinkMetadata;

@protocol _INPBMessage <NSObject>
+ (Class)recipientType;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasSpeakableGroupName;
@property(retain, nonatomic) _INPBDataString *speakableGroupName;
@property(readonly, nonatomic) BOOL hasSender;
@property(retain, nonatomic) _INPBContact *sender;
@property(readonly, nonatomic) BOOL hasReferencedMessage;
@property(retain, nonatomic) _INPBMessage *referencedMessage;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) BOOL hasPaymentAmount;
@property(retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property(readonly, nonatomic) BOOL hasNumberOfAttachments;
@property(retain, nonatomic) _INPBInteger *numberOfAttachments;
@property(readonly, nonatomic) BOOL hasLocationName;
@property(copy, nonatomic) NSString *locationName;
@property(readonly, nonatomic) BOOL hasLinkMetadata;
@property(retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(copy, nonatomic) NSString *groupName;
@property(readonly, nonatomic) BOOL hasFileExtension;
@property(copy, nonatomic) NSString *fileExtension;
@property(nonatomic) BOOL hasEffect;
@property(nonatomic) int effect;
@property(readonly, nonatomic) BOOL hasDateSent;
@property(retain, nonatomic) _INPBDateTime *dateSent;
@property(readonly, nonatomic) BOOL hasDateLastMessageRead;
@property(retain, nonatomic) _INPBDateTime *dateLastMessageRead;
@property(readonly, nonatomic) BOOL hasConversationIdentifier;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(readonly, nonatomic) BOOL hasContent;
@property(copy, nonatomic) NSString *content;
@property(readonly, nonatomic) unsigned long long attributesCount;
@property(readonly, nonatomic) int *attributes;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (void)clearRecipients;
- (int)StringAsEffect:(NSString *)arg1;
- (NSString *)effectAsString:(int)arg1;
- (int)StringAsAttributes:(NSString *)arg1;
- (NSString *)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@end

