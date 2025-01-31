//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFURLSessionTask.h>

@class CFNetworkTimer, NSData, NSMutableArray, NSObject, __NSCFURLLocalStreamTaskWorkRead, __NSCFURLLocalStreamTaskWorkWrite;
@protocol OS_dispatch_queue;

@interface __NSCFTCPIOStreamTask : __NSCFURLSessionTask
{
    CDUnknownBlockType _disavow;
    struct shared_ptr<TCPIO_EstablishBase> _establish;
    shared_ptr_ced42cc3 _ios;
    unsigned char _captureStreamsUponCompletion;
    unsigned char _secure;
    NSData *__initialDataPayload;
    struct shared_ptr<HTTPProtocol> _httpProtocol;
    NSMutableArray *_pendingWork;
    NSMutableArray *_completedSuspendedWork;
    _Bool _doingWorkOnThisQueue;
    int _connectionState;
    _Bool _goneSecure;
    _Bool _streamsCaptured;
    CDStruct_59046461 _readError;
    _Bool _readInProgress;
    _Bool _readClosed;
    CDStruct_59046461 _writeError;
    _Bool _writeEOF;
    _Bool _writeInProgress;
    _Bool _writeClosed;
    _Bool _receivedServerTrustChallenge;
    CFNetworkTimer *_writeTimer;
    CFNetworkTimer *_readTimer;
    __NSCFURLLocalStreamTaskWorkWrite *_currentWriteTask;
    __NSCFURLLocalStreamTaskWorkRead *_currentReadTask;
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;
}

@property(retain, nonatomic) __NSCFURLLocalStreamTaskWorkRead *currentReadTask; // @synthesize currentReadTask=_currentReadTask;
@property(retain, nonatomic) __NSCFURLLocalStreamTaskWorkWrite *currentWriteTask; // @synthesize currentWriteTask=_currentWriteTask;
@property(copy) NSData *_initialDataPayload; // @synthesize _initialDataPayload=__initialDataPayload;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_suspend;
- (void)_onqueue_connectionEstablishedWithError:(CDStruct_59046461)arg1 callbackReferent:(id)arg2;
- (void)_onqueue_cleanUpConnectionEstablishmentState;
- (void)_onqueue_tlsDisabled;
- (void)_onqueue_tlsCompletion;
- (void)_onqueue_setTransportConnection:(shared_ptr_8da4e70b)arg1;
- (void)_onqueue_postConnectConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_preConnectionConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_task_onqueue_didFinish;
- (void)cancel;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (_Bool)_onqueue_usingProxy;
- (id)_onqueue_errorOrCancelError;
- (void)_onqueue_processReadWork:(id)arg1;
- (void)_onqueue_processWriteWork:(id)arg1;
- (void)_onqueue_callbackCompletedWork;
- (void)_onqueue_timeoutOccured;
- (void)_onqueue_ioTick;
- (_Bool)shouldDoWorkConsideringTlsState;
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2 shouldWaitForTls:(_Bool)arg3;
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)_onqueue_captureStreams;
- (void)_onqueue_closeWrite;
- (void)_onqueue_closeRead;
- (void)_onqueue_startSecureConnection;
- (void)_onqueue_stopSecureConnection;
- (void)stopSecureConnection;
- (void)startSecureConnection;
- (void)copyStreamProperty:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeRead;
- (void)closeWrite;
- (void)captureStreams;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (shared_ptr_ced42cc3)ios;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 connection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (id)workQueue;
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (_Bool)isKindOfClass:(Class)arg1;

@end

