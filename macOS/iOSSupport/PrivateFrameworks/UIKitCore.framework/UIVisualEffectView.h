//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, UIImage, UIVisualEffect, _UIVisualEffectBackdropView, _UIVisualEffectEnvironment, _UIVisualEffectHost, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectViewCornerMask;

@interface UIVisualEffectView : UIView <NSSecureCoding>
{
    UIView *_maskView;
    UIImage *_maskImage;
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
    _UIVisualEffectHost *_backgroundHost;
    _UIVisualEffectHost *_contentHost;
    _UIVisualEffectEnvironment *_environment;
    BOOL _backgroundHostNeedsUpdate;
    BOOL _contentHostNeedsUpdate;
    BOOL _isDependent;
    BOOL _isUpdatingSubviews;
    double _backdropViewBackgroundColorAlpha;
    BOOL _useReducedTransparencyForContentHost;
    BOOL __useKeyframeWorkaround;
    BOOL _useLiveMasking;
    BOOL _allowsDithering;
    BOOL _allowsBlurring;
    UIVisualEffect *_effect;
    _UIVisualEffectViewCornerMask *__cornerMask;
    NSArray *__captureDependents;
    NSArray *_backgroundEffects;
    NSArray *_contentEffects;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL allowsBlurring; // @synthesize allowsBlurring=_allowsBlurring;
@property(nonatomic) BOOL allowsDithering; // @synthesize allowsDithering=_allowsDithering;
@property(nonatomic, getter=_useLiveMasking, setter=_setUseLiveMasking:) BOOL useLiveMasking; // @synthesize useLiveMasking=_useLiveMasking;
@property(copy, nonatomic) NSArray *contentEffects; // @synthesize contentEffects=_contentEffects;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(copy, nonatomic, setter=_setCaptureDependents:) NSArray *_captureDependents; // @synthesize _captureDependents=__captureDependents;
@property(nonatomic, setter=_setUseKeyframeWorkaround:) BOOL _useKeyframeWorkaround; // @synthesize _useKeyframeWorkaround=__useKeyframeWorkaround;
@property(retain, nonatomic, setter=_setCornerMask:) _UIVisualEffectViewCornerMask *_cornerMask; // @synthesize _cornerMask=__cornerMask;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
@property(readonly, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup; // @synthesize _captureGroup;
- (void).cxx_destruct;
- (id)_backgroundHost;
- (id)_contentHost;
- (void)_setTintOpacity:(double)arg1;
- (void)_updateEffectForReducedTransparency;
- (void)_resetEffect;
- (void)_updateEffectBackgroundColor;
- (void)_updateEffectForAlphaTransitionDidEnd:(id)arg1;
- (void)_updateEffectForAlphaTransitionWillBegin:(id)arg1;
- (void)_updateEffectForSnapshotDidEnd:(id)arg1;
- (void)_updateEffectForSnapshotWillBegin:(id)arg1;
@property(nonatomic, getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:) BOOL useReducedTransparencyForContentEffects;
@property(nonatomic, getter=_backdropViewBackgroundColorAlpha, setter=_setBackdropViewBackgroundColorAlpha:) double _backdropViewBackgroundColorAlpha;
- (id)_whatsWrongWithThisEffect;
- (id)description;
- (id)_debug;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)layoutSubviews;
@property(nonatomic, setter=_setAllowsGroupFiltering:) BOOL _allowsGroupFiltering;
@property(retain, nonatomic, setter=_setMaskImage:) UIImage *_maskImage;
- (id)_maskView;
- (void)_setMaskView:(id)arg1;
- (id)_maskImageForMaskView:(id)arg1;
@property(nonatomic, getter=_isNoiseEnabled, setter=_setNoiseEnabled:) BOOL _noiseEnabled;
@property(readonly, nonatomic) BOOL _applyCornerMaskToSelf;
- (void)_setCornerRadius:(double)arg1 continuous:(BOOL)arg2 maskedCorners:(unsigned long long)arg3;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
@property(nonatomic, setter=_setCornerRadius:) double _cornerRadius;
- (void)_applyCornerRadiusToSubviews;
@property(nonatomic, setter=_setCaptureView:) __weak _UIVisualEffectBackdropView *_captureView;
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
- (void)_configureEffects;
- (void)_updateSubviews;
- (void)_updateSubView:(id)arg1 frame:(struct CGRect)arg2;
- (id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2;
- (void)_updateEffectsFromLegacyEffect;
- (void)_setEffect:(id)arg1;
- (void)_generateDeferredAnimations:(id)arg1;
- (void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2;
- (void)_generateEffectAnimations:(id)arg1;
- (void)_generateWorkaroundKeyframeAnimationsForEffects:(id)arg1;
- (id)_initialValueForKey:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)setContentView:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_ensureContentHostWithView:(id)arg1;
- (void)_ensureBackgroundHost;
- (void)_commonInit;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_updateEffectForAppearsKeyChanges:(id)arg1;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(CDUnknownBlockType)arg1;
- (id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)arg1;

@end

