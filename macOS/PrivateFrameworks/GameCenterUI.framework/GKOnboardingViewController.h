//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUICore/UXViewController.h>

#import <GameCenterUI/NSViewControllerPresentationAnimator-Protocol.h>

@class GKBubbleFlowContainerView, NSButton, NSMutableDictionary, NSString, NSTextField, NSView, OBPrivacyLinkController;
@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingViewController : UXViewController <NSViewControllerPresentationAnimator>
{
    BOOL _presenting;
    id <GKOnboardingFlowDelegate> _delegate;
    NSString *_lastPersonalizationVersionDisplayed;
    unsigned long long _lastPrivacyNoticeVersionDisplayed;
    NSMutableDictionary *_analyticsPayload;
    NSView *_contentView;
    NSView *_privacyContainer;
    NSView *_bubblePlaceholder;
    NSButton *_nextButton;
    GKBubbleFlowContainerView *_bubblesContainerView;
    NSView *_bubblesAnchorView;
    NSTextField *_mainTitle;
    NSTextField *_subTitle;
    OBPrivacyLinkController *_privacyLink;
    double _transitionDuration;
}

@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(retain, nonatomic) NSTextField *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSTextField *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NSView *bubblesAnchorView; // @synthesize bubblesAnchorView=_bubblesAnchorView;
@property(retain, nonatomic) GKBubbleFlowContainerView *bubblesContainerView; // @synthesize bubblesContainerView=_bubblesContainerView;
@property(retain, nonatomic) NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSView *bubblePlaceholder; // @synthesize bubblePlaceholder=_bubblePlaceholder;
@property(retain, nonatomic) NSView *privacyContainer; // @synthesize privacyContainer=_privacyContainer;
@property NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableDictionary *analyticsPayload; // @synthesize analyticsPayload=_analyticsPayload;
@property(nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed; // @synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed;
@property(retain, nonatomic) NSString *lastPersonalizationVersionDisplayed; // @synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed;
@property(nonatomic) __weak id <GKOnboardingFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeConstraintsForView:(id)arg1;
- (id)basicAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)updateBubbleRectsWithScale:(double)arg1;
- (void)viewDidLayout;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)didDisplayPrivacyNotice;
- (void)showSignOutAlert;
- (void)presentPersonalizationScreen;
- (BOOL)shouldPresentPersonalizationScreen;
- (void)nextPressed:(id)arg1;
- (void)signOutPressed:(id)arg1;
- (void)addPrivacyLink;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

