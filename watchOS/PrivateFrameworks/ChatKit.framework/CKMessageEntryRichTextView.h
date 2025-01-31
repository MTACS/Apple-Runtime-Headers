//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMessageEntryTextView.h>

#import <ChatKit/NSTextStorageDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CKMessageEntryRichTextViewDelegate;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate>
{
    BOOL _balloonColor;
    _Bool _allowCalloutActions;
    NSMutableDictionary *_mediaObjects;
    NSMutableDictionary *_pluginDisplayContainers;
    NSMutableDictionary *_composeImages;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(nonatomic) _Bool allowCalloutActions; // @synthesize allowCalloutActions=_allowCalloutActions;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSMutableDictionary *composeImages; // @synthesize composeImages=_composeImages;
@property(retain, nonatomic) NSMutableDictionary *pluginDisplayContainers; // @synthesize pluginDisplayContainers=_pluginDisplayContainers;
@property(retain, nonatomic) NSMutableDictionary *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(nonatomic) BOOL balloonColor; // @synthesize balloonColor=_balloonColor;
- (void).cxx_destruct;
- (void)handleTapOrLongPress:(id)arg1;
- (id)attributedTextForCompositionText:(id)arg1;
- (id)composeImageForTransferGUID:(id)arg1;
- (void)previewDidChange:(id)arg1;
- (void)updateComposeImages;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned int)arg2 range:(struct _NSRange)arg3 changeInLength:(int)arg4;
- (id)compositionText;
- (void)setCompositionText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)_showCustomInputView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKMessageEntryRichTextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

