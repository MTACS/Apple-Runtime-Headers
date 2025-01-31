//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVItem, MPPlaybackContext;
@protocol MPAVQueueController;

@protocol MPAVQueueControllerDelegate <NSObject>
- (void)queueController:(id <MPAVQueueController>)arg1 didChangeShuffleType:(int)arg2;
- (void)queueController:(id <MPAVQueueController>)arg1 didChangeRepeatType:(int)arg2;
- (void)queueController:(id <MPAVQueueController>)arg1 didChangeContentsWithReplacementPlaybackContext:(MPPlaybackContext *)arg2;
- (void)queueController:(id <MPAVQueueController>)arg1 failedToLoadItem:(MPAVItem *)arg2;
- (void)queueControllerDidChangeContents:(id <MPAVQueueController>)arg1;
@end

