//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthExperience/_TtC16HealthExperience14AsyncOperation.h>

#import <HealthExperience/RERelevanceEngineObserver-Protocol.h>

@interface _TtC16HealthExperience38ResumeRelevanceEngineIfNeededOperation : _TtC16HealthExperience14AsyncOperation <RERelevanceEngineObserver>
{
    // Error parsing type: , name: relevanceEngine
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1;
- (void)main;

@end

