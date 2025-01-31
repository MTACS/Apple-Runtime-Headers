//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SignpostCAInstrumentationProcessor, SignpostCAStallAggregation;
@protocol OS_dispatch_queue;

@interface SignpostCAStallAggregationBuilder : NSObject
{
    unsigned long long _frameLifetimeCount;
    unsigned long long _commitCount;
    unsigned long long _transactionLifetimeCount;
    float _maxDurationSec;
    NSObject<OS_dispatch_queue> *_syncQueue;
    SignpostCAStallAggregation *_stallAggregation;
    SignpostCAInstrumentationProcessor *_caInstrumentationProcessor;
}

@property(readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor; // @synthesize caInstrumentationProcessor=_caInstrumentationProcessor;
@property(readonly, nonatomic) SignpostCAStallAggregation *stallAggregation; // @synthesize stallAggregation=_stallAggregation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) float maxDurationSec; // @synthesize maxDurationSec=_maxDurationSec;
- (void).cxx_destruct;
- (void)handleSignpostIntervalBegin:(id)arg1;
- (void)handleSignpostInterval:(id)arg1;
- (void)handleSignpostEvent:(id)arg1;
- (void)_handleLongFrameLifetime:(id)arg1;
- (void)_handleLongTransactionLifetime:(id)arg1;
- (void)_handleLongCommit:(id)arg1;
- (_Bool)_isOverThreshold:(id)arg1;
@property(readonly, copy, nonatomic) SignpostCAStallAggregation *stallAggregationSnapshot;
- (void)_processDurationNs:(unsigned long long)arg1 type:(unsigned char)arg2 processExecutablePath:(id)arg3 pid:(int)arg4 aggregateForSystem:(_Bool)arg5;
- (void)addSubsystemCategoriesOfInterestToWhitelist:(id)arg1;
- (void)handleDeviceReboot;
- (id)init;
- (void)_initializeCAInstrumentationProcessor;

@end

