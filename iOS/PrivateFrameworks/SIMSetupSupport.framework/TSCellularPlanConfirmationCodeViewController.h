//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBBaseWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UITextFieldDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, TSCellularPlanTableViewCell, UIBarButtonItem, UILabel, UITableView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanConfirmationCodeViewController : OBBaseWelcomeController <UITextFieldDelegate, TSSetupFlowItem>
{
    TSCellularPlanTableViewCell *_confirmationCodeCell;
    NSString *_fauxCardData;
    NSString *_confirmationCode;
    long long _userConsentResponse;
    _Bool _isMidOperation;
    UIBarButtonItem *_nextButton;
    id <TSSIMSetupFlowDelegate> _delegate;
    UILabel *_confirmationCodeTitleLabel;
    UITableView *_infoTableView;
    NSLayoutConstraint *_infoTableViewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *infoTableViewHeightConstraint; // @synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint;
@property(nonatomic) __weak UITableView *infoTableView; // @synthesize infoTableView=_infoTableView;
@property(nonatomic) __weak UILabel *confirmationCodeTitleLabel; // @synthesize confirmationCodeTitleLabel=_confirmationCodeTitleLabel;
@property(readonly, nonatomic) NSString *confirmationCode; // @synthesize confirmationCode=_confirmationCode;
@property(nonatomic) __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canBeShownFromSuspendedState;
- (void)confirm:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCardData:(id)arg1;
- (id)initAsMidOperation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

