//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UITargetedPreview, UIVisualEffectView, _UIPlatterSoftShadowView, _UIPlatterTransformView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterView : UIView
{
    _Bool _expanded;
    _Bool _hideShadowWhenCollapsed;
    _Bool _hideChromeWhenCollapsed;
    _Bool _alwaysCompact;
    _Bool _preventPreviewRasterization;
    _Bool _frozen;
    _Bool _contentSizeDidChange;
    UITargetedPreview *_collapsedPreview;
    UITargetedPreview *_expandedPreview;
    UIView *_collapsedClippingView;
    _UIPlatterTransformView *_collapsedTransformView;
    UIView *_expandedClippingView;
    _UIPlatterTransformView *_expandedTransformView;
    _UIPlatterSoftShadowView *_pathShadowView;
    UIVisualEffectView *_rectangularShadowView;
}

@property(nonatomic) _Bool contentSizeDidChange; // @synthesize contentSizeDidChange=_contentSizeDidChange;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) UIVisualEffectView *rectangularShadowView; // @synthesize rectangularShadowView=_rectangularShadowView;
@property(retain, nonatomic) _UIPlatterSoftShadowView *pathShadowView; // @synthesize pathShadowView=_pathShadowView;
@property(retain, nonatomic) _UIPlatterTransformView *expandedTransformView; // @synthesize expandedTransformView=_expandedTransformView;
@property(retain, nonatomic) UIView *expandedClippingView; // @synthesize expandedClippingView=_expandedClippingView;
@property(retain, nonatomic) _UIPlatterTransformView *collapsedTransformView; // @synthesize collapsedTransformView=_collapsedTransformView;
@property(retain, nonatomic) UIView *collapsedClippingView; // @synthesize collapsedClippingView=_collapsedClippingView;
@property(nonatomic) _Bool preventPreviewRasterization; // @synthesize preventPreviewRasterization=_preventPreviewRasterization;
@property(nonatomic) _Bool alwaysCompact; // @synthesize alwaysCompact=_alwaysCompact;
@property(nonatomic) _Bool hideChromeWhenCollapsed; // @synthesize hideChromeWhenCollapsed=_hideChromeWhenCollapsed;
@property(nonatomic) _Bool hideShadowWhenCollapsed; // @synthesize hideShadowWhenCollapsed=_hideShadowWhenCollapsed;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UITargetedPreview *expandedPreview; // @synthesize expandedPreview=_expandedPreview;
@property(retain, nonatomic) UITargetedPreview *collapsedPreview; // @synthesize collapsedPreview=_collapsedPreview;
- (void).cxx_destruct;
- (void)updateContentSize;
- (void)_installPreview:(id)arg1 inClippingView:(id)arg2 transformView:(id)arg3;
- (void)_updateCollapsedChrome;
- (void)_updatePathShadow;
- (_Bool)_previewIsLikelyOpaque:(id)arg1;
- (void)didTearOffForDrag;
- (void)freezeExpandedPreview;
- (void)_updateClippingViews;
- (void)_updateShadows;
- (void)layoutSubviews;
@property(nonatomic) _Bool allowsUserInteractionInExpandedPreview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

