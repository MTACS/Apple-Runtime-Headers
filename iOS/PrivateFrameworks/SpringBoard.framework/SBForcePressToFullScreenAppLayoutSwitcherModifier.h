//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (_Bool)isContainerStatusBarVisible;
- (long long)backdropBlurType;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (_Bool)asynchronouslyRendersUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4;

@end

