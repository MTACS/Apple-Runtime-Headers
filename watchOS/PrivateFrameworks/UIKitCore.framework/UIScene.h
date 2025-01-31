//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIResponder.h>

#import <UIKitCore/FBSSceneDelegate-Protocol.h>

@class BKSAnimationFenceHandle, FBSScene, FBSSceneSettings, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSPointerArray, NSString, UIApplicationSceneClientSettings, UIApplicationSceneSettings, UISceneActivationConditions, UISceneSession, _UISceneLifecycleMonitor;
@protocol UISceneDelegate;

@interface UIScene : UIResponder <FBSSceneDelegate>
{
    UISceneSession *_session;
    id <UISceneDelegate> _delegate;
    NSString *_title;
    UISceneActivationConditions *_activationConditions;
    FBSScene *_scene;
    NSArray *_initialSettingsDiffActions;
    NSArray *_finalSettingsDiffActions;
    NSArray *_initialSceneBSActionHandlers;
    NSArray *_finalSceneBSActionHandlers;
    NSDictionary *_additionalSettingsDiffActions;
    NSArray *_flattenedDiffActions;
    NSDictionary *_additionalSceneBSActionHandlers;
    NSArray *_flattenedActionsHandlers;
    NSDictionary *_builtinComponents;
    NSDictionary *_registeredComponents;
    _UISceneLifecycleMonitor *_lifecycleMonitor;
    FBSSceneSettings *_overrideSettings;
    NSMutableDictionary *_postSettingsUpdateResponseBlocks;
    UIScene *_settingsScene;
    NSPointerArray *_inheritingScenes;
    NSString *_identifier;
    FBSSceneSettings *_oldSettings;
    struct {
        unsigned int delegateIsResponder:1;
        unsigned int delegateSupportsWillConnect:1;
        unsigned int delegateSupportsDidDisconnect:1;
        unsigned int delegateSupportsDidBecomeActive:1;
        unsigned int delegateSupportsWillResignActive:1;
        unsigned int delegateSupportsWillEnterForeground:1;
        unsigned int delegateSupportsDidEnterBackground:1;
        unsigned int isUIKitManaged:1;
        unsigned int isInternal:1;
        unsigned int hostsWindows:1;
        unsigned int hasInvalidated:1;
        unsigned int allowOverrideSettings:1;
        unsigned int isProcessingUpdateResponseBlocks:1;
        unsigned int readyForSuspend:1;
        unsigned int isMediaParticipant:1;
    } _sceneFlags;
    NSDate *_suspensionTimeMark;
    _Bool _respondingToLifecycleEvent;
    NSNumber *__cachedInterfaceOrientation;
}

+ (Class)_implicitSceneFilterClass;
+ (int)_activationStateFromSceneSettings:(id)arg1;
+ (void)_enqueuePostSettingUpdateTransactionBlock:(CDUnknownBlockType)arg1;
+ (void)_setActiveSettingsTransaction:(_Bool)arg1;
+ (_Bool)_activeSettingsTransaction;
+ (id)_persistenceIdentifierForScene:(id)arg1;
+ (id)_connectionOptionsForScene:(id)arg1 withSpecification:(id)arg2 transitionContext:(id)arg3 actions:(id)arg4 sceneSession:(id)arg5;
+ (id)_mostActiveScene;
+ (void *)_unsafeScenesIncludingInternal;
+ (id)_scenesIncludingInternal:(_Bool)arg1;
+ (id)_sceneForFBSScene:(id)arg1 create:(_Bool)arg2 withSession:(id)arg3 connectionOptions:(id)arg4;
+ (void)_enumerateAllWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (_Bool)_hostsWindows;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (id)_synchronizedDrawingFence;
+ (void)_registerSceneComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3;
+ (id)_sceneForFBSScene:(id)arg1 usingPredicate:(id)arg2;
+ (id)_sceneForFBSScene:(id)arg1;
@property(retain, nonatomic, getter=_cachedInterfaceOrientation, setter=_setCachedInterfaceOrientation:) NSNumber *_cachedInterfaceOrientation; // @synthesize _cachedInterfaceOrientation=__cachedInterfaceOrientation;
@property(nonatomic, setter=_setIsRespondingToLifecycleEvent:) _Bool _respondingToLifecycleEvent; // @synthesize _respondingToLifecycleEvent;
@property(readonly, nonatomic) FBSSceneSettings *_oldSettings; // @synthesize _oldSettings;
- (void).cxx_destruct;
- (void)_removeInheritingScene:(id)arg1;
- (void)_addInheritingScene:(id)arg1;
@property(readonly, nonatomic) NSArray *_sceneBSActionHandlers;
- (void)_calculateFlattenedActionsHandlers;
@property(readonly, nonatomic) NSArray *_settingsDiffActions;
- (void)_calculateFlattenedDiffActions;
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2 fromTransitionContext:(id)arg3;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_refreshActivationConditions;
@property(readonly, nonatomic, getter=_isUIKitManaged) _Bool _isUIKitManaged;
@property(readonly, nonatomic, getter=_isInternal) _Bool _internal;
- (id)_shortDescription;
- (_Bool)_connected;
@property(readonly, nonatomic, getter=_suspendedUnderLock) _Bool _suspendedUnderLock;
@property(readonly, nonatomic, getter=_runningInTaskSwitcher) _Bool _runningInTaskSwitcher;
@property(readonly, nonatomic, getter=_suspendedEventsOnly) _Bool _suspendedEventsOnly;
@property(readonly, nonatomic, getter=_isActive) _Bool _active;
@property(readonly, nonatomic) _Bool _hasLifecycle;
@property(readonly, nonatomic) _UISceneLifecycleMonitor *_lifecycleMonitor;
- (void)_performSystemSnapshotWithActions:(CDUnknownBlockType)arg1;
- (void)_applyOverrideSettings:(id)arg1 forActions:(CDUnknownBlockType)arg2;
- (void)_enableOverrideSettingsForActions:(CDUnknownBlockType)arg1;
- (void)_guardedSetOverrideSettings:(id)arg1;
@property(readonly, nonatomic) UIApplicationSceneSettings *_effectiveUISettings;
@property(readonly, nonatomic) FBSSceneSettings *_synthesizedSettings;
@property(readonly, nonatomic) FBSSceneSettings *_effectiveSettings;
- (id)_fixupInheritedClientSettings:(id)arg1;
- (id)_fixupInheritedSettings:(id)arg1;
- (void)_emitSceneSettingsUpdateResponseForCompletion:(CDUnknownBlockType)arg1 afterSceneUpdateWork:(CDUnknownBlockType)arg2;
- (void)_enqueuePostSettingsUpdateResponseBlock:(CDUnknownBlockType)arg1 inPhase:(id)arg2;
@property(readonly, nonatomic) NSArray *_interitingScenes;
@property(nonatomic, setter=_setSettingsScene:) __weak UIScene *_settingsScene;
@property(readonly, nonatomic) _Bool _eligableForSuspend;
@property(readonly, nonatomic) _Bool _readyForSuspend;
- (void)_prepareForSuspend;
- (void)_prepareForResume;
- (void)_performBackgroundSceneDetach:(id)arg1;
- (void)_cancelBackgroundSceneDetach;
- (void)_scheduleBackgroundSceneDetach;
@property(nonatomic, setter=_setInvolvedInMediaPlayback:) _Bool _involvedInMediaPlayback;
- (void)_initializeSceneComponents;
- (void)_makeKeyAndVisibleIfNeeded;
- (void)_readySceneForConnection;
- (void)__releaseWindow:(id)arg1;
- (void)__captureWindow:(id)arg1;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) float _systemMinimumMargin;
- (void)_computeMetricsForWindows:(id)arg1 animated:(_Bool)arg2;
- (void)_computeMetrics:(_Bool)arg1;
- (struct CGRect)_boundsForInterfaceOrientation:(int)arg1;
- (struct CGRect)_referenceBounds;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 asCopy:(_Bool)arg3 stopped:(_Bool *)arg4 withBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSArray *_visibleWindows;
@property(readonly, nonatomic) NSArray *_allWindows;
- (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)_windowIsFront:(id)arg1;
@property(readonly, nonatomic) _Bool _hostsWindows;
@property(readonly, nonatomic) NSArray *_windows;
@property(readonly, nonatomic) _Bool _hasInvaidated;
- (void)_invalidate;
- (void)_synchronizeDrawingWithFence:(id)arg1;
@property(readonly, nonatomic) BKSAnimationFenceHandle *_synchronizedDrawingFence;
- (void)_compatibilityModeZoomDidChange;
- (void)_updateUIClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)_updateUIClientSettingsWithUITransitionBlock:(CDUnknownBlockType)arg1;
- (void)_updateUIClientSettingsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIApplicationSceneClientSettings *_effectiveUIClientSettings;
@property(readonly, nonatomic) NSArray *_sceneComponents;
- (id)_sceneComponentForKey:(id)arg1;
- (void)_unregisterSceneComponentForKey:(id)arg1;
- (void)_registerSceneComponent:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSceneActionsHandlerArray:(id)arg1;
- (void)_registerSceneActionsHandlerArray:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSettingsDiffActionArrayForKey:(id)arg1;
- (void)_registerSettingsDiffActionArray:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSString *_identifier;
@property(readonly, nonatomic, getter=_FBSScene) FBSScene *_FBSScene;
@property(retain, nonatomic) UISceneActivationConditions *activationConditions;
@property(retain, nonatomic, setter=_setActivationConditions:) UISceneActivationConditions *_activationConditions;
- (id)nextResponder;
@property(copy, nonatomic) NSString *title;
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_currentOpenApplicationEndpoint;
@property(readonly, nonatomic) int activationState;
@property(retain, nonatomic) id <UISceneDelegate> delegate;
@property(readonly, nonatomic) UISceneSession *session;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

