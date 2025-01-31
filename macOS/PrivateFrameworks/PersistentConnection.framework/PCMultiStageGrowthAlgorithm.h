//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersistentConnection/PCGrowthAlgorithm-Protocol.h>

@class NSDate, NSDictionary, NSString;
@protocol OS_os_log;

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm>
{
    double _currentKeepAliveInterval;
    double _minimumKeepAliveInterval;
    double _maximumKeepAliveInterval;
    double _previousMaximumKeepAliveInterval;
    double _lastKeepAliveInterval;
    double _lastSuccessfulKeepAliveInterval;
    int _growthStage;
    double _highWatermark;
    double _initialGrowthStageHighWatermark;
    double _initialGrowthStageLastAttempt;
    NSDate *_leaveSteadyStateDate;
    NSDate *_leaveMinimumIntervalFallbackStateDate;
    NSString *_algorithmName;
    unsigned long long _countOfGrowthActions;
    NSObject<OS_os_log> *_logObject;
    BOOL _isServerOriginatedKeepAlive;
    BOOL _minimumIntervalFallbackEnabled;
    int _lastKeepAliveAlgorithmMode;
    int _currentKeepAliveAlgorithmMode;
    double _serverStatsMinKeepAliveInterval;
    double _serverStatsMaxKeepAliveInterval;
    double _serverStatsExpectedKeepAliveInterval;
    BOOL _usingServerStatsAggressively;
}

+ (void)_loadDefaultValue:(double *)arg1 forKey:(struct __CFString *)arg2;
+ (void)_loadDefaults;
@property(nonatomic) BOOL usingServerStatsAggressively; // @synthesize usingServerStatsAggressively=_usingServerStatsAggressively;
@property(nonatomic) double serverStatsMaxKeepAliveInterval; // @synthesize serverStatsMaxKeepAliveInterval=_serverStatsMaxKeepAliveInterval;
@property(nonatomic) double serverStatsExpectedKeepAliveInterval; // @synthesize serverStatsExpectedKeepAliveInterval=_serverStatsExpectedKeepAliveInterval;
@property(nonatomic) double serverStatsMinKeepAliveInterval; // @synthesize serverStatsMinKeepAliveInterval=_serverStatsMinKeepAliveInterval;
@property(readonly, nonatomic) int growthStage; // @synthesize growthStage=_growthStage;
@property(nonatomic) BOOL minimumIntervalFallbackEnabled; // @synthesize minimumIntervalFallbackEnabled=_minimumIntervalFallbackEnabled;
@property(nonatomic) BOOL isServerOriginatedKeepAlive; // @synthesize isServerOriginatedKeepAlive=_isServerOriginatedKeepAlive;
@property(nonatomic) double lastSuccessfulKeepAliveInterval; // @synthesize lastSuccessfulKeepAliveInterval=_lastSuccessfulKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval; // @synthesize currentKeepAliveInterval=_currentKeepAliveInterval;
@property(readonly, nonatomic) unsigned long long countOfGrowthActions; // @synthesize countOfGrowthActions=_countOfGrowthActions;
- (void).cxx_destruct;
- (id)_stringForMode:(int)arg1;
- (id)_stringForStage:(int)arg1;
- (id)_stringForAction:(int)arg1;
@property(readonly, copy) NSString *description;
- (double)_steadyStateTimeout;
- (void)_processRefinedShrinkAction:(int)arg1;
- (void)_processInitialShrinkAction:(int)arg1;
- (void)_processRefinedGrowthAction:(int)arg1;
- (void)_processMinimumIntervalFallbackStateAction:(int)arg1;
- (void)_processSteadyStateAction:(int)arg1;
- (void)_processBackoffAction:(int)arg1;
- (void)_processInitialGrowthAction:(int)arg1;
- (void)processNextAction:(int)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2;
- (void)_adjustGrowthAlgorithmMode;
@property(readonly, copy, nonatomic) NSDictionary *cacheInfo;
- (BOOL)useIntervalIfImprovement:(double)arg1;
- (void)_fallbackToLastSuccessfulKeepAliveInterval;
- (void)_setCurrentKeepAliveInterval:(double)arg1;
@property(nonatomic) double minimumKeepAliveInterval; // @synthesize minimumKeepAliveInterval=_minimumKeepAliveInterval;
@property(nonatomic) double maximumKeepAliveInterval; // @synthesize maximumKeepAliveInterval=_maximumKeepAliveInterval;
- (id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

