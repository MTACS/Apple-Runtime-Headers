//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKRecipientSelectionController.h>

#import <ChatKit/CKRecipientSelectionControllerDelegate-Protocol.h>

@class NSString, UIBarButtonItem;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate>
{
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
- (void).cxx_destruct;
- (void)_frecencySearch;
- (void)_updateNavigationButton;
- (double)topInsetForNavBar;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1;
- (_Bool)alwaysShowSearchResultsTable;
- (_Bool)shouldSuppressSearchResultsTable;
- (_Bool)homogenizePreferredServiceForiMessage;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionControllerDidChange;
- (_Bool)shouldAutorotate;
- (void)viewDidAppearDeferredSetup;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

