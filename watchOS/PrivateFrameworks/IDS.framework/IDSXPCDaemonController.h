//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSXPCConnection, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IDSXPCDaemonController : NSObject
{
    IDSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_collaboratorPromiseDictionary;
    _Bool _sync;
    NSMutableDictionary *_syncCollaboratorDictionary;
}

+ (void)performDaemonControllerTask:(CDUnknownBlockType)arg1;
+ (id)weakSharedInstance;
@property(retain, nonatomic) NSMutableDictionary *syncCollaboratorDictionary; // @synthesize syncCollaboratorDictionary=_syncCollaboratorDictionary;
@property(retain, nonatomic) NSMutableDictionary *collaboratorPromiseDictionary; // @synthesize collaboratorPromiseDictionary=_collaboratorPromiseDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)_sync_collaboratorWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 resolverBlock:(CDUnknownBlockType)arg3;
- (id)_collaboratorWithIdentifier:(id)arg1 interface:(id)arg2 timeout:(double)arg3 errorHandler:(CDUnknownBlockType)arg4 resolverBlock:(CDUnknownBlockType)arg5;
- (id)_timingOutDaemonProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_daemonProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)performTask:(CDUnknownBlockType)arg1;
- (id)interalTestingCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)registrationCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)opportunisticCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)reunionSyncCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)pairedDeviceManagerCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)pairingCollaboratorWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)pairingCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initSyncControllerWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

