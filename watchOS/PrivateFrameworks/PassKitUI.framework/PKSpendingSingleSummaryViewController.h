//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKSpendingSummaryFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKSpendingSummaryResponder-Protocol.h>
#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSString, PKAccount, PKAccountService, PKAccountServiceAccountResolutionController, PKDashboardFooterTextView, PKDashboardTitleHeaderView, PKPaymentPass, PKSpendingSummary, PKSpendingSummaryFooterView, PKSpendingSummaryLayout, PKSpendingSummaryPresenter, PKTransactionGroupItemPresenter, UIGestureRecognizer;
@protocol PKSpendingSingleSummaryViewControllerDelegate;

@interface PKSpendingSingleSummaryViewController : UICollectionViewController <PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKSpendingSummaryFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKSpendingSummaryResponder>
{
    PKPaymentPass *_paymentPass;
    PKAccount *_account;
    PKAccountService *_accountService;
    unsigned int _feature;
    PKSpendingSummaryFooterView *_currentFooter;
    _Bool _footerNeedsConfiguration;
    PKSpendingSummary *_summary;
    unsigned int _summaryType;
    NSDate *_startDate;
    NSDate *_endDate;
    _Bool _hasTransactions;
    NSCalendar *_currentCalendar;
    NSString *_navTitle;
    float _transitionAlpha;
    NSArray *_currentMonthTransactions;
    NSArray *_upcomingScheduledPayments;
    NSDateFormatter *_formatterMonth;
    NSDateFormatter *_formatterFullMonth;
    NSDateFormatter *_formatterMonthNoYear;
    NSDateFormatter *_formatterDay;
    NSDateFormatter *_formatterShortMonthNoYear;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKSpendingSummaryPresenter *_summaryPresenter;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKDashboardFooterTextView *_sampleFooterView;
    PKAccountServiceAccountResolutionController *_resolutionController;
    PKSpendingSummaryLayout *_layout;
    _Bool _isLowEndDevice;
    _Bool _visible;
    id <PKSpendingSingleSummaryViewControllerDelegate> _scrollingDelegate;
    UIGestureRecognizer *_gestureRecognizerRequiredToFail;
    int _contentInsetAdjustmentBehavior;
    unsigned int _selectionType;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) unsigned int selectionType; // @synthesize selectionType=_selectionType;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) int contentInsetAdjustmentBehavior; // @synthesize contentInsetAdjustmentBehavior=_contentInsetAdjustmentBehavior;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail; // @synthesize gestureRecognizerRequiredToFail=_gestureRecognizerRequiredToFail;
@property(readonly, nonatomic) PKSpendingSummary *summary; // @synthesize summary=_summary;
@property(nonatomic) __weak id <PKSpendingSingleSummaryViewControllerDelegate> scrollingDelegate; // @synthesize scrollingDelegate=_scrollingDelegate;
- (void).cxx_destruct;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)buttonTappedInFooterView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)footer;
- (id)navigationTitle;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_accountsChanged:(id)arg1;
- (void)_configureFooterView:(id)arg1 inSection:(unsigned int)arg2;
- (_Bool)_hasFooterForSection:(unsigned int)arg1;
- (void)_configureHeaderView:(id)arg1 inSection:(unsigned int)arg2;
- (_Bool)_hasHeaderForSection:(unsigned int)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)_applyMaskToCell:(id)arg1 firstInSection:(_Bool)arg2 lastInSection:(_Bool)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)indexPathForSummary;
- (unsigned int)_aggregateCellAtIndex:(unsigned int)arg1;
- (void)_configureFooter;
- (void)setSummary:(id)arg1 swap:(_Bool)arg2;
- (void)setAlphaForTransition:(float)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 transactionGroupPresenter:(id)arg3 summaryPresenter:(id)arg4 currentMonthTransactions:(id)arg5 upcomingScheduledPayments:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

