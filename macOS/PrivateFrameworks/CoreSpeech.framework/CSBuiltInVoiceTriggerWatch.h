//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioRouteChangeMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAudioServerCrashMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSKeywordAnalyzerNDAPIScoreDelegate-Protocol.h>
#import <CoreSpeech/CSPhraseSpotterEnabledMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriClientBehaviorMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerXPCServiceDelegate-Protocol.h>

@class CSAsset, CSAudioProvider, CSAudioStream, CSKeywordAnalyzerNDAPI, CSPolicy, NSDictionary, NSMutableArray, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSBuiltInVoiceTriggerWatch : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSPhraseSpotterEnabledMonitorDelegate, CSAudioRouteChangeMonitorDelegate, CSVoiceTriggerXPCServiceDelegate>
{
    BOOL _listeningEnabled;
    BOOL _voiceTriggerEnabled;
    BOOL _isSecondChanceHot;
    BOOL _isSiriClientListening;
    BOOL _hasTriggerPending;
    BOOL _hasPendingNearMiss;
    BOOL _isListenPollingStarting;
    BOOL _earlyDetected;
    BOOL _isStartSampleCountMarked;
    BOOL _isPhraseSpotterBypassed;
    BOOL _isExternalPhraseSpotterRunning;
    float _keywordThreshold;
    float _keywordLoggingThreshold;
    float _lastScore;
    float _keywordThresholdSecondChance;
    float _effectiveKeywordThreshold;
    id <CSVoiceTriggerDelegate> _delegate;
    CSPolicy *_listeningStartPolicy;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    NSMutableArray *_keywordAnalyzersNDAPI;
    unsigned long long _secondChanceHotTillMachTime;
    CSAudioProvider *_audioProvider;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzerNDAPI;
    unsigned long long _numProcessedSamples;
    unsigned long long _nearMissDelayTimeout;
    unsigned long long _nearMissCandidateDetectedSamples;
    NSDictionary *_lastAnalyzerResult;
    unsigned long long _earlyDetectFiredMachTime;
    unsigned long long _analyzerStartSampleCount;
    NSString *_audioProviderUUID;
    double _lastAggTime;
    double _cumulativeUptime;
    double _cumulativeDowntime;
}

@property(nonatomic) double cumulativeDowntime; // @synthesize cumulativeDowntime=_cumulativeDowntime;
@property(nonatomic) double cumulativeUptime; // @synthesize cumulativeUptime=_cumulativeUptime;
@property(nonatomic) double lastAggTime; // @synthesize lastAggTime=_lastAggTime;
@property(nonatomic) BOOL isExternalPhraseSpotterRunning; // @synthesize isExternalPhraseSpotterRunning=_isExternalPhraseSpotterRunning;
@property(nonatomic) BOOL isPhraseSpotterBypassed; // @synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed;
@property(retain, nonatomic) NSString *audioProviderUUID; // @synthesize audioProviderUUID=_audioProviderUUID;
@property(nonatomic) unsigned long long analyzerStartSampleCount; // @synthesize analyzerStartSampleCount=_analyzerStartSampleCount;
@property(nonatomic) BOOL isStartSampleCountMarked; // @synthesize isStartSampleCountMarked=_isStartSampleCountMarked;
@property(nonatomic) BOOL earlyDetected; // @synthesize earlyDetected=_earlyDetected;
@property(nonatomic) unsigned long long earlyDetectFiredMachTime; // @synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime;
@property(retain, nonatomic) NSDictionary *lastAnalyzerResult; // @synthesize lastAnalyzerResult=_lastAnalyzerResult;
@property(nonatomic) BOOL isListenPollingStarting; // @synthesize isListenPollingStarting=_isListenPollingStarting;
@property(nonatomic) BOOL hasPendingNearMiss; // @synthesize hasPendingNearMiss=_hasPendingNearMiss;
@property(nonatomic) unsigned long long nearMissCandidateDetectedSamples; // @synthesize nearMissCandidateDetectedSamples=_nearMissCandidateDetectedSamples;
@property(nonatomic) unsigned long long nearMissDelayTimeout; // @synthesize nearMissDelayTimeout=_nearMissDelayTimeout;
@property(nonatomic) unsigned long long numProcessedSamples; // @synthesize numProcessedSamples=_numProcessedSamples;
@property(retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI; // @synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI;
@property(retain, nonatomic) CSAudioProvider *audioProvider; // @synthesize audioProvider=_audioProvider;
@property(nonatomic) BOOL hasTriggerPending; // @synthesize hasTriggerPending=_hasTriggerPending;
@property(nonatomic) BOOL isSiriClientListening; // @synthesize isSiriClientListening=_isSiriClientListening;
@property(nonatomic) BOOL isSecondChanceHot; // @synthesize isSecondChanceHot=_isSecondChanceHot;
@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
@property(nonatomic) float effectiveKeywordThreshold; // @synthesize effectiveKeywordThreshold=_effectiveKeywordThreshold;
@property(nonatomic) float keywordThresholdSecondChance; // @synthesize keywordThresholdSecondChance=_keywordThresholdSecondChance;
@property(nonatomic) float lastScore; // @synthesize lastScore=_lastScore;
@property(nonatomic) float keywordLoggingThreshold; // @synthesize keywordLoggingThreshold=_keywordLoggingThreshold;
@property(nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property(retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI; // @synthesize keywordAnalyzersNDAPI=_keywordAnalyzersNDAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
@property(nonatomic) BOOL listeningEnabled; // @synthesize listeningEnabled=_listeningEnabled;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) CSPolicy *listeningStartPolicy; // @synthesize listeningStartPolicy=_listeningStartPolicy;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_analyzerReset:(id)arg1 withCause:(unsigned long long)arg2;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)_resetStartAnalyzeTime;
- (void)_resetUpTime;
- (void)_logUptimeWithVTSwitchChanged:(BOOL)arg1 VTEnabled:(BOOL)arg2;
- (void)_receivedHearstConnectionEvent:(BOOL)arg1;
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;
- (void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(BOOL)arg2;
- (void)CSPhraseSpotterEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4;
- (id)_buildVoiceTriggerEventInfo:(id)arg1;
- (void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3 forceMaximized:(BOOL)arg4;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)_stopRaiseToSpeak;
- (void)_startRaiseToSpeak;
- (void)_startRaiseToSpeakVAD;
- (void)_didStopAudioStream;
- (void)_stopListening;
- (void)_startListeningWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestStartAudioStreamWithSource:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_computeEffectiveThreshold;
- (void)_adjustWakeGestureHostTimeIfNeeded;
- (void)_transitListeningStatus:(BOOL)arg1;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (void)handleListenStartPolicyChange:(BOOL)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

