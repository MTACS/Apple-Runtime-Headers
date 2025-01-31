//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INMediaItem, INMediaSearch, NSArray, NSDate, NSNumber, NSString;

@protocol INPlayMediaIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *proxiedBundleIdentifier;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) INMediaSearch *mediaSearch;
@property(copy, nonatomic) NSNumber *playbackSpeed;
@property(nonatomic) int playbackQueueLocation;
@property(copy, nonatomic) NSString *recoID;
@property(copy, nonatomic) NSArray *buckets;
@property(copy, nonatomic) NSDate *expirationDate;
@property(copy, nonatomic) NSNumber *resumePlayback;
@property(nonatomic) int playbackRepeatMode;
@property(copy, nonatomic) NSNumber *playShuffled;
@property(copy, nonatomic) INMediaItem *mediaContainer;
@property(copy, nonatomic) NSArray *mediaItems;
- (id)init;
@end

