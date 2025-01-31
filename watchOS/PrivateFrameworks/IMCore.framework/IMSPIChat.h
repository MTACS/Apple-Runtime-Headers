//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMSPIChat : NSObject
{
    _Bool _isGroup;
    NSString *_guid;
    NSString *_chatIdentifier;
    NSString *_serviceName;
    NSString *_displayName;
    NSArray *_handles;
}

+ (void)enumerateAllChatsWithBlock:(CDUnknownBlockType)arg1;
@property(retain) NSArray *handles; // @synthesize handles=_handles;
@property _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain) NSString *chatIdentifier; // @synthesize chatIdentifier=_chatIdentifier;
@property(retain) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct *)arg1;
- (void)enumerateAllMessagesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllAttachmentsWithBlock:(CDUnknownBlockType)arg1;

@end

