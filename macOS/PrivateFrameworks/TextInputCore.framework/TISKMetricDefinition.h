//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TISKMetricDefinition : NSObject
{
    BOOL _isPointMetric;
    int _metricType;
    NSString *_metricName;
    unsigned long long _positionalSize;
    CDStruct_37a3040a *_metricDefinition;
}

+ (id)metricDefinitions;
+ (id)_makeMetric:(id)arg1 type:(int)arg2;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_37a3040a *)arg3 isPointMetric:(BOOL)arg4;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_37a3040a *)arg3;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_37a3040a *)arg3 size:(unsigned long long)arg4;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_37a3040a *)arg3 size:(unsigned long long)arg4 isPointMetric:(BOOL)arg5;
+ (double)pointsToMM:(double)arg1;
@property(readonly, nonatomic) BOOL isPointMetric; // @synthesize isPointMetric=_isPointMetric;
@property(readonly, nonatomic) CDStruct_37a3040a *metricDefinition; // @synthesize metricDefinition=_metricDefinition;
@property(readonly, nonatomic) unsigned long long positionalSize; // @synthesize positionalSize=_positionalSize;
@property(readonly, nonatomic) int metricType; // @synthesize metricType=_metricType;
@property(readonly, nonatomic) NSString *metricName; // @synthesize metricName=_metricName;
- (void).cxx_destruct;
- (id)init:(id)arg1 type:(int)arg2 metricDef:(CDStruct_37a3040a *)arg3 size:(unsigned long long)arg4 isPointMetric:(BOOL)arg5;

@end

