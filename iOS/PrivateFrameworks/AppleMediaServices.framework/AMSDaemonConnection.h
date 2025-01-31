//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnection : NSObject
{
    NSXPCConnection *_sharedConnection;
    NSObject<OS_dispatch_queue> *_sharedConnectionAccessQueue;
    NSMutableSet *_activePromises;
    NSMutableArray *_interruptionHandlers;
}

@property(readonly, nonatomic) NSMutableArray *interruptionHandlers; // @synthesize interruptionHandlers=_interruptionHandlers;
@property(readonly, nonatomic) NSMutableSet *activePromises; // @synthesize activePromises=_activePromises;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // @synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue;
@property(retain, nonatomic) NSXPCConnection *sharedConnection; // @synthesize sharedConnection=_sharedConnection;
- (void).cxx_destruct;
- (void)_handleInvalidation;
- (void)_handleInterruption;
- (id)_connectionProxyForAsync:(_Bool)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (id)securityServiceProxyWithDelegate:(id)arg1;
- (id)deviceMessengerProxyWithDelegate:(id)arg1;
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

