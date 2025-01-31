//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (_Bool)companionSyncVoiceTriggerUtterancesEnabled;
- (id)fakeHearstModelPath;
- (void)setHearstSecondPassModelVersion:(id)arg1;
- (void)setHearstFirstPassModelVersion:(id)arg1;
- (float)overwritingRemoteVADScore;
- (_Bool)shouldOverwriteRemoteVADScore;
- (_Bool)iOSBargeInSupportEnabled;
- (_Bool)useSiriActivationSPIForwatchOS;
- (_Bool)useSiriActivationSPIForHomePod;
- (unsigned int)maxNumLoggingFiles;
- (double)audioSessionActivationDelay;
- (_Bool)smartSiriVolumeSoftVolumeEnabled;
- (unsigned int)speakerIdScoreReportingType;
- (_Bool)speakerIdiTunesAccountSigninEnabled;
- (_Bool)speakerIdEnabled;
- (id)audioInjectionFilePath;
- (void)setAudioInjectionFilePath:(id)arg1;
- (_Bool)audioInjectionEnabled;
- (_Bool)enableAudioInjection:(_Bool)arg1;
- (_Bool)myriadFileLoggingEnabled;
- (id)interstitialAbsoluteDirForLevel:(int)arg1;
- (id)interstitialRelativeDirForLevel:(int)arg1;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (double)remoteVoiceTriggerDelayTime;
- (_Bool)_isDirectory:(id)arg1;
- (id)getStartOfSpeechAudioLogFilePath;
- (_Bool)startOfSpeechAudioLoggingEnabled;
- (int)getJarvisTriggerMode;
- (void)setJarvisTriggerMode:(int)arg1;
- (_Bool)jarvisAudioLoggingEnabled;
- (_Bool)secondPassAudioLoggingEnabled;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (id)voiceTriggerAudioLogDirectory;
- (id)baseDir;
- (void)setFileLoggingLevel:(id)arg1;
- (id)fileLoggingLevel;
- (_Bool)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(_Bool)arg1;
- (_Bool)_storeModeEnabled;
- (_Bool)twoShotNotificationEnabled;
- (_Bool)corespeechDaemonEnabled;
- (_Bool)voiceTriggerInCoreSpeech;
- (_Bool)isAttentiveSiriAudioLoggingEnabled;
- (_Bool)isAttentiveSiriEnabled;
- (_Bool)phraseSpotterEnabled;
- (_Bool)voiceTriggerEnabled;

@end

