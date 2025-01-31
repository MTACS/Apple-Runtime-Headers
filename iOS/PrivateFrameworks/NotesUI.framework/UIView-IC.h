//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ICAppearanceInfo, ICViewControllerManager, UIColor, UITraitCollection;

@interface UIView (IC)
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3;
+ (void)ic_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)ic_performWithoutAnimation:(CDUnknownBlockType)arg1;
- (id)ic_animator;
- (id)ic_renderImageView;
- (id)ic_renderImage;
- (void)ic_addConstraintsToFillSuperview;
- (void)ic_removeAllConstraintsForSubview:(id)arg1;
- (id)ic_imageViewRenderedFromViewHierarchy;
- (id)ic_imageViewRenderedFromLayer;
- (id)ic_imageRenderedFromViewHierarchy;
- (id)ic_imageRenderedFromLayer;
@property(readonly, nonatomic) ICAppearanceInfo *ic_appearanceInfo;
@property(copy, nonatomic) UIColor *ic_backgroundColor;
- (void)ic_crashIfWindowIsSecure;
- (_Bool)ic_isInSecureWindow;
@property(readonly, nonatomic) UITraitCollection *ic_platformAppearanceObject;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets ic_directionalSafeAreaInsets;
@property(readonly, nonatomic) _Bool ic_isRTL;
@property(readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
- (void)ic_insertSubview:(struct UIView *)arg1 belowSubview:(struct UIView *)arg2;
- (void)ic_setAlpha:(double)arg1;
- (void)ic_setNeedsLayout;
- (void)ic_setNeedsDisplay;
- (double)ic_backingScaleFactor;
@end

