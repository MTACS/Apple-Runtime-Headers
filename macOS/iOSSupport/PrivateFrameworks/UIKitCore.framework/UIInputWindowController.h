//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIApplicationRotationFollowingControllerNoTouches.h>

#import <UIKitCore/UIInputViewAnimationHost-Protocol.h>
#import <UIKitCore/UIKeyboardFloatingTransitionControllerDelegate-Protocol.h>
#import <UIKitCore/_UIInputHostController-Protocol.h>
#import <UIKitCore/_UITextEffectsSceneObserver-Protocol.h>

@class NSDate, NSLayoutConstraint, NSMutableArray, NSString, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIInputWindowControllerHosting, UIKeyboardFloatingTransitionController, UIKeyboardPathEffectView, UIView;

__attribute__((visibility("hidden")))
@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UIInputViewAnimationHost, _UITextEffectsSceneObserver, UIKeyboardFloatingTransitionControllerDelegate, _UIInputHostController>
{
    NSMutableArray *_animationStyleStack;
    int _suppressedCallbacks;
    int _suppressedNotifications;
    BOOL _isChangingPlacement;
    BOOL _isChangingInputViews;
    BOOL _isSnapshotting;
    int _hiddenCount;
    BOOL _inhibitingHiding;
    unsigned long long _rotationState;
    BOOL _disablePlacementChanges;
    BOOL _suppressUpdateVisibilityConstraints;
    CDUnknownBlockType _pendingTransitionActivity;
    UIInputWindowControllerHosting *_hosting;
    UIView *_preRotationSnapshot;
    struct CGSize _preRotationInputViewSize;
    struct CGSize _preRotationInputAssistantViewSize;
    struct CGSize _preRotationInputAccessoryViewSize;
    struct CGAffineTransform _preRotationInputViewTransform;
    struct CGAffineTransform _preRotationInputAssistantViewTransform;
    struct CGAffineTransform _preRotationInputAccessoryViewTransform;
    UIInputViewSetNotificationInfo *_rotationInfo;
    struct CGRect _preLayoutHostViewFrame;
    BOOL _didOverridePreLayoutHostViewFrame;
    BOOL _didPostLayoutNotification;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    BOOL _wasOnScreen;
    NSString *_lastKeyboardID;
    NSDate *_keyboardShowTimestamp;
    BOOL _supportsDockViewController;
    UIKeyboardFloatingTransitionController *_floatingTransitionController;
    BOOL _shouldNotifyRemoteKeyboards;
    BOOL _dontDismissKeyboardOnScrolling;
    BOOL _dontDismissReachability;
    UIInputViewSet *_inputViewSet;
    UIInputViewSetPlacement *_placement;
    UIInputViewController *_inputViewController;
    UIInputViewController *_inputAssistantViewController;
    UIInputViewController *_inputAccessoryViewController;
    UIInputViewSetPlacement *_postRotationPlacement;
    UIInputViewSet *_postRotationInputViewSet;
    UIInputViewSetNotificationInfo *_postRotationInputViewNotificationInfo;
    UIInputViewSetNotificationInfo *_templateNotificationInfo;
    UIInputViewPlacementTransition *_currentTransition;
    UIKeyboardPathEffectView *_pathEffectView;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_assistantViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    UIInputViewSet *_transientInputViewSet;
}

@property(nonatomic) BOOL dontDismissReachability; // @synthesize dontDismissReachability=_dontDismissReachability;
@property(nonatomic) BOOL dontDismissKeyboardOnScrolling; // @synthesize dontDismissKeyboardOnScrolling=_dontDismissKeyboardOnScrolling;
@property(readonly, nonatomic) BOOL isChangingInputViews; // @synthesize isChangingInputViews=_isChangingInputViews;
@property(retain, nonatomic) UIInputViewSet *transientInputViewSet; // @synthesize transientInputViewSet=_transientInputViewSet;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *assistantViewHeightConstraint; // @synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
@property(readonly, retain, nonatomic) UIInputWindowControllerHosting *hosting; // @synthesize hosting=_hosting;
@property(nonatomic) BOOL shouldNotifyRemoteKeyboards; // @synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards;
@property(retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // @synthesize templateNotificationInfo=_templateNotificationInfo;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *postRotationInputViewNotificationInfo; // @synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo;
@property(retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // @synthesize postRotationInputViewSet=_postRotationInputViewSet;
@property(retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // @synthesize postRotationPlacement=_postRotationPlacement;
@property(retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // @synthesize _inputAccessoryViewController;
@property(retain, nonatomic) UIInputViewController *_inputAssistantViewController; // @synthesize _inputAssistantViewController;
@property(retain, nonatomic) UIInputViewController *_inputViewController; // @synthesize _inputViewController;
@property(retain, nonatomic) UIInputViewSetPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
- (void)beginFloatingTransitionFromPanGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) UIInputViewSetPlacement *expectedPlacement;
@property(readonly, nonatomic) BOOL isTransitioningBetweenFloatingStates;
- (void)updateKeyboardSizeClass;
@property(readonly, nonatomic) BOOL isTransitioningBetweenKeyboardStates;
@property(readonly, nonatomic) BOOL isTransitionStarted;
@property(readonly, nonatomic) BOOL isTransitioning;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (BOOL)inhibitRotationAnimation;
- (void)transferPlacementStateToInputWindowController:(id)arg1;
- (void)setPlacementChangeDisabled:(BOOL)arg1 withPlacement:(id)arg2;
- (void)setInterfaceAutorotationDisabled:(BOOL)arg1;
- (void)keyboardHeightChangeDone;
- (void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)resetBackdropHeight;
- (void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2;
- (BOOL)isDragging;
- (BOOL)isSplitting;
- (BOOL)isTranslating;
- (BOOL)isChangingPlacement;
- (BOOL)isOnScreenRotating;
- (BOOL)isRotating;
- (BOOL)isUndocked;
- (BOOL)isOnScreen;
- (BOOL)inputViewSetContainsView:(id)arg1;
- (struct CGRect)visibleInputViewFrame;
- (struct CGRect)_visibleInputViewFrame;
- (struct CGRect)visibleFrame;
- (struct CGRect)_visibleFrame;
- (id)screenSnapshotOfView:(id)arg1;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
- (void)setRotationAwarePlacement:(id)arg1;
- (void)setPlacement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPlacement:(id)arg1 starting:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)currentPresentationPlacement;
- (unsigned long long)changeToInputViewSet:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)updateInputAssistantView:(id)arg1;
- (void)invalidateInputAccessoryView;
- (void)invalidateInputAssistantView;
- (void)invalidateInputView;
- (void)updateKeyboardDockViewVisibility;
- (void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4;
- (void)generateNotificationsForStart:(BOOL)arg1;
- (void)postTransitionEndNotification;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (BOOL)isHostingView:(id)arg1;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
@property(readonly, nonatomic) long long keyboardOrientation;
@property(readonly, retain, nonatomic) UIInputViewSetPlacement *placementIgnoringRotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 newSize:(struct CGSize)arg4;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (BOOL)_useLiveRotation;
- (void)_getRotationContentSettings:(CDStruct_f365cafe *)arg1;
- (void)finishSplitTransition;
- (void)prepareForSplitTransition;
- (void)setInputViewsHidden:(BOOL)arg1;
@property(readonly, nonatomic, getter=isInputViewsHidden) BOOL inputViewsHidden;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2;
- (struct CGRect)transitioningFrame;
- (id)transitioningView;
- (id)viewForTransitionScreenSnapshot;
- (void)syncToExistingAnimations;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)flushPendingActivities;
- (void)addPendingActivity:(CDUnknownBlockType)arg1;
- (BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (id)nextAnimationStyle;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (void)updateForKeyplaneChangeWithContext:(id)arg1;
- (void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg1 layoutSubviews:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (struct CGRect)convertRectFromContainerCoordinateSpaceToScreenSpace:(struct CGRect)arg1;
- (id)_screenCoordinateSpace;
- (void)transferActiveNotificationInfoToInfo:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)setHostingNeedsLayout;
- (void)_forcePreLayoutHostViewFrame;
- (void)updateAmbiguousControlCenterActivationMargin:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3;
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3;
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(BOOL)arg3;
- (void)postValidatedEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postValidatedStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (id)initialNotificationInfo;
@property(readonly, nonatomic) BOOL isSnapshotting;
- (void)didSnapshot;
- (void)willSnapshot;
- (void)hostAppSceneBoundsChanged;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)updateSupportsDockViewController;
- (struct UIEdgeInsets)_inputViewPadding;
- (void)updateRootViewConstraintsForSceneFrame:(struct CGRect)arg1 bounds:(struct CGRect)arg2;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)isViewLandscape;
- (struct UIEdgeInsets)_viewSafeAreaInsetsFromScene;
- (BOOL)shouldBeginTransitionForController:(id)arg1;
- (void)didEndTransitionWithController:(id)arg1;
- (void)willBeginTransitionWithController:(id)arg1;
- (id)inputWindowControllerForController:(id)arg1;
- (void)updateGestureRecognizers;
- (void)dismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;
- (struct CGRect)_viewFrameInWindowForContentOverlayInsetsCalculation;
- (struct CGRect)_boundsForOrientation:(long long)arg1;
- (struct CGPoint)_centerForOrientation:(long long)arg1;
- (struct CGRect)_defaultInitialViewFrame;
- (void)performWithSafeTransitionFrames:(CDUnknownBlockType)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withTemplateNotificationInfo:(id)arg2;
- (void)performWithoutCallbacksOrNotifications:(CDUnknownBlockType)arg1;
- (void)performWithoutAppearanceCallbacks:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) UIKeyboardPathEffectView *_pathEffectView; // @synthesize _pathEffectView;
@property(readonly, nonatomic) UIView *_inputAccessoryView;
@property(readonly, nonatomic) UIView *_inputAssistantView;
@property(readonly, nonatomic) UIView *_inputView;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)updateInputAssistantViewForInputViewSet:(id)arg1;
- (void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2;
- (void)registerPowerLogEvent:(BOOL)arg1;
- (void)setExclusiveTouch:(BOOL)arg1;
@property(readonly, retain, nonatomic) UIView *bottomEdgeView;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)loadView;
- (void)_didChangeDeepestUnambiguousResponder;
- (id)inputSetContainerView;
- (void)didReceiveMemoryWarning;
- (void)_updatePlacementWithPlacement:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

