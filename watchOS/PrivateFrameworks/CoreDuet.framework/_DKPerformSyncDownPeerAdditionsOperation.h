//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, NSDate, NSString, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;
@protocol _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    _Bool _highPriority;
    _DKSyncHistory *_history;
    id <_DKKeyValueStore> _keyValueStore;
    NSString *_hadAdditionsKey;
    _Bool _hadAdditions;
    NSDate *_startDate;
    NSDate *_highWaterMark;
    unsigned int _batchNumber;
    NSArray *_overlappingWindows;
    _Bool _foundAdditions;
}

+ (void)_updateEventStatsWithTotal:(unsigned int)arg1 streamNameCounts:(id)arg2 transportType:(int)arg3;
+ (void)_updateEventStatsWithSyncLatencyOfEvent:(id)arg1 ingressDate:(id)arg2 transportType:(int)arg3;
+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(int)arg2;
+ (void)_updateEventStatsWithIsNewestMissingWindow:(_Bool)arg1;
- (void).cxx_destruct;
- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)updateEvents:(id)arg1 withSourceDeviceID:(id)arg2;
- (void)coalesceRedundantOverlappingWindows;
- (void)handleFetchedEvents:(id)arg1 completedWindows:(id)arg2 missingWindows:(id)arg3;
- (void)performSyncDownPeerAdditionsWithCompletedWindows:(id)arg1;
- (void)performSyncDownPeerAdditionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerAdditionsWithDidPrewarm:(_Bool)arg1 orError:(id)arg2;
- (void)performSyncDownPeerAdditions;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

