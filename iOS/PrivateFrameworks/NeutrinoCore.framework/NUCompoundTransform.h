//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUGeometryTransform.h>

@class NSArray;

@interface NUCompoundTransform : NUGeometryTransform
{
    NSArray *_transforms;
}

- (void).cxx_destruct;
- (id)description;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)initWithTransforms:(id)arg1;
- (id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2;

@end

