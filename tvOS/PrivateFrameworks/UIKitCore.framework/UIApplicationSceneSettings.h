//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneSettings.h>

#import <UIKitCore/UIApplicationSceneSettings-Protocol.h>
#import <UIKitCore/_UIDisplayInfoProviding-Protocol.h>

@class BSCornerRadiusConfiguration, FBSDisplayConfiguration, NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayInfoProviding, UIApplicationSceneSettings>
{
}

- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long artworkSubtype;
@property(readonly, nonatomic) long long deviceOrientation;
@property(readonly, nonatomic) _Bool statusBarDisabled;
@property(readonly, nonatomic) _Bool idleModeEnabled;
@property(readonly, nonatomic) _Bool canShowAlerts;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) double systemMinimumMargin;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
@property(readonly, nonatomic) double statusBarHeight;
@property(readonly, nonatomic) struct CGRect statusBarAvoidanceFrame;
@property(readonly, nonatomic) long long statusBarParts;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;
@property(readonly, nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property(readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long deactivationReasons;
@property(readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) _Bool underLock;
@property(readonly, nonatomic) NSString *persistenceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

