//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelLibraryRequest.h>

#import <MediaPlaybackCore/MPCModelPlaybackRequesting-Protocol.h>
#import <MediaPlaybackCore/MPCModelRequestRTCReporting-Protocol.h>

@class MPSectionedCollection, NSString;

@interface MPModelLibraryRequest (MPCModelPlaybackAdditions) <MPCModelPlaybackRequesting, MPCModelRequestRTCReporting>
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) MPSectionedCollection *playbackSourceModelObjects;
@property(readonly) Class superclass;
@end

