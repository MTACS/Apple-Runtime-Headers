//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextToSpeech/TTSSpeechConnectionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TTSSpeechSynthesizerDelegate;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate>
{
    int _footprint;
    id <TTSSpeechSynthesizerDelegate> _delegate;
    _Bool _useSharedSession;
    _Bool _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    _Bool _useMonarchStyleRate;
    NSMutableDictionary *_channels;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_currentRequestOwners;
    NSMutableArray *_speechRequests;
    struct {
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int delegateSynthesizedSilentlyURL:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
    unsigned long long _synthesizerInstanceID;
    NSArray *_outputChannels;
    NSMutableDictionary *_testingLastRuleConversion;
    _Bool _supportsAccurateWordCallbacks;
    _Bool _ignoreSubstitutions;
    _Bool _synthesizeSilently;
    float _rate;
    float _pitch;
    float _volume;
    NSString *_voiceIdentifier;
    NSString *_bundleIdentifier;
    void *_speakingRequestClientContext;
    NSArray *_userSubstitutions;
    NSArray *_phonemeSubstitutions;
    CDUnknownBlockType _audioBufferCallback;
    unsigned long long _requestClientIdentifier;
}

+ (id)supportedIPAPhonemeLanguages;
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(int)arg3 useFallbackDefault:(_Bool)arg4;
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(int)arg3;
+ (id)audioFileSettingsForVoice:(id)arg1;
+ (void)setSpeechJobStartedUnitTestBlock:(CDUnknownBlockType)arg1;
+ (void)setSpeechJobFinishedUnitTestBlock:(CDUnknownBlockType)arg1;
+ (id)availableLanguageCodes;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (id)voiceAccessQueue;
+ (id)allAvailableVoices;
+ (void)refreshAllAvailableVoices:(_Bool)arg1;
+ (void)refreshAllAvailableVoices;
+ (id)synthesizerForSynthesizerID:(unsigned long long)arg1;
+ (id)voiceAssetsForTesting;
+ (void)setVoiceAssetsForTesting:(id)arg1;
+ (void)testingSetAllVoices:(id)arg1;
+ (id)speechMarkupStringForType:(int)arg1 forIdentifier:(id)arg2 string:(id)arg3;
+ (_Bool)employSpeechMarkupForType:(int)arg1 identifier:(id)arg2 withLanguage:(id)arg3;
+ (id)voiceForIdentifier:(id)arg1;
+ (id)availableVoices;
+ (void)_initializeServers;
+ (void)initialize;
@property(nonatomic) _Bool synthesizeSilently; // @synthesize synthesizeSilently=_synthesizeSilently;
@property(nonatomic) _Bool ignoreSubstitutions; // @synthesize ignoreSubstitutions=_ignoreSubstitutions;
@property(copy, nonatomic) CDUnknownBlockType audioBufferCallback; // @synthesize audioBufferCallback=_audioBufferCallback;
@property(copy, nonatomic) NSArray *phonemeSubstitutions; // @synthesize phonemeSubstitutions=_phonemeSubstitutions;
@property(copy, nonatomic) NSArray *userSubstitutions; // @synthesize userSubstitutions=_userSubstitutions;
@property(readonly, nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) _Bool supportsAccurateWordCallbacks; // @synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks;
@property(nonatomic) void *speakingRequestClientContext; // @synthesize speakingRequestClientContext=_speakingRequestClientContext;
@property(nonatomic) unsigned long long requestClientIdentifier; // @synthesize requestClientIdentifier=_requestClientIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(int)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didSynthesizeSilentlyToURL:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (_Bool)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id *)arg3;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 request:(id *)arg4 error:(id *)arg5;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (int)footprint;
- (void)setFootprint:(int)arg1;
- (_Bool)useMonarchStyleRate;
- (void)setUseMonarchStyleRate:(_Bool)arg1;
- (float)maximumRate;
- (float)minimumRate;
- (id)speechString;
- (_Bool)isSpeaking;
- (_Bool)continueSpeakingWithError:(id *)arg1;
- (_Bool)pauseSpeakingAtNextBoundary:(int)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)pauseSpeakingAtNextBoundary:(int)arg1 error:(id *)arg2;
- (_Bool)stopSpeakingAtNextBoundary:(int)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)stopSpeakingAtNextBoundary:(int)arg1 error:(id *)arg2;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 error:(id *)arg2;
@property(nonatomic) __weak id <TTSSpeechSynthesizerDelegate> delegate; // @dynamic delegate;
- (_Bool)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;
- (unsigned long long)synthesizerInstanceID;
- (id)_applySubstitution:(id)arg1 toText:(id)arg2 wordRange:(struct _NSRange)arg3 request:(id)arg4 phonemes:(id *)arg5;
- (void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5;
- (_Bool)_skipSubstition:(id)arg1 language:(id)arg2 bundleIdentifier:(id)arg3 voice:(id)arg4;
- (id)_preprocessText:(id)arg1 languageCode:(id)arg2;
- (id)resolvedVoiceIdentifierForLanguageCode:(id)arg1;
@property(readonly, nonatomic) NSString *resolvedVoiceIdentifier;
@property(retain, nonatomic) NSArray *outputChannels;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (void)_mediaServicesDied;
- (id)init;
- (void)testingSetLastRuleConversion:(id)arg1 replacement:(id)arg2;
- (id)testingLastRuleConversion;

@end

