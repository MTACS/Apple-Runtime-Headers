//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNSaliencyImageObservation : VNPixelBufferObservation
{
    struct CGSize _mOriginalImageSize;
    struct CGRect _mSalientRegion;
    struct CGRect _mHighlySalientRegion;
    struct os_unfair_lock_s _mComputeBoundingBoxesLock;
    NSArray *_mSalientObjects;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect narrowedBoundingBox;
@property(readonly, nonatomic) struct CGRect boundingBox;
@property(readonly, nonatomic) NSArray *salientObjects;
- (void)_computeBoundingBoxes;
- (_Bool)calculateSaliencyBoundingBoxesForDetectorType:(id)arg1 configurationOptions:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (id)salientObjectsAndReturnError:(id *)arg1;
- (struct __CVBuffer *)createSaliencyImageAndReturnError:(id *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(struct __CVBuffer *)arg2 originalImageSize:(struct CGSize)arg3;

@end

