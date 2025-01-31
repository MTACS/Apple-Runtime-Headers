//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFTimerDelegate-Protocol.h>
#import <HomeAI/HMISystemResourceUsageMonitorDelegate-Protocol.h>

@class HMFMemoryMonitor, HMFTimer, HMFUnfairLock, HMIPIDController, HMISystemResourceUsageMonitor, MovingAverage, NSArray, NSObject, NSPointerArray, NSString;
@protocol OS_dispatch_queue;

@interface HMICameraVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate>
{
    _Bool _paused;
    double _analysisFPS;
    unsigned long long _maxConcurrentAnalyzers;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFUnfairLock *_lock;
    HMFTimer *_tick;
    NSPointerArray *_internalAnalyzers;
    HMISystemResourceUsageMonitor *_systemResourceUsageMonitor;
    long long _systemResourceUsageMonitorUsageLevel;
    HMFMemoryMonitor *_memoryMonitor;
    HMIPIDController *_thermalPIDController;
    MovingAverage *_averageAnalysisTimeMovingAverage;
    MovingAverage *_averageTotalAnalysisTimeMovingAverage;
    double _analysisFPSPreference;
}

+ (id)logCategory;
+ (id)sharedInstance;
@property(readonly) double analysisFPSPreference; // @synthesize analysisFPSPreference=_analysisFPSPreference;
@property(readonly) MovingAverage *averageTotalAnalysisTimeMovingAverage; // @synthesize averageTotalAnalysisTimeMovingAverage=_averageTotalAnalysisTimeMovingAverage;
@property(readonly) MovingAverage *averageAnalysisTimeMovingAverage; // @synthesize averageAnalysisTimeMovingAverage=_averageAnalysisTimeMovingAverage;
@property(readonly) HMIPIDController *thermalPIDController; // @synthesize thermalPIDController=_thermalPIDController;
@property(readonly) HMFMemoryMonitor *memoryMonitor; // @synthesize memoryMonitor=_memoryMonitor;
@property long long systemResourceUsageMonitorUsageLevel; // @synthesize systemResourceUsageMonitorUsageLevel=_systemResourceUsageMonitorUsageLevel;
@property(readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor; // @synthesize systemResourceUsageMonitor=_systemResourceUsageMonitor;
@property(readonly) NSPointerArray *internalAnalyzers; // @synthesize internalAnalyzers=_internalAnalyzers;
@property(readonly) HMFTimer *tick; // @synthesize tick=_tick;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
@property(readonly) NSArray *analyzers;
- (void)logState;
- (void)timerDidFire:(id)arg1;
- (void)removeAllAnalyzers;
- (void)_compactInternalAnalyzers;
- (void)registerAnalyzer:(id)arg1;
- (void)requestDidEnd:(id)arg1 outcome:(long long)arg2;
- (void)updateAnalysisFPS:(id)arg1;
@property(readonly) double averageTotalAnalysisTime;
@property(readonly) double averageAnalysisTime;
@property(readonly) unsigned long long maxConcurrentAnalyzers; // @synthesize maxConcurrentAnalyzers=_maxConcurrentAnalyzers;
- (_Bool)inFullBypassMode;
@property(readonly) double analysisFPS; // @synthesize analysisFPS=_analysisFPS;
@property(readonly) long long systemResourceUsageLevel;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

