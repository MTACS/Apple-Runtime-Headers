//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <MediaPlayer/MPUserIdentityConsuming-Protocol.h>

@class ICUserIdentity, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isExecuting;
    _Bool _isFinished;
    ICUserIdentity *_userIdentity;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)finish;
- (void)execute;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

