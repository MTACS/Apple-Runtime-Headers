//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMDaemonController-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, REMStoreContainerToken;

@interface REMXPCDaemonController : NSObject <REMDaemonController>
{
    struct os_unfair_lock_s _ivarLock;
    NSMutableDictionary *_l_performersByName;
    NSString *_serviceName;
    NSXPCConnection *_xpcConnection;
    REMStoreContainerToken *_storeContainerToken;
}

+ (id)userInteractiveDaemonController;
+ (id)weakSharedInstance;
@property(retain, nonatomic) REMStoreContainerToken *storeContainerToken; // @synthesize storeContainerToken=_storeContainerToken;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSMutableDictionary *l_performersByName; // @synthesize l_performersByName=_l_performersByName;
@property(nonatomic) struct os_unfair_lock_s ivarLock; // @synthesize ivarLock=_ivarLock;
- (void).cxx_destruct;
- (id)_xpcConnectionReconnectingIfNecessary;
- (id)_resolvePerformerWithResolver:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_asyncResolvePerformerWithResolver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_resolveAndCachePerformerWithResolver:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_asyncPerformerWithResolver:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)_syncPerformerWithResolver:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)asyncIndexingPerformerWithLoadHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)syncIndexingPerformerWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)asyncSyncInterfacePerformerWithLoadHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)syncSyncInterfacePerformerWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)asyncStorePerformerWithLoadHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)syncStorePerformerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)syncDebugPerformerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)syncChangeTrackingPerformerWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithStoreContainerToken:(id)arg1;
- (id)initWithStoreContainerToken:(id)arg1 userInteractive:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

