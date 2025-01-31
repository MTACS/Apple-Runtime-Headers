//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NFCHardwareManagerCallbacks-Protocol.h>
#import <CoreNFC/NFCReaderSession-Protocol.h>
#import <CoreNFC/NFCSessionCallbacks-Protocol.h>
#import <CoreNFC/NFReaderSessionCallbacks-Protocol.h>

@class NFWeakReference, NSNumber, NSString;
@protocol NFReaderSessionInterface><NSXPCProxyCreating, NFTag, OS_dispatch_group, OS_dispatch_queue;

@interface NFCReaderSession : NSObject <NFReaderSessionCallbacks, NFCHardwareManagerCallbacks, NFCSessionCallbacks, NFCReaderSession>
{
    NFWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<NFReaderSessionInterface><NSXPCProxyCreating> *_proxy;
    BOOL _started;
    BOOL _invalidated;
    long long _invalidationCode;
    id <NFTag> _connectedTag;
    NSObject<OS_dispatch_group> *_sessionStartInProgress;
    NSString *_alertMessage;
    unsigned long long _pollMethod;
    unsigned long long _sessionConfig;
    NSNumber *_sessionId;
    long long _delegateType;
}

+ (BOOL)featureAvailable:(unsigned long long)arg1;
+ (BOOL)readingAvailable;
@property(readonly, nonatomic) long long delegateType; // @synthesize delegateType=_delegateType;
@property(readonly, nonatomic) NSNumber *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(nonatomic) unsigned long long pollMethod; // @synthesize pollMethod=_pollMethod;
- (id)writeLockNdef;
- (BOOL)writeNdefMessage:(id)arg1 error:(id *)arg2;
- (id)_convertMessageToInternal:(id)arg1;
- (id)readNdefMessageWithError:(id *)arg1;
- (id)ndefStatus:(long long *)arg1 maxMessageLength:(unsigned long long *)arg2;
@property(readonly, retain, nonatomic) NSObject<NFReaderSessionInterface><NSXPCProxyCreating> *readerProxy;
- (void)_invalidateSessionWithCode:(long long)arg1 message:(id)arg2 finalUIState:(long long)arg3 callbackOnQueue:(BOOL)arg4;
- (void)_invalidateSessionWithCode:(long long)arg1 callbackOnQueue:(BOOL)arg2;
- (void)_callbackDidInvalidateWithError:(id)arg1;
- (void)restartPolling;
- (id)transceive:(id)arg1 tagUpdate:(id *)arg2 error:(id *)arg3;
- (BOOL)checkPresenceWithError:(id *)arg1;
- (BOOL)disconnectTagWithError:(id *)arg1;
- (BOOL)_connectTag:(id)arg1 error:(id *)arg2;
- (BOOL)connectTag:(id)arg1 error:(id *)arg2;
- (void)connectTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <NFTag> connectedTag;
- (void)_stopPollingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startPollingWithMethod:(unsigned long long)arg1 sessionConfig:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)validateDelegate:(id)arg1 expectedType:(long long)arg2;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (void)beginSession;
- (void)submitBlockOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)submitBlockOnSessionQueue:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property(readonly, nonatomic) __weak id delegate;
- (void)didInvalidate;
- (void)hardwareFailedToLoad;
- (void)didDetectTags:(id)arg1;
- (void)didDetectExternalReaderWithNotification:(id)arg1;
- (void)didTerminate:(id)arg1;
- (void)didStartSession:(id)arg1;
- (void)_callbackDidBecomeActive;
- (void)invalidateSessionWithReason:(long long)arg1;
- (void)invalidateSessionWithErrorMessage:(id)arg1;
- (void)invalidateSession;
@property(copy, nonatomic) NSString *alertMessage;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property(readonly, nonatomic, getter=isReady) BOOL ready;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

