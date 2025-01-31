//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject <NSSecureCoding>
{
    BOOL _samplesWereDeleted;
    HKSampleType *_sampleType;
    double _startTime;
    double _endTime;
    long long _queryStrategy;
}

+ (BOOL)supportsSecureCoding;
+ (id)sampleTypeChangeWithSampleType:(id)arg1 dateInterval:(id)arg2 samplesWereDeleted:(BOOL)arg3;
@property(readonly, nonatomic) long long queryStrategy; // @synthesize queryStrategy=_queryStrategy;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) BOOL samplesWereDeleted; // @synthesize samplesWereDeleted=_samplesWereDeleted;
@property(readonly, copy, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)_extendDateIntervalWithSample:(id)arg1;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
- (id)_initWithSampleType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 deletions:(BOOL)arg4 queryStrategy:(long long)arg5;

@end

