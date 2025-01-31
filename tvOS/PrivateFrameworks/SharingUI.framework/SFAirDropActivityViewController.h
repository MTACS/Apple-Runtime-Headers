//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SharingUI/SFAirDropBrowserBatchDelegate-Protocol.h>
#import <SharingUI/SFCollectionViewDelegateLayout-Protocol.h>
#import <SharingUI/SFPersonCollectionViewCellDelegate-Protocol.h>
#import <SharingUI/SFWirelessSettingsControllerDelegate-Protocol.h>
#import <SharingUI/UICollectionViewDataSource-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSOperationQueue, NSString, SFAirDropActiveIconView, SFAirDropBrowser, SFAirDropIconView, SFWirelessSettingsController, UIButton, UICollectionView, UICollectionViewFlowLayout, UIFocusContainerGuide, UILabel, UIVisualEffectView;
@protocol SFAirDropActivityViewControllerDelegate;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserBatchDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate>
{
    NSString *_sendingAppBundleID;
    long long _attachmentCount;
    NSString *_sessionID;
    long long _sharedItemsRequestID;
    UILabel *_titleLabel;
    UIButton *_reportBugButton;
    NSLayoutConstraint *_titleLabelTopConstraint;
    double _titleLabelTopConstraintDefaultConstant;
    SFAirDropIconView *_airDropIconView;
    NSLayoutConstraint *_airDropIconLeftConstraint;
    UILabel *_noWifiTextView;
    NSLayoutConstraint *_noWifiRightConstraint;
    SFAirDropActiveIconView *_airDropActiveIconView;
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;
    UILabel *_instructionsTextView;
    NSLayoutConstraint *_instructionsRightConstraint;
    SFAirDropActiveIconView *_airDropInactiveIconView;
    NSLayoutConstraint *_airDropInactiveIconLeftConstraint;
    UILabel *_noAWDLTextView;
    NSLayoutConstraint *_noAWDLRightConstraint;
    NSLayoutConstraint *_largeTextAirdropViewYConstraint;
    NSArray *_textViewConstraints;
    NSArray *_largeTextTextViewConstraints;
    NSArray *_airdropViewYConstraints;
    NSArray *_largeTextAirdropViewYConstraints;
    UICollectionView *_collectionView;
    UICollectionView *_detailCollectionView;
    UIButton *_showMoreButton;
    _Bool _shouldExpandTextIfNeeded;
    UICollectionViewFlowLayout *_collectionViewLayout;
    SFAirDropBrowser *_browser;
    id _progressToken;
    NSMutableDictionary *_personToProgress;
    NSMutableDictionary *_personToStoredTransferFinalState;
    NSMutableDictionary *_personToSharedItemsRequestID;
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;
    SFWirelessSettingsController *_wirelessSettings;
    NSMutableOrderedSet *_cachedSharedItems;
    _Bool _itemsRequested;
    _Bool _itemsReady;
    NSOperationQueue *_operationQueue;
    long long _generatedPreviews;
    UIVisualEffectView *_titleVibrancyView;
    UIVisualEffectView *_instructionsVibrancyView;
    UIVisualEffectView *_iconsVibrancyView;
    UIButton *_doneButton;
    UIFocusContainerGuide *_fcg;
    struct __SFOperation *_logger;
    struct CGSize _minimumPreferredContentSize;
    NSArray *_people;
    NSMapTable *_realNameToFirstSeenTimestamp;
    unsigned long long _peopleStartTimestamp;
    _Bool _browserPaused;
    _Bool _didSelectNode;
    int _sharedItemsCount;
    NSMutableDictionary *_sharedItemsMap;
    _Bool _sharedItemsAvailable;
    _Bool _otherActivityViewPresented;
    _Bool _darkStyleOnLegacyApp;
    _Bool _multipleRows;
    _Bool _includePeopleSuggestions;
    _Bool _manuallyManageBrowsing;
    NSObject<SFAirDropActivityViewControllerDelegate> *_delegate;
    NSArray *_urlsBeingShared;
    NSArray *_photosAssetIDs;
    NSString *_overriddenTitleText;
    NSString *_overriddenNoWiFIBTText;
    NSString *_overriddenNoAWDLText;
    NSString *_overriddenInstructionsText;
    CDStruct_4c969caf _sendingApplicationAuditToken;
}

+ (_Bool)airDropActivityCanPerformActivityWithItemClasses:(id)arg1;
+ (_Bool)isAirDropAvailable;
@property(nonatomic) _Bool manuallyManageBrowsing; // @synthesize manuallyManageBrowsing=_manuallyManageBrowsing;
@property(copy, nonatomic) NSString *overriddenInstructionsText; // @synthesize overriddenInstructionsText=_overriddenInstructionsText;
@property(copy, nonatomic) NSString *overriddenNoAWDLText; // @synthesize overriddenNoAWDLText=_overriddenNoAWDLText;
@property(copy, nonatomic) NSString *overriddenNoWiFIBTText; // @synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText;
@property(copy, nonatomic) NSString *overriddenTitleText; // @synthesize overriddenTitleText=_overriddenTitleText;
@property(nonatomic) _Bool includePeopleSuggestions; // @synthesize includePeopleSuggestions=_includePeopleSuggestions;
@property(copy, nonatomic) NSArray *photosAssetIDs; // @synthesize photosAssetIDs=_photosAssetIDs;
@property(copy, nonatomic) NSArray *urlsBeingShared; // @synthesize urlsBeingShared=_urlsBeingShared;
@property(nonatomic) _Bool multipleRows; // @synthesize multipleRows=_multipleRows;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(nonatomic) _Bool otherActivityViewPresented; // @synthesize otherActivityViewPresented=_otherActivityViewPresented;
@property(nonatomic) _Bool sharedItemsAvailable; // @synthesize sharedItemsAvailable=_sharedItemsAvailable;
@property(nonatomic) __weak NSObject<SFAirDropActivityViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_4c969caf sendingApplicationAuditToken; // @synthesize sendingApplicationAuditToken=_sendingApplicationAuditToken;
- (void).cxx_destruct;
- (void)_emitTelemetryForPerson:(id)arg1;
- (void)_collectTelemetryForPeople:(id)arg1;
- (void)_stopTelemetry;
- (void)_startTelemetry;
- (void)cleanupWithSelectedActivityType:(id)arg1;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)doneButtonAction:(id)arg1;
- (void)generateSpecialPreviewPhotoForRequestID:(long long)arg1;
- (_Bool)addItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (_Bool)addItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (void)handleOtherItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (void)handleImageItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (void)handleLivePhotoItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (_Bool)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (_Bool)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (_Bool)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6;
- (_Bool)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (_Bool)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (_Bool)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id *)arg3;
- (void)startTransferForPeople:(id)arg1;
- (void)setNeedsRequestingSharedItems;
- (id)cellForPerson:(id)arg1;
- (void)browserDidUpdatePeople:(id)arg1;
- (id)indexSetToIndexPaths:(id)arg1 inSection:(long long)arg2;
- (void)showMore:(id)arg1;
- (void)wirelessSettingsDidChange:(id)arg1;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (void)unsubscribeToProgresses;
- (void)subscribeToProgresses;
- (struct CGSize)_cachedPreferredItemSize;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) struct CGSize suggestedThumbnailSize;
- (struct CGSize)calculatePreferredContentSize;
- (id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned int)arg3;
- (void)_updateFontSizes;
- (void)updatePreferredContentSize;
- (void)updateContentAreaAnimated:(_Bool)arg1;
- (void)updateShowMoreButtonForShowPeople:(_Bool)arg1 inactive:(_Bool)arg2 active:(_Bool)arg3 static:(_Bool)arg4;
- (id)preferredFocusEnvironments;
- (void)enableAirDropRequiredFeatures;
- (_Bool)isBluetoothEnabled;
- (_Bool)isWifiEnabled;
- (_Bool)isTetheredModeEnabled;
- (_Bool)isDebugMode;
- (_Bool)enableModernShareSheeet;
- (void)traitCollectionDidChange:(id)arg1;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_createtvOSLayoutConstraints;
- (void)_createiOSLayoutConstraints;
- (void)_updateExclusionPathsForTextViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)titleText;
- (id)instructionsText;
- (id)noAWDLText;
- (id)noWiFiBTText;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)_setIsLoadingActivityItemProviders:(_Bool)arg1;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)invalidate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

