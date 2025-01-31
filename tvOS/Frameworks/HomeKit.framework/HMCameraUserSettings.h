//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMAccessory, HMCameraBulletinBoardSmartNotification, HMFUnfairLock, NSString, NSUUID, _HMCameraUserSettings, _HMContext;
@protocol HMCameraUserSettingsDelegate, OS_dispatch_queue;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    _HMCameraUserSettings *_cameraUserSettings;
    id <HMCameraUserSettingsDelegate> _delegate;
    _HMContext *_context;
    HMAccessory *_accessory;
}

+ (id)logCategory;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property __weak id <HMCameraUserSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_mergeNewSettings:(id)arg1 operations:(id)arg2;
- (void)_callSettingsDidUpdateDelegate;
@property(readonly, getter=isAccessModeChangeNotificationEnabled) _Bool accessModeChangeNotificationEnabled;
@property(readonly, getter=isRecordingAudioEnabled) _Bool recordingAudioEnabled;
@property(readonly, getter=isCameraDisabledByThirdParty) _Bool cameraDisabledByThirdParty;
@property(readonly) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property(readonly, getter=isNightVisionModeEnabled) _Bool nightVisionModeEnabled;
@property(readonly, getter=areSnapshotsAllowed) _Bool snapshotsAllowed;
@property(readonly, getter=isAccessModeIndicatorEnabled) _Bool accessModeIndicatorEnabled;
@property(readonly) unsigned long long recordingEventTriggers;
@property(readonly) unsigned long long supportedFeatures;
@property(readonly) unsigned long long recordingStorageDuration;
@property(readonly) unsigned long long currentAccessMode;
- (unsigned long long)accessModeNotAtHome;
- (unsigned long long)accessModeAtHome;
- (void)updateWithSettings:(id)arg1;
@property(readonly) NSUUID *uniqueIdentifier;
@property(retain) _HMCameraUserSettings *cameraUserSettings; // @synthesize cameraUserSettings=_cameraUserSettings;
- (id)logIdentifier;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSString *description;
- (void)updateAccessModeChangeNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecordingAudioEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateNightVisionModeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSnapshotsAllowed:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccessModeIndicatorEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecordingStorageDuration:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)accessModeForPresenceType:(unsigned long long)arg1;
- (void)configureWithAccessory:(id)arg1 context:(id)arg2;
- (id)initWithCameraUserSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

