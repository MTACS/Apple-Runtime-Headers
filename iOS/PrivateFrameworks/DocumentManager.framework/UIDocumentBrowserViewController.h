//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <DocumentManager/DOCAppearanceCustomization-Protocol.h>
#import <DocumentManager/DOCHostDocumentBrowserViewControllerInterface-Protocol.h>
#import <DocumentManager/DOCKeyCommandResponder-Protocol.h>
#import <DocumentManager/DOCRemoteViewControllerDelegate-Protocol.h>
#import <DocumentManager/DOCViewServiceErrorViewControllerDelegate-Protocol.h>
#import <DocumentManager/NSCoding-Protocol.h>
#import <DocumentManager/_UIRemoteViewControllerContaining-Protocol.h>

@class DOCAppearance, DOCConfiguration, DOCDocBrowserVC_UIActivityViewController, NSArray, NSOperationQueue, NSString, UIColor, UIView, _UIRemoteViewController, _UIResilientRemoteViewContainerViewController;
@protocol DOCServiceDocumentBrowserViewControllerInterface, UIDocumentBrowserViewControllerDelegate;

@interface UIDocumentBrowserViewController : UIViewController <DOCHostDocumentBrowserViewControllerInterface, DOCRemoteViewControllerDelegate, DOCViewServiceErrorViewControllerDelegate, DOCKeyCommandResponder, _UIRemoteViewControllerContaining, DOCAppearanceCustomization, NSCoding>
{
    _Bool _isDisplayingRemoteViewController;
    UIView *_trackingViewsContainer;
    DOCAppearance *_appearance;
    _Bool _allowsDocumentCreation;
    _Bool _allowsPickingMultipleItems;
    _Bool _shouldShowFileExtensions;
    _Bool _shouldDelayRemoteViewController;
    id <UIDocumentBrowserViewControllerDelegate> _delegate;
    NSArray *_additionalLeadingNavigationBarButtonItems;
    NSArray *_additionalTrailingNavigationBarButtonItems;
    NSArray *_customActions;
    NSArray *_leadingBarButtonTrackingViews;
    NSArray *_trailingBarButtonTrackingViews;
    NSArray *_remoteAdditionalLeadingNavigationBarButtonItems;
    NSArray *_remoteAdditionalTrailingNavigationBarButtonItems;
    _UIResilientRemoteViewContainerViewController *_remoteViewController;
    DOCDocBrowserVC_UIActivityViewController *_activityViewController;
    id <DOCServiceDocumentBrowserViewControllerInterface> _serviceProxy;
    NSOperationQueue *_serviceQueue;
    DOCConfiguration *_configuration;
    UIColor *_createButtonColor;
    UIColor *_badgeTintColor;
    UIColor *_inBrowserTintColor;
    UIColor *_sortingBackgroundColor;
    UIColor *_backgroundColor;
    UIColor *_itemTitleColor;
    UIColor *_itemSubtitleColor;
}

+ (id)placeholderURLForDownloadsFolder;
@property(copy, nonatomic) UIColor *itemSubtitleColor; // @synthesize itemSubtitleColor=_itemSubtitleColor;
@property(copy, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIColor *sortingBackgroundColor; // @synthesize sortingBackgroundColor=_sortingBackgroundColor;
@property(copy, nonatomic) UIColor *inBrowserTintColor; // @synthesize inBrowserTintColor=_inBrowserTintColor;
@property(copy, nonatomic) UIColor *badgeTintColor; // @synthesize badgeTintColor=_badgeTintColor;
@property(copy, nonatomic) UIColor *createButtonColor; // @synthesize createButtonColor=_createButtonColor;
@property(retain, nonatomic) DOCConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSOperationQueue *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(retain, nonatomic) id <DOCServiceDocumentBrowserViewControllerInterface> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) __weak DOCDocBrowserVC_UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) _Bool shouldDelayRemoteViewController; // @synthesize shouldDelayRemoteViewController=_shouldDelayRemoteViewController;
@property(retain, nonatomic) NSArray *remoteAdditionalTrailingNavigationBarButtonItems; // @synthesize remoteAdditionalTrailingNavigationBarButtonItems=_remoteAdditionalTrailingNavigationBarButtonItems;
@property(retain, nonatomic) NSArray *remoteAdditionalLeadingNavigationBarButtonItems; // @synthesize remoteAdditionalLeadingNavigationBarButtonItems=_remoteAdditionalLeadingNavigationBarButtonItems;
@property(retain, nonatomic) NSArray *trailingBarButtonTrackingViews; // @synthesize trailingBarButtonTrackingViews=_trailingBarButtonTrackingViews;
@property(retain, nonatomic) NSArray *leadingBarButtonTrackingViews; // @synthesize leadingBarButtonTrackingViews=_leadingBarButtonTrackingViews;
@property(copy, nonatomic) NSArray *customActions; // @synthesize customActions=_customActions;
@property(retain, nonatomic) NSArray *additionalTrailingNavigationBarButtonItems; // @synthesize additionalTrailingNavigationBarButtonItems=_additionalTrailingNavigationBarButtonItems;
@property(retain, nonatomic) NSArray *additionalLeadingNavigationBarButtonItems; // @synthesize additionalLeadingNavigationBarButtonItems=_additionalLeadingNavigationBarButtonItems;
@property(nonatomic) _Bool shouldShowFileExtensions; // @synthesize shouldShowFileExtensions=_shouldShowFileExtensions;
@property(nonatomic) _Bool allowsPickingMultipleItems; // @synthesize allowsPickingMultipleItems=_allowsPickingMultipleItems;
@property(nonatomic) _Bool allowsDocumentCreation; // @synthesize allowsDocumentCreation=_allowsDocumentCreation;
@property(nonatomic) __weak id <UIDocumentBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forwardHostSceneIdentifier:(id)arg1;
- (id)recentDocumentsTypesFromInfoPlist;
- (_Bool)supportsRemovableFileProvidersForConfiguration:(id)arg1;
- (void)_renameDocumentAtURL:(id)arg1 newName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didTriggerBarButtonWithUUID:(id)arg1;
- (void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2;
- (void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
- (void)_didImportDocumentAtURL:(id)arg1 toDestinationItem:(id)arg2;
- (void)_didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg1;
- (void)_didPickItems:(id)arg1;
- (void)_didTriggerCustomActionWithIdentifier:(id)arg1 onItems:(id)arg2;
- (void)_commitDocumentURLPreview:(id)arg1;
- (void)_presentActivityViewControllerForItems:(id)arg1 withPopoverTracker:(id)arg2 isContentManaged:(_Bool)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;
- (void)dismissingKeyCommandWasPerformed:(id)arg1;
- (void)keyCommandWasPerformed:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (id)_symbolicDownloadsURLWrapper;
- (id)_sandboxingURLWrapperForURL:(id)arg1 readonly:(_Bool)arg2 error:(id *)arg3;
- (void)_displayActivityControllerWithItems:(id)arg1 popoverTracker:(id)arg2 isContentManaged:(_Bool)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;
- (void)addOperationToServiceQueue:(CDUnknownBlockType)arg1;
- (id)remoteBarButtonForUUID:(id)arg1;
- (id)trackingViewForUUID:(id)arg1;
- (void)getTrackingViews:(id *)arg1 remoteButtons:(id *)arg2 fromBarButtons:(id)arg3;
- (void)prepareItems:(id)arg1 forMode:(unsigned long long)arg2 usingBookmark:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareItems:(id)arg1 usingBookmark:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_showDocumentBrowserViewController:(_Bool)arg1;
- (void)_showErrorViewController;
- (void)_clearShownViewControllers;
- (void)clearCurrentOpenInteraction;
@property(nonatomic) unsigned long long browserUserInterfaceStyle; // @dynamic browserUserInterfaceStyle;
- (void)setshouldShowFileExtensions:(_Bool)arg1;
@property(retain, nonatomic) UIColor *backgroundTintColor;
- (void)updateBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
@property(copy, nonatomic) NSString *createButtonTitle;
@property(copy, nonatomic) NSString *localizedCreateDocumentActionTitle;
@property(nonatomic) double createButtonAspectRatio;
@property(nonatomic) double defaultDocumentAspectRatio;
@property(retain, nonatomic) NSArray *additionalToolbarButtonItems; // @dynamic additionalToolbarButtonItems;
@property(readonly, copy, nonatomic) NSArray *recentDocumentsContentTypes;
@property(readonly, copy, nonatomic) NSArray *allowedContentTypes;
- (void)didTapTryAgainInErrorViewController:(id)arg1;
- (void)remoteViewController:(id)arg1 didTerminateViewServiceWithError:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_importDocumentAtURL:(id)arg1 neighbourURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importDocumentAtURL:(id)arg1 byMoving:(_Bool)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (id)transitionControllerForDocumentAtURL:(id)arg1;
- (void)dismissAllPresentedViewControllers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revealDocumentAtURL:(id)arg1 shouldImport:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)effectiveAppearanceDidChange:(id)arg1;
- (long long)preferredStatusBarStyle;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)_displayRemoteControllerIfNeeded;
- (void)_embedViewController:(id)arg1;
- (void)_embedDocumentBrowserViewController;
- (void)viewDidLoad;
- (void)__commonInit;
- (id)initWithConfiguration:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DOCAppearance *effectiveAppearance; // @dynamic effectiveAppearance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

