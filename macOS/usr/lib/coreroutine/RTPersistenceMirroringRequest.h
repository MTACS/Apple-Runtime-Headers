//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCloudKitMirroringRequest, NSDate, NSMutableArray, NSUUID, RTPersistenceMirroringPolicy;
@protocol OS_dispatch_queue, RTPersistenceMirroringRequestDelegate;

@interface RTPersistenceMirroringRequest : NSObject
{
    unsigned long long _sid;
    NSObject<OS_dispatch_queue> *_queue;
    NSCloudKitMirroringRequest *_request;
    id <RTPersistenceMirroringRequestDelegate> _delegate;
    NSMutableArray *_completionHandlers;
    NSUUID *_identifier;
    NSDate *_startDate;
    NSDate *_enqueueDate;
    double _duration;
    unsigned long long _attemptCount;
    unsigned long long _maxRetryCount;
    RTPersistenceMirroringPolicy *_mirroringPolicy;
    long long _requestType;
}

@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) RTPersistenceMirroringPolicy *mirroringPolicy; // @synthesize mirroringPolicy=_mirroringPolicy;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *enqueueDate; // @synthesize enqueueDate=_enqueueDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) __weak id <RTPersistenceMirroringRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSCloudKitMirroringRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReady) BOOL ready;
- (id)requestTypeToString:(long long)arg1;
- (id)description;
- (void)executeMirroringRequestWithContext:(id)arg1;
- (void)_completeRequestWithError:(id)arg1;
- (void)_dispatchAllHandlersWithError:(id)arg1;
- (void)completeRequestWithError:(id)arg1;
- (void)mergeRequest:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMirroringRequest:(id)arg1;
- (void)_handleMirroringRequestResult:(id)arg1;
- (void)handleMirroringRequestResult:(id)arg1;
- (void)_prepareMirroringRequestForRetry:(id)arg1;
- (void)_createMirroringRequestWithRequestType:(long long)arg1 affectedStores:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 requestType:(long long)arg2 mirroringPolicy:(id)arg3 affectedStores:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)init;

@end

