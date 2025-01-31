//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKPointLabelEngine : NSObject
{
    _Bool _lastRenderOverlapped;
    CDUnknownBlockType _sizeForValue;
    long long _state;
    struct CGPoint _previousTransformedPoint;
    struct CGPoint _previousUntransformedPoint;
    struct CGPoint _currentTransformedPoint;
    struct CGPoint _currentUntransformedPoint;
    struct CGRect _boundingRegion;
    CDStruct_d6e4b0bd _previousRenderingData;
    CDStruct_d6e4b0bd _currentRenderingData;
}

@property(nonatomic) _Bool lastRenderOverlapped; // @synthesize lastRenderOverlapped=_lastRenderOverlapped;
@property(nonatomic) CDStruct_d6e4b0bd currentRenderingData; // @synthesize currentRenderingData=_currentRenderingData;
@property(nonatomic) CDStruct_d6e4b0bd previousRenderingData; // @synthesize previousRenderingData=_previousRenderingData;
@property(nonatomic) struct CGPoint currentUntransformedPoint; // @synthesize currentUntransformedPoint=_currentUntransformedPoint;
@property(nonatomic) struct CGPoint currentTransformedPoint; // @synthesize currentTransformedPoint=_currentTransformedPoint;
@property(nonatomic) struct CGPoint previousUntransformedPoint; // @synthesize previousUntransformedPoint=_previousUntransformedPoint;
@property(nonatomic) struct CGPoint previousTransformedPoint; // @synthesize previousTransformedPoint=_previousTransformedPoint;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) CDUnknownBlockType sizeForValue; // @synthesize sizeForValue=_sizeForValue;
@property(readonly, nonatomic) struct CGRect boundingRegion; // @synthesize boundingRegion=_boundingRegion;
- (void).cxx_destruct;
- (CDStruct_d6e4b0bd)_computeRenderingDataForValue:(double)arg1 transformedPoint:(struct CGPoint)arg2 previousSlope:(long long)arg3 nextSlope:(long long)arg4 previousOptions:(long long)arg5;
- (long long)_slopeForPoint:(struct CGPoint)arg1 otherPoint:(struct CGPoint)arg2;
- (CDStruct_d6e4b0bd)renderingData;
- (_Bool)processLastPoint;
- (_Bool)processTransformedPoint:(struct CGPoint)arg1 untransformedPoint:(struct CGPoint)arg2;
- (id)initWithBoundingRegion:(struct CGRect)arg1 labelSizeBlock:(CDUnknownBlockType)arg2;

@end

