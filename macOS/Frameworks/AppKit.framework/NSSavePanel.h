//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

#import <AppKit/NSOpenAndSavePanelRemoteViewExportedToServiceProtocol-Protocol.h>

@class NSArray, NSButton, NSCFRunLoopSemaphore, NSString, NSTextField, NSURL, NSView;
@protocol NSOpenSavePanelDelegate;

@interface NSSavePanel : NSPanel <NSOpenAndSavePanelRemoteViewExportedToServiceProtocol>
{
    NSTextField *_nameField;
    NSButton *_newFolderButton;
    NSButton *_okButton;
    unsigned int _spFlags;
    BOOL _iCloudOpenPanel;
    BOOL observingBridge;
    BOOL expectingInvalidation;
    BOOL attachSandboxExtensionsToFinalURLDone;
    BOOL attachSandboxExtensionsToFinalURLsDone;
    BOOL runningAsASheet;
    BOOL hostWindow_runningAsASheet;
    BOOL panelCompleted;
    BOOL retained;
    BOOL panelIsNowUseless;
    BOOL _enteredThroughSavePanelAPI;
    NSCFRunLoopSemaphore *advanceToRunPhaseIfNeededSemaphore;
    CDUnknownBlockType completionHandler;
    id <NSOpenSavePanelDelegate> openSaveDelegate;
    NSURL *finalURL;
    NSArray *finalURLs;
    NSArray *customActions;
    struct CGSize lastReportedAccessorySize;
}

+ (void)_warmUp;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)savePanel;
+ (void)_showExistingOpenPanel:(id)arg1;
+ (BOOL)_supportsAppCentricBrowsing;
+ (BOOL)_shouldCreateiCloudOpenPanel;
+ (void)_setShouldCreateAppCentricOpenPanel:(BOOL)arg1;
+ (BOOL)_filenameHasNonEmptyAcceptableFileType:(id)arg1 allowedFileTypes:(id)arg2 allowsOtherFileTypes:(BOOL)arg3;
+ (BOOL)_isDirectoryURL:(id)arg1 treatFilePackagesAsDirectories:(BOOL)arg2 fauxFilePackageTypes:(id)arg3 enabledFileTypes:(id)arg4;
+ (BOOL)_isFauxFilePackageURL:(id)arg1 fauxFilePackageTypes:(id)arg2 enabledFileTypes:(id)arg3;
+ (id)_nameWithStrictRequiredExtensionCheck:(id)arg1 andPreferredFileExtension:(id)arg2;
+ (id)_nameWithLooseRequiredExtensionCheck:(id)arg1 andPreferredFileExtension:(id)arg2;
+ (id)_crunchyRawUnbonedPanel;
+ (CDStruct_4c969caf)_cachedAuditTokenForMovePanel;
+ (id)_containerURLsForRemoteProcessWithAuditToken:(CDStruct_4c969caf *)arg1;
+ (BOOL)_actuallyValidateURLs:(id)arg1 fromPanel:(id)arg2 onDelegate:(id)arg3 outError:(id *)arg4;
+ (BOOL)_defaultSettingForUbiquitousBehaviors;
+ (void)_storeRootDirectoryURL:(id)arg1 forSaveMode:(BOOL)arg2;
+ (id)_lastSavedRootDirectoryForSaveMode:(BOOL)arg1;
@property BOOL _enteredThroughSavePanelAPI; // @synthesize _enteredThroughSavePanelAPI;
@property(copy) NSArray *customActions; // @synthesize customActions;
@property BOOL panelIsNowUseless; // @synthesize panelIsNowUseless;
@property BOOL retained; // @synthesize retained;
@property BOOL panelCompleted; // @synthesize panelCompleted;
@property BOOL hostWindow_runningAsASheet; // @synthesize hostWindow_runningAsASheet;
@property BOOL runningAsASheet; // @synthesize runningAsASheet;
@property BOOL attachSandboxExtensionsToFinalURLsDone; // @synthesize attachSandboxExtensionsToFinalURLsDone;
@property BOOL attachSandboxExtensionsToFinalURLDone; // @synthesize attachSandboxExtensionsToFinalURLDone;
@property BOOL expectingInvalidation; // @synthesize expectingInvalidation;
@property BOOL observingBridge; // @synthesize observingBridge;
@property BOOL _iCloudOpenPanel; // @synthesize _iCloudOpenPanel;
@property(retain) NSArray *finalURLs; // @synthesize finalURLs;
@property(retain) NSURL *finalURL; // @synthesize finalURL;
@property __weak id <NSOpenSavePanelDelegate> openSaveDelegate; // @synthesize openSaveDelegate;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property struct CGSize lastReportedAccessorySize; // @synthesize lastReportedAccessorySize;
@property(retain) NSCFRunLoopSemaphore *advanceToRunPhaseIfNeededSemaphore; // @synthesize advanceToRunPhaseIfNeededSemaphore;
- (void).cxx_destruct;
- (void)_reallyDoOrderWindow:(long long)arg1 relativeTo:(long long)arg2 findKey:(BOOL)arg3 forCounter:(BOOL)arg4 force:(BOOL)arg5 isModal:(BOOL)arg6;
- (BOOL)_startServiceFailedAlert;
- (void)setCanDownloadUbiquitousContents:(BOOL)arg1;
- (BOOL)canDownloadUbiquitousContents;
- (void)setCanResolveUbiquitousConflicts:(BOOL)arg1;
- (BOOL)canResolveUbiquitousConflicts;
- (void)setCanChooseFiles:(BOOL)arg1;
- (BOOL)canChooseFiles;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setCanChooseDirectories:(BOOL)arg1;
- (BOOL)canChooseDirectories;
- (void)setResolvesAliases:(BOOL)arg1;
- (BOOL)resolvesAliases;
- (id)filenames;
- (id)_securityScopedURLs;
- (id)URLs;
- (id)_URLsWithSecurityScoped:(BOOL)arg1;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 modalForWindow:(id)arg3 modalDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modalForWindow:(id)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void *)arg7;
- (void)_beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2;
- (long long)runModalForTypes:(id)arg1;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3;
- (void)setRequiredFileType:(id)arg1;
- (id)requiredFileType;
- (void)setDirectory:(id)arg1;
- (id)directory;
- (id)filename;
- (long long)runModal;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)commonPrep:(CDUnknownBlockType)arg1 runningAsASheet:(BOOL)arg2 hostWindow_runningAsASheet:(BOOL)arg3;
- (void)_setAccessoryViewDisclosedVBKVO:(BOOL)arg1;
- (void)_resetPrivateState;
- (void)advanceToRunPhaseIfNeededLayerCentric;
- (void)viewDidAdvanceToRunPhase:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeAsynchronousIBActionKeyPath:(id)arg1 paramDict:(id)arg2;
- (void)observeAsynchronousDelegateMethodCallKeyPath:(id)arg1 paramDict:(id)arg2;
- (void)observeAsynchronousRemoteMethodCallKeyPath:(id)arg1 paramDict:(id)arg2;
- (void)observeMostRecentCompletion:(id)arg1;
- (void)completeWithReturnCode:(long long)arg1 url:(id)arg2 urls:(id)arg3;
- (void)completeSheet:(long long)arg1;
- (void)completeModal:(long long)arg1;
- (void)completeModeless:(long long)arg1;
- (void)_removeExtraRetainIfNeeded;
- (void)didEndPanelWithReturnCode:(long long)arg1;
- (void)induceEventLoopIterationSoon;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
@property(copy) NSArray *tagNames;
@property BOOL showsTagField;
@property BOOL showsHiddenFiles;
- (void)_sendAccessoryViewLayoutInfoForView:(id)arg1;
- (void)validateVisibleColumns;
@property(copy) NSString *message;
@property(copy) NSString *nameFieldStringValue;
@property(copy) NSString *nameFieldLabel;
@property(copy) NSString *title;
@property(copy) NSString *prompt;
@property BOOL treatsFilePackagesAsDirectories;
@property(getter=isExtensionHidden) BOOL extensionHidden;
@property BOOL canSelectHiddenExtension;
@property BOOL canCreateDirectories;
@property(readonly, getter=isExpanded) BOOL expanded;
- (void)refreshDelegateOptions;
- (void)_setSupportedDelegateMethods:(id)arg1;
- (id)_supportedDelegateMethods;
@property __weak id <NSOpenSavePanelDelegate> delegate;
- (void)accessoryDidChangeConstraints:(struct CGSize)arg1;
- (void)accessoryWindowOfViewWillUpdateConstraintsIfNeeded:(id)arg1;
@property(retain) NSView *accessoryView;
@property BOOL allowsOtherFileTypes;
@property(copy) NSArray *allowedFileTypes;
@property(copy) NSURL *directoryURL;
@property(readonly, copy) NSURL *URL;
- (id)_URLWithSecurityScoped:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (void)_attachSandboxExtensionsAndStartAccessing;
- (BOOL)_attachSandboxExtensions:(id)arg1 toURL:(id)arg2 orURLs:(id)arg3;
- (void)_attachSandboxExtension:(id)arg1 toURL:(id)arg2;
- (id)bridge;
- (void)viewDidInvalidate:(id)arg1;
- (void)viewWillInvalidate:(id)arg1;
- (void)_setDefaultBridgeValues;
- (void)_addObservers:(BOOL)arg1 onBridge:(id)arg2;
- (void)dealloc;
- (void)_invalidateRemoteView;
- (id)remoteView;
- (void *)_sheetEffect;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)init;
- (unsigned long long)styleMaskForHostWindow;
- (id)valueforUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)kvoKeys;
- (void)configureContentView:(id)arg1;
- (id)panel;
- (id)_initBridgeAndStuff;
- (id)_createVBSemaphore;
- (id)serviceViewControllerInterface;
- (id)exportedInterface;
- (BOOL)shouldRetainExportedObject;
- (BOOL)iCloudOpenPanel;
- (BOOL)appCentric;
- (void)MondoSetFilenameWithProperSelection:(id)arg1;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityAttributeNames;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)urlForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (id)_setForKey:(id)arg1;
- (void)_setSet:(id)arg1 forKey:(id)arg2;
- (id)_dictForKey:(id)arg1;
- (void)_setDict:(id)arg1 forKey:(id)arg2;
- (id)_arrayForKey:(id)arg1;
- (void)_setArray:(id)arg1 forKey:(id)arg2;
- (double)_floatForKey:(id)arg1;
- (BOOL)_boolForKey:(id)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)_fauxToolbarShouldDragWindow;
- (BOOL)hidesSharedSection;
- (void)setHidesSharedSection:(BOOL)arg1;
- (double)_startRectForSheetHeightOffset;
- (void)_hideWindowForTimeMachineMode:(BOOL)arg1;
- (void)_orderRemoteWindow:(long long)arg1 sender:(id)arg2;
- (void)_setOverwritingAlertSuppressionURL:(id)arg1;
- (id)_overwritingAlertSuppressionURL;
- (void)_setIsExpanded:(BOOL)arg1 andStoreState:(BOOL)arg2;
- (void)_setIsExpanded:(BOOL)arg1;
- (void)_sendAccessoryView:(id)arg1;
@property(getter=isAccessoryViewDisclosed) BOOL accessoryViewDisclosed;
- (BOOL)_accessoryViewDisclosedVBKVO;
- (BOOL)_accessoryViewDisclosed;
- (BOOL)_accessoryViewDisclosureIsSupported;
@property(setter=_setShouldShowOptionsButton:) BOOL _shouldShowOptionsButton;
- (void)_configureForFilename:(id)arg1;
- (BOOL)_shouldSetTagsForClient;
- (BOOL)_showsTagField;
- (void)_setShowsTagField:(BOOL)arg1;
- (id)_tags;
- (void)_setTags:(id)arg1;
- (BOOL)_shouldRevertOriginalDocument;
- (void)_setShouldRevertOriginalDocument:(BOOL)arg1;
- (BOOL)_showsRevertOriginalDocumentButton;
- (void)_setShowsRevertOriginalDocumentButton:(BOOL)arg1;
- (void)_setAlertInformativeMessage:(id)arg1;
- (id)_alertInformativeMessage;
- (void)_setAlertMessage:(id)arg1;
- (id)_alertMessage;
- (void)_setUseAlertStyle:(BOOL)arg1;
- (BOOL)_useAlertStyle;
- (void)_setDontSaveButtonTitle:(id)arg1;
- (id)_dontSaveButtonTitle;
- (void)_setEnabledFileTypes:(id)arg1;
- (BOOL)_okButtonDisabled;
- (void)_setOkButtonDisabled:(BOOL)arg1;
- (BOOL)_showNewDocumentButton;
- (void)_setShowNewDocumentButton:(BOOL)arg1;
- (id)_securityScopedURL;
- (void)_setAccessoryViewDisclosed:(BOOL)arg1;
- (void)_didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)delegateValidateURLs:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_customActionChanged:(id)arg1;
- (void)delegateCustomActionInvoked:(id)arg1 forURLs:(id)arg2;
- (void)setSpi_customActions:(id)arg1;
- (void)_sendCustomActionsToOSP;
- (id)_serviceProxy;
- (void)delegateShouldCreateNewDocumentAtURL:(id)arg1;
- (void)delegateRequestNewDocumentNameWithReply:(CDUnknownBlockType)arg1;
- (void)_documentWindowFrameForPanelRunningAsASheetInService:(CDUnknownBlockType)arg1;
- (void)requestAppEnabledStateForItems:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;

@end

