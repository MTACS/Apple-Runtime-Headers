//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/_UISheetInteractionDelegate-Protocol.h>
#import <UIKitCore/_UISheetLayoutInfoDelegate-Protocol.h>

@class NSArray, NSString, NSUserActivity, UIDimmingView, UIDropShadowView, UIPercentDrivenInteractiveTransition, UIView, UIViewPropertyAnimator, _UIRemoteViewController, _UISheetAnimationController, _UISheetInteraction, _UISheetLayoutInfo, _UISheetPresentationControllerConfiguration;
@protocol _UISheetPresentationControllerDelegate;

@interface _UISheetPresentationController : UIPresentationController <_UISheetLayoutInfoDelegate, _UISheetInteractionDelegate>
{
    _Bool __shouldPresentedViewControllerControlStatusBarAppearance;
    _Bool __didAttemptToStartDismiss;
    _Bool __didTearOff;
    _Bool __remoteDismissing;
    _Bool __dimmingViewTapDismissing;
    _Bool __isRemote;
    _Bool __presentsAtStandardHalfHeight;
    _Bool __allowsTearOff;
    _UISheetLayoutInfo *__layoutInfo;
    UIDimmingView *__confinedDimmingView;
    _UISheetInteraction *__sheetInteraction;
    _UISheetAnimationController *__animationController;
    UIPercentDrivenInteractiveTransition *__interactionController;
    NSUserActivity *__tearOffActivity;
    _UIRemoteViewController *__connectedRemoteViewController;
    UIViewPropertyAnimator *__remoteDismissalPropertyAnimator;
    UIDropShadowView *_dropShadowView;
    UIDimmingView *_dimmingView;
    struct CGPoint __initialTearOffPoint;
    struct CGRect _frameOfPresentedViewInContainerView;
}

+ (int)_initialMode;
@property(nonatomic, setter=_setAllowsTearOff:) _Bool _allowsTearOff; // @synthesize _allowsTearOff=__allowsTearOff;
@property(nonatomic, setter=_setPresentsAtStandardHalfHeight:) _Bool _presentsAtStandardHalfHeight; // @synthesize _presentsAtStandardHalfHeight=__presentsAtStandardHalfHeight;
@property(nonatomic, setter=_setIsRemote:) _Bool _isRemote; // @synthesize _isRemote=__isRemote;
@property(readonly, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) UIDropShadowView *dropShadowView; // @synthesize dropShadowView=_dropShadowView;
@property(nonatomic) _Bool _dimmingViewTapDismissing; // @synthesize _dimmingViewTapDismissing=__dimmingViewTapDismissing;
@property(retain, nonatomic) UIViewPropertyAnimator *_remoteDismissalPropertyAnimator; // @synthesize _remoteDismissalPropertyAnimator=__remoteDismissalPropertyAnimator;
@property(nonatomic) _Bool _remoteDismissing; // @synthesize _remoteDismissing=__remoteDismissing;
@property(readonly, nonatomic) _UIRemoteViewController *_connectedRemoteViewController; // @synthesize _connectedRemoteViewController=__connectedRemoteViewController;
@property(retain, nonatomic, setter=_setTearOffActivity:) NSUserActivity *_tearOffActivity; // @synthesize _tearOffActivity=__tearOffActivity;
@property(nonatomic, setter=_setInitialTearOffPoint:) struct CGPoint _initialTearOffPoint; // @synthesize _initialTearOffPoint=__initialTearOffPoint;
@property(nonatomic, setter=_setDidTearOff:) _Bool _didTearOff; // @synthesize _didTearOff=__didTearOff;
@property(nonatomic, setter=_setDidAttemptToStartDismiss:) _Bool _didAttemptToStartDismiss; // @synthesize _didAttemptToStartDismiss=__didAttemptToStartDismiss;
@property(retain, nonatomic, setter=_setInteractiveTransition:) UIPercentDrivenInteractiveTransition *_interactionController; // @synthesize _interactionController=__interactionController;
@property(retain, nonatomic, setter=_setAnimatedTransition:) _UISheetAnimationController *_animationController; // @synthesize _animationController=__animationController;
@property(readonly, nonatomic) _UISheetInteraction *_sheetInteraction; // @synthesize _sheetInteraction=__sheetInteraction;
@property(nonatomic, setter=_setShouldPresentedViewControllerControlStatusBarAppearance:) _Bool _shouldPresentedViewControllerControlStatusBarAppearance; // @synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance;
@property(readonly, nonatomic) UIDimmingView *_confinedDimmingView; // @synthesize _confinedDimmingView=__confinedDimmingView;
@property(readonly, nonatomic) _UISheetLayoutInfo *_layoutInfo; // @synthesize _layoutInfo=__layoutInfo;
@property(nonatomic) struct CGRect frameOfPresentedViewInContainerView; // @synthesize frameOfPresentedViewInContainerView=_frameOfPresentedViewInContainerView;
- (void).cxx_destruct;
- (_Bool)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingAtPoint:(struct CGPoint)arg2;
- (void)_completeInteractiveTransitionFromRemote:(_Bool)arg1 immediately:(_Bool)arg2 offset:(float)arg3 duration:(double)arg4 timingCurve:(id)arg5;
- (void)_updateInteractiveTransitionFromRemoteWithProgress:(float)arg1 offset:(float)arg2;
- (void)_startInteractiveTransitionFromRemoteWithProgress:(float)arg1 offset:(float)arg2;
- (struct CGPoint)offsetForInterruptedAnimationInSheetInteraction:(id)arg1;
- (void)sheetInteraction:(id)arg1 didChangeOffset:(struct CGPoint)arg2;
- (void)_completeInteractiveTransition:(_Bool)arg1 immediately:(_Bool)arg2 duration:(double)arg3 timingCurve:(id)arg4;
- (void)_updateInteractiveTransitionWithProgress:(float)arg1;
- (void)_startInteractiveTransitionWithProgress:(float)arg1;
- (void)_updateAnimationController;
- (id)_preferredInteractionControllerForDismissal:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (void)containerViewDidLayoutSubviews;
- (void)_updateShouldPresentedViewControllerControlStatusBarAppearance;
- (void)_updatePresentedViewFrame;
- (void)_containerViewLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
@property(copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews;
- (_Bool)_shouldOccludeDuringPresentation;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (id)presentedView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)transitionWillBegin:(_Bool)arg1;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)_keyboardAboutToHide:(id)arg1;
- (void)_keyboardAboutToChangeFrame:(id)arg1;
- (void)_keyboardAboutToShow:(id)arg1;
- (void)_layoutPresentedViewAndContainerViewIfNeeded;
- (void)_avoidKeyboardAndAnimateSheetForNotification:(id)arg1;
- (void)presentationTransitionWillBegin;
@property(readonly, nonatomic) _UISheetPresentationController *_childSheetPresentationController;
@property(readonly, nonatomic) _UISheetPresentationController *_parentSheetPresentationController;
@property(readonly, nonatomic, getter=_isHosting) _Bool _hosting;
@property(readonly, nonatomic) _Bool _isRootPresentation;
- (int)presentationStyle;
- (void)_sheetLayoutInfoLayout:(id)arg1;
- (void)_sheetLayoutInfoPrelayout:(id)arg1;
- (void)_sheetLayoutInfoDidInvalidateOutput:(id)arg1;
- (void)_updateLayoutInfoContainerTraitCollection;
- (void)_containerViewTraitCollectionDidChange;
- (void)_updateLayoutInfoContainerSafeAreaInsets;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewBoundsDidChange;
- (void)_tryToConnectToRemoteViewController:(id)arg1;
@property(readonly, nonatomic) _UIRemoteViewController *_expectedRemoteViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
@property(retain, nonatomic, setter=_setConfiguration:) _UISheetPresentationControllerConfiguration *_configuration;
@property(nonatomic, setter=_setMode:) int _mode;
- (void)_realSourceViewGeometryDidChange;
@property(retain, nonatomic, setter=_setSourceView:) UIView *_sourceView;
@property(nonatomic, getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:) _Bool shouldDismissWhenTappedOutside;
@property(nonatomic, setter=_setIndexOfLastUndimmedDetent:) int _indexOfLastUndimmedDetent;
@property(nonatomic, setter=_setIndexOfCurrentDetent:) int _indexOfCurrentDetent;
@property(copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property(nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) _Bool _widthFollowsPreferredContentSizeWhenBottomAttached;
@property(nonatomic) float _cornerRadiusForPresentationAndDismissal;
@property(nonatomic, setter=_setWantsGrabber:) _Bool _wantsGrabber;
@property(nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) _Bool _wantsBottomAttachedInCompactHeight;
@property(nonatomic, setter=_setWantsBottomAttached:) _Bool _wantsBottomAttached;
@property(nonatomic, setter=_setWantsFullScreen:) _Bool _wantsFullScreen;
- (void)_accessibilityReduceMotionStatusDidChange;
@property(nonatomic, setter=_setShouldScaleDownBehindDescendantSheets:) _Bool _shouldScaleDownBehindDescendantSheets;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <_UISheetPresentationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

