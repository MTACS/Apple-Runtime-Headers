//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVControlsViewController.h>

#import <AVKit/AVScrubberValueTransformerDelegate-Protocol.h>
#import <AVKit/AVSlowMotionSliderDelegate-Protocol.h>

@class AVChapterMenuController, AVOutputDeviceMenuController, AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerView, AVSlowMotionSlider, AVTimecodeTextField, AVTouchBarPlaybackControlsProvider, NSButton, NSMenu, NSString, NSTextField, NSView;

@interface AVPlayerControlsViewController : AVControlsViewController <AVScrubberValueTransformerDelegate, AVSlowMotionSliderDelegate>
{
    AVPlayerView *_playerView;
    BOOL _viewDidLoad;
    AVPlayerControllerTimeResolver *_intervalTimeResolver;
    AVPlayerControllerTimeResolver *_resolutionTimeResolver;
    NSTextField *_elapsedTimeTextField;
    AVTimecodeTextField *_timecodeTextField;
    AVTimecodeTextField *_frameCountTextField;
    NSTextField *_remainingTimeTextField;
    NSTextField *_durationTextField;
    NSButton *_durationStyleToggleButton;
    NSString *_maxFramecount;
    NSString *_maxTimecode;
    AVSlowMotionSlider *_slowMotionSlider;
    AVOutputDeviceMenuController *_outputDeviceMenuController;
    AVTouchBarPlaybackControlsProvider *_touchBarPlaybackControlsProvider;
    AVChapterMenuController *_chapterMenuController;
    NSMenu *_mediaSelectionMenu;
    NSButton *_scanBackwardButton;
    NSButton *_scanForwardButton;
    BOOL _ignoreRateChanges;
    double _downTime;
    BOOL _gasPedaling;
    BOOL _havePostGasPedalRate;
    double _postGasPedalRate;
    long long _activeTimeDisplayStyle;
    NSButton *_playPauseButton;
    NSButton *_pictureInPictureButton;
}

+ (id)keyPathsForValuesAffectingPlayPauseButtonEnabled;
+ (id)keyPathsForValuesAffectingScrubberHidden;
+ (id)keyPathsForValuesAffectingExternalPlaybackButtonHidden;
+ (id)keyPathsForValuesAffectingPlayerController;
@property(retain) NSButton *pictureInPictureButton; // @synthesize pictureInPictureButton=_pictureInPictureButton;
@property(retain) NSButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) long long activeTimeDisplayStyle; // @synthesize activeTimeDisplayStyle=_activeTimeDisplayStyle;
@property(readonly) AVTouchBarPlaybackControlsProvider *touchBarPlaybackControlsProvider; // @synthesize touchBarPlaybackControlsProvider=_touchBarPlaybackControlsProvider;
- (void).cxx_destruct;
- (void)slowMotionSliderMouseDownEventTrackingEnded:(id)arg1;
- (void)slowMotionSlider:(id)arg1 tracksMouseDownEventWithCurrentValue:(double)arg2;
- (void)slowMotionSliderMouseDownEventTrackingBegan:(id)arg1;
- (double)scrubberValueTransformer:(id)arg1 reverseTransformedTimeInterval:(double)arg2;
- (double)scrubberValueTransformer:(id)arg1 transformedTimeInterval:(double)arg2;
- (BOOL)scrubberValueTransformerRequiresTransformation:(id)arg1;
- (id)makeTouchBar;
- (void)_notifyPlayerViewDelegateOfMetricsCollectedEvent:(long long)arg1;
- (BOOL)_startGeneratingTimecodes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)frameCountEntered:(id)arg1;
- (void)timecodeEntered:(id)arg1;
- (void)timecodeButtonLeftClicked:(id)arg1;
- (void)_updateTimeDisplayStyle;
@property(nonatomic) long long userPreferredTimeDisplayStyle;
@property(readonly) BOOL playPauseButtonEnabled;
- (void)playPauseButtonPressed:(id)arg1;
- (void)setPlayingState:(long long)arg1;
- (void)_updateSlowMotionSlider;
- (void)externalPlaybackButtonPressed:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)mediaSelectionButtonPressed:(id)arg1;
- (void)chapterButtonPressed:(id)arg1;
- (void)updateLegibleMediaSelection:(id)arg1;
- (void)updateAudibleMediaSelection:(id)arg1;
- (void)scanForward:(id)arg1;
- (void)scanBackward:(id)arg1;
- (void)updateRateForIntegerValue:(long long)arg1 scanDirection:(long long)arg2;
- (void)hideControlsForAuxiliaryControl;
- (void)showControlsForAuxiliaryControl;
- (void)setView:(id)arg1;
@property(readonly) BOOL scrubberHidden;
@property(readonly) NSView *slowMotionSlider;
@property(readonly) BOOL externalPlaybackButtonHidden;
- (void)setOutputDeviceMenuController:(id)arg1;
@property(readonly) AVOutputDeviceMenuController *outputDeviceMenuController;
@property(readonly) AVPlayerControllerTimeResolver *resolutionTimeResolver;
@property(readonly) AVPlayerControllerTimeResolver *intervalTimeResolver;
@property(readonly) AVPlayerController *playerController;
@property(retain) AVPlayerView *playerView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

