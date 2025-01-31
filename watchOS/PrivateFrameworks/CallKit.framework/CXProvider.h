//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXActionDelegate-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class CXProviderConfiguration, NSArray, NSMutableArray, NSString;
@protocol CXProviderDelegate, CXProviderDelegatePrivate, CXProviderHostProtocol, OS_dispatch_queue;

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol>
{
    CXProviderConfiguration *_configuration;
    id <CXProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableArray *_mutablePendingTransactions;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)isSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *mutablePendingTransactions; // @synthesize mutablePendingTransactions=_mutablePendingTransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMediaServicesWereResetNotification:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (void)_performAction:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (void)actionCompleted:(id)arg1;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (id)_pendingActionWithUUID:(id)arg1;
- (void)_updatePendingTransactions;
- (void)handleConnectionInterruption;
- (void)sendProviderDidBegin;
- (void)performCompletionBlock:(CDUnknownBlockType)arg1;
- (void)registerCurrentConfiguration;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(int)arg3;
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(int)arg3;
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(int)arg3;
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(int)arg3 failureContext:(id)arg4;
- (void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(int)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(int)arg3;
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *pendingTransactions;
@property(copy, nonatomic) CXProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <CXProviderDelegatePrivate> privateDelegate;
@property(readonly, nonatomic) _Bool requiresProxyingAVAudioSessionState;
@property(readonly, nonatomic) id <CXProviderHostProtocol> hostProtocolDelegate;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

