//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import <ChatKit/CKAlertSuppressionContextsProviding-Protocol.h>
#import <ChatKit/CKCoreChatControllerDelegate-Protocol.h>
#import <ChatKit/CKNanoComposeControllerDismissalDelegate-Protocol.h>
#import <ChatKit/UIActionSheetDelegate-Protocol.h>
#import <ChatKit/UIAlertViewDelegate-Protocol.h>
#import <ChatKit/UINavigationControllerDelegate-Protocol.h>
#import <ChatKit/UISplitViewControllerDelegate-Protocol.h>

@class CKConversation, CKConversationListController, CKCoreChatController, CKNanoSiriTaskServiceDelegate, CKNavigationController, CKViewController, NSMutableArray, NSSet, NSString, UIViewController;
@protocol CKMessagesControllerDelegate;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, UIActionSheetDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, CKNanoComposeControllerDismissalDelegate, CKAlertSuppressionContextsProviding>
{
    CKConversation *_currentConversation;
    NSMutableArray *_conversationCache;
    CDUnknownBlockType _alertViewHandler;
    unsigned int _attachmentPreviewQosClass;
    CDUnknownBlockType _composeDismissHandler;
    _Bool _isInitialLoad;
    id <CKMessagesControllerDelegate> _messagesControllerDelegate;
    CKConversationListController *_conversationListController;
    CKCoreChatController *_chatController;
    CKCoreChatController *_composeChatController;
    CKNavigationController *_conversationListNavigationController;
    CKNavigationController *_chatNavigationController;
    CKNavigationController *_composeChatNavigationController;
    CDUnknownBlockType _deferredHandleURLBlock;
    CKNanoSiriTaskServiceDelegate *_nanoSiriTaskServiceDelegate;
    CKViewController *_blankViewController;
    UIViewController *_statusBarStyleViewController;
}

@property(retain, nonatomic) UIViewController *statusBarStyleViewController; // @synthesize statusBarStyleViewController=_statusBarStyleViewController;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(copy, nonatomic) CDUnknownBlockType alertViewHandler; // @synthesize alertViewHandler=_alertViewHandler;
@property(retain, nonatomic) CKViewController *blankViewController; // @synthesize blankViewController=_blankViewController;
@property(retain, nonatomic) CKNanoSiriTaskServiceDelegate *nanoSiriTaskServiceDelegate; // @synthesize nanoSiriTaskServiceDelegate=_nanoSiriTaskServiceDelegate;
@property(copy, nonatomic) CDUnknownBlockType deferredHandleURLBlock; // @synthesize deferredHandleURLBlock=_deferredHandleURLBlock;
@property(retain, nonatomic) CKConversation *currentConversation; // @synthesize currentConversation=_currentConversation;
@property(retain, nonatomic) CKNavigationController *composeChatNavigationController; // @synthesize composeChatNavigationController=_composeChatNavigationController;
@property(retain, nonatomic) CKNavigationController *chatNavigationController; // @synthesize chatNavigationController=_chatNavigationController;
@property(retain, nonatomic) CKNavigationController *conversationListNavigationController; // @synthesize conversationListNavigationController=_conversationListNavigationController;
@property(retain, nonatomic) CKCoreChatController *composeChatController; // @synthesize composeChatController=_composeChatController;
@property(retain, nonatomic) CKCoreChatController *chatController; // @synthesize chatController=_chatController;
@property(retain, nonatomic) CKConversationListController *conversationListController; // @synthesize conversationListController=_conversationListController;
@property(nonatomic) __weak id <CKMessagesControllerDelegate> messagesControllerDelegate; // @synthesize messagesControllerDelegate=_messagesControllerDelegate;
- (void).cxx_destruct;
- (void)teardownCamera;
- (void)prewarmCameraIfNecessary;
- (void)presentOnboardingViewControllerIfNeeded;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)commitPayload:(id)arg1;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (void)dismiss;
- (void)_presentAppStoreWithLaunchURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(id)arg2;
- (void)showStoreForURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)notifyThatKeepMessagesSettingWasResetIfNeeded;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (_Bool)isShowingChatControllerWithUnsentText;
- (_Bool)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2;
- (_Bool)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1;
- (_Bool)isShowingChatController;
- (_Bool)isShowingNanoComposeController;
@property(readonly, nonatomic) _Bool isShowingConversationListController;
- (_Bool)isShowingDirtyComposeModalView;
- (_Bool)currentCompositionHasContent;
- (_Bool)isAnimatingMessageSend;
- (_Bool)isComposingMessage;
- (_Bool)isShowingBlankChatController;
- (void)conversationListIsDeletingConversations:(id)arg1;
- (void)conversationListWillBeginEditing:(_Bool)arg1;
- (void)_hideConversationListForIPadPPTTest;
- (void)showConversationList:(_Bool)arg1;
- (_Bool)resumeToConversation:(id)arg1;
- (void)showConversationAndMessageForSearchURL:(id)arg1;
- (void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 keepAllCurrentlyLoadedMessages:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 forceToTranscript:(_Bool)arg3 keepAllCurrentlyLoadedMessages:(_Bool)arg4 userInitiated:(_Bool)arg5;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 forceToTranscript:(_Bool)arg3 keepAllCurrentlyLoadedMessages:(_Bool)arg4;
- (void)cancelNewMessageComposition;
- (void)showNanoComposeWithRecipients:(id)arg1 composition:(id)arg2 suggestedReplies:(id)arg3 animated:(_Bool)arg4 sendMessageHandler:(CDUnknownBlockType)arg5;
- (void)showNanoComposeWithRecipients:(id)arg1 composition:(id)arg2 suggestedReplies:(id)arg3 animated:(_Bool)arg4;
- (_Bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(_Bool)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(_Bool)arg3;
- (id)_sharedBalloonPluginManager;
- (void)executeDeferredHandleURLBlock;
- (void)executeDeferredTasks;
- (void)_appStateChange:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatRegistryDidLoad:(id)arg1;
- (void)_conversationLeft:(id)arg1;
- (void)cleanUpBizNavBarForConversation:(id)arg1;
- (void)setupBizNavBarForConversation:(id)arg1;
- (void)_setIsShowingNoSelectionUI:(_Bool)arg1;
- (void)_popToConversationListAndPerformBlockAnimated:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateAlertSuppressionContext;
- (void)__updateAlertSuppressionContext;
@property(readonly, nonatomic) NSSet *alertSuppressionContexts;
- (_Bool)_isShowingFullScreenAppViewController;
- (_Bool)_isShowingModalChatController;
- (_Bool)_isShowingFullscreenController;
- (void)_keyCommandChangeConversation:(_Bool)arg1;
- (void)keyCommandPreviousConversation:(id)arg1;
- (void)keyCommandNextConversation:(id)arg1;
- (void)keyCommandDeleteConversation:(id)arg1;
- (void)keyCommandCompose:(id)arg1;
- (void)setCurrentConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (_Bool)_hasCurrentConversations;
- (void)_nanoBackButtonPressed:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)composeControllerDidCancel:(id)arg1;
- (void)composeController:(id)arg1 didSendToConversation:(id)arg2;
- (void)showNanoCompose;
- (id)actionController;
- (_Bool)canProvideActionController;
- (_Bool)isCollapsed;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)performSearchForQuery:(id)arg1;
- (void)dismissKeyboadIfUp;
- (void)performResumeDeferredSetup;
- (id)conversationList;
- (_Bool)becomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (unsigned int)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)childViewControllerForStatusBarHidden;
- (int)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

