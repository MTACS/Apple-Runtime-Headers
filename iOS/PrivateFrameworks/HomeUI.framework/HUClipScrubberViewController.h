//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraClipFeedbackObserving-Protocol.h>
#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/HUCameraPlayerScrubbing-Protocol.h>
#import <HomeUI/HUFeedbackConsentViewControllerDelegate-Protocol.h>
#import <HomeUI/NSURLSessionDelegate-Protocol.h>

@class CADisplayLink, HFCameraPlaybackEngine, HUClipScrubberDataSource, HUClipScrubberScrollDelegate, HUClipScrubberView, HULegibilityLabel, NSLayoutConstraint, NSString, NSTimer, UIButton, UIView;

@interface HUClipScrubberViewController : UIViewController <NSURLSessionDelegate, HUFeedbackConsentViewControllerDelegate, HUCameraPlayerScrubbing, HFCameraClipFeedbackObserving, HFCameraPlaybackEngineObserver>
{
    _Bool _isVisible;
    CDUnknownBlockType _accessoryButtonHandler;
    CDUnknownBlockType _beginEditingHandler;
    CDUnknownBlockType _endEditingHandler;
    CDUnknownBlockType _deletionHandler;
    HFCameraPlaybackEngine *_playbackEngine;
    HULegibilityLabel *_dayLabel;
    HULegibilityLabel *_timeLabel;
    HUClipScrubberView *_scrubberView;
    UIButton *_selectionButton;
    UIButton *_nearbyAccessoriesButton;
    UIButton *_feedbackButton;
    UIView *_selectionPlatter;
    UIView *_feedbackPlatter;
    UIView *_nearbyAccessoriesPlatter;
    HUClipScrubberDataSource *_dataSource;
    HUClipScrubberScrollDelegate *_clipScrollDelegate;
    NSLayoutConstraint *_scrubberViewRightAnchorConstraint;
    NSLayoutConstraint *_scrubberViewLeftAnchorConstraint;
    NSLayoutConstraint *_feedbackPlatterTopAnchorConstraint;
    NSLayoutConstraint *_nearbyAccessoriesPlatterTopAnchorConstraint;
    NSLayoutConstraint *_selectionPlatterTopAnchorConstraint;
    NSTimer *_liveTimer;
    CADisplayLink *_scrubberUpdateDisplayLink;
}

+ (id)_legibilityLabelFactory;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) CADisplayLink *scrubberUpdateDisplayLink; // @synthesize scrubberUpdateDisplayLink=_scrubberUpdateDisplayLink;
@property(retain, nonatomic) NSTimer *liveTimer; // @synthesize liveTimer=_liveTimer;
@property(retain, nonatomic) NSLayoutConstraint *selectionPlatterTopAnchorConstraint; // @synthesize selectionPlatterTopAnchorConstraint=_selectionPlatterTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nearbyAccessoriesPlatterTopAnchorConstraint; // @synthesize nearbyAccessoriesPlatterTopAnchorConstraint=_nearbyAccessoriesPlatterTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *feedbackPlatterTopAnchorConstraint; // @synthesize feedbackPlatterTopAnchorConstraint=_feedbackPlatterTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrubberViewLeftAnchorConstraint; // @synthesize scrubberViewLeftAnchorConstraint=_scrubberViewLeftAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrubberViewRightAnchorConstraint; // @synthesize scrubberViewRightAnchorConstraint=_scrubberViewRightAnchorConstraint;
@property(retain, nonatomic) HUClipScrubberScrollDelegate *clipScrollDelegate; // @synthesize clipScrollDelegate=_clipScrollDelegate;
@property(retain, nonatomic) HUClipScrubberDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *nearbyAccessoriesPlatter; // @synthesize nearbyAccessoriesPlatter=_nearbyAccessoriesPlatter;
@property(retain, nonatomic) UIView *feedbackPlatter; // @synthesize feedbackPlatter=_feedbackPlatter;
@property(retain, nonatomic) UIView *selectionPlatter; // @synthesize selectionPlatter=_selectionPlatter;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UIButton *nearbyAccessoriesButton; // @synthesize nearbyAccessoriesButton=_nearbyAccessoriesButton;
@property(retain, nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(retain, nonatomic) HUClipScrubberView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property(retain, nonatomic) HULegibilityLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) HULegibilityLabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(nonatomic) __weak HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(copy, nonatomic) CDUnknownBlockType deletionHandler; // @synthesize deletionHandler=_deletionHandler;
@property(copy, nonatomic) CDUnknownBlockType endEditingHandler; // @synthesize endEditingHandler=_endEditingHandler;
@property(copy, nonatomic) CDUnknownBlockType beginEditingHandler; // @synthesize beginEditingHandler=_beginEditingHandler;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonHandler; // @synthesize accessoryButtonHandler=_accessoryButtonHandler;
- (void).cxx_destruct;
- (void)manager:(id)arg1 failedToSubmitClipWithIdentifier:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 didSubmitCameraClips:(id)arg2;
- (void)manager:(id)arg1 didSubmitCameraClip:(id)arg2;
- (void)submitAllUnsubmittedClips;
- (void)verifySubmitAllClips;
- (void)submitCurrentClip;
- (id)_feedbackClip;
- (void)presentPreviouslySubmittedClipAlert;
- (void)presentFeedbackOptions;
- (void)didSelectFeedbackButton;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showEditInterface;
- (void)dismissEditInterface;
- (void)updateTimelineState:(unsigned long long)arg1;
- (void)removeLiveButtonHighlighting;
- (void)showDeleteInterface;
- (void)deleteClip;
- (id)_displayableURLForCameraClipURL:(id)arg1;
- (id)outputURLForClip:(id)arg1;
- (id)uploadURLCameraClip:(id)arg1;
- (void)exportLocalClipAtURL:(id)arg1;
- (void)exportCurrentClipWithCompletion:(CDUnknownBlockType)arg1;
- (void)consentController:(id)arg1 didFinishConsentWithAnswer:(_Bool)arg2;
- (void)presentFeedbackConsent;
- (unsigned long long)displayMode;
- (_Bool)_cellBoundsContainsPlayhead:(id)arg1;
- (id)platterWithView:(id)arg1;
- (void)didSelectLeftActionButton:(id)arg1;
- (void)didSelectRightActionButton:(id)arg1;
- (void)didTap:(id)arg1;
- (void)didPinch:(id)arg1;
- (_Bool)userIsScrubbing;
- (void)_updatePlaybackPosition:(id)arg1 animated:(_Bool)arg2;
- (void)_scrubberDisplayLinkTick:(id)arg1;
- (void)_updateScrubberDisplayLinkState;
@property(readonly, nonatomic) double currentScrubberResolution;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2;
- (void)showAssociatedAccessories;
- (void)cancelLiveTimer;
- (void)startLiveTimer;
- (void)updateDisplayForLiveMode;
- (void)_updateTimeLabel;
- (void)changeToLiveMode;
- (void)togglePlayPause;
- (void)_addConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateScrubberViewAndAssociatedConstraints;
- (void)loadView;
- (void)reloadClipManager:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

