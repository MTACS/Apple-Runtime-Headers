//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, NSString, VCNWConnectionCongestionDetector, VCRateControlMediaController;
@protocol VCRateControlAlgorithm;

__attribute__((visibility("hidden")))
@interface AVCRateController : NSObject
{
    id _rateControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    AVCRateControlFeedbackController *_feedbackController;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    VCNWConnectionCongestionDetector *_nwConnectionCongestionDetector;
    VCRateControlMediaController *_mediaController;
    id <VCRateControlAlgorithm> _rateControlAlgorithm;
    struct AVCRateControlConfig _configuration;
    unsigned int _targetBitrateCap;
    unsigned int _estimatedBandwidthCap;
    unsigned int _expectedBitrate;
    unsigned int _actualBitrate;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int _roundTripTimeMilliseconds;
    unsigned int _packetLossPercentage;
    unsigned int _packetLossPercentageVideo;
    unsigned int _totalPacketsReceived;
    unsigned int _totalPacketsSent;
    unsigned int _totalBytesSent;
    unsigned int _totalBytesReceived;
    unsigned int _burstPacketLoss;
    unsigned int _owrd;
    BOOL _isNetworkCongested;
    void *_logDump;
    void *_logFeedbackDump;
    void *_logBasebandDump;
    void *_logNWDump;
    BOOL _isDumpFileEnabled;
    NSString *_dumpID;
    BOOL _isPeriodicLoggingEnabled;
    BOOL _isBasebandEnabled;
    BOOL _isForSimulation;
    BOOL _isUplink;
    BOOL _paused;
    BOOL _useExternalThread;
    BOOL _didConfigured;
    double _lastDefaultsReadTime;
    int _forcedTargetBitrate;
    int _forcedMaxBitrate;
    id _reportingAgentWeak;
    int _reportingModuleID;
    unsigned int _lastReportFlushedVideoPacketCount;
    unsigned int _lastReportFlushedAudioPacketCount;
    BOOL _isTargetBitrateOvershootReported;
    double _lastTimeTargetBitrateOvershootRecorded;
    BOOL _isUnexpectedLowTargetBitrateReported;
    double _lastTimeUnexpectedLowTargetBitrateRecorded;
    BOOL _isUnexpectedHighRTTReported;
}

@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned int expectedBitrate; // @synthesize expectedBitrate=_expectedBitrate;
@property(nonatomic) unsigned int estimatedBandwidthCap; // @synthesize estimatedBandwidthCap=_estimatedBandwidthCap;
@property(nonatomic) unsigned int targetBitrateCap; // @synthesize targetBitrateCap=_targetBitrateCap;
@property(readonly, nonatomic) struct AVCRateControlConfig configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) VCNWConnectionCongestionDetector *nwConnectionCongestionDetector; // @synthesize nwConnectionCongestionDetector=_nwConnectionCongestionDetector;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
- (void)printNWConnectionStatistics:(CDStruct_b21f1e06)arg1;
- (void)printBasebandNotificationStatistics:(CDStruct_b21f1e06)arg1;
- (void)printFeedbackMessage:(CDStruct_b21f1e06)arg1;
- (void)releaseLogDumpFiles;
- (void)createNWConnectionLogDumpFile;
- (void)createBasebandLogDumpFile;
- (void)createLogDumpFiles:(id)arg1;
- (int)minTierAboveBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (int)maxTierBelowBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (void)loadDefaultSettings;
- (void)reportTargetBitrateChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (void)reportNetworkStatistics;
- (void)doRateControlWithNWConnectionStatistics:(CDStruct_b21f1e06)arg1;
- (void)doRateControlWithBasebandStatistics:(CDStruct_b21f1e06)arg1;
- (void)checkAndReportAbnormalSymptoms;
- (void)doRateControlWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)createVCRateControlAlgorithmWithConfiguration:(struct VCRateControlAlgorithmConfig)arg1;
- (void)configureAlgorithmWithRestart:(BOOL)arg1;
- (void)setDefaultAlgorithmConfiguration:(struct VCRateControlAlgorithmConfig *)arg1;
- (void)configureInternal:(struct AVCRateControlConfig)arg1;
- (int)initialBitrateTierFromLearntBitrateWithLocalTechnology:(unsigned int)arg1 remoteTech:(unsigned int)arg2 defaultTier:(int)arg3;
- (BOOL)isRadioTechnologyOnWiFiOrLTE:(unsigned int)arg1;
- (BOOL)isRadioTechnologyOnCellular:(unsigned int)arg1;
- (id)indicatorFromRadioTech:(unsigned int)arg1;
- (unsigned int)radioAccessTechnologyFromAVConferenceCellTech:(int)arg1 isCellular:(BOOL)arg2;
- (unsigned int)rateControlModeFromAVConferenceOperatingMode:(int)arg1;
- (void)configureWithOperatingMode:(int)arg1 isLocalCellular:(BOOL)arg2 localCellTech:(int)arg3 isRemoteCellular:(BOOL)arg4 remoteCellTech:(int)arg5 bitrateCapKbps:(unsigned int)arg6;
- (void)deregisterPeriodicTask;
- (void)getRealTimeStats:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForiPadCompanion:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForServerBasedRxOnly:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForServerBasedTxOnly:(struct __CFDictionary *)arg1;
- (void)registerPeriodicTask;
- (void)periodicTask:(void *)arg1;
@property(readonly) id reportingAgent;
- (void)configure:(struct AVCRateControlConfig)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dumpID:(id)arg2 forSimulation:(BOOL)arg3 isUplink:(BOOL)arg4 reportingAgent:(id)arg5 useExternalThread:(BOOL)arg6;
- (id)initWithDelegate:(id)arg1 dumpID:(id)arg2 isUplink:(BOOL)arg3 reportingAgent:(id)arg4;

@end

