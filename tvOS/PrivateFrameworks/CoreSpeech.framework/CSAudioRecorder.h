//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/AVVoiceControllerRecordDelegate-Protocol.h>
#import <CoreSpeech/CSAudioDecoderDelegate-Protocol.h>
#import <CoreSpeech/CSAudioFileReaderDelegate-Protocol.h>

@class AVVoiceController, CSAudioFileReader, CSRemoteRecordClient, NSDictionary, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate>
{
    AVVoiceController *_voiceController;
    struct OpaqueAudioConverter *_deinterleaver;
    struct AudioBufferList _interleavedABL;
    struct AudioBufferList *_pNonInterleavedABL;
    CSRemoteRecordClient *_remoteRecordClient;
    NSDictionary *_latestContext;
    _Bool _shouldUseRemoteRecord;
    NSMutableDictionary *_opusDecoders;
    CSAudioFileReader *_audioFileReader;
    unsigned long long _audioFilePathIndex;
    _Bool _waitingForDidStart;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

+ (void)createSharedAudioSession;
+ (unsigned long long)_convertDeactivateOption:(unsigned long long)arg1;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)_getRecordSettingsWithRequest:(id)arg1;
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (_Bool)_needResetAudioInjectionIndex:(id)arg1;
- (void)_createDeInterleaverIfNeeded;
- (id)_deinterleaveBufferIfNeeded:(id)arg1;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerMediaServicesWereLost:(id)arg1;
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(_Bool)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(_Bool)arg2;
- (void)voiceControllerEndRecordInterruption:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)voiceControllerBeginRecordInterruption:(id)arg1;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2;
- (void)_audioRecorderDidStartRecordingSuccessfully:(_Bool)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3;
- (id)metrics;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(_Bool)arg1;
- (unsigned long long)alertStartTime;
- (_Bool)playAlertSoundForType:(long long)arg1;
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned int)arg6;
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;
- (void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;
- (void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4;
- (_Bool)_shouldUseRemoteBuiltInMic:(id)arg1;
- (_Bool)_shouldUseRemoteRecordForContext:(id)arg1;
- (id)voiceTriggerInfo;
- (id)playbackRoute;
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;
- (void)enableMiniDucking:(_Bool)arg1;
@property(nonatomic) _Bool duckOthersOption;
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1;
- (id)recordRouteWithStreamHandleId:(unsigned long long)arg1;
- (_Bool)isRecordingWithStreamHandleId:(unsigned long long)arg1;
- (_Bool)isSessionCurrentlyActivated;
- (_Bool)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)startAudioStreamWithOption:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_startAudioStreamForAudioInjection;
- (_Bool)_shouldInjectAudio;
- (_Bool)prepareAudioStreamRecord:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)setContext:(id)arg1 error:(id *)arg2;
- (id)_voiceControllerWithError:(id *)arg1;
- (void)_destroyVoiceController;
- (void)dealloc;
- (void)willDestroy;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithQueue:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

