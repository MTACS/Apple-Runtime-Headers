//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCameraClipCollection;

@interface HMCameraEventNotificationAssociatedClipContext : NSObject
{
    HMCameraClipCollection *_associatedClipCollection;
    double _eventOffsetInClip;
}

@property(readonly) double eventOffsetInClip; // @synthesize eventOffsetInClip=_eventOffsetInClip;
@property(readonly) HMCameraClipCollection *associatedClipCollection; // @synthesize associatedClipCollection=_associatedClipCollection;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEventOffsetInClip:(double)arg1 associatedClipCollection:(id)arg2;

@end

