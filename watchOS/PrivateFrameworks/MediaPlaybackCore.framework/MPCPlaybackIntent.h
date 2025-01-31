//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

@interface MPCPlaybackIntent : NSObject
{
    id <MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
    NSString *_localizedTitle;
    int _tracklistSource;
    id <NSSecureCoding> _tracklistToken;
    int _actionAfterQueueLoad;
    int _shuffleMode;
    int _repeatMode;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriAssetInfo;
    NSString *_siriReferenceIdentifier;
}

+ (id)tracklistDataSourceForSource:(int)arg1;
+ (id)radioPlaybackIntentWithStationURL:(id)arg1;
+ (id)radioPlaybackIntentWithStationStringID:(id)arg1;
+ (id)radioPlaybackIntentWithStation:(id)arg1;
+ (id)radioPlaybackIntentFromSong:(id)arg1;
+ (id)radioPlaybackIntentFromArtist:(id)arg1;
+ (id)radioPlaybackIntentFromAlbum:(id)arg1;
+ (id)intentFromQueueDescriptor:(id)arg1;
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(nonatomic) int actionAfterQueueLoad; // @synthesize actionAfterQueueLoad=_actionAfterQueueLoad;
@property(retain, nonatomic) id <NSSecureCoding> tracklistToken; // @synthesize tracklistToken=_tracklistToken;
@property(nonatomic) int tracklistSource; // @synthesize tracklistSource=_tracklistSource;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void).cxx_destruct;
- (void)getRepresentativeMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <MPCPlaybackIntentDataSource> tracklistDataSource;
- (id)description;
- (id)init;

@end

