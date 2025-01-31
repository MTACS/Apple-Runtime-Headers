//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMFUnfairLock, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue, _HMMediaSessionDelegate;

__attribute__((visibility("hidden")))
@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    NSUUID *_uuid;
    NSString *_routeUID;
    long long _playbackState;
    _HMContext *_context;
    NSUUID *_uniqueIdentifier;
    NSUUID *_messageTargetUUID;
    id <_HMMediaSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <_HMMediaSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_handleSessionRouteUIDUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedRouteUID:(id)arg1;
- (void)updatePlaybackState:(id)arg1;
- (void)_updatePlaybackState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSessionPlaybackUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1;
- (void)refreshPlaybackStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPlaybackState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(retain, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)setRouteUID:(id)arg1;
@property(readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)setPlaybackState:(long long)arg1;
@property(readonly) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void)setUuid:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

