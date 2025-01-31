//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, MPModelGenericObject, NSArray, NSIndexPath, NSString;

@interface MPCPlayerResponseItem : NSObject
{
    unsigned int _seekSupport;
    _Bool _placeholder;
    NSString *_contentItemIdentifier;
    int _revision;
    NSString *_localizedDurationString;
    NSArray *_languageOptionGroups;
    MPCPlayerResponse *_response;
    NSIndexPath *_indexPath;
    MPModelGenericObject *_metadataObject;
    CDStruct_fce57115 _duration;
}

@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) MPModelGenericObject *metadataObject; // @synthesize metadataObject=_metadataObject;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSArray *languageOptionGroups; // @synthesize languageOptionGroups=_languageOptionGroups;
@property(readonly, nonatomic) NSString *localizedDurationString; // @synthesize localizedDurationString=_localizedDurationString;
@property(readonly, nonatomic) CDStruct_fce57115 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSString *contentItemIdentifier; // @synthesize contentItemIdentifier=_contentItemIdentifier;
- (void).cxx_destruct;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)arg1;
- (id)_buildLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2;
- (unsigned int)_determineSeekSupport;
- (id)startPictureInPicture;
- (id)remove;
- (id)rateCommand;
- (id)wishlistCommand;
- (id)dislikeCommand;
- (id)likeCommand;
- (id)playbackRateCommand;
- (id)seekCommand;
- (id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3;

@end

