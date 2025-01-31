//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKit/CSLSAOTViewController-Protocol.h>
#import <NanoTimeKit/NTKComplicationControllerTritiumDelegate-Protocol.h>
#import <NanoTimeKit/NTKFaceObserver-Protocol.h>
#import <NanoTimeKit/NTKFaceViewDelegate-Protocol.h>
#import <NanoTimeKit/NTKFaceViewTritiumDelegate-Protocol.h>

@class NSCountedSet, NSMutableDictionary, NSString, NSTimer, NTKFace, NTKFaceView, UILabel, UIView;
@protocol NTKClockStatusBarViewController, NTKTritiumFaceView, NTKTritiumViewControllerDelegate;

@interface NTKTritiumViewController : UIViewController <NTKFaceObserver, NTKFaceViewDelegate, NTKComplicationControllerTritiumDelegate, NTKFaceViewTritiumDelegate, CSLSAOTViewController>
{
    NTKFace *_face;
    _Bool _faceConfigurationsHaveChanged;
    UIView *_contentView;
    UIView *_debugOverlayView;
    UIView *_errorView;
    UILabel *_debugLabel;
    UIViewController<NTKClockStatusBarViewController> *_statusBarViewController;
    NTKFaceView<NTKTritiumFaceView> *_faceView;
    NSMutableDictionary *_slotToComplicationControllerMapping;
    _Bool _randomizedComplicationData;
    NSMutableDictionary *_slotToRandomizedTimelineMapping;
    CDUnknownBlockType _synchronizeWithActiveFaceView;
    _Bool _needsSynchronizationWithActiveFaceView;
    NSTimer *_invalidateFlipbookFramesTimer;
    NSCountedSet *_flipbookInvalidationReasons;
    _Bool _debugForceComplicationToUseActiveEntries;
    id <NTKTritiumViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <NTKTritiumViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NTKFace *face; // @synthesize face=_face;
- (void).cxx_destruct;
- (void)setNeedsInvalidateFramesOnFaceView:(id)arg1 withReason:(id)arg2;
- (void)complicationControllerTimelineEntriesDidChange:(id)arg1;
- (id)faceViewComplicationForSlot:(id)arg1;
- (id)faceViewComplicationAppIdentifierForSlot:(id)arg1;
- (_Bool)faceViewShouldIgnoreSnapshotImages;
- (_Bool)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(_Bool)arg2;
- (void)faceViewWantsToPresentViewController:(id)arg1;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect)arg1;
- (void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(_Bool)arg2;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewDidScrubToDate:(id)arg1 forced:(_Bool)arg2;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewDidChangePaddingForStatusBar;
- (void)faceViewDidChangeWantsStatusBarIconShadow;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(int)arg1;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewWantsStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)faceViewComplicationIsEmptyForSlot:(id)arg1;
- (id)faceViewAllVisibleComplicationsForCurrentConfiguration;
- (id)faceViewComplicationSlotsHiddenByEditOption:(id)arg1;
- (id)faceViewEditOptionThatHidesAllComplications;
- (id)faceViewComplicationSlots;
- (void)_invalidateFlipbookFramesWithReason:(id)arg1;
- (void)_coalesceInvalidateFlipbookFramesWithReason:(id)arg1;
- (void)_setupTritiumDebugViewsIfNecessary;
- (void)_generateRandomizedTimelinesFromStartDate:(id)arg1;
- (void)_transitionTimelineComplicationController:(id)arg1 displayWrapper:(id)arg2 slot:(id)arg3 fromDate:(id)arg4 toDate:(id)arg5 fraction:(float)arg6;
- (void)_transitionLegacyComplicationController:(id)arg1 date:(id)arg2;
- (void)_transitionComplicationAtSlot:(id)arg1 displayWrapper:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4 fraction:(float)arg5;
- (void)updateToFrame:(id)arg1;
- (id)framesForAnimationFromTime:(id)arg1 toTime:(id)arg2;
- (void)_updateStatusBar;
- (void)_setupComplications;
- (void)_transitonFaceViewToTritiumOn;
- (void)_applyFaceConfigurationsIfNecessary;
- (void)_removeFaceViewContent;
- (void)prepareToEnterTritium;
- (void)renderSynchronously;
- (void)performTritiumToolSnapshotHack;
- (_Bool)configureForBurnInStudyWithStartDate:(id)arg1 forceStatusBarHidden:(_Bool)arg2 content:(unsigned int)arg3 renderFaceActiveState:(_Bool)arg4 activeDigitalTimeLabelFontOverride:(id)arg5;
- (void)teardown;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)setNeedsChangeFaceConfigurations;
- (void)_tritiumPrivacyEnabledDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithStatusBarClass:(Class)arg1 statusBarViewControllerStatusObserver:(id)arg2 faceViewSynchronizer:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

