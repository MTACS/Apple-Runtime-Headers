//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import <ChatKit/CKComposeRecipientViewDelegate-Protocol.h>
#import <ChatKit/CKRecipientSearchListControllerDelegate-Protocol.h>
#import <ChatKit/CNAutocompleteGroupDetailViewControllerDelegate-Protocol.h>
#import <ChatKit/CNComposeRecipientTextViewDelegate-Protocol.h>
#import <ChatKit/CNContactPickerDelegate-Protocol.h>

@class CKComposeRecipientView, CKManualUpdater, CKPendingConversation, CKRecipientSearchListController, CNComposeRecipient, CNContactPickerViewController, CNContactStore, NSMutableDictionary, NSString, UILabel, UIScrollView, UIView;
@protocol CKRecipientSelectionControllerDelegate;

@interface CKRecipientSelectionController : CKViewController <CNComposeRecipientTextViewDelegate, CKComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate>
{
    double _keyboardHeightWithAccessoryView;
    CNContactStore *_contactStore;
    _Bool _peoplePickerHidden;
    _Bool _editable;
    _Bool _forceMMS;
    _Bool _isDisambiguating;
    _Bool _preventAtomization;
    _Bool _didShowOneTimeErrorAlert;
    _Bool _homogenizePreferredServiceForiMessage;
    _Bool _shouldSuppressSearchResultsTable;
    id <CKRecipientSelectionControllerDelegate> _delegate;
    CKPendingConversation *_conversation;
    CKComposeRecipientView *_toField;
    UIView *_toFieldContainerView;
    CKRecipientSearchListController *_searchListController;
    CDUnknownBlockType _gameCenterPickerBlock;
    UIScrollView *_toFieldScrollingView;
    UILabel *_toFieldPlaceholderLabel;
    CNContactPickerViewController *_contactPickerViewController;
    CNComposeRecipient *_recentContactForPresentedCNCard;
    CKManualUpdater *_addressBookNotificationUpdater;
    NSMutableDictionary *_recipientAvailibityTimers;
    NSMutableDictionary *_recipientAvailabilities;
}

@property(retain, nonatomic) NSMutableDictionary *recipientAvailabilities; // @synthesize recipientAvailabilities=_recipientAvailabilities;
@property(retain, nonatomic) NSMutableDictionary *recipientAvailibityTimers; // @synthesize recipientAvailibityTimers=_recipientAvailibityTimers;
@property(readonly, nonatomic) _Bool shouldSuppressSearchResultsTable; // @synthesize shouldSuppressSearchResultsTable=_shouldSuppressSearchResultsTable;
@property(readonly, nonatomic) _Bool homogenizePreferredServiceForiMessage; // @synthesize homogenizePreferredServiceForiMessage=_homogenizePreferredServiceForiMessage;
@property(nonatomic) _Bool didShowOneTimeErrorAlert; // @synthesize didShowOneTimeErrorAlert=_didShowOneTimeErrorAlert;
@property(nonatomic) _Bool preventAtomization; // @synthesize preventAtomization=_preventAtomization;
@property(retain, nonatomic) CKManualUpdater *addressBookNotificationUpdater; // @synthesize addressBookNotificationUpdater=_addressBookNotificationUpdater;
@property(nonatomic) _Bool isDisambiguating; // @synthesize isDisambiguating=_isDisambiguating;
@property(retain, nonatomic) CNComposeRecipient *recentContactForPresentedCNCard; // @synthesize recentContactForPresentedCNCard=_recentContactForPresentedCNCard;
@property(retain, nonatomic) CNContactPickerViewController *contactPickerViewController; // @synthesize contactPickerViewController=_contactPickerViewController;
@property(retain, nonatomic) UILabel *toFieldPlaceholderLabel; // @synthesize toFieldPlaceholderLabel=_toFieldPlaceholderLabel;
@property(retain, nonatomic) UIScrollView *toFieldScrollingView; // @synthesize toFieldScrollingView=_toFieldScrollingView;
@property(copy, nonatomic) CDUnknownBlockType gameCenterPickerBlock; // @synthesize gameCenterPickerBlock=_gameCenterPickerBlock;
@property(nonatomic) _Bool forceMMS; // @synthesize forceMMS=_forceMMS;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isPeoplePickerHidden) _Bool peoplePickerHidden; // @synthesize peoplePickerHidden=_peoplePickerHidden;
@property(retain, nonatomic) CKRecipientSearchListController *searchListController; // @synthesize searchListController=_searchListController;
@property(readonly, nonatomic) UIView *toFieldContainerView; // @synthesize toFieldContainerView=_toFieldContainerView;
@property(retain, nonatomic) CKComposeRecipientView *toField; // @synthesize toField=_toField;
@property(retain, nonatomic) CKPendingConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak id <CKRecipientSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)scrollSearchListControllerToTopContentOffset;
- (void)scrollSearchListControllerToTop:(_Bool)arg1;
- (void)_updateAddressBookProperties;
- (void)_updateSearchResultsTable;
- (struct UIEdgeInsets)_navigationBarInsets;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_hideSearchField;
- (void)_showSearchField;
- (void)_updateShowingSearch;
- (void)_resetSearchResultsInsets;
- (_Bool)_isToFieldPushedUp;
- (void)_adjustToFieldPositionIfNecessary;
- (void)_updateRecipientViewLayouts;
- (void)_removeRecent;
- (void)_showDetailsForRecipient:(id)arg1 canDelete:(_Bool)arg2;
- (void)_showDetailsForGroup:(id)arg1;
- (id)_alternateiMessagableAddressesForRecipient:(id)arg1;
- (id)_alternateAddressesForRecipient:(id)arg1;
- (void)_showActionSheetForRecipient:(id)arg1 animated:(_Bool)arg2;
- (void)_refreshActionSheet;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(BOOL)arg3;
- (id)_recipientCausingTooManyRecipientsError;
- (_Bool)hasTimedOutRecipients;
- (void)_handleRecipientAvailabilityTimeout:(id)arg1;
- (void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (BOOL)_availibilityForRecipient:(id)arg1 onService:(id)arg2;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;
- (void)_handleAddressBookPartialChangedNotification:(id)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (id)_toFieldCollapsedTextColor;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (void)_updateToFieldRecipientsData;
- (void)_updateToField;
- (id)_canonicalRecipientAddresses;
- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double collapsedHeight;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (_Bool)hasPendingiMessageRecipients;
- (_Bool)hasUnreachableEmergencyRecipient;
- (_Bool)hasFailediMessageRecipients;
- (_Bool)finishedComposingRecipients;
- (void)invalidateOutstandingIDStatusRequests;
@property(nonatomic, getter=isSearchResultsHidden) _Bool searchResultsHidden;
@property(readonly, nonatomic) _Bool toFieldIsFirstResponder;
- (void)addRecipients:(id)arg1;
- (id)recipients;
- (void)reset;
- (_Bool)isGameCenterRecipient:(id)arg1;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)_dismissPeoplePicker;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
@property(readonly, nonatomic) CNContactStore *contactStore;
- (void)autocompleteGroupDetailViewControllerDidCancel:(id)arg1;
- (void)autocompleteGroupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)autocompleteGroupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (long long)searchListController:(id)arg1 idStatusForIDSID:(id)arg2;
- (void)searchListController:(id)arg1 destinationsUpdated:(id)arg2;
- (void)searchListControllerDidScroll:(id)arg1;
- (void)searchListControllerDidFinishSearch:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (_Bool)hasIDSResultsForAllRecipients:(id)arg1;
- (id)preferredRecipientForRecipients:(id)arg1 forServiceType:(BOOL)arg2;
- (id)preferredRecipientForNewContact:(id)arg1;
- (id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)recipientIsDuetSuggestion:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)chatForIMHandle:(id)arg1;
- (id)handleForRecipientNormalizedAddress:(id)arg1;
- (id)preferredRecipientForExistingConversationOfRecipients:(id)arg1;
- (id)preferredColorTypeForExistingConversation:(id)arg1;
- (void)colorTypeForRecipient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasEmailRecipientsInAddresses:(id)arg1;
- (_Bool)lastSentMessageWasNotDeliveredForConversation:(id)arg1;
- (id)conversationForAddresses:(id)arg1;
- (BOOL)serviceColorForRecipientAddresses:(id)arg1;
- (id)expandedRecipientsForGroupRecipient:(id)arg1;
- (BOOL)serviceTypeForRecipient:(id)arg1;
- (id)preferredRecipientForPendingUnifiedContact:(id)arg1;
- (void)handlePendingRecipient:(id)arg1;
- (void)_handleIDSResultsWhenSearchTableIsHidden:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct UIEdgeInsets)layoutMarginsForComposeRecipientView:(id)arg1;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)sendUpdateRecipientForAtom:(id)arg1;
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (_Bool)_systemUnderLock;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForContact:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)_handleRecipientViewChanged:(id)arg1;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionControllerDidChange;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConversation:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

