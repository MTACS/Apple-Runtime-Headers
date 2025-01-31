//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewCell.h>

#import <ChatKit/CKConversationListCell-Protocol.h>

@class CKConversation, CKGroupCountView, CKNanoDrawingContentView, CKPhoneNumberCompressor, NSString, STConversationContext, UIDateLabel;

__attribute__((visibility("hidden")))
@interface CKNanoConversationListCell : PUICTableViewCell <CKConversationListCell>
{
    CKNanoDrawingContentView *_drawingContentView;
    UIDateLabel *_dateLabel;
    CKGroupCountView *_groupCountView;
    CKPhoneNumberCompressor *_phoneNumberCompressor;
    CKConversation *_conversation;
    _Bool _allowedByScreenTime;
    STConversationContext *_screentimeConversationContext;
}

+ (float)cellHeight;
+ (id)identifierForConversation:(id)arg1;
@property(nonatomic) _Bool allowedByScreenTime; // @synthesize allowedByScreenTime=_allowedByScreenTime;
@property(nonatomic) __weak STConversationContext *screentimeConversationContext; // @synthesize screentimeConversationContext=_screentimeConversationContext;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)_calculateLayoutFrames;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(_Bool)arg2;
- (void)updateContentsForConversation:(id)arg1;
- (void)_setUpDrawingContentView;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

