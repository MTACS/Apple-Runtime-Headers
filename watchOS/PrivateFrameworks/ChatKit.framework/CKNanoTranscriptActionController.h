//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICActionController.h>

@class CKConversation, CKNanoChatController, CKTranscriptCollectionViewController;

__attribute__((visibility("hidden")))
@interface CKNanoTranscriptActionController : PUICActionController
{
    CKNanoChatController *_chatController;
    CKConversation *_conversation;
    CKTranscriptCollectionViewController *_collectionViewController;
}

@property(retain, nonatomic) CKTranscriptCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) CKNanoChatController *chatController; // @synthesize chatController=_chatController;
- (void).cxx_destruct;
- (void)shareCurrentLocation;
- (void)showContactInfo:(id)arg1;
- (void)reply;
- (id)selectContactItemWithImage:(id)arg1 action:(SEL)arg2;
- (void)generateActionItems;
- (id)initInChatController:(id)arg1;

@end

