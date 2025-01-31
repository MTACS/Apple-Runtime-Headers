//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMediaRemote/NSCopying-Protocol.h>

@class MPArtworkCatalog, MPIdentifierSet, NSData, NSDate, NSNumber, NSString;

@interface NMRNowPlayingState : NSObject <NSCopying>
{
    float _preferredPlaybackRate;
}

+ (id)emptyNowPlayingState;
@property(readonly, nonatomic) float preferredPlaybackRate; // @synthesize preferredPlaybackRate=_preferredPlaybackRate;
@property(readonly, nonatomic) double rewindTimeInterval;
@property(readonly, nonatomic) double fastForwardTimeInterval;
@property(readonly, nonatomic, getter=isSkipBackwardCommandEnabled) _Bool skipBackwardCommandEnabled;
@property(readonly, nonatomic, getter=isSkipForwardCommandEnabled) _Bool skipForwardCommandEnabled;
@property(readonly, nonatomic, getter=isPreviousTrackCommandEnabled) _Bool previousTrackCommandEnabled;
@property(readonly, nonatomic, getter=isNextTrackCommandEnabled) _Bool nextTrackCommandEnabled;
@property(readonly, nonatomic) NSString *localizedBookmarkTitle;
@property(readonly, nonatomic, getter=isBookmarkedActive) _Bool bookmarkedActive;
@property(readonly, nonatomic, getter=isBookmarkCommandEnabled) _Bool bookmarkCommandEnabled;
@property(readonly, nonatomic, getter=isBookmarkCommandSupported) _Bool bookmarkCommandSupported;
@property(readonly, nonatomic) int banCommandPresentationStyle;
@property(readonly, nonatomic) NSString *localizedBanTitle;
@property(readonly, nonatomic, getter=isBannedActive) _Bool bannedActive;
@property(readonly, nonatomic, getter=isBanCommandEnabled) _Bool banCommandEnabled;
@property(readonly, nonatomic, getter=isBanCommandSupported) _Bool banCommandSupported;
@property(readonly, nonatomic) int likeCommandPresentationStyle;
@property(readonly, nonatomic) NSString *localizedLikeTitle;
@property(readonly, nonatomic, getter=isLikedActive) _Bool likedActive;
@property(readonly, nonatomic, getter=isLikeCommandEnabled) _Bool likeCommandEnabled;
@property(readonly, nonatomic, getter=isLikeCommandSupported) _Bool likeCommandSupported;
@property(readonly, nonatomic) _Bool hasSupportedPlaybackRates;
@property(readonly, nonatomic, getter=isPlaybackRateCommandSupported) _Bool playbackRateCommandSupported;
@property(readonly, nonatomic) int shuffleMode;
@property(readonly, nonatomic, getter=isShuffleModeCommandSupported) _Bool shuffleModeCommandSupported;
@property(readonly, nonatomic) int repeatMode;
@property(readonly, nonatomic, getter=isRepeatModeCommandSupported) _Bool repeatModeCommandSupported;
@property(readonly, nonatomic) NSData *applicationIconImageData;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationDisplayName;
@property(readonly, nonatomic, getter=isAlwaysLive) _Bool alwaysLive;
@property(readonly, nonatomic, getter=isAdvertisement) _Bool advertisement;
@property(readonly, nonatomic) NSString *radioStationHash;
@property(readonly, nonatomic) NSNumber *radioStationIdentifier;
@property(readonly, nonatomic) NSString *radioStationName;
@property(readonly, nonatomic) NSString *collectionTitle;
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property(readonly, nonatomic, getter=isExplicitTrack) _Bool explicitTrack;
@property(readonly, nonatomic) NSString *album;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSNumber *storeAdamID;
@property(readonly, nonatomic) NSNumber *itemAlbumPersistentID;
@property(readonly, nonatomic) NSNumber *itemCompanionPersistentID;
@property(readonly, nonatomic) NSNumber *itemPersistentID;
@property(readonly, nonatomic) MPIdentifierSet *identifiers;
@property(readonly, nonatomic) double elapsedTimeAtLastUpdate;
@property(readonly, nonatomic) unsigned int playbackState;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic, getter=isFirstPartyApp) _Bool firstPartyApp;
@property(readonly, nonatomic, getter=isPlayingRadio) _Bool playingRadio;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) _Bool hasUpNextQueue;
@property(readonly, nonatomic) _Bool hasNowPlayingItem;
@property(readonly, nonatomic) _Bool hasNowPlayingInfo;
@property(readonly, nonatomic) double elapsedTime;
- (unsigned int)compareWithNowPlayingState:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

