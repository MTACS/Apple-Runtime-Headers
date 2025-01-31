//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXTapToSpeakTime/AVAudioPlayerDelegate-Protocol.h>
#import <AXTapToSpeakTime/CSLSOnWristMonitorDelegate-Protocol.h>

@class AVAudioPlayer, AXTapticChimeAsset, CSLSOnWristMonitor, CSLSOnWristState, DNDEventBehaviorResolutionService, NMRNowPlayingController, NSDate, NSString, PCSimpleTimer;

@interface AXTapticChimesScheduler : NSObject <AVAudioPlayerDelegate, CSLSOnWristMonitorDelegate>
{
    PCSimpleTimer *_chimeTimer;
    AVAudioPlayer *_audioPlayer;
    NSString *_previousAudioSessionCategory;
    AXTapticChimeAsset *_currentChimeAsset;
    unsigned int _audioPlaybackPowerAssertionID;
    NSDate *_lastExpectedWakeTime;
    NSDate *_lastActualWakeTime;
    NSDate *_lastExpectedChimeTime;
    NSDate *_lastActualChimeTime;
    float _lastMediaVolume;
    CSLSOnWristMonitor *_onWristMonitor;
    CSLSOnWristState *_lastOnWristState;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    NMRNowPlayingController *_nowPlayingController;
}

+ (id)sharedInstance;
+ (void)initializeIfNeeded;
- (void).cxx_destruct;
- (void)onWristMonitor:(id)arg1 didUpdateOnWristState:(id)arg2 fromState:(id)arg3;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)_denormalizeVolumeIfNecessary;
- (void)_normalizeVolumeIfNecessary;
- (id)nextChimeAssetForStartDate:(id)arg1 frequency:(int)arg2 soundType:(int)arg3 timeIntervalUntilChime:(double *)arg4;
- (_Bool)_outputTapticChime:(id)arg1 atDate:(id)arg2;
- (void)_releasePowerAssertionIfPossible:(unsigned int)arg1;
- (unsigned int)_createPowerAssertionWithName:(id)arg1 timeout:(double)arg2;
- (void)_chimeWakeTimerFired:(id)arg1;
- (void)_scheduleChimeTimer;
- (void)_clearChimeTimer;
- (void)_previewChimesForStartDate:(id)arg1 chimeDate:(id)arg2 frequency:(int)arg3 soundType:(int)arg4;
- (void)_previewChimes;
- (id)_currentDate;
- (double)_prePlayAudioTimeInterval;
- (double)_preWakeTimeInterval;
- (_Bool)canActivateTapticChimes;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

