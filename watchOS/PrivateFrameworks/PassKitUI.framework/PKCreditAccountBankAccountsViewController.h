//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, PKAccount, PKPaymentWebService;

@interface PKCreditAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate>
{
    PKAccount *_account;
    PKPaymentWebService *_paymentWebService;
    unsigned int _accountFeatureIdentifier;
    NSMutableArray *_fundingSources;
    int _context;
    NSMutableArray *_deletingFundingSources;
}

- (void).cxx_destruct;
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)_configureBankAccountCell:(id)arg1 withFundingSource:(id)arg2;
- (id)_broadwayBankAccountCellForRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (_Bool)shouldMapSection:(unsigned int)arg1;
- (id)_addBankAccountInformationViewController;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didSelectDeleteBroadwayBankAccountAtIndexPath:(id)arg1;
- (_Bool)_isBankAccountIndexPath:(id)arg1;
- (void)_updateEditButtonIfNecessary;
- (void)_editButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 paymentWebService:(id)arg2 context:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

