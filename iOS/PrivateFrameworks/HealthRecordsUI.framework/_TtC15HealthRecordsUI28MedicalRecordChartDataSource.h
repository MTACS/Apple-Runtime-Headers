//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSString;

@interface _TtC15HealthRecordsUI28MedicalRecordChartDataSource : HKGraphSeriesDataSource
{
    // Error parsing type: , name: type
    // Error parsing type: , name: concept
    // Error parsing type: , name: dataTransformer
    // Error parsing type: , name: chartableCodedQuantitySets
    // Error parsing type: , name: cachedBucketedSets
    // Error parsing type: , name: collapseIntoRangePoints
    // Error parsing type: , name: unit
    // Error parsing type: , name: preferredColors
    // Error parsing type: , name: chartableXRange
    // Error parsing type: , name: minimumAxisSpace
}

- (void).cxx_destruct;
- (id)init;
- (id)chartDisplayTypeWithVerticalAxis:(id)arg1;
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)initWithConcept:(id)arg1 dataTransformer:(id)arg2 unit:(id)arg3 preferredColors:(id)arg4 collapseIntoRangePoints:(_Bool)arg5 type:(long long)arg6;
@property(nonatomic, readonly) NSString *displayName;

@end

