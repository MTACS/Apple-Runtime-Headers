//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

#import <AppKit/NSTouchBarItemPositionAnimationDelegate-Protocol.h>

@class NSArray, NSCandidateListViewController, NSString, NSView, NSViewController;
@protocol NSCandidateListTouchBarItemDelegate, NSTextInputClient;

@interface NSCandidateListTouchBarItem : NSTouchBarItem <NSTouchBarItemPositionAnimationDelegate>
{
    NSCandidateListViewController *_candidateViewController;
    NSString *_customizationLabel;
    NSViewController *_inputContextViewController;
    struct {
        unsigned int _allowsIM:1;
        unsigned int _collapsed:1;
        unsigned int _isTextCompletionItem:1;
        unsigned int _reserved:29;
    } _clfbiFlags;
}

+ (id)keyPathsForValuesAffectingView;
+ (double)standardWidth;
+ (id)candidateBarAppearance;
- (BOOL)shouldAnimateNextLayoutPass;
- (void)runPositionAnimation;
- (unsigned long long)itemPosition;
- (void)_setTextInputContextViewController:(id)arg1;
- (id)_textInputContextViewController;
@property BOOL allowsTextInputContextCandidates; // @dynamic allowsTextInputContextCandidates;
- (void)updateWithInsertionPointVisibility:(BOOL)arg1;
@property BOOL allowsCollapsing; // @dynamic allowsCollapsing;
@property(getter=isCollapsed) BOOL collapsed; // @dynamic collapsed;
- (void)_didChangeCandidateListVisibility;
@property(readonly, getter=isCandidateListVisible) BOOL candidateListVisible; // @dynamic candidateListVisible;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 offset:(unsigned long long)arg3 inString:(id)arg4 rect:(struct CGRect)arg5 view:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 inString:(id)arg3 rect:(struct CGRect)arg4 view:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 inString:(id)arg3;
@property(readonly, copy) NSArray *candidates; // @dynamic candidates;
- (void)setFormattingBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)formattingBlock;
@property(copy) CDUnknownBlockType attributedStringForCandidate;
@property __weak id <NSCandidateListTouchBarItemDelegate> delegate; // @dynamic delegate;
@property __weak NSView<NSTextInputClient> *client; // @dynamic client;
@property(copy) NSString *customizationLabel; // @dynamic customizationLabel;
- (id)view;
- (id)viewController;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)_commonInit;
- (void)_automaticTextCompletionChanged:(id)arg1;
@property(readonly) NSCandidateListViewController *candidateListViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

