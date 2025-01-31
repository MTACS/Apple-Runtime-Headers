//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoPassKitUI/NPKCollectionViewDataSource-Protocol.h>
#import <NanoPassKitUI/NPKCollectionViewDelegate-Protocol.h>
#import <NanoPassKitUI/NPKPassActionControllerProtocol-Protocol.h>
#import <NanoPassKitUI/NPKPassCollectionViewCellDelegate-Protocol.h>
#import <NanoPassKitUI/NPKPaymentStatusViewAnimationCoordinatorDelegate-Protocol.h>
#import <NanoPassKitUI/NPKTransitPassesInfoManagerDelegate-Protocol.h>
#import <NanoPassKitUI/NPKVASPassContactlessInterfaceManagerDelegate-Protocol.h>
#import <NanoPassKitUI/PKFieldDetectorObserver-Protocol.h>
#import <NanoPassKitUI/PKGroupDelegate-Protocol.h>
#import <NanoPassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <NanoPassKitUI/PUICSnapshotDelegate-Protocol.h>
#import <NanoPassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NPKActivatingUIAssertion, NPKCollectionView, NPKPassDetailTableViewController, NPKPassGroupPagingBar, NPKPassListLayout, NPKPaymentReadyView, NPKPaymentStatusView, NPKPaymentStatusViewAnimationCoordinator, NPKPaymentThreePartTopView, NPKScrollOverFixedContentFadeAndScaleAnimationCoordinator, NPKSinglePassLayout, NPKSynchronizedAnimationCoordinator, NPKTransientPassAssertion, NPKTransitPassesInfoManager, NPKTransitionalSinglePassLayout, NPKVASPassContactlessInterfaceManager, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, PKFieldDetector, PKGroupsController, PKPass, PUICContentUnavailableView, UIImageView, UILabel, UIView;

@interface NPKPassListViewController : UIViewController <NPKCollectionViewDataSource, UICollectionViewDelegateFlowLayout, NPKPassCollectionViewCellDelegate, NPKCollectionViewDelegate, PKFieldDetectorObserver, PKGroupsControllerDelegate, PKGroupDelegate, NPKVASPassContactlessInterfaceManagerDelegate, NPKPaymentStatusViewAnimationCoordinatorDelegate, NPKTransitPassesInfoManagerDelegate, PUICSnapshotDelegate, NPKPassActionControllerProtocol>
{
    NSArray *_currentPasses;
    NSArray *_currentPaymentPasses;
    NSArray *_currentStandardPasses;
    NSMutableDictionary *_currentTransitPassProperties;
    NSNumber *_currentHelperViewAllowed;
    NSNumber *_currentPaymentSupportedInRegion;
    _Bool _transitioningLayout;
    _Bool _paymentStatusViewAnimating;
    _Bool _paymentStatusViewNeedsUpdate;
    _Bool _paymentStatusViewShouldBeVisible;
    _Bool _tableViewShouldBeVisible;
    _Bool _isDisplayingBarcode;
    _Bool _passesHaveLoaded;
    _Bool _passesHaveReloaded;
    _Bool _useTransitionalContentOffset;
    _Bool _shouldDelayReleaseScreenOnAssertion;
    _Bool _statusBarIsShown;
    NPKActivatingUIAssertion *_activatingUIAssertion;
    NSArray *_paymentPassDescriptionsForDisplay;
    NSArray *_nonPaymentPassDescriptionsForDisplay;
    NPKPassListLayout *_passCollectionViewLayout;
    NPKTransitionalSinglePassLayout *_transitionalLayout;
    NPKSinglePassLayout *_singlePassLayout;
    CDUnknownBlockType _postTransitionWork;
    NPKCollectionView *_passCollectionView;
    PUICContentUnavailableView *_contentUnavailableView;
    NPKPaymentStatusView *_paymentStatusView;
    PKPass *_selectedUnavailableAccessPass;
    UILabel *_accessPassStatusLabel;
    NPKPassDetailTableViewController *_passDetailTableViewController;
    NPKScrollOverFixedContentFadeAndScaleAnimationCoordinator *_passDetailTableViewAnimationCoordinator;
    NSString *_currentPaymentPassUniqueID;
    PKFieldDetector *_fieldDetector;
    NPKTransientPassAssertion *_transientPassAssertion;
    NPKVASPassContactlessInterfaceManager *_VASPassContactlessInterfaceManager;
    NSMutableArray *_workToPerformWhenPassesHaveLoaded;
    NSMutableArray *_workToPerformWhenPassesHaveReloaded;
    struct CGPoint *_originalCollectionViewContentOffset;
    NPKPassGroupPagingBar *_groupPagingBar;
    PKGroupsController *_groupsController;
    NPKTransitPassesInfoManager *_transitPassesInfoManager;
    PKPass *_selectedVASPass;
    UIView *_statusViewForVAS;
    NPKPaymentReadyView *_readyViewForVAS;
    NPKPaymentThreePartTopView *_doneViewForVAS;
    UIImageView *_checkmarkViewForVAS;
    UILabel *_failedTransactionLabelForVAS;
    NPKPaymentStatusViewAnimationCoordinator *_animationCoordinatorForVASStatusView;
    NPKSynchronizedAnimationCoordinator *_animationCoordinatorFORVASReadyView;
    struct CGPoint _transitionalContentOffset;
    struct CGRect _frameForVASStatusView;
}

@property(nonatomic) _Bool statusBarIsShown; // @synthesize statusBarIsShown=_statusBarIsShown;
@property(retain, nonatomic) NPKSynchronizedAnimationCoordinator *animationCoordinatorFORVASReadyView; // @synthesize animationCoordinatorFORVASReadyView=_animationCoordinatorFORVASReadyView;
@property(retain, nonatomic) NPKPaymentStatusViewAnimationCoordinator *animationCoordinatorForVASStatusView; // @synthesize animationCoordinatorForVASStatusView=_animationCoordinatorForVASStatusView;
@property(nonatomic) _Bool shouldDelayReleaseScreenOnAssertion; // @synthesize shouldDelayReleaseScreenOnAssertion=_shouldDelayReleaseScreenOnAssertion;
@property(retain, nonatomic) UILabel *failedTransactionLabelForVAS; // @synthesize failedTransactionLabelForVAS=_failedTransactionLabelForVAS;
@property(retain, nonatomic) UIImageView *checkmarkViewForVAS; // @synthesize checkmarkViewForVAS=_checkmarkViewForVAS;
@property(retain, nonatomic) NPKPaymentThreePartTopView *doneViewForVAS; // @synthesize doneViewForVAS=_doneViewForVAS;
@property(retain, nonatomic) NPKPaymentReadyView *readyViewForVAS; // @synthesize readyViewForVAS=_readyViewForVAS;
@property(nonatomic) struct CGRect frameForVASStatusView; // @synthesize frameForVASStatusView=_frameForVASStatusView;
@property(retain, nonatomic) UIView *statusViewForVAS; // @synthesize statusViewForVAS=_statusViewForVAS;
@property(retain, nonatomic) PKPass *selectedVASPass; // @synthesize selectedVASPass=_selectedVASPass;
@property(retain, nonatomic) NPKTransitPassesInfoManager *transitPassesInfoManager; // @synthesize transitPassesInfoManager=_transitPassesInfoManager;
@property(retain, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property(retain, nonatomic) NPKPassGroupPagingBar *groupPagingBar; // @synthesize groupPagingBar=_groupPagingBar;
@property(nonatomic) struct CGPoint transitionalContentOffset; // @synthesize transitionalContentOffset=_transitionalContentOffset;
@property(nonatomic) _Bool useTransitionalContentOffset; // @synthesize useTransitionalContentOffset=_useTransitionalContentOffset;
@property(nonatomic) struct CGPoint *originalCollectionViewContentOffset; // @synthesize originalCollectionViewContentOffset=_originalCollectionViewContentOffset;
@property(retain, nonatomic) NSMutableArray *workToPerformWhenPassesHaveReloaded; // @synthesize workToPerformWhenPassesHaveReloaded=_workToPerformWhenPassesHaveReloaded;
@property(nonatomic) _Bool passesHaveReloaded; // @synthesize passesHaveReloaded=_passesHaveReloaded;
@property(retain, nonatomic) NSMutableArray *workToPerformWhenPassesHaveLoaded; // @synthesize workToPerformWhenPassesHaveLoaded=_workToPerformWhenPassesHaveLoaded;
@property(nonatomic) _Bool passesHaveLoaded; // @synthesize passesHaveLoaded=_passesHaveLoaded;
@property(readonly, nonatomic) NPKVASPassContactlessInterfaceManager *VASPassContactlessInterfaceManager; // @synthesize VASPassContactlessInterfaceManager=_VASPassContactlessInterfaceManager;
@property(retain, nonatomic) NPKTransientPassAssertion *transientPassAssertion; // @synthesize transientPassAssertion=_transientPassAssertion;
@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(nonatomic) _Bool isDisplayingBarcode; // @synthesize isDisplayingBarcode=_isDisplayingBarcode;
@property(retain, nonatomic) NSString *currentPaymentPassUniqueID; // @synthesize currentPaymentPassUniqueID=_currentPaymentPassUniqueID;
@property(nonatomic) _Bool tableViewShouldBeVisible; // @synthesize tableViewShouldBeVisible=_tableViewShouldBeVisible;
@property(retain, nonatomic) NPKScrollOverFixedContentFadeAndScaleAnimationCoordinator *passDetailTableViewAnimationCoordinator; // @synthesize passDetailTableViewAnimationCoordinator=_passDetailTableViewAnimationCoordinator;
@property(retain, nonatomic) NPKPassDetailTableViewController *passDetailTableViewController; // @synthesize passDetailTableViewController=_passDetailTableViewController;
@property(retain, nonatomic) UILabel *accessPassStatusLabel; // @synthesize accessPassStatusLabel=_accessPassStatusLabel;
@property(retain, nonatomic) PKPass *selectedUnavailableAccessPass; // @synthesize selectedUnavailableAccessPass=_selectedUnavailableAccessPass;
@property(nonatomic) _Bool paymentStatusViewShouldBeVisible; // @synthesize paymentStatusViewShouldBeVisible=_paymentStatusViewShouldBeVisible;
@property(nonatomic) _Bool paymentStatusViewNeedsUpdate; // @synthesize paymentStatusViewNeedsUpdate=_paymentStatusViewNeedsUpdate;
@property(nonatomic) _Bool paymentStatusViewAnimating; // @synthesize paymentStatusViewAnimating=_paymentStatusViewAnimating;
@property(retain, nonatomic) NPKPaymentStatusView *paymentStatusView; // @synthesize paymentStatusView=_paymentStatusView;
@property(retain, nonatomic) PUICContentUnavailableView *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(retain, nonatomic) NPKCollectionView *passCollectionView; // @synthesize passCollectionView=_passCollectionView;
@property(copy, nonatomic) CDUnknownBlockType postTransitionWork; // @synthesize postTransitionWork=_postTransitionWork;
@property(nonatomic) _Bool transitioningLayout; // @synthesize transitioningLayout=_transitioningLayout;
@property(retain, nonatomic) NPKSinglePassLayout *singlePassLayout; // @synthesize singlePassLayout=_singlePassLayout;
@property(retain, nonatomic) NPKTransitionalSinglePassLayout *transitionalLayout; // @synthesize transitionalLayout=_transitionalLayout;
@property(retain, nonatomic) NPKPassListLayout *passCollectionViewLayout; // @synthesize passCollectionViewLayout=_passCollectionViewLayout;
@property(readonly) NSArray *nonPaymentPassDescriptionsForDisplay; // @synthesize nonPaymentPassDescriptionsForDisplay=_nonPaymentPassDescriptionsForDisplay;
@property(readonly) NSArray *paymentPassDescriptionsForDisplay; // @synthesize paymentPassDescriptionsForDisplay=_paymentPassDescriptionsForDisplay;
@property(retain, nonatomic) NPKActivatingUIAssertion *activatingUIAssertion; // @synthesize activatingUIAssertion=_activatingUIAssertion;
- (void).cxx_destruct;
- (void)transitPassesInfoManager:(id)arg1 didUpdatePassInfo:(id)arg2 withPassUniqueID:(id)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)animationCoordinatorDidAddOrRemoveViews:(id)arg1;
- (void)animationCoordinator:(id)arg1 didStartHidingTopView:(id)arg2 bottomView:(id)arg3;
- (void)animationCoordinator:(id)arg1 didFinishPresentingTopView:(id)arg2 bottomView:(id)arg3;
- (struct CGRect)animationCoordinator:(id)arg1 frameForBottomViewWhenOnscreen:(_Bool)arg2;
- (struct CGRect)animationCoordinator:(id)arg1 frameForTopViewWhenOnscreen:(_Bool)arg2;
- (_Bool)VASPassContactlessInterfaceManager:(id)arg1 shouldResetSessionForPass:(id)arg2;
- (void)VASPassContactlessInterfaceManager:(id)arg1 didFinishTransactionWithPass:(id)arg2 error:(id)arg3;
- (void)VASPassContactlessInterfaceManager:(id)arg1 didStartTransactionWithPass:(id)arg2;
- (void)VASPassContactlessInterfaceManager:(id)arg1 didActivatePass:(id)arg2 error:(id)arg3;
- (void)_disablePaymentSession;
- (void)_enablePaymentSessionWithPass:(id)arg1;
- (void)_disableFieldDetector;
- (void)_enableFieldDetector;
@property(readonly, nonatomic) NSString *noContentMessage;
@property(readonly, nonatomic) NSString *noContentTitle;
@property(readonly, nonatomic) _Bool listViewAllowed;
- (float)initialYOffset;
- (id)paymentPassesForDisplay;
- (id)nonPaymentPassesForDisplay;
- (id)_passesForDisplayWithFilter:(CDUnknownBlockType)arg1;
- (void)prepareForSnapshotWithReason:(unsigned int)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateFirstResponder;
- (_Bool)_shouldInvertPresentationForCardAtIndexPath:(id)arg1;
- (_Bool)_showApplePayHelperCard;
- (void)_setupPaymentStatusViewFrame;
- (void)_setAccessPassStatusLabelFrame;
- (struct CGRect)_paymentStatusViewFrame;
- (void)setShowGroupPagingBar:(_Bool)arg1 numberOfItemsInGroup:(unsigned int)arg2 selectedIndexInGroup:(unsigned int)arg3;
- (id)_allIndexPathsInGroupForPassWithIndexPath:(id)arg1;
- (void)setPaymentStatusViewVisible:(_Bool)arg1 tableViewVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)performWorkWhenPassesHaveReloaded:(CDUnknownBlockType)arg1;
- (void)performWorkWhenPassesHaveLoaded:(CDUnknownBlockType)arg1;
- (void)reloadContentWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isPassAvailableAtIndexPath:(id)arg1;
- (id)_passForIndexPath:(id)arg1;
- (id)_singleVisibleCollectionViewCell;
- (id)_passForSingleVisibleCell;
- (void)_paymentPassNoLongerSelectedForCell:(id)arg1;
- (void)_paymentPassSelectedForCell:(id)arg1;
- (void)_individualPassCellWasSelected:(id)arg1;
- (void)_individualPassCellWillBeSelected:(id)arg1;
- (float)_statusViewHeightWithPass:(id)arg1;
- (float)_heightForPassStatusView;
- (void)_checkForSelectedVASPass:(id)arg1;
- (id)_unavailableAccessPassStringForPass:(id)arg1;
- (void)_checkForUnavailableAccessPathAtIndex:(id)arg1;
- (void)_collectionView:(id)arg1 tappedIndexPath:(id)arg2 animated:(_Bool)arg3 transitionType:(unsigned int)arg4;
- (void)_handleServiceModeRequestChanged:(id)arg1;
- (void)_handleWillEnterForeground:(id)arg1;
- (void)_handleDidEnterBackground:(id)arg1;
- (void)_handleBecameActive:(id)arg1;
- (void)_handleResignedActive:(id)arg1;
- (void)_handlePassesChanged:(id)arg1;
- (void)_handleServiceModeRequestCancelled;
- (void)_handleDefaultCardChanged;
- (void)_handleBarcodeModeChanged:(id)arg1;
- (void)_handleLocaleChanged:(id)arg1;
- (void)_updateContentView;
- (void)closeButtonTapped;
- (void)setShowingCloseButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_auditCellZIndexes;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)npkCollectionViewShouldAdjustVerticalInsets;
- (void)npkCollectionViewShouldOverrideSetContentOffset:(struct CGPoint *)arg1;
- (void)npkCollectionViewDidAddSubview:(id)arg1;
- (_Bool)canProvideActionController;
- (id)actionControllerPresentationRequested:(id)arg1;
- (id)actionController;
- (void)npkPassCollectionViewCell:(id)arg1 didDismissAccessoryViewController:(id)arg2;
- (void)npkPassCollectionViewCellDidDisplayCell:(id)arg1;
- (void)npkPassCollectionViewCellDidReceiveNewZIndex:(id)arg1;
- (void)npkPassCollectionViewCellDidChangeSuperview:(id)arg1;
- (void)npkPassCollectionViewCellBeganDragging:(id)arg1;
- (void)npkPassCollectionViewBarcodeDidExitFullscreen:(id)arg1;
- (void)npkPassCollectionViewBarcodeDidEnterFullscreen:(id)arg1;
- (void)npkPassCollectionViewCellTapped:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)npkCollectionViewIsShowingHelperCell;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)_removeSavedTransitPropertiesForPassWithUniqueID:(id)arg1;
- (void)_saveCurrentTransitProperties:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)currentTransitPropertiesForPass:(id)arg1;
- (_Bool)currentPaymentSupportedInRegion;
@property(readonly, nonatomic) _Bool currentHelperViewAllowed;
@property(readonly, nonatomic) NSArray *currentStandardPasses;
@property(readonly, nonatomic) NSArray *currentPaymentPasses;
@property(readonly, nonatomic) NSArray *currentPasses;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (void)selectCardWithUniqueID:(id)arg1 showDiff:(_Bool)arg2 showServiceMode:(_Bool)arg3 actionType:(unsigned int)arg4 animated:(_Bool)arg5;
- (void)selectCardWithUniqueID:(id)arg1 showDiff:(_Bool)arg2 showServiceMode:(_Bool)arg3 animated:(_Bool)arg4;
- (void)selectCardWithUniqueID:(id)arg1 showDiff:(_Bool)arg2 animated:(_Bool)arg3;
- (void)selectCardWithUniqueID:(id)arg1 actionType:(unsigned int)arg2 animated:(_Bool)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithGroupsController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 groupsController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

