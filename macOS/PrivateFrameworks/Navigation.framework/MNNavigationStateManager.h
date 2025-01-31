//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationStateInterface-Protocol.h>

@class GEOApplicationAuditToken, MNNavigationState, MNObserverHashTable, NSString;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface>
{
    BOOL _isStarted;
    MNNavigationState *_currentState;
    MNObserverHashTable *_navigationStateObservers;
    GEOApplicationAuditToken *_auditToken;
    id <MNNavigationSessionManagerDelegate> _navigationDelegate;
}

+ (id)sharedManager;
@property(readonly, nonatomic) MNNavigationState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) BOOL isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;
- (void)updateGuidanceWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopNavigation;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (id)_initialState;
- (void)_replayStateForNewObserver:(id)arg1;
- (void)commuteSessionDidArrive:(id)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
@property(readonly, nonatomic) unsigned long long currentStateType;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)reset;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)navSessionDestination;
- (unsigned long long)_stateTypeForState:(id)arg1;
- (void)_changeToDesiredLocationProviderTypeForState:(id)arg1;
- (void)transitionToState:(id)arg1;
- (void)setCurrentState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

