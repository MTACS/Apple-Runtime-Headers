//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PCGrowthAlgorithm <NSObject>
@property(readonly, nonatomic) int growthStage;
@property(readonly, copy, nonatomic) NSDictionary *cacheInfo;
@property(readonly, nonatomic) unsigned long long countOfGrowthActions;
@property(nonatomic) _Bool usingServerStatsAggressively;
@property(nonatomic) _Bool minimumIntervalFallbackEnabled;
@property(nonatomic) double lastSuccessfulKeepAliveInterval;
@property(nonatomic) double serverStatsMinKeepAliveInterval;
@property(nonatomic) double serverStatsMaxKeepAliveInterval;
@property(nonatomic) double serverStatsExpectedKeepAliveInterval;
@property(nonatomic) double maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval;
@property(nonatomic) _Bool isServerOriginatedKeepAlive;
@property(readonly, nonatomic) double currentKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (_Bool)useIntervalIfImprovement:(double)arg1;
- (id)initWithCacheInfo:(NSDictionary *)arg1 loggingIdentifier:(NSString *)arg2 algorithmName:(NSString *)arg3;
@end

