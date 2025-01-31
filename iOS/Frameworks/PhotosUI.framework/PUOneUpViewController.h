//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PHAirPlayControllerContentProvider-Protocol.h>
#import <PhotosUI/PUAccessoryTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUAccessoryVisibilityInteractionControllerDelegate-Protocol.h>
#import <PhotosUI/PUAssetActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PUAssetDisplayDescriptorNavigator-Protocol.h>
#import <PhotosUI/PUBarsControllerDelegate-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUDoubleTapZoomControllerDelegate-Protocol.h>
#import <PhotosUI/PUInteractiveDismissalControllerDelegate-Protocol.h>
#import <PhotosUI/PUIrisImageTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PULivePhotoVideoOverlayTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpAccessoryViewControllersManagerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PUOneUpBarsControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpGestureRecognizerCoordinatorDelegate-Protocol.h>
#import <PhotosUI/PUOneUpSuggestionsControllerDelegate-Protocol.h>
#import <PhotosUI/PUOneUpTilingLayoutDelegate-Protocol.h>
#import <PhotosUI/PUOverOneUpPresentationSessionDelegate-Protocol.h>
#import <PhotosUI/PUOverOneUpPresentationSessionViewController-Protocol.h>
#import <PhotosUI/PUPlayButtonTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUPreviewActionControllerDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewControllerTransitionEndPoint-Protocol.h>
#import <PhotosUI/PUTilingViewScrollDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewTileSource-Protocol.h>
#import <PhotosUI/PUTilingViewTileTransitionDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewTileUseDelegate-Protocol.h>
#import <PhotosUI/PUUserTransformTileViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/PXContextualNotificationDelegate-Protocol.h>
#import <PhotosUI/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUI/PXForcedDismissableViewController-Protocol.h>
#import <PhotosUI/PXGestureProviderDelegate-Protocol.h>
#import <PhotosUI/PXPurgeableController-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class CEKBadgeTextView, NSArray, NSString, NSTimer, NSUserActivity, PUAccessoryVisibilityInteractionController, PUAggregateDictionaryTracer, PUAssetDisplayDescriptorNavigationRequest, PUBrowsingBackgroundTileViewController, PUBrowsingSession, PUDoubleTapZoomController, PUInteractivePinchDismissalController, PUInteractiveSwipeDismissalController, PULoadingIndicatorController, PUOneUpAccessoryViewControllersManager, PUOneUpBarsController, PUOneUpGestureRecognizerCoordinator, PUOneUpSuggestionsController, PUOneUpViewControllerSpec, PUOverOneUpPresentationSession, PUParallaxComputer, PUPreviewActionController, PUReviewScreenBarsModel, PUReviewScreenControlBarTileViewController, PUReviewScreenScrubberBarTileViewController, PUReviewScreenTopBarTileViewController, PUTilingView, PXUserEventTracker, UIScrollView;

@interface PUOneUpViewController : UIViewController <PUViewControllerSpecChangeObserver, PUBrowsingViewModelChangeObserver, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUOneUpTilingLayoutDelegate, PUInteractiveDismissalControllerDelegate, PUBarsControllerDelegate, PUOneUpBarsControllerDelegate, PUUserTransformTileViewControllerDelegate, PUPlayButtonTileViewControllerDelegate, PUDoubleTapZoomControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PHAirPlayControllerContentProvider, PUTilingViewTileUseDelegate, PUAccessoryTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpAssetTransitionViewController, PUAssetDisplayDescriptorNavigator, PXSettingsKeyObserver, PXDiagnosticsEnvironment, PUIrisImageTileViewControllerDelegate, PXPurgeableController, PXContextualNotificationDelegate, PUOneUpSuggestionsControllerDelegate, PUPreviewActionControllerDelegate, PUAssetActionPerformerDelegate, PXForcedDismissableViewController, PXGestureProviderDelegate, PULivePhotoVideoOverlayTileViewControllerDelegate, PUTilingViewControllerTransitionEndPoint>
{
    struct {
        _Bool suggestionController;
    } _needsUpdateFlags;
    NSString *_scrubbingIdentifier;
    PUPreviewActionController *_previewActionController;
    _Bool __needsUpdateSpec;
    _Bool __needsUpdateBarsController;
    _Bool __needsUpdatePreloadInsets;
    _Bool __needsUpdateLayout;
    _Bool __needsUpdateEditMode;
    _Bool __needsUpdatePreferredContentSize;
    _Bool __needsUpdateAudioState;
    _Bool __needsUpdateVideoPlayer;
    _Bool __isPresentedForSecondScreen;
    _Bool __prefersCompactLayoutForSplitScreen;
    _Bool __isIrisPlaying;
    _Bool __shouldDisableTransitionsUntilAppeared;
    _Bool __suppressColorSettings;
    _Bool __shouldShowAccessoryAfterUnlock;
    _Bool __didPlayCurrentLivePhoto;
    _Bool __prefersHomeIndicatorHidden;
    _Bool _isPresentedForPreview;
    _Bool _appearanceTransitionAnimationsDisabled;
    _Bool _allowsPreviewActions;
    int _appearState;
    PUBrowsingSession *_browsingSession;
    CDUnknownBlockType _unlockDeviceStatus;
    CDUnknownBlockType _unlockDeviceHandler;
    unsigned long long __options;
    PUOneUpViewControllerSpec *__spec;
    PUTilingView *__tilingView;
    PUOneUpBarsController *__barsController;
    PUInteractiveSwipeDismissalController *__interactiveSwipeDismissalController;
    PUInteractivePinchDismissalController *__interactivePinchDismissalController;
    PUDoubleTapZoomController *__doubleTapZoomController;
    PUOneUpGestureRecognizerCoordinator *__gestureRecognizerCoordinator;
    PUBrowsingBackgroundTileViewController *__backgroundTileViewController;
    PUReviewScreenScrubberBarTileViewController *__reviewScreenScrubberBarTileViewController;
    PUReviewScreenControlBarTileViewController *__reviewScreenControlBarTileViewController;
    PUReviewScreenTopBarTileViewController *__reviewScreenTopBarTileViewController;
    PUReviewScreenBarsModel *__reviewScreenBarsModel;
    long long __windowInterfaceOrientation;
    PUOneUpViewController *__secondScreenBrowser;
    NSTimer *__chromeAutoHideTimer;
    NSArray *__hiddenTilesController;
    NSArray *__tileKindsToHide;
    PUOverOneUpPresentationSession *__overOneUpPresentationSession;
    unsigned long long __initialActivity;
    PUAssetDisplayDescriptorNavigationRequest *__currentNavigationRequest;
    double __preloadInsetsBasedOffViewWidth;
    PUParallaxComputer *__parallaxComputer;
    PUOneUpAccessoryViewControllersManager *__accessoryViewControllersManager;
    PUAccessoryVisibilityInteractionController *__accessoryVisibilityInteractionController;
    PULoadingIndicatorController *_loadingIndicatorController;
    PUAggregateDictionaryTracer *_aggregateDictionaryTracer;
    PXUserEventTracker *_userEventTracker;
    PUOneUpSuggestionsController *_suggestionController;
    NSUserActivity *_siriActionActivity;
    CEKBadgeTextView *_originalBadgeView;
    struct CGSize __layoutReferenceSize;
    struct CGSize __pendingViewTransitionSize;
    struct UIEdgeInsets __layoutSafeAreaInsets;
}

@property(readonly, nonatomic) PUPreviewActionController *previewActionController; // @synthesize previewActionController=_previewActionController;
@property(nonatomic, setter=setAllowsPreviewActions:) _Bool allowsPreviewActions; // @synthesize allowsPreviewActions=_allowsPreviewActions;
@property(nonatomic) _Bool appearanceTransitionAnimationsDisabled; // @synthesize appearanceTransitionAnimationsDisabled=_appearanceTransitionAnimationsDisabled;
@property(nonatomic, setter=setPresentedForPreview:) _Bool isPresentedForPreview; // @synthesize isPresentedForPreview=_isPresentedForPreview;
@property(nonatomic, setter=_setPrefersHomeIndicatorHidden:) _Bool _prefersHomeIndicatorHidden; // @synthesize _prefersHomeIndicatorHidden=__prefersHomeIndicatorHidden;
@property(retain, nonatomic) CEKBadgeTextView *originalBadgeView; // @synthesize originalBadgeView=_originalBadgeView;
@property(retain, nonatomic) NSUserActivity *siriActionActivity; // @synthesize siriActionActivity=_siriActionActivity;
@property(nonatomic, setter=_setDidPlayCurrentLivePhoto:) _Bool _didPlayCurrentLivePhoto; // @synthesize _didPlayCurrentLivePhoto=__didPlayCurrentLivePhoto;
@property(readonly, nonatomic) PUOneUpSuggestionsController *suggestionController; // @synthesize suggestionController=_suggestionController;
@property(readonly, nonatomic) PXUserEventTracker *userEventTracker; // @synthesize userEventTracker=_userEventTracker;
@property(readonly, nonatomic) PUAggregateDictionaryTracer *aggregateDictionaryTracer; // @synthesize aggregateDictionaryTracer=_aggregateDictionaryTracer;
@property(readonly, nonatomic) PULoadingIndicatorController *loadingIndicatorController; // @synthesize loadingIndicatorController=_loadingIndicatorController;
@property(nonatomic, setter=_setShouldShowAccessoryAfterUnlock:) _Bool _shouldShowAccessoryAfterUnlock; // @synthesize _shouldShowAccessoryAfterUnlock=__shouldShowAccessoryAfterUnlock;
@property(readonly, nonatomic) PUAccessoryVisibilityInteractionController *_accessoryVisibilityInteractionController; // @synthesize _accessoryVisibilityInteractionController=__accessoryVisibilityInteractionController;
@property(readonly, nonatomic) PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager; // @synthesize _accessoryViewControllersManager=__accessoryViewControllersManager;
@property(nonatomic, setter=_setSuppressBackdropColorSettings:) _Bool _suppressColorSettings; // @synthesize _suppressColorSettings=__suppressColorSettings;
@property(readonly, nonatomic) PUParallaxComputer *_parallaxComputer; // @synthesize _parallaxComputer=__parallaxComputer;
@property(nonatomic, setter=_setShouldDisableTransitionsUntilAppeared:) _Bool _shouldDisableTransitionsUntilAppeared; // @synthesize _shouldDisableTransitionsUntilAppeared=__shouldDisableTransitionsUntilAppeared;
@property(nonatomic, setter=_setIrisPlaying:) _Bool _isIrisPlaying; // @synthesize _isIrisPlaying=__isIrisPlaying;
@property(nonatomic, setter=_setPreloadInsetsBasedOffViewWidth:) double _preloadInsetsBasedOffViewWidth; // @synthesize _preloadInsetsBasedOffViewWidth=__preloadInsetsBasedOffViewWidth;
@property(nonatomic, setter=_setPendingViewTransitionSize:) struct CGSize _pendingViewTransitionSize; // @synthesize _pendingViewTransitionSize=__pendingViewTransitionSize;
@property(retain, nonatomic, setter=_setCurrentNavigationRequest:) PUAssetDisplayDescriptorNavigationRequest *_currentNavigationRequest; // @synthesize _currentNavigationRequest=__currentNavigationRequest;
@property(nonatomic, setter=_setInitialActivity:) unsigned long long _initialActivity; // @synthesize _initialActivity=__initialActivity;
@property(retain, nonatomic, setter=_setOverOneUpPresentationSession:) PUOverOneUpPresentationSession *_overOneUpPresentationSession; // @synthesize _overOneUpPresentationSession=__overOneUpPresentationSession;
@property(retain, nonatomic, setter=_setTileKindsToHide:) NSArray *_tileKindsToHide; // @synthesize _tileKindsToHide=__tileKindsToHide;
@property(retain, nonatomic, setter=_setHiddenTilesController:) NSArray *_hiddenTilesController; // @synthesize _hiddenTilesController=__hiddenTilesController;
@property(retain, nonatomic, setter=_setChromeAutoHideTimer:) NSTimer *_chromeAutoHideTimer; // @synthesize _chromeAutoHideTimer=__chromeAutoHideTimer;
@property(readonly, nonatomic) _Bool _prefersCompactLayoutForSplitScreen; // @synthesize _prefersCompactLayoutForSplitScreen=__prefersCompactLayoutForSplitScreen;
@property(readonly, nonatomic) _Bool _isPresentedForSecondScreen; // @synthesize _isPresentedForSecondScreen=__isPresentedForSecondScreen;
@property(retain, nonatomic, setter=_setSecondScreenBrowser:) PUOneUpViewController *_secondScreenBrowser; // @synthesize _secondScreenBrowser=__secondScreenBrowser;
@property(nonatomic, setter=_setWindowInterfaceOrientation:) long long _windowInterfaceOrientation; // @synthesize _windowInterfaceOrientation=__windowInterfaceOrientation;
@property(retain, nonatomic, setter=_setReviewScreenBarsModel:) PUReviewScreenBarsModel *_reviewScreenBarsModel; // @synthesize _reviewScreenBarsModel=__reviewScreenBarsModel;
@property(retain, nonatomic, setter=_setReviewScreenTopBarTileViewController:) PUReviewScreenTopBarTileViewController *_reviewScreenTopBarTileViewController; // @synthesize _reviewScreenTopBarTileViewController=__reviewScreenTopBarTileViewController;
@property(retain, nonatomic, setter=_setReviewScreenControlBarTileViewController:) PUReviewScreenControlBarTileViewController *_reviewScreenControlBarTileViewController; // @synthesize _reviewScreenControlBarTileViewController=__reviewScreenControlBarTileViewController;
@property(retain, nonatomic, setter=_setReviewScreenScrubberBarTileViewController:) PUReviewScreenScrubberBarTileViewController *_reviewScreenScrubberBarTileViewController; // @synthesize _reviewScreenScrubberBarTileViewController=__reviewScreenScrubberBarTileViewController;
@property(retain, nonatomic, setter=_setBackgroundTileViewController:) PUBrowsingBackgroundTileViewController *_backgroundTileViewController; // @synthesize _backgroundTileViewController=__backgroundTileViewController;
@property(readonly, nonatomic) PUOneUpGestureRecognizerCoordinator *_gestureRecognizerCoordinator; // @synthesize _gestureRecognizerCoordinator=__gestureRecognizerCoordinator;
@property(readonly, nonatomic) PUDoubleTapZoomController *_doubleTapZoomController; // @synthesize _doubleTapZoomController=__doubleTapZoomController;
@property(readonly, nonatomic) PUInteractivePinchDismissalController *_interactivePinchDismissalController; // @synthesize _interactivePinchDismissalController=__interactivePinchDismissalController;
@property(readonly, nonatomic) PUInteractiveSwipeDismissalController *_interactiveSwipeDismissalController; // @synthesize _interactiveSwipeDismissalController=__interactiveSwipeDismissalController;
@property(readonly, nonatomic) PUOneUpBarsController *_barsController; // @synthesize _barsController=__barsController;
@property(retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property(nonatomic) int appearState; // @synthesize appearState=_appearState;
@property(nonatomic, setter=_setLayoutSafeAreaInsets:) struct UIEdgeInsets _layoutSafeAreaInsets; // @synthesize _layoutSafeAreaInsets=__layoutSafeAreaInsets;
@property(nonatomic, setter=_setLayoutReferenceSize:) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property(readonly, nonatomic) PUOneUpViewControllerSpec *_spec; // @synthesize _spec=__spec;
@property(nonatomic, setter=_setNeedsUpdateVideoPlayer:) _Bool _needsUpdateVideoPlayer; // @synthesize _needsUpdateVideoPlayer=__needsUpdateVideoPlayer;
@property(nonatomic, setter=_setNeedsUpdateAudioState:) _Bool _needsUpdateAudioState; // @synthesize _needsUpdateAudioState=__needsUpdateAudioState;
@property(nonatomic, setter=_setNeedsUpdatePreferredContentSize:) _Bool _needsUpdatePreferredContentSize; // @synthesize _needsUpdatePreferredContentSize=__needsUpdatePreferredContentSize;
@property(nonatomic, setter=_setNeedsUpdateEditMode:) _Bool _needsUpdateEditMode; // @synthesize _needsUpdateEditMode=__needsUpdateEditMode;
@property(nonatomic, setter=_setNeedsUpdateLayout:) _Bool _needsUpdateLayout; // @synthesize _needsUpdateLayout=__needsUpdateLayout;
@property(nonatomic, setter=_setNeedsUpdatePreloadInsets:) _Bool _needsUpdatePreloadInsets; // @synthesize _needsUpdatePreloadInsets=__needsUpdatePreloadInsets;
@property(nonatomic, setter=_setNeedsUpdateBarsController:) _Bool _needsUpdateBarsController; // @synthesize _needsUpdateBarsController=__needsUpdateBarsController;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(readonly, nonatomic) unsigned long long _options; // @synthesize _options=__options;
@property(copy, nonatomic) CDUnknownBlockType unlockDeviceHandler; // @synthesize unlockDeviceHandler=_unlockDeviceHandler;
@property(copy, nonatomic) CDUnknownBlockType unlockDeviceStatus; // @synthesize unlockDeviceStatus=_unlockDeviceStatus;
@property(readonly, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (void).cxx_destruct;
- (void)livePhotoVideoPlaybackTileViewControllerDidEndPlaying:(id)arg1;
- (void)livePhotoVideoPlaybackTileViewControllerWillBeginPlaying:(id)arg1;
- (id)livePhotoVideoPlaybackTileViewControllerCurrentImage:(id)arg1;
- (id)livePhotoVideoPlaybackTileViewControllerDisplayTileTransform:(id)arg1;
- (_Bool)livePhotoVideoPlaybackTileViewControllerCanBeginPlaying:(id)arg1;
- (void)gestureProvider:(id)arg1 didTriggerEvent:(long long)arg2;
- (struct CGRect)gestureProviderCurrentAssetRect:(id)arg1;
- (_Bool)oneUpSuggestionsController:(id)arg1 canShowSuggestion:(id)arg2 forAssetReference:(id)arg3;
- (void)oneUpSuggestionsController:(id)arg1 didSelectSuggestion:(id)arg2 forAssetReference:(id)arg3;
- (id)viewControllerForOneUpSuggestionsController:(id)arg1;
- (struct CGRect)oneUpSuggestionsController:(id)arg1 frameForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3;
- (void)contextualNotificationWasTapped:(id)arg1;
- (_Bool)contextualNotification:(id)arg1 shouldPassthroughPoint:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;
- (long long)preferredAnimationForContextualNotification:(id)arg1;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)pu_debugCurrentViewModel;
- (id)pu_debugCurrentAsset;
- (void)ppt_notifyWhenFullQualityIsDisplayedWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)ppt_playCurrentLivePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIViewController *ppt_currentAccessoryViewController;
- (void)ppt_toggleAccessoryView;
@property(readonly, nonatomic) PUOverOneUpPresentationSession *ppt_overOneUpPresentationSession;
@property(readonly, nonatomic) PUOneUpBarsController *ppt_barsController;
@property(readonly, nonatomic) UIScrollView *ppt_mainScrollView;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_snapBackHistorySubtitle;
- (id)px_snapBackHistoryTitle;
- (_Bool)px_isSnapBackDestination;
- (void)purgeIfPossible;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_notifyTileIsReadyWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performNavigationToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_canAttemptNavigationToAssetDisplayDescriptor:(id)arg1;
- (void)navigateToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(id)arg1;
- (_Bool)oneUpAccessoryViewControllersManager:(id)arg1 preventRevealInMomentActionForAssetReference:(id)arg2;
- (id)accessoryTileViewControllerHostViewController:(id)arg1;
- (_Bool)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(id)arg1;
- (id)accessoryTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (id)accessoryTileViewControllerAccessoryViewController:(id)arg1;
- (id)irisImageTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (id)irisImageTileViewController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (void)irisImageTileViewControllerDidEndVitality:(id)arg1;
- (void)irisImageTileViewControllerDidEndPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidBeginPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidBeginHinting:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)createAssetTransitionInfo;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2 options:(unsigned long long)arg3;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)_didEndTransition;
- (void)_willBeginTransition;
- (void)_unhideOverlays;
- (void)_hideOverlays;
- (id)_currentPlaceholderSnapshotViewForTileController:(id)arg1;
- (id)_leadingContentTileController;
- (id)_trailingContentTileController;
- (id)_contentTileControllerForAssetReference:(id)arg1;
- (id)_currentContentTileController;
- (void)overOneUpPresentationSessionDidFinish:(id)arg1;
- (void)overOneUpPresentationSession:(id)arg1 didPresent:(id)arg2;
- (_Bool)overOneUpPresentationSessionPresentingViewControllerIsReady:(id)arg1;
- (id)overOneUpPresentationSessionViewController:(id)arg1;
- (id)overOneUpPresentationSessionBrowserViewModel:(id)arg1;
- (id)overOneUpPresentationSessionCurrentTileController:(id)arg1;
- (id)overOneUpPresentationSessionTilingView:(id)arg1;
- (id)overOneUpPresentationSessionCreateIfNeeded:(_Bool)arg1;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)accessoryVisibilityInteractionController:(id)arg1 setAccessoryVisible:(_Bool)arg2 changeReason:(long long)arg3;
- (_Bool)accessoryVisibilityInteractionController:(id)arg1 isLocationFromProviderInAccessoryContent:(id)arg2;
- (void)accessoryVisibilityInteractionControllerDidEnd:(id)arg1;
- (_Bool)accessoryVisibilityInteractionController:(id)arg1 canBeginAtLocationFromProvider:(id)arg2;
- (id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)arg1;
- (_Bool)doubleTapZoomController:(id)arg1 canDoubleTapBeginAtLocationFromProvider:(id)arg2;
- (id)doubleTapZoomController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)doubleTapZoomControllerTilingView:(id)arg1;
- (id)doubleTapZoomControllerViewHostingGestureRecognizers:(id)arg1;
- (_Bool)oneUpGestureRecgonizerCoordinator:(id)arg1 shouldAllowIrisGestureAtLocationFromProvider:(id)arg2;
- (id)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(id)arg1;
- (_Bool)_isSecondScreenBrowserVisible;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (_Bool)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (double)playButtonTileViewController:(id)arg1 delayForButtonAnimation:(_Bool)arg2;
- (void)playButtonTileViewController:(id)arg1 didTapButton:(_Bool)arg2;
- (_Bool)userTransformTileViewController:(id)arg1 shouldReceiveTouchAtLocationFromProvider:(id)arg2;
- (void)userTransformTileViewController:(id)arg1 didChangeIsUserInteracting:(_Bool)arg2;
- (void)userTransformTileViewController:(id)arg1 didChangeModelTileTransform:(id)arg2;
- (_Bool)oneUpBarsController:(id)arg1 shouldEnableShowOriginalForAsset:(id)arg2;
- (_Bool)oneUpBarsController:(id)arg1 canViewInLibraryForAsset:(id)arg2;
- (_Bool)oneUpBarsController:(id)arg1 canShowOriginalForAsset:(id)arg2;
- (void)oneUpBarsControllerDidEndShowingOriginal:(id)arg1;
- (void)oneUpBarsControllerDidBeginShowingOriginal:(id)arg1;
- (void)oneUpBarsController:(id)arg1 willExecuteActionPerformer:(id)arg2;
- (_Bool)oneUpBarsController:(id)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg2;
- (_Bool)oneUpBarsController:(id)arg1 shouldTapBeginAtLocationFromProvider:(id)arg2;
- (_Bool)oneUpBarsController:(id)arg1 canShowCommentsForAsset:(id)arg2;
- (void)oneUpBarsControllerToggleCommentsVisibility:(id)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(id)arg1;
- (_Bool)oneUpBarsController:(id)arg1 isAccessoryAvailableForAssetReference:(id)arg2;
- (void)oneUpBarsControllerDidTapTitle:(id)arg1;
- (void)oneUpBarsController:(id)arg1 didTapPlayPauseButton:(_Bool)arg2;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg1;
- (void)barsControllerContentGuideInsetsDidChange:(id)arg1;
- (id)barsController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)barsControllerViewHostingGestureRecognizers:(id)arg1;
- (id)barsControllerViewController:(id)arg1;
- (_Bool)interactiveDismissalController:(id)arg1 canBeginDismissalAtLocationFromProvider:(id)arg2;
- (id)interactiveDismissalControllerDesignatedTileController:(id)arg1;
- (id)interactiveDismissalControllerTilingView:(id)arg1;
- (id)interactiveDismissalControllerViewController:(id)arg1;
- (id)interactiveDismissalControllerViewHostingGestureRecognizers:(id)arg1;
- (_Bool)layout:(id)arg1 disableInitialZoomToFillForItemAtIndexPath:(id)arg2;
- (_Bool)layout:(id)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg2;
- (struct CGPoint)layout:(id)arg1 accessoryOffsetForItemAtIndexPath:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (double)layout:(id)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 minimumVisibleContentHeightForItemAtIndexPath:(id)arg2;
- (_Bool)layout:(id)arg1 shouldShowAccessoryForItemAtIndexPath:(id)arg2;
- (struct CGPoint)layout:(id)arg1 contentOffsetForItemAtIndexPath:(id)arg2;
- (void)_fixAssetViewModelTileTransformIfNecessary:(id)arg1;
- (id)layout:(id)arg1 modelTileTransformForItemAtIndexPath:(id)arg2;
- (struct CGSize)layout:(id)arg1 loadingIndicatorSizeForItemAtIndexPath:(id)arg2;
- (_Bool)layout:(id)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg2;
- (_Bool)layout:(id)arg1 shouldMoveProgressIndicatorForItemAtIndexPath:(id)arg2;
- (double)alphaForReviewScreenBarsInLayout:(id)arg1;
- (_Bool)layoutShouldShowReviewScreenScrubberBar:(id)arg1;
- (_Bool)layout:(id)arg1 shouldShowPlayButtonForItemAtIndexPath:(id)arg2;
- (struct CGSize)layout:(id)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg2;
- (struct CGSize)layout:(id)arg1 badgeSizeForItemAtIndexPath:(id)arg2 contentWidth:(double)arg3;
- (_Bool)layout:(id)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGPoint)tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint)arg2 withLayout:(id)arg3;
- (struct CGPoint)tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (id)tilingView:(id)arg1 scrollInfoWithLayout:(id)arg2;
- (_Bool)tilingViewCanBypass20069585Check:(id)arg1;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(_Bool)arg4 animationSetupCompletionHandler:(CDUnknownBlockType)arg5;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (void)_arrowKey:(id)arg1;
- (id)keyCommands;
- (_Bool)previewActionControllerPreventRevealInMomentAction:(id)arg1;
- (void)createPreviewActionControllerForManagerIfNeeded:(id)arg1 withPresentingViewController:(id)arg2;
- (long long)pu_preferredBarStyle;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)_isLayoutAffectedBySpecChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (id)_videoPlayerAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)_assetViewModelAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)_currentAssetViewModel;
- (id)_assetReferenceAtIndexPath:(id)arg1 layout:(id)arg2;
- (struct CGRect)_currentAssetRect;
- (void)_endShowingOriginal;
- (void)_beginShowingOriginal;
- (double)px_imageModulationIntensity;
- (double)px_HDRFocus;
- (_Bool)_requireUnlockedDeviceForAccessoryView;
- (id)_currentAccessoryViewController;
- (void)_setAccessoryVisible:(_Bool)arg1;
- (_Bool)_isAccessoryVisible;
- (_Bool)_shouldUseGlobalAccessoryViewVisibility;
- (long long)_accessoryContentKindForCurrentAsset;
- (void)_toggleCommentsVisibility;
- (void)_toggleDetailsVisibility;
- (void)_toggleAccessoryVisibility;
- (void)_presentAlertForUnplayableAssetReference:(id)arg1;
- (void)_handleTouchGesture:(id)arg1;
- (_Bool)_isLocationFromProviderOverControl:(id)arg1;
- (_Bool)_isLocationFromProviderInAccessoryArea:(id)arg1;
- (_Bool)_shouldMakeChromeVisibleWhenVideoPlayerPlaysToEndTime:(id)arg1;
- (void)_browsingVideoPlayerDidPlayToEndTime:(id)arg1;
- (void)_abandonTileController:(id)arg1;
- (void)_configureAdoptedTileController:(id)arg1;
- (void)_hideChromeOnPlayButtonTapWithItemIsNowPlaying:(_Bool)arg1 buttonIsOverlayed:(_Bool)arg2;
- (void)_chromeAutoHideTimerFired:(id)arg1;
- (void)_cancelTimedChromeAutoHide;
- (void)_scheduleTimedChromeAutoHide;
- (void)_updateSuggestionControllerIfNeeded;
- (void)_invalidateSuggestionController;
- (void)_updateEditModeIfNeeded;
- (void)_invalidateEditMode;
- (void)_updateReviewScreenBars;
- (void)_updateBackgroundTileViewController;
- (void)_updateLayoutIfNeeded;
- (void)_invalidateLayout;
- (void)_updateViewModelWithCurrentScrollPosition;
- (_Bool)_isDrivingScrubbing;
- (void)_updateBarsControllerIfNeeded;
- (void)_invalidateBarsControllers;
- (void)_updateVideoPlayerIfNeeded;
- (void)_invalidateVideoPlayer;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)_invalidatePreferredContentSize;
- (void)_updateAudioStateIfNeeded;
- (void)_invalidateAudioState;
- (void)_updateSpecIfNeeded;
- (void)_invalidateSpec;
- (void)_updatePreloadInsetsIfNeeded;
- (void)_invalidatePreloadInsets;
- (void)_updateLayout:(id)arg1;
- (id)_newOneUpLayout;
- (void)_presentDetailsIndicator;
- (void)_updateWindowInterfaceOrientation;
- (void)_updateLayoutReferenceSize;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)_updatePrefersHomeIndicatorHidden;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)contentScrollView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithBrowsingSession:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2 initialActivity:(unsigned long long)arg3;
- (id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

