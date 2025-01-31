//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBSceneHandleObserver-Protocol.h>

@class BSAtomicSignal, CADisplay, CADisplayMode, FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplayLayoutPublisher, FBScene, NSString, SBApplication, SBApplicationSceneHandle, SBSExternalDisplayLayoutElement, _UIRootWindow;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface SBExternalDisplayPresenter : NSObject <SBSceneHandleObserver, BSInvalidatable>
{
    FBSDisplayLayoutPublisher *_layoutPublisher;
    FBSDisplayIdentity *_identity;
    CADisplay *_caDisplay;
    _Bool _invalidated;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_currentReportedConfiguration;
    SBApplication *_foregroundApp;
    SBApplicationSceneHandle *_foregroundAppSceneHandle;
    FBScene *_foregroundAppScene;
    BSAtomicSignal *_foregroundAppSceneTransactionInvalidator;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    unsigned long long _displayMutationEnqueuedCount;
    unsigned long long _displayMutationCompletedCount;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    _UIRootWindow *_rootWindow;
    FBSDisplayConfiguration *_rootWindowConfiguration;
    SBApplicationSceneHandle *_presentationSceneHandle;
    FBScene *_presentationScene;
    BSAtomicSignal *_presentationSceneActivationInvalidator;
    _Bool _hasEnqueuedPresentationUpdate;
    _Bool _presentationSceneHasActivated;
    SBSExternalDisplayLayoutElement *_presentedLayoutElement;
    id <BSInvalidatable> _presentedLayoutElementAssertion;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)_enqueuePresentationUpdate;
- (void)_updateHostingIfNecessary;
- (void)_ensureMode:(id)arg1 overscanCompensation:(long long)arg2;
- (id)_createUpdateTransaction;
- (id)updateToConfiguration:(id)arg1 withForegroundApp:(id)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)initWithLayoutPublisher:(id)arg1 displayConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

