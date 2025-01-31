//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUtilities/AXServer.h>

#import <AccessibilityUtilities/AXCarouselAppServer-Protocol.h>

@class NSString;
@protocol AXCarouselAppServer;

@interface AXCarouselServer : AXServer <AXCarouselAppServer>
{
    id <AXCarouselAppServer> _localServiceProvider;
}

+ (id)carouselServer;
+ (id)server;
@property(nonatomic) __weak id <AXCarouselAppServer> localServiceProvider; // @synthesize localServiceProvider=_localServiceProvider;
- (void).cxx_destruct;
- (_Bool)showHearingDevicesControl:(_Bool)arg1;
- (_Bool)showControlCenter:(_Bool)arg1;
- (_Bool)canShowControlCenter;
- (_Bool)isControlCenterVisible;
- (_Bool)showNotificationCenter:(_Bool)arg1;
- (_Bool)canShowNotificationCenter;
- (_Bool)isNotificationCenterVisible;
- (_Bool)isNonExclusiveSystemUIFocusable;
- (_Bool)isSystemSleeping;
- (void)wakeUpDeviceIfNecessary;
- (void)activeInterfaceOrientation:(CDUnknownBlockType)arg1;
- (int)activeInterfaceOrientation;
- (void)pid:(CDUnknownBlockType)arg1;
- (int)pid;
- (void)rebootDevice;
- (_Bool)isStickyNotificationVisible;
- (_Bool)isMediaPlaying;
- (_Bool)isSideSwitcherVisible;
- (_Bool)isDockVisible;
- (_Bool)isNotificationVisible;
- (_Bool)isSoftwareUpdateUIVisible;
- (_Bool)isReceivingAirPlay;
- (_Bool)isSiriTalkingOrListening;
- (_Bool)isNowPlayingUIVisible;
- (_Bool)isScreenSaverVisible;
- (_Bool)isAppSwitcherVisible;
- (_Bool)isSiriVisible;
- (_Bool)dismissSiri;
- (void)_wasDisconnectedFromClient;
- (id)_serviceName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

