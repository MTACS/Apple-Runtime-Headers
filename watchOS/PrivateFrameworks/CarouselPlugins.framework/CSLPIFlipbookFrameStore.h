//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLPIFlipbookFrame, NSMutableArray;
@protocol CSLFlipbookInvalidationDelegate;

@interface CSLPIFlipbookFrameStore : NSObject
{
    CSLPIFlipbookFrame *_invalidatedOnScreenFrame;
    NSMutableArray *_flipbookFrames;
    id <CSLFlipbookInvalidationDelegate> _invalidationDelegate;
}

- (void).cxx_destruct;
- (unsigned int)_insertionIndexForPresentationTime:(id)arg1;
- (id)removeFramesOnOrAfterPresentationTime:(id)arg1 leeway:(double)arg2 forReason:(int)arg3;
- (id)frameOnScreenAtPresentationTime:(id)arg1;
- (void)removeAllFramesForReason:(int)arg1;
- (id)logInvalidatedFramesInRange:(struct _NSRange)arg1 forReason:(int)arg2;
- (void)removeExpiredFrames;
- (void)addFrame:(id)arg1;
@property(readonly, nonatomic) CSLPIFlipbookFrame *nextFrame;
@property(readonly, nonatomic) CSLPIFlipbookFrame *lastFrame;
@property(readonly, nonatomic) unsigned int count;
- (id)initWithInvalidationDelegate:(id)arg1;

@end

