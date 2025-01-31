//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBIconZoomAnimator.h>

@class NSMutableArray, SBHScaleZoomSettings, SBIcon, SBIconView, SBReversibleLayerPropertyAnimator, UIView;
@protocol SBScaleIconZoomAnimationContaining;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIconView *_targetIconView;
    SBReversibleLayerPropertyAnimator *_homeScreenScaleAnimator;
    SBReversibleLayerPropertyAnimator *_targetIconScaleXAnimator;
    SBReversibleLayerPropertyAnimator *_targetIconScaleYAnimator;
    NSMutableArray *_animationCompletions;
    SBIcon *_targetIcon;
    UIView *_targetIconPositioningView;
    struct CGPoint _zoomScaleDimension;
    struct CGPoint _zoomedTargetIconCenter;
    struct CGPoint _targetIconCenter;
}

@property(readonly, nonatomic) struct CGPoint targetIconCenter; // @synthesize targetIconCenter=_targetIconCenter;
@property(readonly, nonatomic) struct CGPoint zoomedTargetIconCenter; // @synthesize zoomedTargetIconCenter=_zoomedTargetIconCenter;
@property(readonly, nonatomic) struct CGPoint zoomScaleDimension; // @synthesize zoomScaleDimension=_zoomScaleDimension;
@property(readonly, nonatomic) UIView *targetIconPositioningView; // @synthesize targetIconPositioningView=_targetIconPositioningView;
@property(readonly, nonatomic) SBIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
@property(retain, nonatomic) NSMutableArray *animationCompletions; // @synthesize animationCompletions=_animationCompletions;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleYAnimator; // @synthesize targetIconScaleYAnimator=_targetIconScaleYAnimator;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleXAnimator; // @synthesize targetIconScaleXAnimator=_targetIconScaleXAnimator;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *homeScreenScaleAnimator; // @synthesize homeScreenScaleAnimator=_homeScreenScaleAnimator;
- (void).cxx_destruct;
- (void)_applyIconGridFadeFraction:(double)arg1;
- (void)_applyVisualAltitudeFraction:(double)arg1;
- (struct CGPoint)_targetIconScaleForZoomFraction:(double)arg1;
- (double)_homeScreenScaleForZoomFraction:(double)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (void)_setIconAlpha:(double)arg1;
- (struct CGPoint)_referenceIconImageCenter;
- (double)_zoomedVisualAltitude;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)hintToFraction:(double)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_configureTargetIconPositioningView:(id)arg1;
- (void)_prepareAnimation;
- (_Bool)shouldMatchMoveWithDock;
@property(readonly, nonatomic) SBIconView *referenceIconView;
@property(readonly, nonatomic) SBIconView *targetIconView;
- (void)_setZoomScale:(struct CGPoint)arg1;
- (_Bool)_forceSquareZoomDimension;
@property(readonly, nonatomic) _Bool fadesHomeScreen;
@property(readonly, nonatomic) UIView *defaultTargetIconContainerView;
@property(readonly, nonatomic) UIView *targetIconContainerView;
@property(readonly, nonatomic) double maxHomeScreenZoomScale;
@property(readonly, nonatomic) double zoomScale;
- (id)initWithAnimationContainer:(id)arg1 targetIcon:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <SBScaleIconZoomAnimationContaining> animationContainer; // @dynamic animationContainer;
@property(retain, nonatomic) SBHScaleZoomSettings *settings; // @dynamic settings;

@end

