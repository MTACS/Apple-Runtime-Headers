//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKScrollViewController.h>

#import <ChatKit/CKBusinessInfoViewDelegate-Protocol.h>
#import <ChatKit/CKDetailsAddGroupNameViewDelegate-Protocol.h>
#import <ChatKit/CKDetailsContactsManagerDelegate-Protocol.h>
#import <ChatKit/CKDetailsContactsTableViewCellDelegate-Protocol.h>
#import <ChatKit/CKDetailsDownloadAttachmentsHeaderFooterViewDelegate-Protocol.h>
#import <ChatKit/CKDetailsSearchControllerDelegate-Protocol.h>
#import <ChatKit/CNAvatarViewDelegate-Protocol.h>
#import <ChatKit/FMFMapViewControllerDelegate-Protocol.h>
#import <ChatKit/UIAlertViewDelegate-Protocol.h>
#import <ChatKit/UINavigationControllerDelegate-Protocol.h>
#import <ChatKit/UITableViewDataSource-Protocol.h>
#import <ChatKit/UITableViewDelegate-Protocol.h>
#import <ChatKit/UITextViewDelegate-Protocol.h>
#import <ChatKit/UIViewControllerPreviewingDelegate-Protocol.h>

@class CKAvatarPickerViewController, CKBusinessInfoView, CKConversation, CKDetailsAddGroupNameView, CKDetailsContactsManager, CKDetailsDownloadAttachmentsHeaderFooterView, CKDetailsGroupNameCell, CKDetailsLocationShareCell, CKDetailsMapViewCell, CKDetailsSearchViewController, CKDetailsTableView, CKEntity, CKGroupRecipientSelectionController, CKTranscriptDetailsResizableCell, CNContactStore, FMFMapViewController, NSString, NSTimer, UITextView, UIVisualEffectView;
@protocol CKDetailsControllerDelegate;

@interface CKDetailsController : CKScrollViewController <FMFMapViewControllerDelegate, UIViewControllerPreviewingDelegate, CKDetailsAddGroupNameViewDelegate, UITextViewDelegate, UIAlertViewDelegate, CKDetailsContactsManagerDelegate, CNAvatarViewDelegate, CKDetailsContactsTableViewCellDelegate, CKBusinessInfoViewDelegate, CKDetailsDownloadAttachmentsHeaderFooterViewDelegate, CKDetailsSearchControllerDelegate, UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _fmfEnabled;
    _Bool _fmfRestricted;
    _Bool _isContactsSectionCollapsed;
    _Bool _didPerformPurgedAttachmentsCheck;
    _Bool _isDisplayingPhotos;
    id <CKDetailsControllerDelegate> _detailsControllerDelegate;
    CKConversation *_conversation;
    CKDetailsTableView *_tableView;
    UIVisualEffectView *_visualEffectView;
    CKDetailsGroupNameCell *_groupNameCell;
    CKDetailsAddGroupNameView *_groupNameView;
    CKDetailsMapViewCell *_mapViewCell;
    CKDetailsLocationShareCell *_locationShareCell;
    CKTranscriptDetailsResizableCell *_locationSendCell;
    CKTranscriptDetailsResizableCell *_locationStartShareCell;
    CKDetailsSearchViewController *_searchViewController;
    CKAvatarPickerViewController *_avatarPickerViewController;
    CKGroupRecipientSelectionController *_addRecipientsController;
    CKDetailsContactsManager *_contactsManager;
    FMFMapViewController *_mapViewController;
    UITextView *_locationSharingTextView;
    CKDetailsDownloadAttachmentsHeaderFooterView *_downloadAttachmentsFooterView;
    CKBusinessInfoView *_businessInfoView;
    NSTimer *_fmfUpdateTimer;
    CNContactStore *_suggestionsEnabledContactStore;
    CKEntity *_presentedEntity;
    double _contentOffsetYShiftAfterKeyboardNotification;
    id _selfWeakWrapper;
    unsigned long long _undownloadedPhotoAttachmentCount;
    unsigned long long _downloadButtonState;
}

@property(nonatomic) _Bool isDisplayingPhotos; // @synthesize isDisplayingPhotos=_isDisplayingPhotos;
@property(nonatomic) unsigned long long downloadButtonState; // @synthesize downloadButtonState=_downloadButtonState;
@property(nonatomic) unsigned long long undownloadedPhotoAttachmentCount; // @synthesize undownloadedPhotoAttachmentCount=_undownloadedPhotoAttachmentCount;
@property(nonatomic) _Bool didPerformPurgedAttachmentsCheck; // @synthesize didPerformPurgedAttachmentsCheck=_didPerformPurgedAttachmentsCheck;
@property(retain, nonatomic) id selfWeakWrapper; // @synthesize selfWeakWrapper=_selfWeakWrapper;
@property(nonatomic) double contentOffsetYShiftAfterKeyboardNotification; // @synthesize contentOffsetYShiftAfterKeyboardNotification=_contentOffsetYShiftAfterKeyboardNotification;
@property(nonatomic) _Bool isContactsSectionCollapsed; // @synthesize isContactsSectionCollapsed=_isContactsSectionCollapsed;
@property(retain, nonatomic) CKEntity *presentedEntity; // @synthesize presentedEntity=_presentedEntity;
@property(retain, nonatomic) CNContactStore *suggestionsEnabledContactStore; // @synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore;
@property(retain, nonatomic) NSTimer *fmfUpdateTimer; // @synthesize fmfUpdateTimer=_fmfUpdateTimer;
@property(retain, nonatomic) CKBusinessInfoView *businessInfoView; // @synthesize businessInfoView=_businessInfoView;
@property(retain, nonatomic) CKDetailsDownloadAttachmentsHeaderFooterView *downloadAttachmentsFooterView; // @synthesize downloadAttachmentsFooterView=_downloadAttachmentsFooterView;
@property(retain, nonatomic) UITextView *locationSharingTextView; // @synthesize locationSharingTextView=_locationSharingTextView;
@property(retain, nonatomic) FMFMapViewController *mapViewController; // @synthesize mapViewController=_mapViewController;
@property(nonatomic) _Bool fmfRestricted; // @synthesize fmfRestricted=_fmfRestricted;
@property(nonatomic) _Bool fmfEnabled; // @synthesize fmfEnabled=_fmfEnabled;
@property(retain, nonatomic) CKDetailsContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property(retain, nonatomic) CKGroupRecipientSelectionController *addRecipientsController; // @synthesize addRecipientsController=_addRecipientsController;
@property(retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // @synthesize avatarPickerViewController=_avatarPickerViewController;
@property(retain, nonatomic) CKDetailsSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) CKTranscriptDetailsResizableCell *locationStartShareCell; // @synthesize locationStartShareCell=_locationStartShareCell;
@property(retain, nonatomic) CKTranscriptDetailsResizableCell *locationSendCell; // @synthesize locationSendCell=_locationSendCell;
@property(retain, nonatomic) CKDetailsLocationShareCell *locationShareCell; // @synthesize locationShareCell=_locationShareCell;
@property(retain, nonatomic) CKDetailsMapViewCell *mapViewCell; // @synthesize mapViewCell=_mapViewCell;
@property(retain, nonatomic) CKDetailsAddGroupNameView *groupNameView; // @synthesize groupNameView=_groupNameView;
@property(retain, nonatomic) CKDetailsGroupNameCell *groupNameCell; // @synthesize groupNameCell=_groupNameCell;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) CKDetailsTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak id <CKDetailsControllerDelegate> detailsControllerDelegate; // @synthesize detailsControllerDelegate=_detailsControllerDelegate;
- (void).cxx_destruct;
- (void)_batchDownloadNotificationFired:(id)arg1;
- (void)_updateDownloadButtonStateIfNeeded;
@property(readonly, nonatomic) _Bool shouldShowDownloadMoreCell;
- (void)_resetPurgedAttachmentCount;
- (unsigned long long)_purgedAttachmentCount;
- (void)userDidTapDownloadForAttachmentsFooterView:(id)arg1;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (id)downloadButtonText;
- (id)downloadAttachmentsText;
- (id)annotationContactForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (id)fmfHandlesFromIMHandles:(id)arg1;
- (void)presentFullFMFMapViewController;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)screenSize;
- (void)_toggleSharingStateFromABCard;
- (void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2;
- (void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(_Bool)arg4;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)detailsAddGroupNameView:(id)arg1 didCommitGroupName:(id)arg2;
- (void)presentLeaveActionSheetFromView:(id)arg1;
- (void)_presentRemoveRecipientSheetForHandle:(id)arg1 fromView:(id)arg2;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(_Bool)arg5;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (void)adjustContentOffsetReloadingSharedAssetsContentViewCell;
- (void)readReceiptsSwitchValueChanged:(id)arg1;
- (void)doNotDisturbValueChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleCancelAction:(id)arg1;
- (void)handleDoneAction:(id)arg1;
- (void)presentGroupRecipientSelectionController;
- (void)collapseContactsSection;
- (void)expandContactsSection;
- (_Bool)conversationHasLeft;
- (_Bool)shouldShowGroupAddNameField;
- (_Bool)shouldShowEnhancedGroupFeatures;
- (_Bool)shouldShowBusinessInfoFooter;
- (_Bool)shouldShowActiveDeviceSwitchFooter;
- (_Bool)shouldShowFMFView;
- (_Bool)isContactsSectionCollapsible;
- (long long)visibleContactsRows;
- (_Bool)_canLeaveConversation;
- (_Bool)_fmfExpirationDateIsValid;
- (id)currentlyActiveFMFDevice;
- (void)updateTimedFMFState;
- (void)handleFriendshipStatusChanged:(id)arg1;
- (void)handleActiveDeviceChanged:(id)arg1;
- (void)presentSharingActionSheetCurrentlySharing:(_Bool)arg1 fromView:(id)arg2;
- (void)sendCurrentLocation;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)handleTapOnChromeAvatar:(id)arg1;
- (void)setupContactsManager;
- (void)setupFMFTimerIfNecessary;
- (void)setupFMF;
- (void)detailsSearchController:(id)arg1 requestsPushOfSearchController:(id)arg2;
- (void)detailsSearchControllerContentDidChange:(id)arg1;
- (id)searchAttachmentViewControllerCellForIndexPath:(id)arg1;
- (id)childViewController:(id)arg1 cellForIndexPath:(id)arg2;
- (id)editConversationCellForIndexPath:(id)arg1;
- (id)chatOptionsCellForIndexPath:(id)arg1;
- (_Bool)_allRecipientsAlreadyFollowingLocation;
- (id)_conversationOfferTimeExpiration;
- (id)_tableViewCellForSharingLocation:(_Bool)arg1;
- (id)_tableViewCellForSendLocation;
- (id)locationShareCellForIndexPath:(id)arg1;
- (void)_configureSeparatorForCell:(id)arg1 indexPath:(id)arg2;
- (void)contactsCellDidTapFaceTimeVideoButton:(id)arg1;
- (void)contactsCellDidTapMessagesButton:(id)arg1;
- (void)contactsCellDidTapPhoneButton:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (long long)rowForAddMemberCell;
- (long long)rowForShowMoreContactsCell;
- (id)contactsManagerCellForIndexPath:(id)arg1;
- (void)initializeBusinessInfoViewIfNecessary;
- (void)initializeLocationSharingTextViewIfNecessary;
- (id)fmfViewControllerCellForIndexPath:(id)arg1;
- (id)groupNameCellForIndexPath:(id)arg1;
- (id)simTypeCellForIndexPath:(id)arg1;
- (id)leaveCellForIndexPath:(id)arg1;
- (void)_updateDownloadFooterView;
- (id)downloadAttachmentsFooterViewForSection:(long long)arg1;
- (id)businessInfoFooterViewForSection:(long long)arg1;
- (id)locationFooterViewForSection:(long long)arg1;
- (void)_lastAddressedHandleUpdateNotification:(id)arg1;
- (void)showMapkitBusinessData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)shouldDisplayFooterForSection:(unsigned long long)arg1;
- (_Bool)shouldDisplayHeaderForSection:(unsigned long long)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)_heightForAuxContactCellAtindexPath:(id)arg1;
- (double)_heightForContactCellAtIndexPath:(id)arg1;
- (unsigned long long)_countOfContactViewModels;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)contentScrollView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardWillShowNotification:(id)arg1;
- (void)handleDoneButton:(id)arg1;
- (id)inputAccessoryViewController;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConversation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

