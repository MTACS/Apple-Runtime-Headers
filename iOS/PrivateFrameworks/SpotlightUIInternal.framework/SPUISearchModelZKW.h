//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUIInternal/SPUISearchModel.h>

@class NSObject, SPZKWSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW : SPUISearchModel
{
    NSObject<OS_dispatch_queue> *_queryProcessor;
    _Bool _shouldCacheResults;
    _Bool _newQuery;
    SPZKWSession *_session;
}

@property(retain, nonatomic) SPZKWSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)updateWithQueryContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

