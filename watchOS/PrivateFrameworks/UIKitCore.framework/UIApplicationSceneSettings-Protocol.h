//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class BSCornerRadiusConfiguration, NSNumber, NSString;

@protocol UIApplicationSceneSettings <NSObject>
@property(readonly, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property(readonly, nonatomic) unsigned int artworkSubtype;
@property(readonly, nonatomic) int deviceOrientation;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) float homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) float systemMinimumMargin;
@property(readonly, nonatomic) float statusBarHeight;
@property(readonly, nonatomic) struct CGRect statusBarAvoidanceFrame;
@property(readonly, nonatomic) int statusBarParts;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;
@property(readonly, nonatomic) _Bool statusBarDisabled;
@property(readonly, nonatomic) _Bool idleModeEnabled;
@property(readonly, nonatomic) _Bool canShowAlerts;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property(readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property(readonly, nonatomic) int userInterfaceStyle;
@property(readonly, nonatomic) unsigned int deactivationReasons;
@property(readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) _Bool underLock;
@property(readonly, nonatomic) NSString *persistenceIdentifier;
- (float)defaultStatusBarHeightForOrientation:(int)arg1;
@end

