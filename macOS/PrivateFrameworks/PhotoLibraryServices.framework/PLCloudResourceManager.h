//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (void).cxx_destruct;
- (id)statusForDebug:(BOOL)arg1;
- (void)handleOptimizeModeChange;
- (void)stop;
- (void)updateCacheDeletePurgeableAmount;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)arg1;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithCPLManager:(id)arg1 library:(id)arg2;
- (id)init;

@end

