//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class LPLinkMetadata, NSArray, NSDictionary, NSSet, UIActivity;
@protocol UIActivityViewControllerAirDropDelegate, UIActivityViewControllerObjectManipulationDelegate, UIActivityViewControllerPhotosDelegate;

@interface UIActivityViewController : UIViewController
{
    BOOL _allowsCustomPresentationStyle;
    BOOL _allowsEmbedding;
    BOOL _showKeyboardAutomatically;
    BOOL _whitelistActionActivitiesOnly;
    BOOL _isContentManaged;
    BOOL _sourceIsManaged;
    BOOL _enableNewDesignInPhotos;
    BOOL _configureForPhotosEdit;
    BOOL _configureForCloudSharing;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _completionWithItemsHandler;
    NSArray *_excludedActivityTypes;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    NSDictionary *_shareKitInfo;
    CDUnknownBlockType _shareSheetReadyToInteractHandler;
    CDUnknownBlockType _preCompletionHandler;
    NSArray *_includedActivityTypes;
    long long _excludedActivityCategories;
    NSArray *_activityTypeOrder;
    long long _sharingStyle;
    UIActivity *_activity;
    UIViewController *_activityViewController;
    id <UIActivityViewControllerAirDropDelegate> _airDropDelegate;
    id <UIActivityViewControllerObjectManipulationDelegate> _objectManipulationDelegate;
    UIViewController *_photosCarouselViewController;
    LPLinkMetadata *_photosHeaderMetadata;
    UIViewController *_photosStackViewController;
    id <UIActivityViewControllerPhotosDelegate> _photosDelegate;
    NSDictionary *_initialPhotosAssetDetails;
    NSArray *_selectedAssetIdentifiers;
    NSSet *_photosAssetIdentifiers;
}

+ (double)_asyncPresentationTimeout;
+ (id)_macActivityItemsForiOSActivityItems:(id)arg1 activityViewController:(id)arg2;
@property(nonatomic) BOOL configureForCloudSharing; // @synthesize configureForCloudSharing=_configureForCloudSharing;
@property(nonatomic) BOOL configureForPhotosEdit; // @synthesize configureForPhotosEdit=_configureForPhotosEdit;
@property(copy, nonatomic, getter=_photosAssetIdentifiers, setter=_setPhotosAssetIdentifiers:) NSSet *photosAssetIdentifiers; // @synthesize photosAssetIdentifiers=_photosAssetIdentifiers;
@property(copy, nonatomic, getter=_selectedAssetIdentifiers, setter=_setSelectedAssetIdentifiers:) NSArray *selectedAssetIdentifiers; // @synthesize selectedAssetIdentifiers=_selectedAssetIdentifiers;
@property(copy, nonatomic, getter=_initialPhotosAssetDetails, setter=_setInitialPhotosAssetDetails:) NSDictionary *initialPhotosAssetDetails; // @synthesize initialPhotosAssetDetails=_initialPhotosAssetDetails;
@property(nonatomic) BOOL enableNewDesignInPhotos; // @synthesize enableNewDesignInPhotos=_enableNewDesignInPhotos;
@property(nonatomic) __weak id <UIActivityViewControllerPhotosDelegate> photosDelegate; // @synthesize photosDelegate=_photosDelegate;
@property(retain, nonatomic) UIViewController *photosStackViewController; // @synthesize photosStackViewController=_photosStackViewController;
@property(retain, nonatomic) LPLinkMetadata *photosHeaderMetadata; // @synthesize photosHeaderMetadata=_photosHeaderMetadata;
@property(retain, nonatomic) UIViewController *photosCarouselViewController; // @synthesize photosCarouselViewController=_photosCarouselViewController;
@property(nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(nonatomic) __weak id <UIActivityViewControllerObjectManipulationDelegate> objectManipulationDelegate; // @synthesize objectManipulationDelegate=_objectManipulationDelegate;
@property(nonatomic) __weak id <UIActivityViewControllerAirDropDelegate> airDropDelegate; // @synthesize airDropDelegate=_airDropDelegate;
@property(retain, nonatomic) UIViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) BOOL isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property(nonatomic) long long sharingStyle; // @synthesize sharingStyle=_sharingStyle;
@property(nonatomic) BOOL whitelistActionActivitiesOnly; // @synthesize whitelistActionActivitiesOnly=_whitelistActionActivitiesOnly;
@property(nonatomic) BOOL showKeyboardAutomatically; // @synthesize showKeyboardAutomatically=_showKeyboardAutomatically;
@property(nonatomic) BOOL allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property(nonatomic) BOOL allowsCustomPresentationStyle; // @synthesize allowsCustomPresentationStyle=_allowsCustomPresentationStyle;
@property(copy, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property(nonatomic) long long excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property(copy, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property(copy, nonatomic) CDUnknownBlockType preCompletionHandler; // @synthesize preCompletionHandler=_preCompletionHandler;
@property(copy, nonatomic, getter=_shareSheetReadyToInteractHandler, setter=_setShareSheetReadyToInteractHandler:) CDUnknownBlockType shareSheetReadyToInteractHandler; // @synthesize shareSheetReadyToInteractHandler=_shareSheetReadyToInteractHandler;
@property(retain) NSDictionary *shareKitInfo; // @synthesize shareKitInfo=_shareKitInfo;
@property(copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) CDUnknownBlockType completionWithItemsHandler; // @synthesize completionWithItemsHandler=_completionWithItemsHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_updateActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)_titleForActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivityType:(id)arg1;
- (void)_updateActivityItems:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareActivity:(id)arg1;
- (double)_displayHeight;
- (void)_primeExtensionDiscovery;
- (void)_cancel;
- (void)_presentMacShareSheet;
- (id)_shareKitInfoWithMoreImage;
- (void)_handleActivitySelected:(id)arg1;
- (id)compatibleApplicationActivities;
- (id)initWithUserDefaults:(id)arg1 userDefaultsIdentifier:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithAssetIdentifiers:(id)arg1 activityItems:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)_proxyActivitiesForActivities:(id)arg1 activityItems:(id)arg2;

@end

