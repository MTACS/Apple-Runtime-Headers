//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPNowPlayingContentItem, MPNowPlayingInfoCenter, NSArray, NSProgress, NSString;
@protocol MPNowPlayingInfoTransportableSessionRequest;

@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>
- (MPNowPlayingContentItem *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemForID:(NSString *)arg2;
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDForOffset:(int)arg2;

@optional
- (MPNowPlayingContentItem *)contentItemForOffset:(int)arg1;
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id <MPNowPlayingInfoTransportableSessionRequest>)arg2 completion:(void (^)(MPNowPlayingInfoTransportableSessionResponse *, NSError *))arg3;
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 getTransportablePlaybackSessionRepresentationWithCompletion:(void (^)(NSData *, NSError *))arg2;
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 childContentItemIDAtIndex:(int)arg2 ofItem:(MPNowPlayingContentItem *)arg3;
- (NSArray *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDsFromOffset:(int)arg2 toOffset:(int)arg3 nowPlayingIndex:(int *)arg4;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 currentLanguageOptionsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 availableLanguageOptionsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 infoForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 lyricsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(MPNowPlayingInfoLyricsItem *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 artworkForContentItem:(MPNowPlayingContentItem *)arg2 size:(struct CGSize)arg3 completion:(void (^)(UIImage *, NSError *))arg4;
- (NSString *)playbackQueueIdentifierForNowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1;
@end

