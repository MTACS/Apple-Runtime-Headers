//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFAnalyticsTurnBasedInstrumentationContext, SAUIAssistantUtteranceView;
@protocol OS_dispatch_queue;

@interface SiriInstrumentationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _currentInvocationSource;
    int _lastSiriUIStateSnapShot;
    AFAnalyticsTurnBasedInstrumentationContext *_currentInstrumentationTurnContext;
    SAUIAssistantUtteranceView *_assistantUtteranceViewSnapShot;
}

+ (id)sharedManager;
@property int lastSiriUIStateSnapShot; // @synthesize lastSiriUIStateSnapShot=_lastSiriUIStateSnapShot;
@property(retain) SAUIAssistantUtteranceView *assistantUtteranceViewSnapShot; // @synthesize assistantUtteranceViewSnapShot=_assistantUtteranceViewSnapShot;
@property int currentInvocationSource; // @synthesize currentInvocationSource=_currentInvocationSource;
@property(retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext; // @synthesize currentInstrumentationTurnContext=_currentInstrumentationTurnContext;
- (void).cxx_destruct;
- (unsigned int)audioDevice:(unsigned int)arg1 propertyUInt32:(unsigned int)arg2;
- (void)emitTextToSpeechEndEvent;
- (void)emitTextToSpeechBeginEvent;
- (void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2 previousTurnIdentifier:(struct NSUUID *)arg3;
- (void)emitPunchOutInvocationWithSiriViewController:(id)arg1;
- (void)emitUUFRPresentedEventWith:(id)arg1 dialogIdentifier:(id)arg2 dialogPhase:(id)arg3;
- (void)emitUUFRPresentedEventWith:(id)arg1 dialogPhase:(id)arg2;
- (void)emitFinalSpeechTranscriptionEventWith:(id)arg1;
- (void)emitPartialSpeechTranscriptionEventWith:(id)arg1;
- (void)emitUIStateTransitionFromLastStateToDismissedState;
- (void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2;
- (void)emitInvocationEventForTapToEdit:(id)arg1;
- (void)setInvocationSourceForWaveformGlyphButtonPressed;
- (void)emitInvocationEventForVoiceTriggerEnrollment;
- (void)emitInvocationEventForGuideButtonPressed;
- (void)emitInvocationEventUsingRequestOptions:(id)arg1;
- (void)clearCurrentInstrumentationTurnContext;
- (void)snapshotCurrentAssistantUtteranceView:(id)arg1;
- (id)_startNewTurnWithLastTurn:(id)arg1;
- (void)_emitInstrumentation:(id)arg1;
- (id)_init;

@end

