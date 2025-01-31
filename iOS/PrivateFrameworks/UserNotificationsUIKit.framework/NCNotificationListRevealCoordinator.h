//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationListViewScrollDelegate-Protocol.h>

@class NSArray, NSString, UIImpactFeedbackGenerator;
@protocol NCNotificationListRevealCoordinatorDelegate;

@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate>
{
    _Bool _forceRevealed;
    _Bool _sectionRevealed;
    _Bool _sectionRevealedStateLocked;
    _Bool _shouldLimitTargetContentOffsetForNotificationListReveal;
    _Bool _hapticPrepared;
    int _revealState;
    id <NCNotificationListRevealCoordinatorDelegate> _delegate;
    double _revealPercentage;
    NSArray *_subLists;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property(nonatomic, getter=isHapticPrepared) _Bool hapticPrepared; // @synthesize hapticPrepared=_hapticPrepared;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) _Bool shouldLimitTargetContentOffsetForNotificationListReveal; // @synthesize shouldLimitTargetContentOffsetForNotificationListReveal=_shouldLimitTargetContentOffsetForNotificationListReveal;
@property(nonatomic, getter=isSectionRevealedStateLocked) _Bool sectionRevealedStateLocked; // @synthesize sectionRevealedStateLocked=_sectionRevealedStateLocked;
@property(nonatomic, getter=isSectionRevealed) _Bool sectionRevealed; // @synthesize sectionRevealed=_sectionRevealed;
@property(retain, nonatomic) NSArray *subLists; // @synthesize subLists=_subLists;
@property(nonatomic) double revealPercentage; // @synthesize revealPercentage=_revealPercentage;
@property(nonatomic) int revealState; // @synthesize revealState=_revealState;
@property(nonatomic, getter=isForceRevealed) _Bool forceRevealed; // @synthesize forceRevealed=_forceRevealed;
@property(nonatomic) __weak id <NCNotificationListRevealCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_performHaptic;
- (void)_releaseHaptic;
- (void)_prepareHaptic;
- (void)_performRevealForSubviewsIfNecessary;
- (id)_revealListView;
- (id)_topView;
- (double)_updateRevealPercentageForNotificationListView:(id)arg1;
- (_Bool)_isRevealed;
- (double)_settlingYPositionForReveal;
- (_Bool)_isRevealSectionVisibleForListView:(id)arg1;
- (_Bool)_revealSectionHasContent;
- (_Bool)_shouldAllowNotificationListReveal;
- (void)notificationListViewWillEndDragging:(id)arg1 withTargetContentOffset:(inout struct CGPoint *)arg2;
- (void)notificationListDidScroll:(id)arg1;
- (void)notificationListWillBeginDragging:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

