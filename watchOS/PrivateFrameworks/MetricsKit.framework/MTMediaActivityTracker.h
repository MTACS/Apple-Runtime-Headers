//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMediaActivity, MTMediaTimeTracker, MTVPAFKit, NSMutableArray;
@protocol MTMediaPlaylist;

@interface MTMediaActivityTracker : NSObject
{
    _Bool _shouldGenerateTransitions;
    MTVPAFKit *_vpafKit;
    id <MTMediaPlaylist> _playlist;
    MTMediaActivity *_playActivity;
    MTMediaActivity *_seekActivity;
    NSMutableArray *_eventData;
    MTMediaTimeTracker *_timeTracker;
}

+ (CDUnknownBlockType)playlistItemComparator;
@property(retain, nonatomic) MTMediaTimeTracker *timeTracker; // @synthesize timeTracker=_timeTracker;
@property(retain, nonatomic) NSMutableArray *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MTMediaActivity *seekActivity; // @synthesize seekActivity=_seekActivity;
@property(retain, nonatomic) MTMediaActivity *playActivity; // @synthesize playActivity=_playActivity;
@property(retain, nonatomic) id <MTMediaPlaylist> playlist; // @synthesize playlist=_playlist;
@property(nonatomic) __weak MTVPAFKit *vpafKit; // @synthesize vpafKit=_vpafKit;
@property(nonatomic) _Bool shouldGenerateTransitions; // @synthesize shouldGenerateTransitions=_shouldGenerateTransitions;
- (void).cxx_destruct;
- (void)generatePlaylistTransitionsIfNecessary:(unsigned int)arg1;
- (void)stopActivity:(int)arg1 overallPosition:(unsigned int)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (id)startActivity:(int)arg1 overallPosition:(unsigned int)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (id)combineEventData:(id)arg1 withPlaylistDataForItem:(id)arg2;
- (void)updateEventData:(id)arg1;
- (void)synchronizePlaybackRate:(float)arg1 overallPosition:(unsigned int)arg2;
- (void)seekStoppedAtOverallPosition:(unsigned int)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStartedAtOverallPosition:(unsigned int)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playTransitionedAtOverallPosition:(unsigned int)arg1 eventData:(id)arg2;
- (void)playStoppedAtOverallPosition:(unsigned int)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedAtOverallPosition:(unsigned int)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedWithPlaybackRate:(float)arg1 overallPosition:(unsigned int)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (id)initWithVPAFKit:(id)arg1 playlist:(id)arg2 eventData:(id)arg3;

@end

