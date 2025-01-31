//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentStore, NSPersistentStoreCoordinator, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreMonitor : NSObject
{
    NSObject<OS_dispatch_group> *_monitorGroup;
    struct os_unfair_lock_s _aliveLock;
    BOOL _storeIsAlive;
    BOOL _declaredDead;
    int _retryCount;
    int _timeoutSeconds;
    NSPersistentStoreCoordinator *_monitoredCoordinator;
    NSPersistentStore *_monitoredStore;
    NSString *_storeIdentifier;
}

@property(readonly, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) BOOL declaredDead; // @synthesize declaredDead=_declaredDead;
@property(readonly, nonatomic) int timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(readonly, nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) __weak NSPersistentStore *monitoredStore; // @synthesize monitoredStore=_monitoredStore;
@property(readonly, nonatomic) __weak NSPersistentStoreCoordinator *monitoredCoordinator; // @synthesize monitoredCoordinator=_monitoredCoordinator;
@property(readonly, nonatomic) BOOL storeIsAlive; // @synthesize storeIsAlive=_storeIsAlive;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *monitorGroup; // @synthesize monitorGroup=_monitorGroup;
- (void).cxx_destruct;
- (id)newBackgroundContextForMonitoredCoordinator;
- (id)retainedMonitoredCoordinator;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
- (void)declareStoreDead;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)dealloc;
- (id)initForStore:(id)arg1;

@end

