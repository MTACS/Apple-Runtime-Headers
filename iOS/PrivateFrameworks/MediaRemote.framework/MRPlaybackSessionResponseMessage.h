//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRPlaybackSessionProtobuf;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _MRPlaybackSessionProtobuf *playbackSession;
- (id)initWithPlaybackSession:(struct _MRPlaybackSessionProtobuf *)arg1;

@end

