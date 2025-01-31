//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVRoutingClientController, MRMediaRemoteService, MRNotificationClient, MRNotificationServiceClient, NSArray, NSMutableArray, NSMutableSet, _MRNowPlayingPlayerPathProtobuf;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    _MRNowPlayingPlayerPathProtobuf *_activePlayerPath;
    int _notifyRestoreClientStateForLaunch;
    NSMutableSet *_playerPathInvalidationHandlers;
    MRNotificationServiceClient *_notificationService;
    MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
}

+ (id)sharedServiceClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue; // @synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue;
@property(readonly, nonatomic) MRNotificationClient *notificationClient; // @synthesize notificationClient=_notificationClient;
@property(readonly, nonatomic) MRMediaRemoteService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)_callInvalidationHandler:(id)arg1;
- (void)_processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)_onQueue_processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (void)removeInvalidationHandler:(id)arg1;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isOriginRegistered:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
- (void)_onQueue_setActivePlayerPath:(id)arg1;
@property(readonly, nonatomic) NSArray *registeredOrigins;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
- (id)debugDescription;
- (void)_initializeConnection;
- (void)dealloc;
- (id)init;

@end

