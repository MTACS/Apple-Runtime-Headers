//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKFaceView.h>

#import <NanoTimeKit/CLKMonochromeFilterProvider-Protocol.h>
#import <NanoTimeKit/NTKSiderealDataSourceDelegate-Protocol.h>
#import <NanoTimeKit/NTKTimeView-Protocol.h>
#import <NanoTimeKit/NTKTritiumMetalContentView-Protocol.h>
#import <NanoTimeKit/PUICCrownInputSequencerDelegate-Protocol.h>

@class CALayer, CAShapeLayer, CSLPIMinorDetentAssertion, NSCalendar, NSDateFormatter, NSString, NSTimer, NTKFaceViewTapControl, NTKSiderealAuxiliaryDialLabels, NTKSiderealDataSource, NTKSiderealDialBackgroundView, NTKSiderealSolarContainerView, NTKSiderealSolarOrbitView, NTKSiderealTimeView, NTKSiderealWaypointsView, NTKWhistlerAnalogFaceViewComplicationFactory, PUICClientSideAnimation, PUICCrownInputSequencer, UILabel, UIView;

@interface NTKSiderealFaceView : NTKFaceView <NTKTimeView, NTKSiderealDataSourceDelegate, CLKMonochromeFilterProvider, PUICCrownInputSequencerDelegate, NTKTritiumMetalContentView>
{
    int _previousDataMode;
    NSCalendar *_calendar;
    NTKWhistlerAnalogFaceViewComplicationFactory *_faceViewComplicationFactory;
    PUICCrownInputSequencer *_crownSequencer;
    CSLPIMinorDetentAssertion *_minorDetentAssertion;
    _Bool _useDetents;
    _Bool _isHandlingHardwareEvents;
    NSTimer *_wheelDelayTimer;
    NSTimer *_buttonPressTimer;
    NTKSiderealDataSource *_dataSource;
    struct NSNumber *_clockTimerToken;
    float _currentSolarDayProgress;
    float _interactionProgress;
    float _lastTestedWaypointProgress;
    NTKSiderealDialBackgroundView *_dialBackgroundView;
    NTKSiderealSolarContainerView *_solarContainerView;
    NTKSiderealSolarOrbitView *_solarOrbitView;
    NTKSiderealWaypointsView *_waypointsView;
    NTKSiderealAuxiliaryDialLabels *_auxiliaryDialLabels;
    NTKSiderealTimeView *_siderealTimeView;
    UILabel *_offsetLabel;
    UIView *_darkeningContainerView;
    CAShapeLayer *_dialDarkeningLayer;
    CALayer *_timeViewDarkeningLayer;
    NSDateFormatter *_interactiveModeDateFormatter;
    NTKFaceViewTapControl *_viewModeTapButton;
    unsigned int _viewMode;
    unsigned int _previousViewMode;
    unsigned int _transitionState;
    PUICClientSideAnimation *_dayAnimation;
    PUICClientSideAnimation *_viewModeInterpolationAnimation;
    CDUnknownBlockType _waypointSettleAnimationBlock;
    float _breathScaleModifier;
    float _rubberBandScaleModifier;
    float _tritium_dimming;
}

+ (Class)tritium_frameSpecifierClass;
+ (int)uiSensitivity;
- (void).cxx_destruct;
- (id)tritium_createFaceAnimator;
- (void)tritium_didTransitionToTritiumOn;
- (void)tritium_willTransitionToTritiumOn;
- (void)tritium_didTransitionToTritiumOff;
- (void)tritium_willTransitionToTritiumOffFromFrameSpecifier:(id)arg1;
- (void)tritium_transitionToFrameSpecifier:(id)arg1;
- (void)tritium_willSnapshotForBurnInStudy;
- (void)tritium_invalidateMetalContentForSnapshot;
- (void)tritium_synchronizeWithActiveFaceView:(id)arg1;
- (void)tritium_prepareForTransitionToTritiumOnAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)tritium_unloadContentViews;
- (void)tritium_loadContentViews;
- (id)_innerComplicationColors;
- (id)_outerComplicationColors;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (id)filterForView:(id)arg1 style:(int)arg2;
- (id)filterForView:(id)arg1 style:(int)arg2 fraction:(float)arg3;
- (struct CGPath *)newTimeViewPathForDarkeningView;
- (float)_idealizedSolarDayProgress;
- (float)_solarDayProgressForCurrentTime;
- (struct CGAffineTransform)_timeViewScaleTransform;
- (struct CGImage *)newImageRefFromView:(id)arg1;
- (struct CGImage *)_waypointViewImageRef;
- (struct CGImage *)_dialViewImageRef;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (int)_complicationPickerStyleForSlot:(id)arg1;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (struct CGRect)_timeViewKeylineFrameForEditing;
- (struct CGRect)_keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (int)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (void)tearDownDarkeningView;
- (void)setupDarkeningViewIfNeeded;
- (float)_timeDarkeningViewAlphaForEditMode:(int)arg1;
- (float)_darkeningViewAlphaForEditMode:(int)arg1;
- (float)_complicationAlphaForEditMode:(int)arg1;
- (float)_timeViewAlphaForEditMode:(int)arg1;
- (float)_dialAlphaForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureForEditMode:(int)arg1;
- (void)_applyScaleToTimeView;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_tearDownOffsetLabel;
- (void)_loadOffsetLabelIfNeeded;
- (void)_tearDownAuxiliaryDialLabels;
- (void)_loadAuxiliaryDialLabelsIfNeeded;
- (void)_updateTimeLabelsWithReferenceDate:(id)arg1 overrideDate:(id)arg2;
- (void)_updateWaypointLabel;
- (void)_updateSolarOrbitGlowPath:(float)arg1;
- (void)_updateStatusBarVisibility;
- (void)_cleanupAfterSettingViewMode:(unsigned int)arg1;
- (void)_interpolateFromViewMode:(unsigned int)arg1 toViewMode:(unsigned int)arg2 progress:(float)arg3;
- (void)_prepareForSettingViewMode:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)_setViewMode:(unsigned int)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setViewMode:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)_handleViewModeTapGesture:(id)arg1;
- (_Bool)_canEnterInteractiveMode;
- (void)_updateTimeViewOrbitWithSolarDayProgress:(float)arg1;
- (_Bool)_isDayAnimationRunning;
- (void)_animateSolarDayFromProgress:(float)arg1 toProgress:(float)arg2 minDuration:(float)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_forceSolarDayUpdate;
- (void)_setSolarDayProgress:(float)arg1;
- (void)_updateSolarDayMask;
- (void)dataSourceDidUpdateSolarData;
- (void)_updateLocale;
- (void)_asyncUpdateLocale;
- (void)_timeZoneChanged:(id)arg1;
- (void)_significantTimeChanged;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_timeDidUpdate:(id)arg1;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (id)_faceDisplayTime;
- (void)_detentIfNecessaryForOffset:(float)arg1;
- (void)_disableDetents;
- (void)_enableDetents;
- (void)_resetInteractionProgress;
- (void)_updateTimeScrubbingContent:(float)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)_cancelWaypointSettleAnimation;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)_buttonPressTimerFired;
- (void)_wheelDelayTimerFired;
- (_Bool)_handlePhysicalButton:(unsigned int)arg1 event:(unsigned int)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_updateFramerate;
- (void)screenWillTurnOn;
- (void)screenDidTurnOff;
@property(nonatomic, getter=isFrozen) _Bool frozen;
- (void)_applyDataMode;
- (void)setDataMode:(int)arg1;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (_Bool)_supportsTimeScrubbing;
- (_Bool)_wantsMinorDetents;
- (void)handleScreenBlanked;
- (void)_becameInactiveFace;
- (void)_becameActiveFace;
- (void)layoutSubviews;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_unloadTimeView;
- (void)_loadTimeView;
- (void)_unloadSolarViews;
- (void)_loadSolarViews;
- (void)_unloadSolarOrbit;
- (void)_loadSolarOrbit;
- (void)_unloadDial;
- (void)_loadDial;
- (void)_unloadUI;
- (void)_loadUI;
- (void)dealloc;
- (id)initWithFaceStyle:(int)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

