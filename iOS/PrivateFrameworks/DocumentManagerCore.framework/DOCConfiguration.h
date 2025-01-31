//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerCore/NSCopying-Protocol.h>
#import <DocumentManagerCore/NSSecureCoding-Protocol.h>

@class DOCConcreteLocation, NSArray, NSString;

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldIgnoreInteractionMode;
    _Bool _inProcess;
    _Bool _forPickingDocuments;
    _Bool _forPickingFolders;
    _Bool _supportsRemovableFileProviders;
    _Bool _isContentManaged;
    _Bool _neverCreateBookmarkForOpenInPlace;
    _Bool _pickingItemsShouldBumpLastOpenDate;
    _Bool _suppressBlackCallout;
    _Bool _preferLastUsedDate;
    _Bool _shouldOpenInApp;
    _Bool _restoreLastVisitedLocation;
    _Bool _saveLastVisitedLocation;
    _Bool _collectionSupportsDragAndDrop;
    _Bool _skipDownload;
    _Bool _presentingMakesCollectionFirstResponder;
    _Bool _showCollectionControls;
    _Bool _supportsColumnView;
    _Bool _shouldAdjustContentInset;
    _Bool _useSharedQuickLook;
    _Bool _useExpandedSourceList;
    DOCConcreteLocation *_defaultLocation;
    unsigned long long _interactionMode;
    NSArray *_excludedDocumentTypes;
    NSArray *_recentDocumentsTypes;
    NSArray *_urls;
    NSString *_hostIdentifier;
    NSString *_hostBundleTitle;
    NSArray *_hiddenSourcesIdentifiers;
    unsigned long long _maximumNumberOfItemsToFetch;
    unsigned long long _maximumNumberOfRows;
    unsigned long long _browserViewContext;
    NSString *_roleIdentifier;
    NSString *_stateIdentifier;
    NSString *_sceneIdentifier;
    NSArray *_forbiddenActionIdentifiers;
    double _thumbnailFetchingTimeOut;
    NSArray *_documentTypes;
}

+ (_Bool)supportsSecureCoding;
+ (id)configurationForFolderPicking;
+ (id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1;
@property(copy, nonatomic) NSArray *documentTypes; // @synthesize documentTypes=_documentTypes;
@property double thumbnailFetchingTimeOut; // @synthesize thumbnailFetchingTimeOut=_thumbnailFetchingTimeOut;
@property(copy) NSArray *forbiddenActionIdentifiers; // @synthesize forbiddenActionIdentifiers=_forbiddenActionIdentifiers;
@property(copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(copy, nonatomic) NSString *stateIdentifier; // @synthesize stateIdentifier=_stateIdentifier;
@property(copy, nonatomic) NSString *roleIdentifier; // @synthesize roleIdentifier=_roleIdentifier;
@property unsigned long long browserViewContext; // @synthesize browserViewContext=_browserViewContext;
@property _Bool useExpandedSourceList; // @synthesize useExpandedSourceList=_useExpandedSourceList;
@property _Bool useSharedQuickLook; // @synthesize useSharedQuickLook=_useSharedQuickLook;
@property _Bool shouldAdjustContentInset; // @synthesize shouldAdjustContentInset=_shouldAdjustContentInset;
@property _Bool supportsColumnView; // @synthesize supportsColumnView=_supportsColumnView;
@property _Bool showCollectionControls; // @synthesize showCollectionControls=_showCollectionControls;
@property _Bool presentingMakesCollectionFirstResponder; // @synthesize presentingMakesCollectionFirstResponder=_presentingMakesCollectionFirstResponder;
@property _Bool skipDownload; // @synthesize skipDownload=_skipDownload;
@property unsigned long long maximumNumberOfRows; // @synthesize maximumNumberOfRows=_maximumNumberOfRows;
@property unsigned long long maximumNumberOfItemsToFetch; // @synthesize maximumNumberOfItemsToFetch=_maximumNumberOfItemsToFetch;
@property _Bool collectionSupportsDragAndDrop; // @synthesize collectionSupportsDragAndDrop=_collectionSupportsDragAndDrop;
@property _Bool saveLastVisitedLocation; // @synthesize saveLastVisitedLocation=_saveLastVisitedLocation;
@property _Bool restoreLastVisitedLocation; // @synthesize restoreLastVisitedLocation=_restoreLastVisitedLocation;
@property(copy, nonatomic) NSArray *hiddenSourcesIdentifiers; // @synthesize hiddenSourcesIdentifiers=_hiddenSourcesIdentifiers;
@property _Bool shouldOpenInApp; // @synthesize shouldOpenInApp=_shouldOpenInApp;
@property _Bool preferLastUsedDate; // @synthesize preferLastUsedDate=_preferLastUsedDate;
@property _Bool suppressBlackCallout; // @synthesize suppressBlackCallout=_suppressBlackCallout;
@property _Bool pickingItemsShouldBumpLastOpenDate; // @synthesize pickingItemsShouldBumpLastOpenDate=_pickingItemsShouldBumpLastOpenDate;
@property _Bool neverCreateBookmarkForOpenInPlace; // @synthesize neverCreateBookmarkForOpenInPlace=_neverCreateBookmarkForOpenInPlace;
@property(nonatomic) _Bool isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property _Bool supportsRemovableFileProviders; // @synthesize supportsRemovableFileProviders=_supportsRemovableFileProviders;
@property _Bool forPickingFolders; // @synthesize forPickingFolders=_forPickingFolders;
@property _Bool forPickingDocuments; // @synthesize forPickingDocuments=_forPickingDocuments;
@property(copy, nonatomic) NSString *hostBundleTitle; // @synthesize hostBundleTitle=_hostBundleTitle;
@property(copy, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(retain) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSArray *recentDocumentsTypes; // @synthesize recentDocumentsTypes=_recentDocumentsTypes;
@property(copy, nonatomic) NSArray *excludedDocumentTypes; // @synthesize excludedDocumentTypes=_excludedDocumentTypes;
@property _Bool inProcess; // @synthesize inProcess=_inProcess;
@property _Bool shouldIgnoreInteractionMode; // @synthesize shouldIgnoreInteractionMode=_shouldIgnoreInteractionMode;
@property unsigned long long interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain) DOCConcreteLocation *defaultLocation; // @synthesize defaultLocation=_defaultLocation;
- (void).cxx_destruct;
- (unsigned long long)interactionModeForPreparing;
@property(readonly) _Bool isPopoverOrWidget;
@property(readonly) _Bool isWidget;
@property(readonly) _Bool isPopover;
@property(readonly) _Bool isFilesApp;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

