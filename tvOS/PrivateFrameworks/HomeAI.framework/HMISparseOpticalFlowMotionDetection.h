//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeAI/HMIMotionDetection.h>

@class NSArray;

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection
{
    NSArray *_motionVectors;
}

@property(readonly) NSArray *motionVectors; // @synthesize motionVectors=_motionVectors;
- (void).cxx_destruct;
- (_Bool)isSubBoundingBoxStatic:(struct CGRect)arg1 forMetric:(long long)arg2;
- (float)scoreForSubBoundingBox:(struct CGRect)arg1 forMetric:(long long)arg2;
- (id)initWithBoundingBox:(struct CGRect)arg1 motionVectors:(id)arg2;

@end

