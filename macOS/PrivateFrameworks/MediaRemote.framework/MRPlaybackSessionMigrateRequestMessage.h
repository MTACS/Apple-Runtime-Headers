//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionMigrateRequest, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;
@property(readonly, nonatomic) _MRPlaybackSessionProtobuf *playbackSession;
- (id)initWithPlaybackSession:(struct _MRPlaybackSessionProtobuf *)arg1 request:(id)arg2 forPlayerPath:(struct _MRNowPlayingPlayerPathProtobuf *)arg3;

@end

