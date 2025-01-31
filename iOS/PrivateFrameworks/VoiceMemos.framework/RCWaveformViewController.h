//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/RCWaveformRendererDelegate-Protocol.h>
#import <VoiceMemos/RCWaveformSelectionOverlayDelegate-Protocol.h>
#import <VoiceMemos/UIScrollViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSMutableArray, NSString, NSTimer, RCLayoutMetrics, RCUIConfiguration, RCWaveformDataSource, RCWaveformRenderer, RCWaveformScrollView, RCWaveformSelectionOverlay, UIPinchGestureRecognizer, UIView;
@protocol RCTimeController, RCWaveformViewDelegate;

@interface RCWaveformViewController : UIViewController <UIScrollViewDelegate, RCWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate>
{
    RCWaveformScrollView *_scrollView;
    RCWaveformRenderer *_rendererController;
    RCWaveformSelectionOverlay *_selectionOverlay;
    UIView *_timeMarkerView;
    UIView *_backgroundView;
    UIView *_backgroundWaveFormHighlightView;
    UIView *_selectionBackgroundView;
    NSMutableArray *_timeMarkerViews;
    NSTimer *_overlayAutoscrollTimer;
    _Bool _timeMarkerViewsNeedInitialLayout;
    _Bool _timeMarkerViewsUpdatesDisabled;
    _Bool _scrubbing;
    float _resumingToForegroundAutoscrollRate;
    _Bool _isCompactView;
    double _layoutWidth;
    double _layoutHeight;
    double _desiredTimeDeltaForVisibleTimeRange;
    double _overlayAutoscrollRateForSelectionTracking;
    double _overlayAutoscrollBaseDuration;
    NSLayoutConstraint *_backgroundWaveFormHighlightViewLeftAlignment;
    NSLayoutConstraint *_backgroundWaveFormHighlightViewRightAlignment;
    NSLayoutConstraint *_renderViewBottomInsetConstraint;
    double _pointsPerSecond;
    double _pointsPerSecondScale;
    UIPinchGestureRecognizer *_pinchGesture;
    _Bool _isPlayback;
    _Bool _scrubbingEnabled;
    _Bool _playing;
    _Bool _capturing;
    _Bool _editing;
    _Bool _isOverview;
    _Bool _clipTimeMarkersToDuration;
    _Bool _selectedTimeRangeEditingEnabled;
    _Bool _selectedTimeRangeScrubbingEnabled;
    _Bool _selectionOverlayShouldUseInsertMode;
    _Bool _showPlayBarOnly;
    id <RCWaveformViewDelegate> _delegate;
    RCUIConfiguration *_UIConfiguration;
    RCLayoutMetrics *_layoutMetrics;
    unsigned long long _currentTimeDisplayOptions;
    double _currentTime;
    double _duration;
    double _maximumSelectionDuration;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _highlightTimeRange;
    CDStruct_73a5d3ca _selectedTimeRange;
}

@property(nonatomic) _Bool showPlayBarOnly; // @synthesize showPlayBarOnly=_showPlayBarOnly;
@property(nonatomic) _Bool selectionOverlayShouldUseInsertMode; // @synthesize selectionOverlayShouldUseInsertMode=_selectionOverlayShouldUseInsertMode;
@property(nonatomic, getter=isSelectedTimeRangeEditingEnabled) _Bool selectedTimeRangeScrubbingEnabled; // @synthesize selectedTimeRangeScrubbingEnabled=_selectedTimeRangeScrubbingEnabled;
@property(nonatomic) double maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
@property(nonatomic) CDStruct_73a5d3ca selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) CDStruct_73a5d3ca highlightTimeRange; // @synthesize highlightTimeRange=_highlightTimeRange;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool clipTimeMarkersToDuration; // @synthesize clipTimeMarkersToDuration=_clipTimeMarkersToDuration;
@property(nonatomic) unsigned long long currentTimeDisplayOptions; // @synthesize currentTimeDisplayOptions=_currentTimeDisplayOptions;
@property(retain, nonatomic) RCLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property(nonatomic) _Bool isOverview; // @synthesize isOverview=_isOverview;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool capturing; // @synthesize capturing=_capturing;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) _Bool isPlayback; // @synthesize isPlayback=_isPlayback;
@property(nonatomic) __weak id <RCWaveformViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_scrollViewPanGestureRecognized:(id)arg1;
- (void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
- (void)_setTimeMarkerViewsNeedInitialLayout:(_Bool)arg1;
- (struct CGRect)_frameForTimeMarkerView:(id)arg1;
- (void)_updateCurrentTimeDisplay;
- (void)_updateSelectionOverlayWithAnimationDuration:(double)arg1;
- (void)_updateVisibleAreaWithAnimationDuration:(double)arg1;
- (void)fixupScrollPositionToMatchIndicatorPositionTime;
- (void)_updateAnnotationViews;
- (void)_updateWaveformViewContentSizeAndOffset;
- (void)_updateWaveformViewContentSizeAndOffsetToSize:(double)arg1;
- (void)_updateBackgroundWaveformHighlight;
- (void)_setTimeMarkerViewUpdatesDisabled:(_Bool)arg1;
- (void)_autoscrollOverlayIfNecessary;
- (void)_setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 updateVisibleTimeRange:(_Bool)arg2 updateWaveformViewContentSizeAndOffset:(_Bool)arg3 notifyDelegate:(_Bool)arg4 animationDuration:(double)arg5;
- (void)_setVisibleTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (CDStruct_73a5d3ca)_visibleTimeRangeForCurrentSelectionTimeRange;
- (void)updateBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColors;
@property(nonatomic) double desiredTimeDeltaForVisibleTimeRange;
@property(readonly, nonatomic) id <RCTimeController> activeTimeController;
- (void)waveformRenderer:(id)arg1 contentWidthDidChange:(double)arg2;
- (_Bool)isZooming;
- (double)waveformSelectionOverlayGetCurrentTime:(id)arg1;
- (double)waveformSelectionOverlay:(id)arg1 timeForOffset:(double)arg2;
- (double)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
- (double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(_Bool)arg3;
- (CDStruct_73a5d3ca)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(CDStruct_73a5d3ca)arg2 isTrackingMin:(_Bool)arg3 isTrackingMax:(_Bool)arg4;
- (void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(_Bool)arg2 endTime:(_Bool)arg3 assetCurrentTime:(_Bool)arg4;
- (void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(_Bool)arg2 endTime:(_Bool)arg3 assetCurrentTime:(_Bool)arg4;
- (void)stopScrolling;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_scrubbingDidFinish;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)_isScrubbing;
- (_Bool)_isScrubbingSelectionTimeRange;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic) _Bool isCompactView;
- (void)reloadOverlayOffsets;
- (void)viewDidLayoutSubviews;
- (void)enableZooming:(_Bool)arg1;
- (void)scaleWaveform:(id)arg1;
- (double)pointsPerSecond;
- (void)resetZoomScale;
- (_Bool)isSelectionOverlayCurrentlyTracking;
@property(nonatomic, getter=isSelectedTimeRangeEditingEnabled) _Bool selectedTimeRangeEditingEnabled; // @synthesize selectedTimeRangeEditingEnabled=_selectedTimeRangeEditingEnabled;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2;
- (CDStruct_73a5d3ca)timeRangeByInsettingVisibleTimeRange:(CDStruct_73a5d3ca)arg1 inset:(double)arg2;
- (CDStruct_73a5d3ca)setHighlightTimeRange;
- (void)setVisibleTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2;
- (void)updateVisibleTimeRangeToFullDuration;
- (double)currentTimeIndicatorCoordinate;
- (struct CGRect)waveformRectForLayoutBounds:(struct CGRect)arg1;
@property(retain, nonatomic) RCWaveformDataSource *dataSource;
- (void)dealloc;
- (id)initWithOverviewWaveform:(_Bool)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

