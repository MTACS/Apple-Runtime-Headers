//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet;

@interface EDUpdateThrottler : NSObject
{
    struct os_unfair_lock_s _updatesLock;
    NSMutableSet *_unacknowledgedUpdates;
    _Bool _hasChangesSinceLastUpdate;
    int _scalingFactor;
    NSDate *_lastUpdateDate;
    NSDate *_lastAcknowledgementDate;
    double _delayInterval;
}

@property(retain, nonatomic) NSDate *lastAcknowledgementDate; // @synthesize lastAcknowledgementDate=_lastAcknowledgementDate;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(nonatomic) _Bool hasChangesSinceLastUpdate; // @synthesize hasChangesSinceLastUpdate=_hasChangesSinceLastUpdate;
@property(readonly, nonatomic) int scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(readonly, nonatomic) double delayInterval; // @synthesize delayInterval=_delayInterval;
- (void).cxx_destruct;
- (unsigned int)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double *)arg1;
- (id)updateWithBlock:(CDUnknownBlockType)arg1 unacknowledgedUpdatesCount:(unsigned int *)arg2;
- (id)initWithDelayInterval:(double)arg1 scalingFactor:(int)arg2;

@end

