//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class MPMovie;

@interface MPCSingleMoviePlaybackContext : MPPlaybackContext
{
    MPMovie *_movie;
}

+ (Class)queueFeederClass;
@property(readonly, nonatomic) MPMovie *movie; // @synthesize movie=_movie;
- (void).cxx_destruct;
- (id)initWithMovie:(id)arg1;

@end

