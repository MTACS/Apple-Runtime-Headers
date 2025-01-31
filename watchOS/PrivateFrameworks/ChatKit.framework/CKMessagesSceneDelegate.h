//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKSceneDelegate.h>

#import <ChatKit/CKAlertSuppressionContextsProviding-Protocol.h>
#import <ChatKit/CKMessagesControllerDelegate-Protocol.h>

@class CKMessagesController, CKSceneDelegateState, NSSet;

@interface CKMessagesSceneDelegate : CKSceneDelegate <CKMessagesControllerDelegate, CKAlertSuppressionContextsProviding>
{
    _Bool _suspended;
    _Bool _locked;
    _Bool _shouldShowRegistrationOverride;
    CKMessagesController *_messagesController;
    CKSceneDelegateState *_storedState;
}

@property(nonatomic) _Bool shouldShowRegistrationOverride; // @synthesize shouldShowRegistrationOverride=_shouldShowRegistrationOverride;
@property(retain, nonatomic) CKSceneDelegateState *storedState; // @synthesize storedState=_storedState;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
- (void).cxx_destruct;
- (id)sharedConversationList;
- (void)messagesController:(id)arg1 didUpdateCurrentConversation:(id)arg2;
- (id)canActivatePredicate;
- (id)prefersToActivatePredicate;
@property(readonly, nonatomic) NSSet *alertSuppressionContexts;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_updateAppSnapshot;
- (void)__updateAppSnapshot;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleAccountsChanged:(id)arg1;
- (_Bool)shouldRestoreToConversationListForState:(id)arg1;
- (void)_updateStoredState;
- (_Bool)restoreStateFromUserActivity:(id)arg1;
- (_Bool)_restoreState:(id)arg1;
- (id)validIntentDictionaryWithURLParameters:(id)arg1;
- (_Bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (void)surfDataDetectorTapped:(id)arg1;
- (void)loadConversationWithMessageGUID:(id)arg1;
- (void)openSMSURL:(id)arg1;
- (void)openSURFURL:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)_prepareForSuspend;
- (void)_prepareForResume:(_Bool)arg1;
- (void)_scheduleDeferredSetup;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (int)type;
- (void)dealloc;
- (id)init;

@end

