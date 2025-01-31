//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOClientMetrics, GEODataRequestThrottlerToken, GEOProtobufSession, NSError, NSString, PBCodable;
@protocol GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate>
{
    Class _responseClass;
    id <GEODataSessionTask> _dataTask;
    GEOProtobufSession *_session;
    id <GEOProtobufSessionTaskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSError *_error;
    PBCodable *_response;
    unsigned long long _taskIdentifier;
    unsigned int _requestTypeCode;
    CDStruct_d1a7ebee _requestKind;
    GEOApplicationAuditToken *_auditToken;
    BOOL _completedAsCancelled;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property(nonatomic) __weak id <GEOProtobufSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GEOProtobufSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) unsigned int requestTypeCode; // @synthesize requestTypeCode=_requestTypeCode;
@property(retain, nonatomic) PBCodable *response; // @synthesize response=_response;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL completedAsCancelled; // @synthesize completedAsCancelled=_completedAsCancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) id <GEODataSessionTask> dataTask; // @synthesize dataTask=_dataTask;
@property(readonly, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(readonly, nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL receivedRNFNotification;
@property(readonly, nonatomic) BOOL mptcpNegotiated;
@property(readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property(readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) NSString *remoteAddressAndPort;
@property(readonly, nonatomic) unsigned long long incomingPayloadSize;
@property(readonly, nonatomic) unsigned long long outgoingPayloadSize;
- (void)cancel;
- (void)start;
@property(readonly, nonatomic) CDStruct_d1a7ebee requestKind;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithSession:(id)arg1 taskIdentifier:(unsigned long long)arg2 requestTypeCode:(unsigned int)arg3 responseClass:(Class)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 requestKind:(CDStruct_d1a7ebee)arg7 auditToken:(id)arg8 throttleToken:(id)arg9;
- (id)init;
- (void)completeWithCancelled:(BOOL)arg1 error:(id)arg2 response:(id)arg3;
- (void)completeWithErrorCode:(long long)arg1;
- (BOOL)parseResponseTypeWithReader:(id)arg1;
- (BOOL)parseProtocolVersionWithReader:(id)arg1;
- (BOOL)parsePreambleWithReader:(id)arg1;
- (id)parseResponseFromResponseData:(id)arg1;
- (id)parseInnerProtobufFromData:(id)arg1;
- (void)updateDataRequest:(id)arg1 withNewProtobufRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_decodeResponseFromTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

