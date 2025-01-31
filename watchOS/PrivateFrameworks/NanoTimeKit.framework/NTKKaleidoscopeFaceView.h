//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKAnalogFaceView.h>

#import <NanoTimeKit/CLKUIQuadViewDelegate-Protocol.h>
#import <NanoTimeKit/CLKUIResourceProviderDelegate-Protocol.h>
#import <NanoTimeKit/NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate-Protocol.h>
#import <NanoTimeKit/PUICCrownInputSequencerDelegate-Protocol.h>

@class CLKUIQuadView, CLKUIResourceProviderKey, CLKUITexture, NSDate, NSMapTable, NSMutableSet, NSString, NTKColorCircularUtilitarianFaceViewComplicationFactory, NTKKaleidoscopePathfinder, NTKPhoto, NTKRoundedCornerOverlayView, PUICClientSideAnimation, PUICCrownInputSequencer, UIColor, UIImage, UIImageView, UIView;

@interface NTKKaleidoscopeFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate, PUICCrownInputSequencerDelegate>
{
    CLKUIQuadView *_quadView;
    NTKRoundedCornerOverlayView *_cornerView;
    NTKColorCircularUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    PUICCrownInputSequencer *_crownInputSequencer;
    PUICClientSideAnimation *_wristRaiseRotationAnimation;
    _Bool _wristRaiseInFlight;
    float _crownOffset;
    unsigned int _frameCounter;
    float _contentScale;
    UIColor *_complicationColor;
    UIColor *_complicationPlatterColor;
    double _lastComplicationUpdateTime;
    struct CGColorSpace *_extendedSRGBcolorSpace;
    CLKUITexture *_userTexture;
    UIImage *_userImage;
    NTKPhoto *_userPhoto;
    NSString *_userUuid;
    NTKKaleidoscopePathfinder *_userPathfinder;
    CLKUIResourceProviderKey *_resourceProviderKey;
    float _crownTurnsPerRotation;
    double _dayDuration;
    NSMapTable *_quadPathfinderMapTable;
    NSMutableSet *_loadedAssets;
    NSDate *_tritium_quadOverrideDate;
    NSDate *_tritium_transitionFromDate;
    UIView *_tritium_transitionFromBackdropView;
    UIImageView *_tritium_transitionFromView;
    float _tritium_transitionFromDim;
    NSDate *_tritium_transitionToDate;
    UIView *_tritium_transitionToBackdropView;
    UIImageView *_tritium_transitionToView;
    float _tritium_transitionToDim;
    NSDate *_tritium_willTransitionToOnDate;
    PUICClientSideAnimation *_tritium_timeAdjustmentAnimation;
    float _tritium_currentFrameDim;
    unsigned int _currentAsset;
    unsigned int _currentStyle;
}

+ (Class)tritium_frameSpecifierClass;
@property(nonatomic) unsigned int currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) unsigned int currentAsset; // @synthesize currentAsset=_currentAsset;
- (void).cxx_destruct;
- (id)tritium_createFaceAnimator;
- (void)tritium_transitionToFrameSpecifier:(id)arg1;
- (void)tritium_synchronizeWithActiveFaceView:(id)arg1;
- (void)_animateToCurrentDateFromDate:(id)arg1;
- (void)tritium_unloadContentViews;
- (void)tritium_loadContentViews;
- (void)tritium_didTransitionToTritiumOff;
- (void)tritium_willTransitionToTritiumOffFromFrameSpecifier:(id)arg1;
- (void)tritium_didTransitionToTritiumOn;
- (void)tritium_willTransitionToTritiumOn;
- (void)tritium_applyBurnInStudyFakeActiveState;
- (_Bool)_wantsConstantSpeedZoom;
- (id)_quadWithStyle:(unsigned int)arg1 asset:(unsigned int)arg2;
- (id)_textureForAsset:(unsigned int)arg1;
- (id)_pathfinderForAsset:(unsigned int)arg1;
- (id)_imageForAsset:(unsigned int)arg1;
- (void)_updateComplications;
- (void)_updatePathForTime:(double)arg1;
- (id)_updatePathForQuadView:(id)arg1 time:(double)arg2 crownOffset:(float)arg3;
- (void)_updateRotationForQuadView:(id)arg1 time:(double)arg2 crownOffset:(float)arg3;
- (void)_updateUserContent;
- (float)_crownTurnsForStyle:(unsigned int)arg1;
- (float)_complicationAlphaForEditMode:(int)arg1;
- (float)_contentScaleForEditMode:(int)arg1;
- (float)_contentAlphaForEditMode:(int)arg1;
- (float)_handAlphaForEditMode:(int)arg1;
- (_Bool)_wantsMinorDetents;
- (void)_updateFramerate;
- (void)setDataMode:(int)arg1;
- (void)screenWillTurnOn;
- (void)screenDidTurnOff;
- (void)crownInputSequencerDidEndDecelerating:(id)arg1;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)_loadCrownInputSequencer;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)_updateDayDuration;
- (void)_updateDayDurationOnNextRunloopTurn;
- (void)_resetCrownOffset;
- (void)handleScreenBlanked;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (id)resourceProviderKey;
- (id)provideAtlasBacking:(id)arg1;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (_Bool)_supportsUnadornedSnapshot;
- (int)_keylineStyleForComplicationSlot:(id)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (int)_complicationPickerStyleForSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (_Bool)_isEditOptionFullscreen:(id)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (float)_verticalPaddingForStatusBar;
- (struct CGPoint)_contentCenterOffset;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (id)_pickerMaskForSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(float *)arg1 centerAngle:(float *)arg2 maxAngularWidth:(float *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (_Bool)_slotSupportsCurvedText:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)_configureTimeView:(id)arg1;
- (double)_kaleidoscopeTimeForAsset:(unsigned int)arg1;
- (void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (_Bool)slotUsesCurvedText:(id)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_updateWithAsset:(unsigned int)arg1;
- (void)_loadCurrentQuad;
- (void)dealloc;
- (id)initWithFaceStyle:(int)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

