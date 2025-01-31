//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFBrowserContentViewController.h>

#import <SafariServices/SFServiceViewControllerProtocol-Protocol.h>
#import <SafariServices/_SFActivityDelegate-Protocol.h>

@class NSDate, NSString, NSTimer, SFBrowserPersonaAnalyticsHelper, SFUserNotification, WKProcessPool, _SFWebViewUsageMonitor;

__attribute__((visibility("hidden")))
@interface SFBrowserServiceViewController : _SFBrowserContentViewController <_SFActivityDelegate, SFServiceViewControllerProtocol>
{
    CDUnknownBlockType _activityViewControllerInfoFetchCompletionHandler;
    _SFWebViewUsageMonitor *_usageMonitor;
    NSDate *_lastHostApplicationSuspendDate;
    WKProcessPool *_processPool;
    _Bool _canNotifyHostApplicationOfRedirects;
    _Bool _touchEventsShouldStopRedirectNotifications;
    _Bool _isExpectingClientRedirect;
    _Bool _hasBegunFirstNavigation;
    SFBrowserPersonaAnalyticsHelper *_cachedAnalyticsHelper;
    NSTimer *_redirectNotificationTimer;
    _Bool _hostApplicationIsForeground;
    SFUserNotification *_userNotification;
    NSString *_hostApplicationCallbackURLScheme;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(copy, nonatomic) NSString *hostApplicationCallbackURLScheme; // @synthesize hostApplicationCallbackURLScheme=_hostApplicationCallbackURLScheme;
@property(retain, nonatomic) SFUserNotification *userNotification; // @synthesize userNotification=_userNotification;
- (void).cxx_destruct;
- (void)browserViewDidReceiveTouchEvent:(id)arg1;
- (void)safariActivity:(id)arg1 didFinish:(_Bool)arg2;
- (void)webViewControllerWebProcessDidCrash:(id)arg1;
- (void)webViewController:(id)arg1 didChangeFullScreen:(_Bool)arg2;
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (_Bool)_shouldReloadImmediatelyAfterPageLoadError;
- (id)_hostAppBundleId;
- (unsigned long long)_persona;
- (id)_analyticsHelper;
- (id)bundleIdentifierForProfileInstallation;
- (id)_applicationPayloadForOpeningInSafari;
- (void)_closeDatabasesOnBackgroundingOrDismissal;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_didLoadWebView;
- (_Bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (_Bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;
- (_Bool)_notifyInitialLoadDidFinish:(_Bool)arg1;
- (void)_updateRemoteSwipeGestureState;
- (void)_dismiss;
- (void)didDetectUserInteractionFromHostApp;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setIsRunningTransitionAnimation:(_Bool)arg1;
- (void)repostNotificationInViewService:(id)arg1;
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
- (void)_getSafariDataSharingModeWithCompletion:(CDUnknownBlockType)arg1;
- (id)websiteDataStoreConfiguration;
- (_Bool)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2;
- (id)_websiteDataStoreURL;
- (id)_webDataStoreRootURL;
- (void)openCurrentURLInSafari;
- (void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(_Bool)arg2;
- (void)startResolveRedirectionForURL:(id)arg1;
- (void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
- (void)loadURL:(id)arg1;
- (id)processPool;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets)arg1 horizontalInsets:(struct UIEdgeInsets)arg2;
- (id)processPoolConfiguration;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_willAppearInRemoteViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

