//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDCameraRecordingFragmentContext : HMFObject
{
    _Bool _motionActive;
    _Bool _doorbellActive;
    NSDate *_effectiveCreationDate;
}

@property(readonly, copy) NSDate *effectiveCreationDate; // @synthesize effectiveCreationDate=_effectiveCreationDate;
@property(readonly, getter=isDoorbellActive) _Bool doorbellActive; // @synthesize doorbellActive=_doorbellActive;
@property(readonly, getter=isMotionActive) _Bool motionActive; // @synthesize motionActive=_motionActive;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEffectiveCreationDate:(id)arg1 doorbellActive:(_Bool)arg2 motionActive:(_Bool)arg3;

@end

