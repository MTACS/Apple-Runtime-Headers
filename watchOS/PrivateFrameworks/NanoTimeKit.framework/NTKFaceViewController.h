//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKit/NTKClockHardwareInput-Protocol.h>
#import <NanoTimeKit/NTKClockIconZoomAnimator-Protocol.h>
#import <NanoTimeKit/NTKComplicationPickerViewDataSource-Protocol.h>
#import <NanoTimeKit/NTKFaceEditViewDelegate-Protocol.h>
#import <NanoTimeKit/NTKFaceObserver-Protocol.h>
#import <NanoTimeKit/NTKFaceViewDelegate-Protocol.h>
#import <NanoTimeKit/NTKSensitiveUIStateObserver-Protocol.h>
#import <NanoTimeKit/NTKTritiumAnimationControllerViewProvider-Protocol.h>
#import <NanoTimeKit/NTKTritiumFaceAnimatorDelegate-Protocol.h>

@class NSCache, NSDate, NSMutableDictionary, NSObject, NSString, NTKComplicationController, NTKComplicationDisplayWrapperView, NTKDelayedBlock, NTKFace, NTKFaceEditView, NTKFaceView, PUICClientSideAnimation, UIView;
@protocol NTKClockStatusBarViewController, NTKFaceViewControllerDelegate, OS_dispatch_source;

@interface NTKFaceViewController : UIViewController <NTKFaceEditViewDelegate, NTKComplicationPickerViewDataSource, NTKSensitiveUIStateObserver, NTKTritiumFaceAnimatorDelegate, NTKClockIconZoomAnimator, NTKClockHardwareInput, NTKFaceViewDelegate, NTKFaceObserver, NTKTritiumAnimationControllerViewProvider>
{
    NTKFaceView *_faceView;
    struct os_unfair_lock_s _normalComplicationControllersLock;
    NSMutableDictionary *_normalComplicationControllers;
    struct os_unfair_lock_s _detachedComplicationControllersLock;
    NSMutableDictionary *_detachedComplicationControllers;
    NTKFaceEditView *_editView;
    _Bool _editingComplications;
    PUICClientSideAnimation *_showEditingAnimation;
    NSCache *_appearanceVariantsCache;
    NSCache *_informationVariantsCache;
    _Bool _frozen;
    _Bool _becomeLiveOnUnfreeze;
    NTKDelayedBlock *_delayedFreezeBlock;
    _Bool _readyToApplyConfiguration;
    _Bool _animatingVariant;
    _Bool _newValueWhileAnimating;
    unsigned int _delayedAnimationValue;
    _Bool _deviceLocked;
    _Bool _sensitiveUIHidden;
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    UIView *_zoomingContainerView;
    NSDate *_scrubDate;
    NSObject<OS_dispatch_source> *_time_travel_update_timer;
    NTKComplicationDisplayWrapperView *_pptComplicationDisplay;
    NTKComplicationController *_pptComplicationController;
    _Bool _wantsRemoveUnadorned;
    _Bool _hasGoneLive;
    _Bool _hasUsedUnadornedSnapshot;
    _Bool _hasRemovedUnadornedSnapshot;
    NSString *_lastTappedSlotIdentifier;
    struct CGRect _faceLaunchRect;
    NSMutableDictionary *_tritiumTransitionSlotToWrapperViewMapping;
    UIViewController<NTKClockStatusBarViewController> *_tritiumStatusBarViewController;
    _Bool _shouldShowSnapshot;
    _Bool _supressesNonSnapshotUI;
    _Bool _showsCanonicalContent;
    _Bool _showContentForUnadornedSnapshot;
    _Bool _ignoreSnapshotImages;
    _Bool _showsLockedUI;
    id <NTKFaceViewControllerDelegate> _delegate;
    int _dataMode;
    NSDate *_pauseDate;
    UIViewController<NTKClockStatusBarViewController> *_statusBarViewController;
    NTKFace *_face;
}

+ (float)_complicationPickerAlphaForTransitionFraction:(float)arg1;
+ (id)_createNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2 face:(id)arg3 faceView:(id)arg4;
+ (void)initialize;
@property(readonly, nonatomic) NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
@property(retain, nonatomic) UIViewController<NTKClockStatusBarViewController> *statusBarViewController; // @synthesize statusBarViewController=_statusBarViewController;
@property(nonatomic) _Bool showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(nonatomic) _Bool ignoreSnapshotImages; // @synthesize ignoreSnapshotImages=_ignoreSnapshotImages;
@property(nonatomic) _Bool showContentForUnadornedSnapshot; // @synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot;
@property(nonatomic) _Bool showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(nonatomic) int dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) _Bool supressesNonSnapshotUI; // @synthesize supressesNonSnapshotUI=_supressesNonSnapshotUI;
@property(nonatomic) _Bool shouldShowSnapshot; // @synthesize shouldShowSnapshot=_shouldShowSnapshot;
@property(nonatomic) __weak id <NTKFaceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_unadornedSnapshot;
- (id)_dailySnapshot;
- (_Bool)shouldLoadLiveFaceAtNextScreenOff;
- (void)_wrapperViewTapped:(id)arg1;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect)arg1;
- (void)_clearFaceLaunchRect;
- (void)_clearLastTappedComplication;
- (struct CGRect)launchRectForComplicationApplicationIdentifier:(id)arg1;
- (void)_configureBackgroundFillAlpha:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureForEditMode:(int)arg1;
- (id)_selectedVisibleSlotForEditMode:(int)arg1;
- (id)_controllerForComplication:(id)arg1 slot:(id)arg2;
- (id)_newNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2;
- (void)_updateInteractivityOfComplicationDisplays;
- (void)_removeNormalComplicationForSlot:(id)arg1 andDisconnectDisplay:(_Bool)arg2;
- (void)_removeDetachedComplicationForSlot:(id)arg1 andDisconnectDisplay:(_Bool)arg2;
- (void)_insertNormalComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (void)_insertDetachedComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (void)_ensureDetachedComplication:(id)arg1;
- (void)_ensureNormalComplication:(id)arg1 forSlot:(id)arg2;
- (void)_removeComplicationForSlot:(id)arg1;
- (void)_ensureComplication:(id)arg1 forSlot:(id)arg2;
- (void)_handleStatusBarChange;
- (void)_showStatusBarAfterWake;
- (id)currentOrderedComplicationApplicationIdentifiers;
- (void)performComplicationBackgroundDataRefresh;
- (void)handleScreenBlanked;
- (void)handleOrdinaryScreenWake;
- (void)handleWristRaiseScreenWake;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (_Bool)_handlePhysicalButton:(unsigned int)arg1 event:(unsigned int)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)_defaultCleanupAfterZoom;
- (void)_defaultSetZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_defaultPrepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)face:(id)arg1 didChangeOptionsForEditMode:(int)arg2;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (id)customEditOptionContainerViewForComplicationPickerView:(id)arg1;
- (id)complicationPickerView:(id)arg1 layoutRuleForComplicationDisplay:(id)arg2;
- (void)complicationPickerView:(id)arg1 getDisplay:(id *)arg2 controller:(id *)arg3 forComplication:(id)arg4;
- (id)PPTDescriptionForComplication:(id)arg1;
- (void)PPTCleanupLastComplication;
- (void)PPTCreateComplication:(id)arg1 forSlot:(id)arg2 synchronously:(_Bool)arg3;
- (void)PPTPrepareComplicationTest;
- (id)PPTUniqueComplicationsToSlotForCurrentFace;
- (void)tritium_removeStatusBarViewController;
- (void)tritium_setupStatusBarViewController;
- (void)tritium_cleanUpComplicationTransitionAtSlot:(id)arg1;
- (void)tritium_updateTransitionProgress:(float)arg1 forComplicationAtSlot:(id)arg2;
- (void)tritium_prepareTransitionForComplicationAtSlot:(id)arg1 willTurnTritiumOn:(_Bool)arg2;
- (void)tritiumFaceAnimator:(id)arg1 didUpdateStep:(id)arg2 fraction:(float)arg3;
- (void)tritiumFaceAnimator:(id)arg1 didTransitionStepToTritiumOff:(id)arg2;
- (void)tritiumFaceAnimator:(id)arg1 willTransitionStepToTritiumOff:(id)arg2;
- (void)tritiumFaceAnimator:(id)arg1 didTransitionStepToTritiumOn:(id)arg2;
- (void)tritiumFaceAnimator:(id)arg1 willTransitionStepToTritiumOn:(id)arg2;
- (id)faceViewAllVisibleComplicationsForCurrentConfiguration;
- (id)faceViewComplicationSlotsHiddenByEditOption:(id)arg1;
- (id)faceViewEditOptionThatHidesAllComplications;
- (id)faceViewComplicationSlots;
- (id)faceViewComplicationForSlot:(id)arg1;
- (id)faceViewComplicationAppIdentifierForSlot:(id)arg1;
- (_Bool)faceViewShouldIgnoreSnapshotImages;
- (_Bool)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(_Bool)arg2;
- (void)faceViewWantsToPresentViewController:(id)arg1;
- (void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(_Bool)arg2;
- (_Bool)faceViewComplicationIsEmptyForSlot:(id)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewDidScrubToDate:(id)arg1 forced:(_Bool)arg2;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(int)arg1;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewDidChangePaddingForStatusBar;
- (void)faceViewDidChangeWantsStatusBarIconShadow;
- (void)faceViewWantsStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)editViewShouldShowPageDotsOnBottom:(id)arg1;
- (void)editView:(id)arg1 keylineDidRubberBand:(float)arg2 forKey:(id)arg3 editMode:(int)arg4;
- (void)editView:(id)arg1 keylineDidBreathe:(float)arg2 forKey:(id)arg3 editMode:(int)arg4;
- (void)editView:(id)arg1 didTapKeylineForKey:(id)arg2 editMode:(int)arg3;
- (void)editView:(id)arg1 didScrollToFraction:(float)arg2 fromEditMode:(int)arg3 toEditMode:(int)arg4;
- (void)editView:(id)arg1 didStopAtEditMode:(int)arg2;
- (void)editViewWillBeginScrolling:(id)arg1;
- (_Bool)_shouldShowComplicationPickerForSlot:(id)arg1;
- (void)_configureLisaForSelectedSlot:(id)arg1 editMode:(int)arg2 animated:(_Bool)arg3;
- (void)_configureViewsForSelectedSlot:(id)arg1 editMode:(int)arg2;
- (id)_deactivatePickerViewForSlot:(id)arg1;
- (id)_ensurePickerViewForSlot:(id)arg1;
- (void)_tearDownEditing;
- (void)_updateComplicationLisaGesture;
- (void)_setupEditViewForHiddenComplications;
- (void)_setupEditViewForComplications;
- (void)_updateFaceAndViewWithOption:(id)arg1 forMode:(int)arg2 resourcePath:(id)arg3 slot:(id)arg4;
- (void)_setFaceViewResourceDirectoryFromFace;
- (void)_loadInitialComplicationVisibilityFromFace;
- (void)_endTransitionToValue:(int)arg1 forEditMode:(int)arg2;
- (void)_transitionFraction:(float)arg1 fromValue:(int)arg2 toValue:(int)arg3 forEditMode:(int)arg4 slot:(id)arg5;
- (void)_setupEditViewForCustomEditMode:(int)arg1;
- (id)_keylineLabelTextForOption:(id)arg1 customEditMode:(int)arg2;
- (void)_setupEditing;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canStopEditing;
- (void)hideFaceEditingUIAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideFaceEditingUIAnimated:(_Bool)arg1;
- (void)showEditingUIAnimated:(_Bool)arg1;
- (_Bool)dailySnapshotShowsComplication:(id)arg1 forSlot:(id)arg2;
- (void)_applyConfigurationWithDuration:(double)arg1;
- (void)_setDataMode:(int)arg1 becomeLiveOnUnfreeze:(_Bool)arg2;
- (void)_ensurePauseDate;
- (void)_ensureNotLive;
- (void)configureWithDuration:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateComplicationControllersAndDisplaysWithBlock:(CDUnknownBlockType)arg1;
- (void)getComplicationController:(id *)arg1 andDisplay:(id *)arg2 forSlot:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (void)prepareForSnapshotting;
- (id)blurSourceImage;
- (void)viewDidLayoutSubviews;
- (void)_faceSnapshotDidChange:(id)arg1;
- (void)sensitiveUIStateChanged;
- (void)_handleDeviceLockChange;
- (void)disableSlowMode;
- (void)enableSlowMode;
- (void)cleanupAfterOrb:(_Bool)arg1;
- (void)prepareForOrb;
- (void)unfreeze;
- (void)freezeAfterDelay:(double)arg1;
- (void)freeze;
- (_Bool)_shouldHideFaceUI;
- (void)loadView;
- (void)dealloc;
- (id)initWithFace:(id)arg1 configuration:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

