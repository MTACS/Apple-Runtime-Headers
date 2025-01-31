//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol HMFLocking, OS_dispatch_group, OS_dispatch_queue;

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_clientName;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    NSMutableDictionary *_pendingRequests;
    HMFTimer *_watchdogTimer;
}

@property(readonly, nonatomic) HMFTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(readonly, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *activeMessageTracker; // @synthesize activeMessageTracker=_activeMessageTracker;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)clear;
- (void)setClientName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy) NSSet *requestIdentifiers;
- (_Bool)containsMessageWithIdentifier:(id)arg1;
- (void)removeRequestWithIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)addRequestWithIdentifier:(id)arg1 messageName:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)__sendReponseForRequest:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)initWithGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

