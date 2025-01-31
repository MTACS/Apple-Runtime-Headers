//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementViewPresenterDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationMasterListDelegate-Protocol.h>

@class NCNotificationListSectionHeaderView, NCNotificationListTouchEaterManager, NCNotificationListView, NCNotificationManagementViewPresenter, NCNotificationMasterList, NCNotificationRequest, NCNotificationViewController, NSHashTable, NSString, UIPanGestureRecognizer, UIScrollView;
@protocol NCNotificationListCoalescingControlsHandler, NCNotificationStructuredListViewControllerDelegate;

@interface NCNotificationStructuredListViewController : UIViewController <NCNotificationMasterListDelegate, NCNotificationManagementViewPresenterDelegate, NCLegibilitySettingsAdjusting>
{
    _Bool _deviceAuthenticated;
    _Bool _backgroundBlurred;
    id <NCNotificationStructuredListViewControllerDelegate> _delegate;
    double _itemSpacing;
    NCNotificationMasterList *_masterList;
    NCNotificationListView *_masterListView;
    NCNotificationListTouchEaterManager *_touchEaterManager;
    NCNotificationManagementViewPresenter *_managementViewPresenter;
    NCNotificationRequest *_notificationRequestRemovedWhilePresentingLongLook;
    NCNotificationViewController *_notificationViewControllerPresentingLongLook;
    NCNotificationListSectionHeaderView *_headerViewInForceTouchState;
    id <NCNotificationListCoalescingControlsHandler> _coalescingControlsHandlerInForceTouchState;
    NSHashTable *_observers;
    struct UIEdgeInsets _insetMargins;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInForceTouchState; // @synthesize coalescingControlsHandlerInForceTouchState=_coalescingControlsHandlerInForceTouchState;
@property(nonatomic) __weak NCNotificationListSectionHeaderView *headerViewInForceTouchState; // @synthesize headerViewInForceTouchState=_headerViewInForceTouchState;
@property(nonatomic) __weak NCNotificationViewController *notificationViewControllerPresentingLongLook; // @synthesize notificationViewControllerPresentingLongLook=_notificationViewControllerPresentingLongLook;
@property(retain, nonatomic) NCNotificationRequest *notificationRequestRemovedWhilePresentingLongLook; // @synthesize notificationRequestRemovedWhilePresentingLongLook=_notificationRequestRemovedWhilePresentingLongLook;
@property(nonatomic) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property(retain, nonatomic) NCNotificationManagementViewPresenter *managementViewPresenter; // @synthesize managementViewPresenter=_managementViewPresenter;
@property(retain, nonatomic) NCNotificationListTouchEaterManager *touchEaterManager; // @synthesize touchEaterManager=_touchEaterManager;
@property(retain, nonatomic) NCNotificationListView *masterListView; // @synthesize masterListView=_masterListView;
@property(retain, nonatomic) NCNotificationMasterList *masterList; // @synthesize masterList=_masterList;
@property(readonly, nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(nonatomic) __weak id <NCNotificationStructuredListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetCellWithRevealedActions;
- (_Bool)_forwarNotificationRequestToLongLookIfNecessary:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_requestAuthenticationAndPerformBlock:(CDUnknownBlockType)arg1;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (id)_logDescription;
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (_Bool)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (_Bool)notificationMasterList:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (_Bool)notificationListComponentShouldAllowLongPressGesture:(id)arg1;
- (void)notificationListComponentChangedContent:(id)arg1;
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;
- (id)backgroundGroupNameBaseForNotificationListComponent:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (id)notificationListComponent:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (id)notificationUsageTrackingStateForNotificationListComponent:(id)arg1;
- (void)notificationListComponent:(id)arg1 requestsAuthenticationAndPerformBlock:(CDUnknownBlockType)arg2;
- (_Bool)notificationListComponent:(id)arg1 isClockNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsPresentingManagementViewForNotificationRequest:(id)arg2 managementViewType:(unsigned long long)arg3 withPresentingView:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notificationListComponent:(id)arg1 didPresentSectionHeaderView:(id)arg2 inForceTouchState:(_Bool)arg3;
- (void)notificationListComponent:(id)arg1 didPresentCoalescingControlsHandler:(id)arg2 inForceTouchState:(_Bool)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionSectionHeaderView:(id)arg2 toClearState:(_Bool)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionCoalescingControlsHandler:(id)arg2 toClearState:(_Bool)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionActionsForNotificationCell:(id)arg2 revealed:(_Bool)arg3;
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1;
- (void)notificationListComponent:(id)arg1 didRemoveNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didAddNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListComponentDidSignificantUserInteraction:(id)arg1;
- (_Bool)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;
- (void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
- (_Bool)notificationListComponentShouldHintForDefaultAction:(id)arg1;
- (void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (_Bool)notificationListComponent:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (double)insetHorizontalMarginForNotificationListComponent:(id)arg1;
- (id)containerViewForPreviewInteractionPresentedContentForNotificationListComponent:(id)arg1;
- (id)notificationListComponent:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)notificationListComponent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)legibilitySettingsForNotificationListComponent:(id)arg1;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)notifyContentObservers;
- (void)removeContentObserver:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (_Bool)interpretsViewAsContent:(id)arg1;
@property(readonly, nonatomic) NSString *backgroundGroupNameBase;
- (id)newCaptureOnlyMaterialViewController;
- (void)listViewControllerPresentedByUserAction;
@property(nonatomic) __weak UIPanGestureRecognizer *homeAffordancePanGesture;
@property(nonatomic, getter=isHomeAffordanceVisible) _Bool homeAffordanceVisible;
- (void)revealNotificationHistory:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isPresentingNotificationInLongLook) _Bool presentingNotificationInLongLook;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)dismissModalFullScreenAnimated:(_Bool)arg1;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
- (void)toggleMissedSectionActive:(_Bool)arg1 reason:(unsigned long long)arg2;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(_Bool)arg2;
- (void)migrateNotifications;
@property(readonly, nonatomic) _Bool hasVisibleContent;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)insertNotificationRequest:(id)arg1;
- (void)_didChangeDeepestUnambiguousResponder;
- (_Bool)_canShowWhileLocked;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

