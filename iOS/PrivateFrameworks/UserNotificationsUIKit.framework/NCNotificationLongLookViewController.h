//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationViewController.h>

#import <UserNotificationsUIKit/NCLongLookDefaultPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationCustomContentDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationLongLookViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLClickPresentationInteractionPresentable-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterDismissing-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentable-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentationViewDelegate-Protocol.h>

@class NCLongLookTransitioningDelegate, NSString, UIView;
@protocol PLClickPresentationInteractionPresenting, PLExpandedPlatterDismissing;

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCNotificationLongLookViewDelegate, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, NCNotificationCustomContentDelegate, PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentable, PLExpandedPlatterPresentationViewDelegate, PLExpandedPlatterDismissing>
{
    NCLongLookTransitioningDelegate *_longLookTransitionDelegate;
    id _cancelTouchesToken;
    id <PLClickPresentationInteractionPresenting> _presenter;
    id <PLExpandedPlatterDismissing> _dismisser;
    CDUnknownBlockType _notificationTapBlock;
}

+ (void)initialize;
@property(copy, nonatomic, getter=_notificationTapBlock, setter=_setNotificationTapBlock:) CDUnknownBlockType notificationTapBlock; // @synthesize notificationTapBlock=_notificationTapBlock;
@property(nonatomic) __weak id <PLExpandedPlatterDismissing> dismisser; // @synthesize dismisser=_dismisser;
@property(nonatomic) __weak id <PLClickPresentationInteractionPresenting> presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (id)_longLookViewLoadingIfNecessary;
- (id)_longLookViewIfLoaded;
- (id)_expandedPlatterPresentationViewLoadingIfNecessary:(_Bool)arg1;
- (id)_presentingNotificationViewController;
- (void)presentLongLookAnimated:(_Bool)arg1 trigger:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentedLongLookViewController;
- (_Bool)isLookStyleLongLook;
- (void)customContentDidLoadExtension:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)notificationLongLookView:(id)arg1 tapGestureRecognizerShouldReceiveTouch:(id)arg2;
- (void)notificationLongLookView:(id)arg1 willInteractWithURL:(id)arg2;
- (id)expandedPlatterViewForPresentationView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg1;
- (struct CGRect)expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (_Bool)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(id)arg1;
- (long long)viewControllerTransitionTypeForTransitionDelegate:(id)arg1;
- (void)_handleNotificationTap:(id)arg1;
- (void)_handleIconButton:(id)arg1;
- (id)_extensionIdentifier;
- (void)_setPreferredCustomContentSize:(struct CGSize)arg1;
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1 parentContentContainerBounds:(struct CGRect)arg2;
- (void)_notificationViewControllerViewDidLoad;
- (id)_scrollView;
- (id)_expandedPlatterPresentationViewScrollView;
- (id)_longLookViewScrollView;
- (void)_loadLookView;
- (_Bool)_shouldPadScrollViewContentSizeHeight;
- (void)_updateTitleWithProvidedCustomContent;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)_updateWithProvidedCustomContent;
- (unsigned long long)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(unsigned long long)arg1 isPrimary:(_Bool)arg2 isLarge:(_Bool)arg3;
- (unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
- (void)_updateWithProvidedStaticContent;
- (void)expandedPlatterPresentable:(id)arg1 requestsDismissalWithTrigger:(long long)arg2;
@property(readonly, nonatomic) UIView *viewForTouchContinuation;
@property(readonly, nonatomic) UIView *viewWithContent;
- (void)customContent:(id)arg1 didUpdateUserNotificationActions:(id)arg2;
- (void)customContentDidUpdateTitle:(id)arg1;
- (void)contentProviderDismissCustomContent:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)playMedia;
- (void)_updateLookView:(struct UIView *)arg1 withTitleFromProvidedStaticContent:(id)arg2;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(_Bool)arg1;
- (_Bool)restoreInputViews;
- (void)preserveInputViews;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setNotificationRequest:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;
- (id)_initWithNotificationRequest:(id)arg1 andPresentingNotificationViewController:(id)arg2 revealingAdditionalContentOnPresentation:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

