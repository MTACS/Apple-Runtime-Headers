//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDUserCloudShareControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHomeManager, HMDUserCloudShareController, HMFMessageDispatcher, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDUserCloudShareManager : NSObject <HMFMessageReceiver, HMDUserCloudShareControllerDelegate>
{
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDHomeManager *_homeManager;
    HMFMessageDispatcher *_messageDispatcher;
    HMDUserCloudShareController *_userCloudShareController;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDUserCloudShareController *userCloudShareController; // @synthesize userCloudShareController=_userCloudShareController;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleXPCConnectionInvalidated:(id)arg1;
- (void)_handleDeregisterRequest:(id)arg1;
- (void)handleRemoteUserClientCloudShareRequest:(id)arg1;
- (void)_handleRegisterRequest:(id)arg1;
- (void)_handleLocalHomeDataRemovedNotification:(id *)arg1;
- (void)_handleUserSettingsUpdatedNotification:(id)arg1;
- (void)_handleEnableMultiUserChangedNotification:(id)arg1;
- (void)_postMultiUserStatusChangedNotification;
- (void)_handleAccessoryAdded:(id)arg1;
- (void)handleHomeChangedNotification:(id)arg1;
- (id)currentDateForUserCloudShareController:(id)arg1;
- (id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;
- (void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;
- (void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)registerForMessages;
- (void)configureWithMessageDispatcher:(id)arg1;
- (id)initWithHomeManager:(id)arg1 dependency:(id)arg2;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

