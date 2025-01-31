//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSArray, NSMutableArray, _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingPlayerProtobuf;
@protocol OS_dispatch_queue;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState>
{
    _MRNowPlayingPlayerProtobuf *_activePlayer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_playerClients;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)restoreNowPlayingClientState;
@property(readonly, nonatomic) NSArray *playerClients;
- (void)removePlayer:(id)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)arg1;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
- (_Bool)updateActivePlayerPath:(id)arg1;
- (void)mergeClient:(id)arg1;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *client;
- (id)initWithPlayerPath:(id)arg1;

@end

